#include <pl-unistd.h>

void _start(){
	int fd = open("test.txt", O_CREAT | O_RDWR, S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH);
	char stuff[255];
	int endStr = 0;

	if(fd < 0){
		write(1, "Error! I couwdn't open file ono\n", 32);
		exit(1);
	}

	write(1, "Pwease enter a stwing uwu: ", 27);
	endStr = read(0, stuff, 255);

	write(fd, "Hewwo wowwd from no libc :3\n", 28);
	write(fd, stuff, endStr);
	close(fd);
	exit(0);
}
