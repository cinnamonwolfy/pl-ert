#include <pl-unistd.h>

int write(int fd, void* data, int len){
	void* ptr[3] = { (int*)fd, data, (int*)len };
	return pl_syscall(__NR_write, 3, ptr);
}
