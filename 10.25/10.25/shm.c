#include<stdio.h>
#include<unistd.h>
#include<sys/shm.h>
#defien key 0x89898989
int main()
{   //创建共享内存
	int shimd = shmget(key,1024,IPC_CREAT|0664);
	if (shmid < 0)
	{
		perror("shmget");
		return 0;
	}
	return 0;
}