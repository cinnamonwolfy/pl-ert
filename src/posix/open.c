#include <pl-unistd.h>

long open(const char* pathname, int flags, int mode){
	void* ptr[3] = { pathname, (void*)flags, (void*)mode };
	return pl_syscall(__NR_open, 3, ptr);

}
