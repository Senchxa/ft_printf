#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>

void 	ft_putchar_len(char c, int *length);
void	ft_putstr(char *args, int *length);

void	ft_putnbr(int n, int *length);
void	ft_pointer(size_t pointer, int *length);
void	ft_unsigned_int(unsigned int n, int *length);

int	ft_printf(const char *str, ...);
