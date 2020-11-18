#include <stdio.h>
#include <string.h>

char *ft_strdup(const char *s1)
{
	void *cpu;
	unsigned int n = strlen(s1) + 1;
	cpu = (char *)malloc(n * sizeof(s1));
	if (!cpu)
		return (NULL);
	strlcpy(cpu, s1, n);
	return (cpu);
	free(cpu);
}

int main() {
	char test[11] = "1234567890";
	printf("STD - %s\n", strdup(test));
	printf("MY - %s\n", ft_strdup(test));
	return 0;
}
