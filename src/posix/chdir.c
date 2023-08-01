#include <pl-unistd.h>

int chdir(const char* path){
	void* ptr[1] = { path };
	return pl_syscall(__NR_chdir, 1, ptr);
}
