#include <pl-unistd.h>

long vfork(void){
	return pl_syscall(__NR_vfork, 0, (void*)0);
}
