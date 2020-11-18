#include <stdio.h>


void ft_putendl_fd(char *s, int fd)
{
	if (s != 0)
		write(fd, s, ft_strlen(s));
}

int main() {
	printf("Hello, World!\n");
	return 0;
}
