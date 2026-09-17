#include "ft_printf.h"
#include <limits.h>
#include <stdio.h>

static void	show_result(int original, int mine)
{
	if (original == mine)
		printf("Returns: printf=%d, ft_printf=%d [OK]\n\n",
			original, mine);
	else
		printf("Returns: printf=%d, ft_printf=%d [FAIL]\n\n",
			original, mine);
}

int	main(void)
{
	int	original;
	int	mine;
	int	number;

	number = 42;
	printf("--- c, s ve %% ---\n");
	printf("printf    : ");
	original = printf("[%c] [%s] [%%]\n", 'A', "Hello");
	fflush(stdout);
	printf("ft_printf : ");
	fflush(stdout);
	mine = ft_printf("[%c] [%s] [%%]\n", 'A', "Hello");
	show_result(original, mine);

	printf("--- d ve i sinir degerleri ---\n");
	printf("printf    : ");
	original = printf("[%d] [%i] [%d] [%i]\n",
			0, -42, INT_MAX, INT_MIN);
	fflush(stdout);
	printf("ft_printf : ");
	fflush(stdout);
	mine = ft_printf("[%d] [%i] [%d] [%i]\n",
			0, -42, INT_MAX, INT_MIN);
	show_result(original, mine);

	printf("--- u, x ve X ---\n");
	printf("printf    : ");
	original = printf("[%u] [%u] [%x] [%X]\n",
			0U, UINT_MAX, UINT_MAX, UINT_MAX);
	fflush(stdout);
	printf("ft_printf : ");
	fflush(stdout);
	mine = ft_printf("[%u] [%u] [%x] [%X]\n",
			0U, UINT_MAX, UINT_MAX, UINT_MAX);
	show_result(original, mine);

	printf("--- pointer ---\n");
	printf("printf    : ");
	original = printf("[%p] [%p]\n", (void *)&number, (void *)0);
	fflush(stdout);
	printf("ft_printf : ");
	fflush(stdout);
	mine = ft_printf("[%p] [%p]\n", (void *)&number, (void *)0);
	show_result(original, mine);

	printf("--- bos ve NULL string ---\n");
	mine = ft_printf("empty=[%s], null=[%s]\n", "", (char *)0);
	printf("ft_printf return: %d\n", mine);
	return (0);
}