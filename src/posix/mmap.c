#include <pl-unistd.h>

void* mmap(void* addr, unsigned long length, int prot, int flags, int fd, long offset){
	void* ptr[6] = { addr, (void*)length, (void*)prot, (void*)flags, (void*)fd, (void*)offset };
	return (void*)pl_syscall(__NR_mmap, 6, ptr);
}
