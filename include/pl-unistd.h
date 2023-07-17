#ifdef IS64BIT
	#include "scnum64.h"
#else
	#include "scnum32.h"
#endif

/* List of open() modes and flags */
#define O_APPEND 1024
#define O_ASYNC 8192
#define O_CLOEXEC 524288
#define O_CREAT 64
#define O_DIRECT 16384
#define O_DIRECTORY 65536
#define O_DSYNC 4096
#define O_EXCL 128
#define O_LARGEFILE 0
#define O_NOATIME 262144
#define O_NOCTTY 256
#define O_NOFOLLOW 131072
#define O_NONBLOCK 2048
#define O_NDELAY 2048
#define O_PATH 2097152
#define O_SYNC 1052672
#define O_TMPFILE 4259840
#define O_TRUNC 512
#define O_RDONLY 0
#define O_WRONLY 1
#define O_RDWR 2
#define S_IRWXU 448
#define S_IRUSR 256
#define S_IWUSR 128
#define S_IXUSR 64
#define S_IRWXG 56
#define S_IRGRP 32
#define S_IWGRP 16
#define S_IXGRP 8
#define S_IRWXO 7
#define S_IROTH 4
#define S_IWOTH 2
#define S_IXOTH 1
#define S_ISUID 2048
#define S_ISGID 1024
#define S_ISVTX 512

/* List of mmap() flags and modes */
#define PROT_EXEC 4
#define PROT_READ 1
#define PROT_WRITE 2
#define PROT_NONE 0
#define MAP_SHARED 1
#define MAP_SHARED_VALIDATE 3
#define MAP_PRIVATE 2
#define MAP_32BIT 64
#define MAP_ANON 32
#define MAP_ANONYMOUS 32
#define MAP_DENYWRITE 2048
#define MAP_EXECUTABLE 4096
#define MAP_FILE 0
#define MAP_FIXED 16
#define MAP_FIXED_NOREPLACE 1048576
#define MAP_GROWSDOWN 256
#define MAP_HUGETLB 262144
#define MAP_LOCKED 8192
#define MAP_NONBLOCK 65536
#define MAP_NORESERVE 16384
#define MAP_POPULATE 32768
#define MAP_STACK 131072
#define MAP_SYNC 524288

extern long pl_syscall(int syscall, int paramNum, void* params);

int open(const char* pathname, int flags, int mode);
int close(int fd);
int read(int fd, void* buffer, unsigned int length);
int write(int fd, void* data, unsigned int length);
void exit(int code);
void* mmap(void* addr, unsigned long length, int prot, int flags, int fd, long offset){
int munmap(void* addr, unsigned long length);
