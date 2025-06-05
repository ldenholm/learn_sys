#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

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
	
	int open_one, open_two;
	char msg[] = "Flibbidy Biscuit";
	ssize_t written;

	// open file using open():
	open_one = open("/home/lochie/Git/learn_sys/cs631/fd_warmup/tmpFile.txt", O_RDWR);
	printf("open_one fd = %d", open_one);
	// issue a write here
	write(open_one, msg, strlen(msg));	


	open_two = open("/home/lochie/Git/learn_sys/cs631/fd_warmup/tmpFile.txt", O_RDWR);
	printf("open_two fd = %d", open_two);
	// second write here, without first closing:
	write(open_two, msg, strlen(msg));	

	// open file using fopen(), have not closed first open yet:
	//FILE* notes;
       	//notes = fopen("/home/lochie/Git/learn_sys/cs631/fd_warmup/tmpFile.txt", "r");
	return EXIT_SUCCESS;
}
