#include"tool.h"
void change_id(node* head, int id)
{
	int x=0;
	node* a = head->next;
	while (a)
	{
		if (a->ID == id)
		{
			x = 1;
			break;
		}
		
		a = a->next;
		
	}
	if (x == 0)
	{
		printf("查无此人");
		system("pause");
		return;
	} 
	
	printf("请输入修改后的姓名：");
	scanf("%s", a->name);
	printf("请输入修改后的学号:\n");
	int c=scanf("%d", &a->ID);
	while (1)
	{
		fflush(stdin);
		int n = a->ID;
		int cout = 0;
		while (n != 0)
		{
			n /= 10;
			cout++;
		}
		if(c==1)
		{
			if (cout == 10)
				break;
			else{
				printf("请输入正确位数学号!\n");
				c=scanf("%d",&a->ID);
				
			}
		}
		else{
			printf("请输入数字类型的学号!");
			c=scanf("%d", &a->ID);
			
		}
	} 
	printf("\n请输入身份证号:");
	scanf("%s",a->id_status);
	while(1)
	{
		if(strlen(a->id_status)==18)
		{
			break;
		}
		else
		{
			printf("请输入正确的身份证号!\n");
			scanf("%s", a->id_status);
			
		}
	}
	printf("\n请输入民族:");
	scanf("%s",a->nation);
	printf("\n请输入性别:");
	scanf("%s",a->sex);
	char boy[10]="男";
	char girl[10]="女";		 
	while (1)
	{
		if(strcmp(a->sex,boy)==0||strcmp(a->sex,girl)==0)
			break;
		else
		{			
			printf("\n请输入正确性别：");
			scanf("%s", a->sex);
		}
	} 
	printf("\n请输入家庭住址:");
	scanf("%s",a->address);
	int h;
	printf("\n请输入语文成绩:");
	h=scanf("%d", &a->chin_grade);
	while(1)
	{
		fflush(stdin);
		if(h==1)
		{
			if(a->chin_grade>=0&&a->chin_grade<=100)
			{
				break;
			}
			printf("\n请输入0-100的分数!\n");
			h=scanf("%d", &a->chin_grade);
		}
		else{
			printf("\n请输入数字类型!");
			h=scanf("%d", &a->chin_grade);
		}
		
	}	
	h=0;
	printf("\n请输入数学成绩:");
	h=scanf("%d", &a->math_grade);
	while(1)
	{
		fflush(stdin);
		if(h==1)
		{
			if(a->math_grade>=0&&a->math_grade<=100)
			{
				break;
			}
			
			printf("\n请输入0-100的分数!");
			h=scanf("%d", &a->math_grade);
		}
		else{
			printf("\n请输入数字类型!");
			h=scanf("%d",&a->math_grade);
		}
	}
	h=0;
	printf("\n请输入英语成绩:");
	h=scanf("%d", &a->english_grade);
	while(1)
	{	
		fflush(stdin);
		if(h==1){
			
			if(a->english_grade>=0&&a->english_grade<=100)
			{
				break;
			}
			printf("\n请输入0-100的分数!\n");
			h=scanf("%d", &a->english_grade);
		}
		else{
			printf("\n请输入数字类型!");
			h=scanf("%d", &a->english_grade);
		}
	}
	h=0;
	printf("\n请输入c语言成绩:");
	h=scanf("%d", &a->c_grade);
	while(1)
	{
		fflush(stdin);
		if(h==1)
		{
			
			
			if(a->c_grade>=0&&a->c_grade<=100)
			{
				break;
			}
			printf("\n请输入0-100的分数!\n");
			h=scanf("%d", &a->c_grade);
		}
		else{
			printf("\n请输入数字类型!");
			h=scanf("%d",&a->c_grade);
		}
		
	}	
	h=0;
	printf("\n请输入体育成绩:");
	h=scanf("%d", &a->pe_grade);
	while(1)
	{
		fflush(stdin);
		if(h==1)
		{
			if(a->pe_grade>=0&&a->pe_grade<=100)
			{
				break;
			}
			printf("\n请输入0-100的分数!\n");
			h=scanf("%d", &a->pe_grade);
		}
		else
		{
			printf("\n请输入数字类型!");
			h=scanf("%d",&a->pe_grade);
		}
	}
	h=0;
	printf("\n请输入年龄:");
	h=scanf("%d", &a->age);
	while(1)
	{
		fflush(stdin);
		if(h==1)
		{
			
			
			if(a->age>=0)
			{
				break;
			}
			printf("\n请输入正数!\n");
			h=scanf("%d", &a->age);
		}
		else{
			printf("\n请输入数字类型!");
			h=scanf("%d",&a->age);
		}
		
	}		
	a->total_sore=a->chin_grade+a->math_grade+a->english_grade+a->c_grade+a->pe_grade;
	printf("\n修改成功!\n");
	system("pause");
}
void change_name(node* head, char* name)
{
	int x = 0,id;
	node* a = head->next;
	while (a)
	{
		if (strcmp(a->name, name) == 0)
		{
			x++;
		}
		a = a->next;
	}
	a=head->next;
	if(x==1)
	{
		while(a)
		{
		if (strcmp(a->name, name) == 0)
		{
			break;
		}
		a = a->next;
		}
		
	}
	if (x == 0)
	{
		printf("\n查无此人");
		system("pause");
		return;
	}
	
	if(x>1)
	{
		printf("检测到该姓名的学生存在%d位,请输入你要修改学生的具体学号",x);
		scanf("%d",&id);
		while(a)
		{
			if(a->ID==id)
			{
				break;
			}
			a=a->next;
		}
		
	}
	
	printf("请输入修改后的姓名：");
	scanf("%s", a->name);
	printf("请输入修改后的学号:\n");
	int c=scanf("%d", &a->ID);
	while (1)
	{
		fflush(stdin);
		int n = a->ID;
		int cout = 0;
		while (n != 0)
		{
			n /= 10;
			cout++;
		}
		if(c==1)
		{
			if (cout == 10)
				break;
			else{
				printf("请输入正确位数学号!\n");
				c=scanf("%d",&a->ID);
				
			}
		}
		else{
			printf("请输入数字类型的学号!");
			c=scanf("%d", &a->ID);
			
		}
	} 
	printf("\n请输入身份证号:");
	scanf("%s",a->id_status);
	while(1)
	{
		if(strlen(a->id_status)==18)
		{
			break;
		}
		else
		{
			printf("请输入正确的身份证号!\n");
			scanf("%s", a->id_status);
			
		}
	}
	printf("\n请输入民族:");
	scanf("%s",a->nation);
	printf("\n请输入性别:");
	scanf("%s",a->sex);
	char boy[10]="男";
	char girl[10]="女";		 
	while (1)
	{
		if(strcmp(a->sex,boy)==0||strcmp(a->sex,girl)==0)
			break;
		else
		{			
			printf("\n请输入正确性别：");
			scanf("%s", a->sex);
		}
	} 
	printf("\n请输入家庭住址:");
	scanf("%s",a->address);
	int h;
	printf("\n请输入语文成绩:");
	h=scanf("%d", &a->chin_grade);
	while(1)
	{
		fflush(stdin);
		if(h==1)
		{
			if(a->chin_grade>=0&&a->chin_grade<=100)
			{
				break;
			}
			printf("\n请输入0-100的分数!\n");
			h=scanf("%d", &a->chin_grade);
		}
		else{
			printf("\n请输入数字类型!");
			h=scanf("%d", &a->chin_grade);
		}
		
	}	
	h=0;
	printf("\n请输入数学成绩:");
	h=scanf("%d", &a->math_grade);
	while(1)
	{
		fflush(stdin);
		if(h==1)
		{
			if(a->math_grade>=0&&a->math_grade<=100)
			{
				break;
			}
			
			printf("\n请输入0-100的分数!");
			h=scanf("%d", &a->math_grade);
		}
		else{
			printf("\n请输入数字类型!");
			h=scanf("%d",&a->math_grade);
		}
	}
	h=0;
	printf("\n请输入英语成绩:");
	h=scanf("%d", &a->english_grade);
	while(1)
	{	
		fflush(stdin);
		if(h==1){
			
			if(a->english_grade>=0&&a->english_grade<=100)
			{
				break;
			}
			printf("\n请输入0-100的分数!\n");
			h=scanf("%d", &a->english_grade);
		}
		else{
			printf("\n请输入数字类型!");
			h=scanf("%d", &a->english_grade);
		}
	}
	h=0;
	printf("\n请输入c语言成绩:");
	h=scanf("%d", &a->c_grade);
	while(1)
	{
		fflush(stdin);
		if(h==1)
		{
			
			
			if(a->c_grade>=0&&a->c_grade<=100)
			{
				break;
			}
			printf("\n请输入0-100的分数!\n");
			h=scanf("%d", &a->c_grade);
		}
		else{
			printf("\n请输入数字类型!");
			h=scanf("%d",&a->c_grade);
		}
		
	}	
	h=0;
	printf("\n请输入体育成绩:");
	h=scanf("%d", &a->pe_grade);
	while(1)
	{
		fflush(stdin);
		if(h==1)
		{
			if(a->pe_grade>=0&&a->pe_grade<=100)
			{
				break;
			}
			printf("\n请输入0-100的分数!\n");
			h=scanf("%d", &a->pe_grade);
		}
		else
		{
			printf("\n请输入数字类型!");
			h=scanf("%d",&a->pe_grade);
		}
	}
	h=0;
	printf("\n请输入年龄:");
	h=scanf("%d", &a->age);
	while(1)
	{
		fflush(stdin);
		if(h==1)
		{
			
			
			if(a->age>=0)
			{
				break;
			}
			printf("\n请输入正数!\n");
			h=scanf("%d", &a->age);
		}
		else{
			printf("\n请输入数字类型!");
			h=scanf("%d",&a->age);
		}
		
	}		
	a->total_sore=a->chin_grade+a->math_grade+a->english_grade+a->c_grade+a->pe_grade;
	printf("\n修改成功!\n");
	system("pause");
}
void del_id(node* head, int num)
{
	node* a = head;
	node* b = head->next;
	while (b)
	{
		if (b->ID == num)
		{
			a->next = b->next;
			free(b);
			printf("删除成功!\n");
			count--;
			return;
		}
		a = a->next;
		b = b->next;
	}
	printf("该学号不存在！");
}
void del_name(node* head, char* name)
{
	node* a = head;
	node* b = head->next;
	int sum=0;//计数器
	while (b)
	{
		if (strcmp(b->name, name) == 0)
		{
			sum++;
		}
		b=b->next;
	}
	b=head->next;
	if(sum==1)
	{
		while (b)
		{
			if (strcmp(b->name, name) == 0)
			{
				a->next = b->next;
				free(b);
				count--;
				printf("\n删除成功!");
				return;
			}
			a = a->next;
			b = b->next;
		}
	}
	if(sum==0)
	{
		printf("\n该姓名不存在！");
	}
	if(sum>1)
	{
		printf("检测到该姓名的学生存在%d位,请输入你要删除学生的具体学号",sum);
		int id;
		scanf("%d",&id);
		while (b)
		{
			if (b->ID==id)
			{
				a->next = b->next;
				free(b);
				count--;
				printf("\n删除成功!");
				return;
			}
			a = a->next;
			b = b->next;
		}
	}
}
