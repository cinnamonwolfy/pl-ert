#include <pl-unistd.h>

int read(int fd, void* buffer, unsigned long length){
	void* ptr[3] = { (void*)fd, buffer, (void*)length };
	return pl_syscall(__NR_read, 3, ptr);
}
