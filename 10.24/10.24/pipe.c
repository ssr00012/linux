#include<stdio.h>
#include<fcntl.h>
#include <unistd.h>
int main()
{   //�����ܵ� ��ȡ��д���ļ�������
	int fd[2];
	int ret = pipe(fd);
	if (ret < 0)
	{
		perror("fail");
		return 0;
	}
	int flag = fcntl(fd[0], F_GETFL);
	printf("read fd[0]:flag:%d/n", flag);
	fcntl��fd[0], F_SETFL, flag | O_NONBLOCK��;

	int flag = fcntl(fd[1], F_GETFL);
	printf("read fd[1]:flag:%d\n", flag);
	fcntl��fd[1], F_SETFL, flag | O_NONBLOCK��;
	//����д�������÷��������� 

	return 0;

}