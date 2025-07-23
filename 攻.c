#include <stdio.h>
#include <stdlib.h>
int main()
{
	printf("警告！本软件需要管理员权限!\n");  // 免责说明
	printf("警告！运行软件时关闭杀毒软件!\n");
	printf("输入一:");
	int a;
	int b;
	while (1)
	{
		scanf("%d", &a);
		if (a == 1)
		{
			system("taskkill /pid StudentMain.exe /f");  // 关闭进程
			printf("如果系统说没'StudentMain.exe'进程，就不用这款软件，退出即可！\n");
			printf("攻破成功,打开软件目录'geek.exe'删除进程\n");
			printf("GitHub版没有geek.exe请自行下载，官网地址：https://geekuninstaller.com\n");
			printf("你要打开吗？输入1打开或输入2关闭：");
			scanf("%d",&b);
			if (b == 1)
			{
				printf("正在打开...\n");
				system("start https://geekuninstaller.com");
				printf("如果没有打开，说明你的电脑没有浏览器！\n");

			}
			else
			{
				printf("正在退出...\n");
				break;
			}
			break;
			
		}
		else
		{
			printf("输入错误,请重新运行！\n");
			break;
		}
	}
	system("pause");
	return 0;
}
