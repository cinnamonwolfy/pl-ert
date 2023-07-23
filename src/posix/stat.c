#include <pl-unistd.h>

int stat(const char* path, struct stat* buf){
	void* ptr[2] = { path, buf };
	return pl_syscall(__NR_stat, 2, ptr);
}
