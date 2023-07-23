#include <pl-unistd.h>

long fork(void){
	return pl_syscall(__NR_fork, 0, (void*)0);
}

