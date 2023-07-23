#include <pl-unistd.h>

int close(int fd){
	void* ptr[1] = { (void*)fd };
	return pl_syscall(__NR_close, 1, ptr);

}
