#include <stdio.h>
void ft_is_negative(int n);

int main(void)
{
    ft_is_negative(42);
    printf("\n\e[1;33mESPERADO\e[0m:\nP\n\n\e[1;33mOUTPUT\e[0m:\n");

	ft_is_negative(0);
    printf("\n\e[1;33mESPERADO\e[0m:\nP\n\n\e[1;33mOUTPUT\e[0m:\n");

	ft_is_negative(-42);
    printf("\n\e[1;33mESPERADO\e[0m:\nN");

	return (0);
}
