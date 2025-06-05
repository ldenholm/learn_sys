#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int main(int argc, char** argv) {
	//char* path = argv[1];
	//printf("provided path: %s \n", path);
	printf("STDIN_FILENO = %d \nSTDOUT_FILENO = %d \nSTDERR_FILENO = %d \n",
			STDIN_FILENO,
			STDOUT_FILENO,
			STDERR_FILENO);

	int fd = (fileno(stdin));
	int fdout = (fileno(stdout));
	int fderr = (fileno(stderr));
	printf("stdin fd = %d \n", fd);
	printf("stdout fd = %d \n", fdout);
	printf("stderr fd = %d \n", fderr);
	return EXIT_SUCCESS;
}
