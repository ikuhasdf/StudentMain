#include <stdio.h>
#include <stdlib.h>
int main()
{
	printf("警告！本软件需要管理员权限!\n");
	printf("警告！运行软件时关闭杀毒软件!\n");
	printf("输入一:");
	int a;
	while (true)
	{
		scanf("%d", &a);
		if (a == 1)
		{
			system("taskkill /pid StudentMain.exe /f");
			printf("如果系统说没'StudentMain.exe'进程，就不用这款软件，退出即可！\n");
			printf("攻破成功,打开软件目录'geek.exe'删除进程\n");
			printf("自动打开...");
			system("geek.exe");
			break;
			
		}
		else
		{
			printf("输入错误,请重新运行！\n");
			break;
		}
	}
	return 0;
	system("pause");
}