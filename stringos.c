#include "ft_printf.h"

void ft_putchar_len(char c, int *length)
{
        write(1, &c, 1);
        (*length)++;
}

void    ft_string(char *args, int *length)
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

