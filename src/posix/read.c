#include <pl-unistd.h>

int read(int fd, void* buffer, unsigned int length){
	void* ptr[3] = { (int*)fd, buffer, (unsigned int*)length };
	return pl_syscall(__NR_read, 3, ptr);
}
