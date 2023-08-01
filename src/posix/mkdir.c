#include <pl-unistd.h>

int mkdir(const char* path, int mode){
	void* ptr[2] = { path, (void*)mode };
	return pl_syscall(__NR_mkdir, 2, ptr);
}

