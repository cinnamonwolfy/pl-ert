#include <pl-unistd.h>

int munmap(void* addr, unsigned long length){
	void* ptr[2] = { addr, (void*)length };
	return pl_syscall(__NR_mmap, 2, ptr);
}
