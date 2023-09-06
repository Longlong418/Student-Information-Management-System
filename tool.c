#include"tool.h"

void input(node* head, char*name,char* id_status ,char* nation,char* address,int ID, char* sex,\
	int math_grade,int chin_grade,int english_grade,int c_grade,int pe_grade,int total_sore,int age)//录入新学生
{
	node* x=head;
	while(x->next!=NULL)
	{
		if(x->ID==ID)
		{
			printf("学号已存在！录入失败\n");
			return;
		}
		x=x->next;
	}
	
	node* newnode = (node*)malloc(sizeof(node));
	strcpy(newnode->name, name);
	strcpy(newnode->id_status,id_status);
	strcpy(newnode->nation,nation);
	strcpy(newnode->address,address);
	strcpy(newnode->sex,sex);
	newnode->ID=ID;
	newnode->math_grade=math_grade;
	newnode->chin_grade=chin_grade;
	newnode->english_grade=english_grade;
	newnode->c_grade=c_grade;
	newnode->pe_grade=pe_grade;
	newnode->total_sore=total_sore;
	newnode->age=age;
	newnode->next=NULL;
	node* temp = head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = newnode;
	newnode->next=NULL;
	count++;
	printf("添加成功!\n");
	
}

void work(node* head)
{
	char num;
	printf("请选择你要执行的操作:\n");
	scanf("%c", &num);
	switch (num)
	{
	case '1':
		{
			char name[20];//姓名 
			char id_status[18];//身份证号 
			char nation[16];//民族
			char address[50];
			int id; //学号 
			int age;//年龄 
			char sex[3];//性别 
			int math_grade;//数学成绩 
			int chin_grade;//语文成绩 
			int english_grade;//英语成绩 
			int c_grade;//c语言成绩  
			int pe_grade; //体育成绩 
			int total_sore;//总分
			int x;
			printf("请输入姓名：");
			scanf("%s", name);
			printf("\n请输入10位数学号:");
			x=scanf("%d", &id);
			while (1)
			{
				fflush(stdin);
				int n = id;
				int cout = 0;
				while (n != 0)
				{
					n /= 10;
					cout++;
				}
				if(x==1)
				{
				if (cout == 10)
					break;
				else{
					printf("请输入正确位数学号!\n");
					x=scanf("%d", &id);
					
					}
				}
				else{
					printf("请输入数字类型的学号!");
					x=scanf("%d", &id);
					
				}
			} 
			printf("\n请输入身份证号:");
			scanf("%s", id_status);
			while(1)
			{
				fflush(stdin);
				if(strlen(id_status)==18)
				{
					break;
				}
				else
				{
					printf("请输入正确的身份证号!\n");
					scanf("%s", id_status);
					
				}
			}
			printf("\n请输入民族:");
			scanf("%s",nation);
			printf("\n请输入性别:");
			scanf("%s", sex);
			char boy[10]="男";
			char girl[10]="女";		 
			while (1)
			{
				if(strcmp(sex,boy)==0||strcmp(sex,girl)==0)
					break;
				else
				{			
					printf("\n请输入正确性别：");
					scanf("%s", sex);
				}
			} 
			printf("\n请输入家庭住址:");
			scanf("%s",address);
			printf("\n请输入语文成绩:");
			scanf("%d", &chin_grade);
			while(1)
			{
				fflush(stdin);
				if(chin_grade>=0&&chin_grade<=100)
				{
					break;
				}
				printf("\n请输入0-100的分数!\n");
				scanf("%d", &chin_grade);
				
			}	
			printf("\n请输入数学成绩:");
			scanf("%d", &math_grade);
			while(1)
			{
				fflush(stdin);
				if(math_grade>=0&&math_grade<=100)
				{
					break;
				}
				printf("\n请输入0-100的分数!\n");
				scanf("%d", &math_grade);
				
			}
			printf("\n请输入英语成绩:");
			scanf("%d", &english_grade);
			while(1)
			{
				fflush(stdin);
				if(english_grade>=0&&english_grade<=100)
				{
					break;
				}
				printf("\n请输入0-100的分数!\n");
				scanf("%d", &english_grade);
				
			}
			printf("\n请输入c语言成绩:");
			scanf("%d", &c_grade);
			while(1)
			{
				fflush(stdin);
				if(c_grade>=0&&c_grade<=100)
				{
					break;
				}
				printf("\n请输入0-100的分数!\n");
				scanf("%d", &c_grade);
				
			}	
			printf("\n请输入体育成绩:");
			scanf("%d", &pe_grade);
			while(1)
			{
				fflush(stdin);
				if(pe_grade>=0&&pe_grade<=100)
				{
					break;
				}
				printf("\n请输入0-100的分数!\n");
				scanf("%d", &pe_grade);
				
			}
			printf("\n请输入年龄:");
			scanf("%d", &age);
			while(1)
			{
				fflush(stdin);
				if(age>=0)
				{
					break;
				}
				printf("\n请输入正数!\n");
				scanf("%d", &age);
				
			}		
			total_sore=chin_grade+math_grade+english_grade+c_grade+pe_grade;
			
			input(head,name,id_status,nation,address,id,sex,math_grade,chin_grade,english_grade,c_grade,pe_grade,total_sore,age);
			
		}break;
	case '2':
		{
			system("cls");
			printf("1.按学号查找\n");
			printf("2.按姓名查找\n");
			printf("3.按学科查找(会显示该学科最高分数的学生)\n");
			printf("4.按照民族查找\n");
			printf("5.人数查找\n");
			printf("6.返回\n");
			while (1)
			{
				char a;
				fflush(stdin);
				scanf("%c", &a);
				if (a == '1')
				{
					printf("\n请输入学号:\n");
					int num;
					scanf("%d", &num);
					printf("\n");
					seek_id(head, num);
					
				}
				else if (a == '2')
				{
					printf("请输入姓名\n");
					char name[20];
					scanf("%s", name);
					seek_name(head, name);
					printf("\n");
				}
				else if (a == '3')
				{
					printf("请输入学科:\n");
					char grade[12];
					scanf("%s", grade);
					seek_grade(head, grade);
					printf("\n");
				}
				else if (a == '4')
				{
					printf("请输入民族\n");
					char nation[16];
					scanf("%s",nation);
					seek_nation(head,nation);
					printf("\n");
				}
				else if (a == '5')
				{
					
					seek_num(head);
					printf("\n");
					
				}
				else if (a == '6')
				{
					system("cls");
					menu();
					break;
				}
				else
				{
					printf("请输入正确的数字\n");
					
				}
				
				
			}
			
		}break;
	case '3':
		{
			system("cls");
			printf("1.按照学号删除\n");
			printf("2.按照姓名删除\n");
			printf("3.返回\n");
			printf("请输入数字：\n");
			while (1)
			{
				fflush(stdin);
				char a;
				scanf("%c", &a);
				if (a == '1')
				{
					printf("请输入学号:\n");
					int num;
					scanf("%d", &num);
					del_id(head, num);
					printf("\n");
				}
				else if (a == '2')
				{
					printf("请输入姓名:\n");
					char name[20];
					scanf("%s", name);
					del_name(head, name);
					printf("\n");
				}
				else if (a == '3')
				{
					system("cls");
					menu();
					break;
				}
				else
				{
					printf("请输入正确的数字\n");
				}
				
				
			}
			
			
			
		}break;
	case '4':
		{
			char num;
			system("cls");
			printf("1.按照学号排序\n");
			printf("2.按照成绩排序\n");
			printf("3.按照学科排序\n");
			printf("4.信息汇总\n");
			printf("5.返回\n");
			while (1)
			{
				fflush(stdin);
				printf("请输入数字:");
				scanf("%c", &num);
				if (num == '1')
				{
					print_id(head);
					printf("\n");
					
				}
				if (num == '2')
				{
					print_grade(head);
					printf("\n");
				}
				if (num == '3')
				{
					char subject[10];
					printf("请输入学科:");
					scanf("%s",subject);
					print_subject(head,subject);
				}
				if (num == '4')
				{
					print_common(head);
				}
				if (num == '5')
				{
					system("cls");
					menu();
					break;
				}
				else
				{
					printf("请输入正确的数字\n");
				}
			}
			
		}break;
	case '5':
		{
			char num;
			system("cls");
			printf("1.按照学号修改\n");
			printf("2.按照姓名修改\n");
			printf("3.返回\n");
			while (1)
			{
				fflush(stdin);
				printf("请输入数字:");
				scanf("%c", &num);
				if (num == '1')
				{
					
					int id;
					printf("请输入学号:");
					scanf("%d", &id);
					while(1)
					{
						int cout=0;
						int n=id;
						while(n!=0)
						{
							n/=10;
							cout++;
						}
						if(cout==10)
							break;
						else
						{
							printf("请输入正确学号！\n");
							scanf("%d",&id);
						}
					}
					change_id(head, id);
					printf("\n");
					
				}
				else if (num == '2')
				{
					char name[20];
					printf("请输入姓名:");
					scanf("%s", name);
					change_name(head, name);
					printf("\n");
				}
				else if (num == '3')
				{
					system("cls");
					menu();
					break;
				}
				else
				{
					printf("请输入正确的数字\n");
				}
			}
			
			
		}break;
	case '6':
		{
			printf("\n感谢您的使用！");
			save_data(head);
			exit(0);
			
		}break;
		
		default:
			printf("请输入正确的数字\n");
			fflush(stdin);
			break;
				
	}
	
	
}


