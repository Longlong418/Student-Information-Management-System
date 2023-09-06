#include"tool.h"
void seek_grade(node* head, char* grade)
{
	
	if(head->next==NULL)
	{
		printf("当前无学生");
		return ;
	} 
	char chinese[6]="语文";
	char math[6]="数学";
	char english[6]="英语";
	char c[6]="c语言";
	char c2[6]="C语言";
	char pe[6]="体育";
	if(strcmp(grade,chinese)!=0&&strcmp(grade,math)!=0&&strcmp(grade,english)!=0&&strcmp(grade,c)!=0&&strcmp(grade,c2)!=0&&strcmp(grade,pe)!=0)
	{
		printf("请输入正确的学科！"); 
		return;
	}
	int max = 0;//条件判断变量 
	node* x = head->next;//搜索指针
	if(strcmp(grade,chinese)==0)//语文 
	{
		while(x)
		{
			if(x->chin_grade>max)
			{
				max=x->chin_grade;
			}
			x=x->next;
		}
		printf("____________________________________________________________________________________________________________________\n");
		printf("|   学号   | 姓名 |     身份证号     |性别| 民族 |   家庭住址   |语文成绩|数学成绩|英语成绩|c语言成绩|体育成绩|年龄|\n");
		x=head->next;
		while(x)
		{
			if(x->chin_grade==max)
			{
				printf("____________________________________________________________________________________________________________________\n");
				printf("%10d|%6s|%18s|%4s|%6s|%14s|%8d|%8d|%8d|%8d|%8d|%4d|\n",x->ID,x->name,x->id_status,x->sex,x->nation,\
					x->address,x->chin_grade,x->math_grade,x->english_grade,x->c_grade,x->pe_grade,x->age);	
			}
			x=x->next;
		} 
	}	
	if(strcmp(grade,math)==0)//数学 
	{
		while(x)
		{
			if(x->math_grade>max)
			{
				max=x->math_grade;
			}
			x=x->next;
		}
		printf("____________________________________________________________________________________________________________________\n");
		printf("|   学号   | 姓名 |     身份证号     |性别| 民族 |   家庭住址   |语文成绩|数学成绩|英语成绩|c语言成绩|体育成绩|年龄|\n");
		x=head->next;
		while(x)
		{
			if(x->math_grade==max)
			{
				printf("____________________________________________________________________________________________________________________\n");
				printf("%10d|%6s|%18s|%4s|%6s|%14s|%8d|%8d|%8d|%8d|%8d|%4d|\n",x->ID,x->name,x->id_status,x->sex,x->nation,\
					x->address,x->chin_grade,x->math_grade,x->english_grade,x->c_grade,x->pe_grade,x->age);	
			}
			x=x->next;
		} 
	}
	if(strcmp(grade,english)==0)//英语 
	{
		while(x)
		{
			if(x->english_grade>max)
			{
				max=x->english_grade;
			}
			x=x->next;
		}
		printf("____________________________________________________________________________________________________________________\n");
		printf("|   学号   | 姓名 |     身份证号     |性别| 民族 |   家庭住址   |语文成绩|数学成绩|英语成绩|c语言成绩|体育成绩|年龄|\n");
		x=head->next;
		while(x)
		{
			if(x->math_grade==max)
			{
				printf("____________________________________________________________________________________________________________________\n");
				printf("%10d|%6s|%18s|%4s|%6s|%14s|%8d|%8d|%8d|%8d|%8d|%4d|\n",x->ID,x->name,x->id_status,x->sex,x->nation,\
					x->address,x->chin_grade,x->math_grade,x->english_grade,x->c_grade,x->pe_grade,x->age);	
			}
			x=x->next;
		} 
	}
	if(strcmp(grade,c)==0||strcmp(grade,c2)==0)//c语言 
	{
		while(x)
		{
			if(x->c_grade>max)
			{
				max=x->c_grade;
			}
			x=x->next;
		}
		printf("____________________________________________________________________________________________________________________\n");
		printf("|   学号   | 姓名 |     身份证号     |性别| 民族 |   家庭住址   |语文成绩|数学成绩|英语成绩|c语言成绩|体育成绩|年龄|\n");
		x=head->next;
		while(x)
		{
			if(x->c_grade==max)
			{
				printf("____________________________________________________________________________________________________________________\n");
				printf("%10d|%6s|%18s|%4s|%6s|%14s|%8d|%8d|%8d|%8d|%8d|%4d|\n",x->ID,x->name,x->id_status,x->sex,x->nation,\
					x->address,x->chin_grade,x->math_grade,x->english_grade,x->c_grade,x->pe_grade,x->age);	
			}
			x=x->next;
		} 
	}
	if(strcmp(grade,pe)==0)//体育 
	{
		while(x)
		{
			if(x->pe_grade>max)
			{
				max=x->pe_grade;
			}
			x=x->next;
		}
		printf("____________________________________________________________________________________________________________________\n");
		printf("|   学号   | 姓名 |     身份证号     |性别| 民族 |   家庭住址   |语文成绩|数学成绩|英语成绩|c语言成绩|体育成绩|年龄|\n");
		x=head->next;
		while(x)
		{
			if(x->pe_grade==max)
			{
				printf("____________________________________________________________________________________________________________________\n");
				printf("%10d|%6s|%18s|%4s|%6s|%14s|%8d|%8d|%8d|%8d|%8d|%4d|\n",x->ID,x->name,x->id_status,x->sex,x->nation,\
					x->address,x->chin_grade,x->math_grade,x->english_grade,x->c_grade,x->pe_grade,x->age);	
			}
			x=x->next;
		} 
	}				
}
void seek_name(node* head, char* name)
{
	int cout=0;
	int h = 0;//条件判断变量 
	node* x = head->next;//搜索指针 
	printf("____________________________________________________________________________________________________________________\n");
	printf("|   学号   | 姓名 |     身份证号     |性别| 民族 |   家庭住址   |语文成绩|数学成绩|英语成绩|c语言成绩|体育成绩|年龄|\n");
	while (x)
	{
		if (strcmp(x->name,name)==0)
		{
			
			printf("____________________________________________________________________________________________________________________\n");
			printf("%10d|%6s|%18s|%4s|%6s|%14s|%8d|%8d|%8d|%8d|%8d|%4d|\n",x->ID,x->name,x->id_status,x->sex,x->nation,\
				x->address,x->chin_grade,x->math_grade,x->english_grade,x->c_grade,x->pe_grade,x->age);	
			h = 1;
			cout++;
		}
		x = x->next;
	}
	if(h==1)
	{
		printf("共%d人",cout);
	}
	if (h == 0)
	{
		printf("查无此人");
	}
}
void seek_nation(node* head,char* nation)
{
	int cout=0; 
	int h = 0;//条件判断变量 
	node* x = head->next;//搜索指针 
	printf("____________________________________________________________________________________________________________________\n");
	printf("|   学号   | 姓名 |     身份证号     |性别| 民族 |   家庭住址   |语文成绩|数学成绩|英语成绩|c语言成绩|体育成绩|年龄|\n");
	while (x)
	{
		if (strcmp(x->nation,nation)==0)
		{
			
			printf("____________________________________________________________________________________________________________________\n");
			printf("%10d|%6s|%18s|%4s|%6s|%14s|%8d|%8d|%8d|%8d|%8d|%4d|\n",x->ID,x->name,x->id_status,x->sex,x->nation,\
				x->address,x->chin_grade,x->math_grade,x->english_grade,x->c_grade,x->pe_grade,x->age);	
			h = 1;
			cout++;
		}
		x = x->next;
	}
	if (h==1)
	{
		printf("%s共有%d个人",nation,cout);
	}
	if (h == 0)
	{
		printf("没有此民族的人");
	}
	
}
void seek_id(node* head, int num)
{
	int h = 0;//条件判断变量 
	node* x = head->next;//搜索指针 
	printf("____________________________________________________________________________________________________________________\n");
	printf("|   学号   | 姓名 |     身份证号     |性别| 民族 |   家庭住址   |语文成绩|数学成绩|英语成绩|c语言成绩|体育成绩|年龄|\n");
	while (x)
	{
		if (x->ID == num)
		{
			
			printf("____________________________________________________________________________________________________________________\n");
			printf("%10d|%6s|%18s|%4s|%6s|%14s|%8d|%8d|%8d|%8d|%8d|%4d|\n",x->ID,x->name,x->id_status,x->sex,x->nation,\
				x->address,x->chin_grade,x->math_grade,x->english_grade,x->c_grade,x->pe_grade,x->age);	
			h = 1;
		}
		x = x->next;
	}
	if (h == 0)
	{
		printf("查无此人");
	}
	
}
void seek_num(node* head)
{
	int b = 0;//男生数量 
	int g = 0;//女生数量 
	char boy[3]="男";
	char girl[3]="女"; 
	node* a = head->next;//搜索指针 
	node* c = head->next;//搜索指针 
	while (a)
	{
		if (strcmp(a->sex,boy)==0)
			b++;
		a = a->next;
	}
	while (c)
	{
		if (strcmp(c->sex,girl)==0)
			g++;
		c = c->next;
	}
	printf("男生=%d人\n", b);
	printf("女生=%d人\n", g);
	printf("总人数=%d人\n", g + b);
}

