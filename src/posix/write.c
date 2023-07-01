#include <pl-unistd.h>

int write(int fd, void* data, unsigned int length){
	void* ptr[3] = { (int*)fd, data, (unsigned int*)length };
	return pl_syscall(__NR_write, 3, ptr);
}
