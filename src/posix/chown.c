#include <pl-unistd.h>

int chown(const char* path, int uid, int gid){
	void* ptr[3] = { path, (void*)uid, (void*)gid };
	return pl_syscall(__NR_chown, 3, ptr);
}

