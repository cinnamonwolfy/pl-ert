#include <pl-unistd.h>

char* getcwd(char* buffer, unsigned long size){
	void* ptr[2] = { buffer, (void*)size };
	return (void*)pl_syscall(__NR_getcwd, 2, ptr);
}
