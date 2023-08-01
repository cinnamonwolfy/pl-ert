#include <pl-unistd.h>

int chmod(const char* path, int mode){
	void* ptr[2] = { path, (void*)mode };
	return pl_syscall(__NR_chmod, 2, ptr);
}

