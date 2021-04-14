#include <stdio.h>

void ft_putstr(char *str);

int main(void)
{
    const char *str1 = "String de Teste";

    ft_putstr((char *)str1);
    printf("\n\e[1;33mESPERADO\e[0m:\n%s\n",str1);
    
    return 0;
}
