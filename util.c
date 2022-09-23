#include"kernel/types.h"
#include"kernel/stat.h"
#include"user/user.h"
int main(int argc, char* argv[])
{
	//int fd = open("/user/sleep.c", O_CREATE | O_RDONLY);
	
	int ticks=atoi(argv[2]);
	if (argc < 3) {
		fprintf(2, "Error:please pass a int\n");
		exit(1);
	}
	sleep(ticks);
	exit(0);
}