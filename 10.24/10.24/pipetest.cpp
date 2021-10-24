#include<stdio.h>
#include<unistd.h>
#include <fcntl.h>
void SetNonBlock(int fd)
{
	int flag = fcntl(fd, F_GETFL);
	fcntl(fd, F_SETFL, flag | O_NONBLOCK);
}
int main()
{
	//创建匿名管道和子进程实现进程间的管道通信
	int fd[2];
	int ret = pipe(fd);
	if (fd < 0)
	{
		perror("pipe");
		return 0;
	} 
	ret = fork();
	if (ret < 0)
	{
		perror("fork fail");
		return 0;
	}
	else if (ret == 0)
	{
		//child--write
		close(fd[0]);
		SetNonBlock(fd[1]);
	}
	else
	{
		//father-read
		close(fd[1]);
		SetNonBlock(fd[0]);
	}
 		return 0;

}