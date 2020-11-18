#include <stdio.h>
#include <unistd.h>

void ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

void ft_putnbr_fd(int n, int fd)
{
	unsigned num;
	num = (unsigned) n;
	if (n < 0)
		ft_putchar_fd('-', fd);
	if (num >= 10)
	{
		ft_putnbr_fd(num / 10, fd);
		ft_putnbr_fd(num % 10, fd);
	} else
	{
		ft_putchar_fd((num + '0'), fd);
	}
}


int main() {
	ft_putnbr_fd(123,1);
	return 0;
}
