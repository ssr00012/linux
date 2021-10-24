#include<stdio.h>
#include<fcntl.h>
#include <unistd.h>
int main()
{   //创建管道 获取读写段文件描述符
	int fd[2];
	int ret = pipe(fd);
	if (ret < 0)
	{
		perror("fail");
		return 0;
	}
	int flag = fcntl(fd[0], F_GETFL);
	printf("read fd[0]:flag:%d/n", flag);
	fcntl（fd[0], F_SETFL, flag | O_NONBLOCK）;

	int flag = fcntl(fd[1], F_GETFL);
	printf("read fd[1]:flag:%d\n", flag);
	fcntl（fd[1], F_SETFL, flag | O_NONBLOCK）;
	//给读写两端设置非阻塞属性 

	return 0;

}