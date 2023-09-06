#include"tool.h"
void print_id(node* head1)
{
	if(head1->next==NULL)
	{
		printf("当前无学生录入");
		return; 
	} 
	node* hed = head1->next;
	while (hed != NULL)//选择排序 
	{
		node* q = hed;
		int min1 = hed->ID;
		node* min2 = NULL;
		while (q != NULL)
		{
			
			if (q->ID < min1)
			{
				min1 = q->ID;
				min2 = q;
			}
			q = q->next;
		}
		if (min2 != NULL)
		{
			/*用来交换两个变量的中间变量*/
			char name[20]={'0'}; 
			char id_status[18]={'0'};
			char nation[16]={'0'};
			char address[50]={'0'};
			int ID; 
			int age; 
			char sex[2]={'0'};
			int math_grade; 
			int chin_grade;
			int english_grade; 
			int c_grade;
			int pe_grade; 
			int total_sore;
			/*-----------交换名字-----------------*/ 
			strcpy(name, hed->name);
			strcpy(hed->name, min2->name);
			strcpy(min2->name, name);
			/*-------------交换身份证号------------------*/
			strcpy(id_status, hed->id_status);
			strcpy(hed->id_status, min2->id_status);
			strcpy(min2->id_status, id_status);
			/*-------------交换民族-------------------*/
			strcpy(nation, hed->nation);
			strcpy(hed->nation, min2->nation);
			strcpy(min2->nation, nation);
			/*-------------交换家庭住址-------------------*/
			strcpy(address, hed->address);
			strcpy(hed->address, min2->address);
			strcpy(min2->address, address);
			/*----------交换性别---------------------*/
			strcpy(sex, hed->sex);
			strcpy(hed->sex, min2->sex);
			strcpy(min2->sex, sex);
			/*-----------交换学号--------------------*/
			ID = hed->ID;
			hed->ID = min2->ID;
			min2->ID = ID;
			/*-----------交换年龄---------------------*/
			age = hed->age;
			hed->age = min2->age;
			min2->age = age;
			/*------------交换数学成绩--------------------*/
			math_grade = hed->math_grade;
			hed->math_grade = min2->math_grade;
			min2->math_grade = math_grade;
			/*------------交换中文成绩--------------------*/
			chin_grade= hed->chin_grade;
			hed->chin_grade = min2->chin_grade;
			min2->chin_grade =chin_grade;
			/*-----------交换英语成绩---------------------*/
			english_grade= hed->english_grade;
			hed->english_grade = min2->english_grade;
			min2->english_grade = english_grade;
			/*-----------交换c语言成绩---------------------*/
			c_grade = hed->c_grade;
			c_grade = min2->c_grade;
			min2->c_grade = c_grade;
			/*-----------交换体育成绩-----------------*/
			pe_grade= hed->pe_grade;
			hed->pe_grade = min2->pe_grade;
			min2->pe_grade = pe_grade;
			/*--------交换总成绩--------------*/ 
			total_sore = hed->total_sore;
			hed->total_sore = min2->total_sore;
			min2->total_sore= total_sore;
			
		}
		hed = hed->next;
	}
	
	node* x = head1->next;//搜索指针 
	printf("____________________________________________________________________________________________________________________\n");
	printf("|   学号   | 姓名 |     身份证号     |性别| 民族 |   家庭住址   |语文成绩|数学成绩|英语成绩|c语言成绩|体育成绩|年龄|\n");
	while (x)
	{		
		printf("____________________________________________________________________________________________________________________\n");
		printf("%10d|%6s|%18s|%4s|%6s|%14s|%8d|%8d|%8d|%8d|%8d|%4d|\n",x->ID,x->name,x->id_status,x->sex,x->nation,\
			x->address,x->chin_grade,x->math_grade,x->english_grade,x->c_grade,x->pe_grade,x->age);	
		
		
		x = x->next;
	}
	system("pause");
}
void print_grade(node* head1)
{
	
	if(head1->next==NULL)
	{
		printf("当前无学生录入");
		return; 
	} 
	node* hed = head1->next;
	while (hed != NULL)//选择排序 
	{
		node* q = hed;
		int min1 = hed->total_sore;
		node* min2 = NULL;
		while (q != NULL)
		{
			
			if (q->total_sore>min1)
			{
				min1 = q->total_sore;
				min2 = q;
			}
			q = q->next;
		}
		if (min2 != NULL)
		{
			/*用来交换两个变量的中间变量*/
			char name[20]={'0'}; 
			char id_status[18]={'0'};
			char nation[16]={'0'};
			char address[50]={'0'};
			int ID; 
			int age; 
			char sex[2]={'0'};
			int math_grade; 
			int chin_grade;
			int english_grade; 
			int c_grade;
			int pe_grade; 
			int total_sore;
			/*-----------交换名字-----------------*/ 
			strcpy(name, hed->name);
			strcpy(hed->name, min2->name);
			strcpy(min2->name, name);
			/*-------------交换身份证号------------------*/
			strcpy(id_status, hed->id_status);
			strcpy(hed->id_status, min2->id_status);
			strcpy(min2->id_status, id_status);
			/*-------------交换民族-------------------*/
			strcpy(nation, hed->nation);
			strcpy(hed->nation, min2->nation);
			strcpy(min2->nation, nation);
			/*-------------交换家庭住址-------------------*/
			strcpy(address, hed->address);
			strcpy(hed->address, min2->address);
			strcpy(min2->address, address);
			/*----------交换性别---------------------*/
			strcpy(sex, hed->sex);
			strcpy(hed->sex, min2->sex);
			strcpy(min2->sex, sex);
			/*-----------交换学号--------------------*/
			ID = hed->ID;
			hed->ID = min2->ID;
			min2->ID = ID;
			/*-----------交换年龄---------------------*/
			age = hed->age;
			hed->age = min2->age;
			min2->age = age;
			/*------------交换数学成绩--------------------*/
			math_grade = hed->math_grade;
			hed->math_grade = min2->math_grade;
			min2->math_grade = math_grade;
			/*------------交换中文成绩--------------------*/
			chin_grade= hed->chin_grade;
			hed->chin_grade = min2->chin_grade;
			min2->chin_grade =chin_grade;
			/*-----------交换英语成绩---------------------*/
			english_grade= hed->english_grade;
			hed->english_grade = min2->english_grade;
			min2->english_grade = english_grade;
			/*-----------交换c语言成绩---------------------*/
			c_grade = hed->c_grade;
			c_grade = min2->c_grade;
			min2->c_grade = c_grade;
			/*-----------交换体育成绩-----------------*/
			pe_grade= hed->pe_grade;
			hed->pe_grade = min2->pe_grade;
			min2->pe_grade = pe_grade;
			/*--------交换总成绩--------------*/ 
			total_sore = hed->total_sore;
			hed->total_sore = min2->total_sore;
			min2->total_sore= total_sore;
			
		}
		hed = hed->next;
	}
	
	node* x = head1->next;//搜索指针 
	printf("____________________________________________________________________________________________________________________\n");
	printf("|   学号   | 姓名 |     身份证号     |性别| 民族 |   家庭住址   |语文成绩|数学成绩|英语成绩|c语言成绩|体育成绩|年龄|\n");
	while (x)
	{
		
		
		printf("____________________________________________________________________________________________________________________\n");
		printf("%10d|%6s|%18s|%4s|%6s|%14s|%8d|%8d|%8d|%8d|%8d|%4d|\n",x->ID,x->name,x->id_status,x->sex,x->nation,\
			x->address,x->chin_grade,x->math_grade,x->english_grade,x->c_grade,x->pe_grade,x->age);	
		
		
		x = x->next;
	}
	system("pause");
	
}
void print_common(node* head1)
{
	if (head1->next==NULL)
	{
		printf("当前无学生录入");
		return; 
	} 
	node* x = head1->next;//搜索指针 
	printf("____________________________________________________________________________________________________________________\n");
	printf("|   学号   | 姓名 |     身份证号     |性别| 民族 |   家庭住址   |语文成绩|数学成绩|英语成绩|c语言成绩|体育成绩|年龄|\n");
	while (x)
	{
		
		
		printf("____________________________________________________________________________________________________________________\n");
		printf("%10d|%6s|%18s|%4s|%6s|%14s|%8d|%8d|%8d|%8d|%8d|%4d|\n",x->ID,x->name,x->id_status,x->sex,x->nation,\
			x->address,x->chin_grade,x->math_grade,x->english_grade,x->c_grade,x->pe_grade,x->age);	
		
		
		x = x->next;
	}
	system("pause");
}
void print_subject(node* head,char* grade)
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
		printf("该学科不存在！"); 
		return;
	}
	if(strcmp(grade,chinese)==0)
	{
		node* hed = head->next;
		while (hed != NULL)//选择排序 
		{
			node* q = hed;
			int min1 = hed->chin_grade;
			node* min2 = NULL;
			while (q != NULL)
			{
				
				if (q->chin_grade>min1)
				{
					min1 = q->chin_grade;
					min2 = q;
				}
				q = q->next;
			}
			if (min2 != NULL)
			{
				/*用来交换两个变量的中间变量*/
				char name[20]={'0'}; 
				char id_status[18]={'0'};
				char nation[16]={'0'};
				char address[50]={'0'};
				int ID; 
				int age; 
				char sex[2]={'0'};
				int math_grade; 
				int chin_grade;
				int english_grade; 
				int c_grade;
				int pe_grade; 
				int total_sore;
				/*-----------交换名字-----------------*/ 
				strcpy(name, hed->name);
				strcpy(hed->name, min2->name);
				strcpy(min2->name, name);
				/*-------------交换身份证号------------------*/
				strcpy(id_status, hed->id_status);
				strcpy(hed->id_status, min2->id_status);
				strcpy(min2->id_status, id_status);
				/*-------------交换民族-------------------*/
				strcpy(nation, hed->nation);
				strcpy(hed->nation, min2->nation);
				strcpy(min2->nation, nation);
				/*-------------交换家庭住址-------------------*/
				strcpy(address, hed->address);
				strcpy(hed->address, min2->address);
				strcpy(min2->address, address);
				/*----------交换性别---------------------*/
				strcpy(sex, hed->sex);
				strcpy(hed->sex, min2->sex);
				strcpy(min2->sex, sex);
				/*-----------交换学号--------------------*/
				ID = hed->ID;
				hed->ID = min2->ID;
				min2->ID = ID;
				/*-----------交换年龄---------------------*/
				age = hed->age;
				hed->age = min2->age;
				min2->age = age;
				/*------------交换数学成绩--------------------*/
				math_grade = hed->math_grade;
				hed->math_grade = min2->math_grade;
				min2->math_grade = math_grade;
				/*------------交换中文成绩--------------------*/
				chin_grade= hed->chin_grade;
				hed->chin_grade = min2->chin_grade;
				min2->chin_grade =chin_grade;
				/*-----------交换英语成绩---------------------*/
				english_grade= hed->english_grade;
				hed->english_grade = min2->english_grade;
				min2->english_grade = english_grade;
				/*-----------交换c语言成绩---------------------*/
				c_grade = hed->c_grade;
				c_grade = min2->c_grade;
				min2->c_grade = c_grade;
				/*-----------交换体育成绩-----------------*/
				pe_grade= hed->pe_grade;
				hed->pe_grade = min2->pe_grade;
				min2->pe_grade = pe_grade;
				/*--------交换总成绩--------------*/ 
				total_sore = hed->total_sore;
				hed->total_sore = min2->total_sore;
				min2->total_sore= total_sore;
				
			}
			hed = hed->next;
		}
			
	}
	if(strcmp(grade,math)==0)
	{
		node* hed = head->next;
		while (hed != NULL)//选择排序 
		{
			node* q = hed;
			int min1 = hed->math_grade;
			node* min2 = NULL;
			while (q != NULL)
			{
				
				if (q->math_grade>min1)
				{
					min1 = q->math_grade;
					min2 = q;
				}
				q = q->next;
			}
			if (min2 != NULL)
			{
				/*用来交换两个变量的中间变量*/
				char name[20]={'0'}; 
				char id_status[18]={'0'};
				char nation[16]={'0'};
				char address[50]={'0'};
				int ID; 
				int age; 
				char sex[2]={'0'};
				int math_grade; 
				int chin_grade;
				int english_grade; 
				int c_grade;
				int pe_grade; 
				int total_sore;
				/*-----------交换名字-----------------*/ 
				strcpy(name, hed->name);
				strcpy(hed->name, min2->name);
				strcpy(min2->name, name);
				/*-------------交换身份证号------------------*/
				strcpy(id_status, hed->id_status);
				strcpy(hed->id_status, min2->id_status);
				strcpy(min2->id_status, id_status);
				/*-------------交换民族-------------------*/
				strcpy(nation, hed->nation);
				strcpy(hed->nation, min2->nation);
				strcpy(min2->nation, nation);
				/*-------------交换家庭住址-------------------*/
				strcpy(address, hed->address);
				strcpy(hed->address, min2->address);
				strcpy(min2->address, address);
				/*----------交换性别---------------------*/
				strcpy(sex, hed->sex);
				strcpy(hed->sex, min2->sex);
				strcpy(min2->sex, sex);
				/*-----------交换学号--------------------*/
				ID = hed->ID;
				hed->ID = min2->ID;
				min2->ID = ID;
				/*-----------交换年龄---------------------*/
				age = hed->age;
				hed->age = min2->age;
				min2->age = age;
				/*------------交换数学成绩--------------------*/
				math_grade = hed->math_grade;
				hed->math_grade = min2->math_grade;
				min2->math_grade = math_grade;
				/*------------交换中文成绩--------------------*/
				chin_grade= hed->chin_grade;
				hed->chin_grade = min2->chin_grade;
				min2->chin_grade =chin_grade;
				/*-----------交换英语成绩---------------------*/
				english_grade= hed->english_grade;
				hed->english_grade = min2->english_grade;
				min2->english_grade = english_grade;
				/*-----------交换c语言成绩---------------------*/
				c_grade = hed->c_grade;
				c_grade = min2->c_grade;
				min2->c_grade = c_grade;
				/*-----------交换体育成绩-----------------*/
				pe_grade= hed->pe_grade;
				hed->pe_grade = min2->pe_grade;
				min2->pe_grade = pe_grade;
				/*--------交换总成绩--------------*/ 
				total_sore = hed->total_sore;
				hed->total_sore = min2->total_sore;
				min2->total_sore= total_sore;
				
			}
			hed = hed->next;
		}
		
	}
	if(strcmp(grade,english)==0)
	{
		node* hed = head->next;
		while (hed != NULL)//选择排序 
		{
			node* q = hed;
			int min1 = hed->english_grade;
			node* min2 = NULL;
			while (q != NULL)
			{
				
				if (q->english_grade>min1)
				{
					min1 = q->english_grade;
					min2 = q;
				}
				q = q->next;
			}
			if (min2 != NULL)
			{
				/*用来交换两个变量的中间变量*/
				char name[20]={'0'}; 
				char id_status[18]={'0'};
				char nation[16]={'0'};
				char address[50]={'0'};
				int ID; 
				int age; 
				char sex[2]={'0'};
				int math_grade; 
				int chin_grade;
				int english_grade; 
				int c_grade;
				int pe_grade; 
				int total_sore;
				/*-----------交换名字-----------------*/ 
				strcpy(name, hed->name);
				strcpy(hed->name, min2->name);
				strcpy(min2->name, name);
				/*-------------交换身份证号------------------*/
				strcpy(id_status, hed->id_status);
				strcpy(hed->id_status, min2->id_status);
				strcpy(min2->id_status, id_status);
				/*-------------交换民族-------------------*/
				strcpy(nation, hed->nation);
				strcpy(hed->nation, min2->nation);
				strcpy(min2->nation, nation);
				/*-------------交换家庭住址-------------------*/
				strcpy(address, hed->address);
				strcpy(hed->address, min2->address);
				strcpy(min2->address, address);
				/*----------交换性别---------------------*/
				strcpy(sex, hed->sex);
				strcpy(hed->sex, min2->sex);
				strcpy(min2->sex, sex);
				/*-----------交换学号--------------------*/
				ID = hed->ID;
				hed->ID = min2->ID;
				min2->ID = ID;
				/*-----------交换年龄---------------------*/
				age = hed->age;
				hed->age = min2->age;
				min2->age = age;
				/*------------交换数学成绩--------------------*/
				math_grade = hed->math_grade;
				hed->math_grade = min2->math_grade;
				min2->math_grade = math_grade;
				/*------------交换中文成绩--------------------*/
				chin_grade= hed->chin_grade;
				hed->chin_grade = min2->chin_grade;
				min2->chin_grade =chin_grade;
				/*-----------交换英语成绩---------------------*/
				english_grade= hed->english_grade;
				hed->english_grade = min2->english_grade;
				min2->english_grade = english_grade;
				/*-----------交换c语言成绩---------------------*/
				c_grade = hed->c_grade;
				c_grade = min2->c_grade;
				min2->c_grade = c_grade;
				/*-----------交换体育成绩-----------------*/
				pe_grade= hed->pe_grade;
				hed->pe_grade = min2->pe_grade;
				min2->pe_grade = pe_grade;
				/*--------交换总成绩--------------*/ 
				total_sore = hed->total_sore;
				hed->total_sore = min2->total_sore;
				min2->total_sore= total_sore;
				
			}
			hed = hed->next;
		}
		
	}
	if(strcmp(grade,pe)==0)
	{
		node* hed = head->next;
		while (hed != NULL)//选择排序 
		{
			node* q = hed;
			int min1 = hed->pe_grade;
			node* min2 = NULL;
			while (q != NULL)
			{
				
				if (q->pe_grade>min1)
				{
					min1 = q->pe_grade;
					min2 = q;
				}
				q = q->next;
			}
			if (min2 != NULL)
			{
				/*用来交换两个变量的中间变量*/
				char name[20]={'0'}; 
				char id_status[18]={'0'};
				char nation[16]={'0'};
				char address[50]={'0'};
				int ID; 
				int age; 
				char sex[2]={'0'};
				int math_grade; 
				int chin_grade;
				int english_grade; 
				int c_grade;
				int pe_grade; 
				int total_sore;
				/*-----------交换名字-----------------*/ 
				strcpy(name, hed->name);
				strcpy(hed->name, min2->name);
				strcpy(min2->name, name);
				/*-------------交换身份证号------------------*/
				strcpy(id_status, hed->id_status);
				strcpy(hed->id_status, min2->id_status);
				strcpy(min2->id_status, id_status);
				/*-------------交换民族-------------------*/
				strcpy(nation, hed->nation);
				strcpy(hed->nation, min2->nation);
				strcpy(min2->nation, nation);
				/*-------------交换家庭住址-------------------*/
				strcpy(address, hed->address);
				strcpy(hed->address, min2->address);
				strcpy(min2->address, address);
				/*----------交换性别---------------------*/
				strcpy(sex, hed->sex);
				strcpy(hed->sex, min2->sex);
				strcpy(min2->sex, sex);
				/*-----------交换学号--------------------*/
				ID = hed->ID;
				hed->ID = min2->ID;
				min2->ID = ID;
				/*-----------交换年龄---------------------*/
				age = hed->age;
				hed->age = min2->age;
				min2->age = age;
				/*------------交换数学成绩--------------------*/
				math_grade = hed->math_grade;
				hed->math_grade = min2->math_grade;
				min2->math_grade = math_grade;
				/*------------交换中文成绩--------------------*/
				chin_grade= hed->chin_grade;
				hed->chin_grade = min2->chin_grade;
				min2->chin_grade =chin_grade;
				/*-----------交换英语成绩---------------------*/
				english_grade= hed->english_grade;
				hed->english_grade = min2->english_grade;
				min2->english_grade = english_grade;
				/*-----------交换c语言成绩---------------------*/
				c_grade = hed->c_grade;
				c_grade = min2->c_grade;
				min2->c_grade = c_grade;
				/*-----------交换体育成绩-----------------*/
				pe_grade= hed->pe_grade;
				hed->pe_grade = min2->pe_grade;
				min2->pe_grade = pe_grade;
				/*--------交换总成绩--------------*/ 
				total_sore = hed->total_sore;
				hed->total_sore = min2->total_sore;
				min2->total_sore= total_sore;
				
			}
			hed = hed->next;
		}
		
	}
	if(strcmp(grade,c)==0)
	{
		node* hed = head->next;
		while (hed != NULL)//选择排序 
		{
			node* q = hed;
			int min1 = hed->c_grade;
			node* min2 = NULL;
			while (q != NULL)
			{
				
				if (q->c_grade>min1)
				{
					min1 = q->c_grade;
					min2 = q;
				}
				q = q->next;
			}
			if (min2 != NULL)
			{
				/*用来交换两个变量的中间变量*/
				char name[20]={'0'}; 
				char id_status[18]={'0'};
				char nation[16]={'0'};
				char address[50]={'0'};
				int ID; 
				int age; 
				char sex[2]={'0'};
				int math_grade; 
				int chin_grade;
				int english_grade; 
				int c_grade;
				int pe_grade; 
				int total_sore;
				/*-----------交换名字-----------------*/ 
				strcpy(name, hed->name);
				strcpy(hed->name, min2->name);
				strcpy(min2->name, name);
				/*-------------交换身份证号------------------*/
				strcpy(id_status, hed->id_status);
				strcpy(hed->id_status, min2->id_status);
				strcpy(min2->id_status, id_status);
				/*-------------交换民族-------------------*/
				strcpy(nation, hed->nation);
				strcpy(hed->nation, min2->nation);
				strcpy(min2->nation, nation);
				/*-------------交换家庭住址-------------------*/
				strcpy(address, hed->address);
				strcpy(hed->address, min2->address);
				strcpy(min2->address, address);
				/*----------交换性别---------------------*/
				strcpy(sex, hed->sex);
				strcpy(hed->sex, min2->sex);
				strcpy(min2->sex, sex);
				/*-----------交换学号--------------------*/
				ID = hed->ID;
				hed->ID = min2->ID;
				min2->ID = ID;
				/*-----------交换年龄---------------------*/
				age = hed->age;
				hed->age = min2->age;
				min2->age = age;
				/*------------交换数学成绩--------------------*/
				math_grade = hed->math_grade;
				hed->math_grade = min2->math_grade;
				min2->math_grade = math_grade;
				/*------------交换中文成绩--------------------*/
				chin_grade= hed->chin_grade;
				hed->chin_grade = min2->chin_grade;
				min2->chin_grade =chin_grade;
				/*-----------交换英语成绩---------------------*/
				english_grade= hed->english_grade;
				hed->english_grade = min2->english_grade;
				min2->english_grade = english_grade;
				/*-----------交换c语言成绩---------------------*/
				c_grade = hed->c_grade;
				c_grade = min2->c_grade;
				min2->c_grade = c_grade;
				/*-----------交换体育成绩-----------------*/
				pe_grade= hed->pe_grade;
				hed->pe_grade = min2->pe_grade;
				min2->pe_grade = pe_grade;
				/*--------交换总成绩--------------*/ 
				total_sore = hed->total_sore;
				hed->total_sore = min2->total_sore;
				min2->total_sore= total_sore;
				
			}
			hed = hed->next;
		}
		
	}
	if(strcmp(grade,c2)==0)
	{
		node* hed = head->next;
		while (hed != NULL)//选择排序 
		{
			node* q = hed;
			int min1 = hed->c_grade;
			node* min2 = NULL;
			while (q != NULL)
			{
				
				if (q->c_grade>min1)
				{
					min1 = q->c_grade;
					min2 = q;
				}
				q = q->next;
			}
			if (min2 != NULL)
			{
				/*用来交换两个变量的中间变量*/
				char name[20]={'0'}; 
				char id_status[18]={'0'};
				char nation[16]={'0'};
				char address[50]={'0'};
				int ID; 
				int age; 
				char sex[2]={'0'};
				int math_grade; 
				int chin_grade;
				int english_grade; 
				int c_grade;
				int pe_grade; 
				int total_sore;
				/*-----------交换名字-----------------*/ 
				strcpy(name, hed->name);
				strcpy(hed->name, min2->name);
				strcpy(min2->name, name);
				/*-------------交换身份证号------------------*/
				strcpy(id_status, hed->id_status);
				strcpy(hed->id_status, min2->id_status);
				strcpy(min2->id_status, id_status);
				/*-------------交换民族-------------------*/
				strcpy(nation, hed->nation);
				strcpy(hed->nation, min2->nation);
				strcpy(min2->nation, nation);
				/*-------------交换家庭住址-------------------*/
				strcpy(address, hed->address);
				strcpy(hed->address, min2->address);
				strcpy(min2->address, address);
				/*----------交换性别---------------------*/
				strcpy(sex, hed->sex);
				strcpy(hed->sex, min2->sex);
				strcpy(min2->sex, sex);
				/*-----------交换学号--------------------*/
				ID = hed->ID;
				hed->ID = min2->ID;
				min2->ID = ID;
				/*-----------交换年龄---------------------*/
				age = hed->age;
				hed->age = min2->age;
				min2->age = age;
				/*------------交换数学成绩--------------------*/
				math_grade = hed->math_grade;
				hed->math_grade = min2->math_grade;
				min2->math_grade = math_grade;
				/*------------交换中文成绩--------------------*/
				chin_grade= hed->chin_grade;
				hed->chin_grade = min2->chin_grade;
				min2->chin_grade =chin_grade;
				/*-----------交换英语成绩---------------------*/
				english_grade= hed->english_grade;
				hed->english_grade = min2->english_grade;
				min2->english_grade = english_grade;
				/*-----------交换c语言成绩---------------------*/
				c_grade = hed->c_grade;
				c_grade = min2->c_grade;
				min2->c_grade = c_grade;
				/*-----------交换体育成绩-----------------*/
				pe_grade= hed->pe_grade;
				hed->pe_grade = min2->pe_grade;
				min2->pe_grade = pe_grade;
				/*--------交换总成绩--------------*/ 
				total_sore = hed->total_sore;
				hed->total_sore = min2->total_sore;
				min2->total_sore= total_sore;
				
			}
			hed = hed->next;
		}
		
	}
	node* x = head->next;//搜索指针 
	printf("____________________________________________________________________________________________________________________\n");
	printf("|   学号   | 姓名 |     身份证号     |性别| 民族 |   家庭住址   |语文成绩|数学成绩|英语成绩|c语言成绩|体育成绩|年龄|\n");
	while (x)
	{
		
		
		printf("____________________________________________________________________________________________________________________\n");
		printf("%10d|%6s|%18s|%4s|%6s|%14s|%8d|%8d|%8d|%8d|%8d|%4d|\n",x->ID,x->name,x->id_status,x->sex,x->nation,\
			x->address,x->chin_grade,x->math_grade,x->english_grade,x->c_grade,x->pe_grade,x->age);	
		
		
		x = x->next;
	}
	system("pause");
	
	
	
}

