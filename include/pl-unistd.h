#ifdef IS64BIT
	#include "scnum64.h"
#else
	#include "scnum32.h"
#endif

/* List of open() flags */
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

/* List of file operation modes (Used by all file I/O functions)*/
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

/* List of lseek() operations */
#define SEEK_SET 0
#define SEEK_CUR 1
#define SEEK_END 2

/* Time Struct */
struct timespec {
	long long tv_sec;
	long long tv_nsec;
};

/* Stat Struct */
struct stat {
	int st_dev;
	int st_ino;
	int st_mode;
	unsigned int st_nlink;
	unsigned int st_uid;
	unsigned int st_gid;
	int st_rdev;
	unsigned long st_size;
	unsigned long st_blksize;
	unsigned long st_blocks;
	struct timespec st_atim;
	struct timespec st_mtim;
	struct timespec st_ctim;

	#define st_atime st_atim.tv_sec
	#define st_mtime st_mtim.tv_sec
	#define st_ctime st_ctim.tv_sec
};

extern long pl_syscall(int syscall, int paramNum, void* params);

int open(const char* pathname, int flags, int mode);
int close(int fd);
long read(int fd, void* buffer, unsigned long length);
long write(int fd, void* data, unsigned long length);
void exit(int code);
void* mmap(void* addr, unsigned long length, int prot, int flags, int fd, long offset);
int munmap(void* addr, unsigned long length);
long lseek(int fd, long offset, int whence);
int link(const char* path1, const char* path2);
int symlink(const char* path1, const char* path2);
int unlink(const char* path);
int stat(const char* path, struct stat* buf);
int mkdir(const char* path, int mode);
int chown(const char* path, int uid, int gid);
int chmod(const char* path, int mode);
int chdir(const char* path);
char* getcwd(char* buffer, unsigned long size);
long vfork(void);
long fork(void);
