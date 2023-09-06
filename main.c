#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<Windows.h>
#include"tool.h"

int count=0;
int main()
{
	
	system("color F3");
	node* head = (node*)malloc(sizeof(node));//创建头结点 
	head->next = NULL;
	load_data(head);//读取文件
	int u=4;
	printf("载入数据中，请稍等");
	while(u>=0)
	{
		Sleep(500);
		printf("---------");
		u--;	
	}
	printf("加载完毕\n");
	
	menu();
	while (1)
	{
		work(head);
	}
	
	return 0;
}
