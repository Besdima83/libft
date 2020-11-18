#include <stdio.h>
#include <unistd.h>

void ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

void ft_putstr_fd(char *s, int fd)
{
	int i;
	i = 0;
	if (s == 0)
		return;
	while (s[i] != '\0')
	{
		write(fd, &s[i], 1);
		i++;
	}
}


int main() {
	ft_putstr_fd("safga", 1);
	printf("Hello, World!\n");
	return 0;
}
