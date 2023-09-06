#ifndef  __SOMEFILE_H__
#define   __SOMEFILE_H__
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<Windows.h>
extern int count;
typedef struct node {
	char name[20];//姓名 
	char id_status[19];//身份证号 
	char nation[16];//民族
	char address[50];//地址
	int ID; //学号 
	int age;//年龄 
	char sex[3];//性别 
	int math_grade;//数学成绩 
	int chin_grade;//语文成绩 
	int english_grade;//英语成绩 
	int c_grade;//c语言成绩  
	int pe_grade; //体育成绩 
	int total_sore;//总分 
	struct node* next; //指针域 
}node;
void input(node* head, char*name,char* id_status ,char* nation,char* address,int ID, char* sex,\
int math_grade,int chin_grade,int english_grade,int c_grade,int pe_grade,int total_sore,int age);//录入新学生 
void work(node* head);//工作 
void seek_id(node* head, int num);//按照学号查找
void seek_name(node* head, char* name);//按照姓名查找
void seek_grade(node* head,	char* grade);//按照成绩查找
void seek_nation(node* head,char* nation);//按照民族查找
void seek_num(node* head);//人数查找
void del_id(node* head, int num);//按照学号删除
void del_name(node* head, char* name);//按照名字删除
void print_id(node* head1);//学号排名
void print_grade(node* head1);//成绩排名
void print_subject(node* head,char* grade);//按照学科排名
void print_common(node* head);//普通汇总
void change_id(node* head, int id);//按照学号修改
void change_name(node* head, char* name);//按照名字修改
void menu();//菜单函数
void load_data(node* head);//读取文件
void save_data(node* head);//保存数据
#endif
