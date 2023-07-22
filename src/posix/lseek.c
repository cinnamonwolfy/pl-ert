#include <pl-unistd.h>

long lseek(int fd, long offset, int whence){
	void* ptr[3] = { (void*)fd, (void*)offset, (void*)whence };
	return pl_syscall(__NR_lseek, 3, ptr);
}
