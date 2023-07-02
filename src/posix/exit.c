#include <pl-unistd.h>

void exit(int code){
	void* ptr[1] = { (void*)code };
	pl_syscall(__NR_exit, 1, ptr);
}
