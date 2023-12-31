# 基于C语言的学生信息管理软件开发

## 功能模块图:

![20230906125146](https://img.xlonglong.cn/img/20230906125146.png)

## 各模块功能说明

![20230906125304](https://img.xlonglong.cn/img/20230906125304.png)
![20230906125654](https://img.xlonglong.cn/img/20230906125654.png)
![20230906125719](https://img.xlonglong.cn/img/20230906125719.png)

| 文件名称          | 文件内容                       |
| ---------------- | ---------------------------- |
| main.c           | 用来运行主程序                  |
| tool.h           | 定义结构体以及函数的声明           |
| seek_function    | 定义用于查找的函数                |
| print_function   | 定义用于列出学生信息的函数           |
| change+del_function | 定义用于修改信息和删除信息的函数     |
| tool.c           | 菜单函数、文件操作、增加学生的函数   |

## 函数原型及说明
### main模块函数
a)load_data(node* head)
函数作用：将同目录下可能存在的students.txt文件数据录入程序。
参数解释：将链表头节点的地址传入，将文件中的数据录入文件并插入到链表尾部
b)menu()
函数作用：显示主菜单。
c)work(node* head)
函数作用:选择函数，负责调用其他函数功能。
参数解释 :将链表头节点的地址传入，以便其他函数调用时，传入头节点的地址。

### 录入学生信息模块
a）input(node* head, char*name,char* id_status ,char* nation,char*\ address,int ID, char* sex,\ int math_grade,int chin_grade,int english_grade,int c_grade,int\ pe_grade,int total_sore,int age);
函数作用:新建节点,录入新同学的信息
参数解释:传入头节点的地址，以及新学生的各个结构变量。
2.查询学生信息
a) seek_id(node* head, int num)
函数作用:按照学号查找学生的信息
参数解释:1.传入头节点的地址，以便接下来的遍历2.要查找的学号。
b) seek_name(node* head, char* name)
函数作用:按照名字查找学生的信息

参数解释:1.传入头节点的地址，以便接下来的遍历2.要查找的姓名
c)seek_grade(node* head, char* grade)
函数作用:输入学科来查找该学科的最高分学生的信息

参数解释:1.传入头节点的地址，以便接下来的遍历2.要查找的学科。
d) seek_nation(node* head,char* nation)
函数作用:按照民族查找学生的信息

参数解释:1.传入头节点的地址，以便接下来的遍历2.要查找的民族
e) seek_num(node* head)
函数作用：遍历链表，统计男女生人数以及总人数
参数解释:传入头节点的地址，以便接下来的遍历

### 删除学生信息
a)del_id(node* head, int num)
函数作用:输入学号来删除该学号的学生。
参数解释:传入头节点的地址，以便接下来的遍历。
b) del_name(node* head, char* name)
函数作用: 输入姓名来删除该学号的学生。
参数解释:传入头节点的地址，以便接下来的遍历。

3.4.显示学生信息
a) print_id(node* head1)
函数作用:按照学号由小到大的顺序打印学生名单。
参数解释:传入头节点的地址，以便接下来的遍历。
b)print_grade(node* head1)
函数作用:按照平均分由高到低的顺序打印学生名单。
参数解释:传入头节点的地址，以便接下来的遍历。

### 修改学生数据
a) change_id(node* head, int id)
函数作用:按照学号筛选来修改学生数据。
参数解释:1.传入头节点的地址，以便接下来的遍历2.要修改学生的学号
b) change_name(node* head, char* name)
函数作用:按照名字筛选来修改学生数据。
参数解释:1.传入头节点的地址，以便接下来的遍历2.要修改学生的名字

### 退出程序及存档
a）save_data(node* head)
函数作用:将数据存入同一目录下的students.txt文件，如果该文件不存在，则会新建一个students.txt文件.
参数解释：1.传入头节点的地址，以便接下来的遍历。

## 部分截图

![20230906131209](https://img.xlonglong.cn/img/20230906131209.png)

![20230906131243](https://img.xlonglong.cn/img/20230906131243.png)

![20230906131304](https://img.xlonglong.cn/img/20230906131304.png)
## 顺带加上大一当时的总结
记录与2022年3月：

在课设开始前我是比较得意的，因为上学期写过一个我当时比较满意的学生管理系统（当时，当时，当时）。想着这学期的课设时间我随便水水，写写报告就完事了。直到课设开始后，首先的问题就是，上学期写的那个结构体的元素只有五个，而这学期增加到了12个!!!
我先干的事情就是将我的那个版本的元素增加，费了不少时间。其次就是，我上学期那个版本细节太差了，1是没有文件操作，纯手动输入数据，2是信息汇总的时候，没有一个好看的表格。我记得课设前期我的想法就是先将各种细节完善好，再上文件操作（因为不熟悉，想放到最后做） 然后就开始了我的细节优化之路。比如，性别只能输入男或女呀，还有学号只能输入10位，还有身份证只能18位，以及信息汇总时时，学会了%xd、%xs的格式化用法，还有就是，之前在菜单选择上，只要输入字符，就会无限循环。后来经过同学的提醒，学会了用fflus函数清空缓存区。这些都是很大的收获，还有最大的收获，就是对链表又加深了印象，上学期时间比较仓促，学链表学了一天，然后开始敲学管，很多对链表的操作都不了解，只是有个大概理解，比如在链表内实现排序、还有尾插、头插的概念。这学期做课设的时候，与同学交流也很多，通过与他们交流链表知识点，对链表也有了更深的概念，当然，仅仅是单链表，什么双向链表、循环链表啥的除外。


## 补充
开发工具：小熊猫C++：https://royqh.net/redpandacpp/

使用方法：在下载好小熊猫c++之后，双击
![20230906130615](https://img.xlonglong.cn/img/20230906130615.png)
编译运行即可

完成时间： 2022年3月
