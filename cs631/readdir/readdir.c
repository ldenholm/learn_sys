#include <stdio.h>
#include <dirent.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>

int main(int argc, char** argv) {
	//placate the compiler
	(void)argc;
	(void)argv;
	struct dirent* dent;
	DIR* dp;
	char* path;
	char buff[128];
	char* bp;

	bp = buff;

	path = getcwd(bp, sizeof(buff));
	printf("cwd = %s\n", path);
	dp = opendir(path);
	dent = readdir(dp);
	printf("entry = %s\n", dent->d_name);


	return EXIT_SUCCESS;
}
