#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

int	main(void)
{
	int		fd1, fd2;
	char	*prt;
	int		i = 0;
	fd1 = open("test/test1.txt", O_RDONLY);
	fd2 = open("test/test2.txt", O_RDONLY);
	printf("fd1 = %d\n", fd1);
	printf("fd1 = %d\n", fd2);
	while (i < 42)
	{
		prt = get_next_line(fd1);
		printf("%s", prt);
		free(prt);
		prt = get_next_line(fd2);
		printf("%s", prt);
		free(prt);
		i++;
	}
	close(fd1);
}