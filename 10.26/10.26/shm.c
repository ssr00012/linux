#include<stdio.h>
#include<sys/shm.h>
#include<unistd.h>
#define KEY 0x77777777
int main()
{
	int shmid = shmget(KEY, 1024, IPC_CREAT | 0664);
	if (shmid < 0)
	{
		perror("shmget");
		return 0;
	}
//���ӵ���ǰ�Ľ���
	void *addr = shmat(shimd, NULL, 0);
	if (add == NULL)
	{
		perror("shmat");
		return 0;
	}
	//������ǰ�ĵ�ַ
	pritnf("%s\n", (char*)addr);
	char*lp = "adcdef";
	printf("%s\n", lp);
	return 0; 
}