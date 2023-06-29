#ifdef IS64BIT
	#include "scnum64.h"
#else
	#include "scnum32.h"
#endif

extern int pl_syscall(int syscall, int paramNum, void* params);

int write(int fd, void* data, int len);
void exit(int code);
