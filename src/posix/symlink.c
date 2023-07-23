#include <pl-unistd.h>

int symlink(const char* path1, const char* path2){
	void* ptr[2] = { path1, path2 };
	return pl_syscall(__NR_symlink, 2, ptr);
}
