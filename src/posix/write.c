#include <pl-unistd.h>

int write(int fd, void* data, unsigned long length){
	void* ptr[3] = { (void*)fd, data, (void*)length };
	return pl_syscall(__NR_write, 3, ptr);
}
