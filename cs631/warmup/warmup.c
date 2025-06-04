#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <pwd.h>
#include <errno.h>

int main(int argc, char **argv) {
	const char* name = "";
	struct passwd* p;
	if (argc > 1) {
		name = argv[1];
	}
	// handle err
	if ((p = getpwnam(name)) == NULL) {
		perror(name);
		return EXIT_FAILURE;
	}
	printf("Welcome to CS631 Advanced Programming in the UNIX Environment, %s!\n", (char*)p->pw_name);
	return EXIT_SUCCESS;
}
