#include "ft_printf.h"

void    ft_putstr(char *args, int *length)
{
        size_t  i;

        i = 0;
        if (!args)
        {
                write (1, "(null)", 6);
                (*length) += 6;
                return ;
        }
        while (args[i] != '\0')
        {
                ft_putchar_len(args[i], length);
                i++;
        }

}