void load_data(node* head)
{
	
	char name[30];//姓名 
	char id_status[19];//身份证号 
	char nation[16];//民族
	char address[50];
	int id; //学号 
	int age;//年龄 
	char sex[3];//性别 
	int math_grade;//数学成绩 
	int chin_grade;//语文成绩 
	int english_grade;//英语成绩 
	int c_grade;//c语言成绩  
	int pe_grade; //体育成绩 
	FILE* fp=NULL;
	FILE* fp2=NULL;
	int i=0;//计数器
	fp=fopen("students.txt","a+");
	if(fp==NULL)
	{
		perror("打开文件失败");
		return;
	}
	while(fscanf(fp,"%d %s %s %s %s %s %d %d %d %d %d %d",&id,name,id_status,sex,nation,address,&chin_grade,&math_grade,&english_grade,&c_grade,&pe_grade,&age)!=EOF)
	{
		i++;
		
	}
	int j=0;
	fclose(fp);
	fp2=fopen("students.txt","a+");
	while(fscanf(fp2,"%d %s %s %s %s %s %d %d %d %d %d %d",&id,name,id_status,sex,nation,	address,\
		&chin_grade,&math_grade,&english_grade,&c_grade,&pe_grade,&age)!=EOF)
	{
		count++;//计数器
		//创建新节点
		node* newnode=(node*)malloc(sizeof(node));
		strcpy(newnode->name, name);
		strcpy(newnode->id_status,id_status);
		strcpy(newnode->nation,nation);
		strcpy(newnode->address,address); 
		strcpy(newnode->sex,sex);
		newnode->ID=id;
		newnode->math_grade=math_grade;
		newnode->chin_grade=chin_grade;
		newnode->english_grade=english_grade;
		newnode->c_grade=c_grade;
		newnode->pe_grade=pe_grade;
		newnode->age=age;
		newnode->total_sore=math_grade+chin_grade+english_grade+c_grade+pe_grade;
		node* x=head;
		while(x->next!=NULL)
		{
			x=x->next;
		}
		x->next=newnode;
		newnode->next=NULL;
		j++;
		if(i==j)
			break;
		
		
		
		
	}
	
	fclose(fp2);
	
	
	
}
void save_data(node* head)
{
	
	
	if(head->next==NULL)
		return;
	node* newnode=head->next;
	FILE* fp=NULL;
	fp=fopen("students.txt","w+");
	while(newnode!=NULL)
	{
		fprintf(fp,"%d\t%s\t%s\t%s\t%8s\t%14s\t%d\t%d\t%d\t%d\t%d\t%d\n",newnode->ID,newnode->name,newnode->id_status,newnode->sex,newnode->nation,newnode->address,\
			newnode->chin_grade,newnode->math_grade,newnode->english_grade,newnode->c_grade,newnode->pe_grade,newnode->age);
		newnode=newnode->next;
	}
	
	fclose(fp);
	
	
	
}
void menu()
{
	
	
	printf("                                                    Made by Longlong(人工智能212)\n");
	printf("*********************************\n");
	printf("*       学生管理系统            *\n");
	printf("*       1.录入学生数据          *\n");
	printf("*       2.查询界面              *\n");
	printf("*       3.删除学生信息          *\n");
	printf("*      	4.信息汇总              *\n");
	printf("*       5.修改学生数据          *\n");
	printf("*       6.退出程序并存档        *\n");
	printf("*********************************\n");                      
	printf("*当前有%d名学生录入系统**********\n",count);
	printf("_________________________________\n");
	printf("|       注意事项                |\n");
	printf("|1.学号请输入十位数             |\n");
	printf("|2.成绩请输入0-100的数          |\n");
	printf("|3.非正常退出会导致数据存档失败 |\n");          
	printf("|_______________________________|\n");
	
}





