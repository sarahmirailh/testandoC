#include <stdio.h>

void	ft_ultimate_ft(int *********nbr);

int main(void)
{
    printf("\e[1;34mExercício 01: \e[0m");

	int out = 77;
	int *of8 = &out;
	int **of7 = &of8;
	int ***of6 = &of7;
	int ****of5 = &of6;
	int *****of4 = &of5;
	int ******of3 = &of4;
	int *******of2 = &of3;
	int ********of1 = &of2;
	int *********of = &of1;
	ft_ultimate_ft(of);

	if (out == 42)
	{
		printf("\e[1;32mOK\e[0m");
	}
	else
	{
		printf("\e[1;31mKO, out=%i. Expected out=42\e[0m", out);
	}
    return 0;
}
