#include <stdio.h>

int main (int argc, char **argv)
{
	int	count = 1;

	while(count < argc)
	{
		printf("%s\n",argv[count]);
		count++;
	}
	return (0);
}
