#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>


//复习尝试
//
//int main() {
	//int a = 0; 
	//printf("输个数:");
	/*scanf_s("%d", &a);
	if (a >=17) {
		printf("好厉害");
	}
	else {
		while (a < 17) {
			printf("菜就多练:%d\n", a);
			a++;
		}
		if (a ==17) {

			printf("哦");
		}*/
	
		
		
		
		
		/*float pi = 3.1415926;
	int r= 0;
	float c, s;
	printf("输入小圆圆的半径：");
	scanf_s("%d", &r);
	c = 2 * pi * r;
	s = r*r*pi;
	printf("面积s是：%f  周长c是：%f ", s, c);
*/
	

//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 }; //创建arr有十个元素
	//char ch[5] = { 'a','b','c' };//不完全初始化，剩下默认为0
	//数组用下标反映 下标从0123456789
	//arr[0]//访问first
	//printf("%d", arr[0]);
	//精彩思路调用全部
	//int i = 0;
	//while (i < 10) {
	//	printf("%d ", arr[i]);//加空格防止太挤
	//	i++;
	//}
	
	
	
	//算术 +-*/%                %取模/取余
	/*int a=9/2;
	printf("%d", a);
	结果4*/
	/*float a = 9 / 2;
	printf("%f", a);
	结果4.000000*/
	/*float a = 9.0/ 2;
	printf("%f", a);
	结果4.50000*/
	
	
	
	//移位>>    <<较复杂可查询
	//位操作 &按位与 |按位或 ^按位异或
	//赋值a=a+5 a+=5 a=a-3 a-=3 a*=3 a/=3 a%=3
	
	
	
	// 真是非0，假是0   a=1 !a是0 a=0 !a是1{规定}	
	//if (a)         if(!a)
	
	
	
	//sizeof 计算大小
	//printf("%d", sizeof(float)); 这和左右移动的计算有关   或sizeof a
	
	
	
	//  ~ 按位取反 a=0    ~a是-1  原因见截屏   把所有二进制中1变0，0变一
	//0的二进制（四字节，三十二比特）00000000000000000000000000000000    ~变成1111111.。。。。。。
	/*int a = 1;
	printf("%d", ~a);     结果-2*/
	
	
	
	//  a=10  b=++a 先++，后使用  b是11 a也变11
	//        b=a++ 先使用，后++  b是11  a是10

	
	
	//没鸟用
	/*int a = 17;
    int b = (++a) + (++a);
	printf("%d", b);38*/
	/*int a = 17;
	int b = (++a) + (a++);
	printf("%d", b);36*/
	/*int a = 17;
	int b = (a++)+(++a);36
	printf("%d", b);*/
	/*int a = 17;
	int b = (a++) + (a++);
	printf("%d", b);34*/
	/*int a = 17;
	int b = (++a) ;
	printf("%d", b);18*/
	/*int a = 17;
	int b = (a++);
	printf("%d", b);17*/
	
	
	
	
	//int a = 3.14;
	//printf("%d", a);类型转化了会有提示，强制转可写作int a=(int)3.14;
	
	
	
	// !=不等于 ==等于

	//逻辑 &&与 ||或
    //int a = 3;
    //int b = 5;
    //int c = a && b;
    //printf("%d", c);
    //int a = 3;
    //int b = 0;
    //int c = a && b;                                   真假
    //printf("%d", c);0                
    //int a = 3;
    //int b = 0;
    //int c = a || b;
    //printf("%d", c);1




// ? :
//exp1?exp2:exp3
//1成立算2结果2
//1不成立算3结果3
//int a = 0;
//printf("输入a：");
//scanf_s("%d", &a);
//int b= a>17 ? a*1 : a+1;
//printf("b为%d", b);                替换if




//int a = 0;
//int b = 5;
//int c = 3;
//int d = (a = b + 1, c = a - 4, b = c + 2);
//printf("%d", d);d=4 为从左向右依次算，整个结果是最后一个



//typedef 类型重命名
//eg   typedef int i;
//i num = 1;              非常人性化




//void test(){
//	int a = 1;
//	a++;
//	printf("%d", a);
//}
//int main() {
//	int i = 0;
//		while (i < 10) 
//		{
//			test();
//			i++;
//
//		}
//	return 0;
//}结果2222222222
//static 静态不变 上题中static int a=1则结果23456789 10 11  改变局部变量生命周期   修饰全局使其只能在源文件使用




//
//函数定义
//int Add(int x, int y)
//{
//
//	return x + y;
//}这个要在主函数之外




//int a=0;
//int b=17;
// int sum=Add(a, b);
// printf("%d", sum);


//定义 #define max 1000这样max就是1000
//      #define 定义宏
//#define add(x,y) x+y
//int main() {
//	printf("%d\n", add(2, 3));
//	return 0;   5
//
//}
//#define add(x,y) x+y
//int main() {
//	printf("%d\n", 4*add(2, 3));
//	return 0;   11
//
//}
//#define add(x,y) ((x)+(y))
//int main() {
//	printf("%d\n", 4*add(2, 3));
//	return 0;   20

//}

//指针&a只取出第一字节地址%p打印地址        int * pa=&a;  pa即指针变量
//int a = 10;
//int* pa = &a;
//*pa = 20;//解引用操作，通过pa地址找到a
//printf("%d", a);

//结构体  创建复杂对象
//创建学生
//struct stu
//{
//	char name[20];
//	int age;
//	double score;
//
//};
//int main() {
//	struct stu s = { "张三",20,99 };
//	printf("%s %d %lf", s.name, s.age, s.score);
//	return 0;
//}






//分支语句if switch
//if (exp)
//干什么   默认elseif 只控制一个否则要加上大括号
//else和离他最近的if匹配  




	//
	//return 0;



	//}

//1~100奇数
// way 1
//#include<stdio.h>
//int i = 0;
//void test() {
//	if (i % 2 == 1) {
//		printf("%d\n", i);
//		i++;
//	}
//	else
//		i++;
//
//}
//int main() {
//	while(i<=100)
//	
//	test();
//	
//	
//	
//	return 0;
//
//}
//way 2
//#include<stdio.h>
//int main() {
//	int i = 0;
//	while (i < 100) {
//		if (i % 2 == 1) {
//			printf("%d", i);
//			i++;
//		}
//		else
//			i++;
//
//	}

//
//
//
//	return 0;
//}
//


//way3
//#include<stdio.h>
//int main()
//{    
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 2 == 1)
//			printf("%d", i);
//
//}
//return 0; }



//switch部分          后边要整型常量表达式字符也行（储存用阿斯玛值）
//eg1
//#include<stdio.h>
//int main()
//{
//	int day = 0;
//	scanf_s("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("1");
//		break; 
//	case 2:
//		printf("2");
//		break;
////超出可使用反馈
//	default:
//		printf("错");
//		break;  
//	
//	}
//	return 0;
//}
 

//循环
//1.while   也可break设置条件跳出循环
//           continue跳过后面代码返回考虑是否继续循环
//
//#include<stdio.h>
//int main() {
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//		putchar(ch);
//
//	return 0;
//}     用处见笔记

//for(1;2;3)
//初始化，判断，调整
//#include<stdio.h>
//int main() 
//{
//	int i = 0;
//	for(i=1;i<=10;i++)
//	{
//		printf("%d", i);
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			break;
//		printf("%d ", i);
//	}
//	return 0;
//}同while，continue同意为12346789 
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		printf("%d", i);
//		i = 5;另一个调整
//	}
//	return 0;
//}6的无限循环
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		printf("%d", i);
//		i++;
//	}
//	return 0;
//}13579        打印奇偶的另一方法

//#include<stdio.h>
//int main()
//{
//	int arr[10] = {0,1,2,3,4,5,6,7,8,9};
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d", arr[i]);
//	}
//	return 0;
//}

//
//#include<stdio.h>
//int main()
//{
// for(;;)
// {
//	 printf("呵呵\n");
// }
// return 0;
//}

//#include<stdio.h>
//int main()
//{
//
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++)//代表k为假
//		k++;
//	return 0;
//}

//
//#include<stdio.h>
//int main()
//{
//
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 1; i++, k++)//代表k为真
//	{
//		printf("% d", k);
//	}
//	return 0;
//}



//do   循环语句；
// while（表达式）；
//eg
//#include<stdio.h>
//int main() {
//	int i = 1;
//	do
//	{
//		if (i == 5)
//			continue;//break
//		printf("%d", i);
//		i++;
//	} while (i <= 10);
//
//
//
//	return 0;
//}



//拷贝strcpy
//char arr1[20]={o};
//char arr2="hello";
//strcpy(arr1,arr2);    string.h   \n也会被拷贝    返回目的地的地址指针
//printf("%s",arr2)=printf("%s",strcpy(arr1,arr2))
 

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr[] = "xiaoyu";
//	memset(arr, '=', 3);  //''内只有一个数字字母符号
//	printf_s("%s", arr);
//	return 0;
//
//}


//#include<stdio.h>
//int a=0;
//int b=0;
//void y()
//{
//	if (a >= b)
//	{
//		printf("%d", a);
//	}
//	else                             //不正宗
//	{
//		printf("%d", b);
//	}
//	
//
//}
//int main()
//{
//	scanf_s("%d", &a);
//	scanf_s("%d", &b);
//	y();
//
//	return 0;
//}



//int max = get_max(a, b);     先定义get_max
// get_max(int a;int b)
//{int z=0;
//if (a >= b)
//z = a;
//else
//z = b;
//return z; 



//void这样写不用返回   直接max()要返回 


//#include<stdio.h>
//void swap(int *x, int *y)//形式参数
//{
//	int z = 0;
//	z =*x;
//	*x= *y;
//	*y = z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("交换前：a=%d b=%d\n", a, b);
//	swap(&a, &b);//实参
//	printf("交换后：a=%d b=%d\n", a,b);
//
//}



//自己的写的一般
// int y = 1;
// int f(int a)
//{
	
	/*int i = 1;
	for (i = 2; i < a; i++)
	{
		if (a % i == 0)
		{
			y = 0;
			break;
		}
		else
			y = 1;
	}

	return y;
}

int main()
{
	
	int x = 0;
	scanf_s("%d", &x);
	f(x);
	printf("y=%d,y是1为素数，0不是",y);
	return 0;
}*/


	 //int pig(int a)
	 //{
		// int j = 0;
		// for (j = 2; j < a; j++)
		// {
		//	 if (a % j == 0)
		//		 return 0;
		// }
		// return 1;

	 //}

	 //int main()
	 //{
		// int i = 0;
		// scanf_s("%d", &i);
		// pig(i);
		// if (pig(i) == 1)
		//	 printf("%d是素数", i);
		// else
		//	 printf("%d是素数", i);

		// return 0;
	 //}




//函数的嵌套调用和链式访问  嵌套即函数定义里用函数   链访即把一个函数返回值作另一个的参数 


//int main()
//{
//	printf("%d", printf("%d ", printf("%d ", 17)));
//
//
//	return 0;
//}


//后函数前用要声明（笔记）
//函数递归，自己中调用自己,如main中main，会死循环


//int main()
//{
//	char arr[] ="siyu";
//	char* p = arr;
//	printf("%c ",*p);
//	printf("%c ", *p+1 );
//	printf("%c ", *(p + 1));
//	p++;
//	printf("%c ", *p);
//	return 0;
//}






//int find(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return find(n - 2) + find(n - 1);
//
//}
//int main()
//{
//	int n = 0;
//	printf("输入要找的第n个斐波那契数:");
//	scanf_s("%d", &n);
//	find(n);
//	printf("%d", find(n));
//	return 0;
//}
//
//
//struct lovelist
//{
//	char name[50];
//	int age;
//	int height;
//
//};
//
//int main()
//{
//	struct lovelist p;
//	scanf("%s \n%d \n%d", p.name, &p.age, &p.height);
//	printf("名字:%s \n年龄:%d \n身高:%d \n", p.name, p.age, p.height);
//	return 0;
//}
//#include<string.h>
//int main()
//{
//	char ch[] = { 's','y','l'};
//	char ch1[] = "syl";
//	printf("%s\n", ch);
//	printf("%d\n", strlen(ch));
//	printf("%s\n", ch1);
//	printf("%d\n", strlen(ch1));
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int arr[10];
//	int i = 0;
//	for (i = 0; i <=9; i++)
//	{
//		scanf_s("%d", &arr[i]);
//	}
//
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
	/*short k = 0;
	short p = 0;
	scanf("%hd ", &k);
	scanf("%hd", &p);
	short result=0;
	result = (k >> 8) | (p << 8);
	printf("%hd", result);*/


//	int n = 0;
//	int x = 0;
//	scanf("%d %d", &n,&x);
//	x = (x >> n) | ((x & ((1 << n) - 1)) << (32 - n));
//	printf("%d", x);
//	
//
//
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	char s[100];
//	scanf("%s", s);
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int i = 0;
//	for (i = 0; s[i] != '\0'; i++)
//	{
//		if (s[i] = 'l')
//		{
//			a++;
//		}
//		if (s[i] = 'o')
//		{
//			b++;
//		}
//		if (s[i] = 'v')
//		{
//			c++;
//		}
//		if (s[i] = 'e')
//		{
//			d++;
//		}
//
//
//	}
//	int min = (a > b ? (b > c ? c : b) : (a > c ? c : b));
//	if (min > d)
//		printf("%d", d);
//	else
//		printf("%d", min);
//	return 0;
//}

//
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int c = 1;
//	int i = 0;
//	int count = 0;
//	for (i = 0; i <= 31; i++)
//	{
//		if ( (a &c)%2==1 )
//		{
//			count++;
//		}
//		a>>=1;
//
//	}
//	printf("%d", count);
//	return 0;
//}


//int main()
//{
//	char a = 1, b = 2, c = 3;
//	printf("%d %d %d %d", sizeof c, sizeof'a', sizeof(c = 'a'), sizeof(a + 7.7));
//	return 0;
//}
// 
// 函数求字符串 strlen
//int mystrlen(char s[])
//{
//	int i = 0;
//	while(s[i]!='\0')
//	{
//		i++;
//	
//	}
//
//	return i;
//}
//
//int main()
//{
//	char s[20];
//	
//	scanf("%s", s);
//	printf("%d", mystrlen(s));
//
//
//}

//int main()
//{
//	int c = 0;
//	double f = 0;
//	
//	for (c = 0; c <= 300; c += 20)
//	{
//		f= (5*(c - 32))/9.00;
//		printf("%3d:     %10.2f\n", c, f);
//
//
//	}
//
//
//
//
//	return 0;
//}


//			score = roll1 + roll2;
//
//			if (score == point) {
//				printf("Round %d: Score: %d Success!\n", round, score);
//				break;
//			}
//			else if (score == 7) {
//				printf("Round %d: Score: %d Failed!\n", round, score);
//				break;
//			}
//			else {
//				printf("Round %d: Score: %d Continue!\n", round, score);
//			}
//		}
//	}
/*}*///#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//int roll_dice() {
//	return rand() % 6 + 1; // 返回1到6之间的随机数
//}
//
//void play_game() {
//	int round = 1;
//	int score = 0;
//	int point = 0;
//	int roll1, roll2;
//
//	roll1 = roll_dice();
//	roll2 = roll_dice();
//	score = roll1 + roll2;
//
//	if (score == 7 || score == 11) {
//		printf("Round %d: Score: %d Success!\n", round, score);
//	}
//	else if (score == 2 || score == 3 || score == 12) {
//		printf("Round %d: Score: %d Failed!\n", round, score);
//	}
//	else {
//		point = score;
//		printf("Round %d: Score: %d Continue!\n", round, score);
//		while (1) {
//			round++;
//			roll1 = roll_dice();
//			roll2 = roll_dice();
//		}
//	}
//
//int main()
// { srand(time(NULL)); // 初始化随机数种子
//	play_game();
//	return 0;
//}

//
//int main()
//{
//	int n = 1717;
//	int sz = 0;
//	for (; n/10!=0;)
//	{
//		n = n / 10;
//		sz++;
//	}
//	printf("%d",sz+1);
//	return 0;
//}

//EOF用ctrl+z

//int x;
//x=5.6
//x=5

/*测试输入：
59 3.0
预期输出：
Input Fahrenheit :
59(F) = 15.00(C)

input the radius r :
The acreage is 28.27

new int = 0x84a1*/

//#include<stdio.h>
//#define PI 3.14159
//int main() {
//	int f;
//	short p, k;
//	double c, r, s;
//	/*任务1*/
//	printf("Input Fahrenheit:");
//	scanf("%d", &f);
//	c = 5.00/9 * (f - 32);
//	printf("\n %d(F)=%.2f(C)\n\n", f,c);
//	/*任务2*/
//	printf("input the radius r:");
//	scanf("%lf", &r);
//	s = PI * r * r;
//	printf("\nThe acreage is %.2lf\n\n", s);
//	/*任务3*/
//	k = 0xa1b2, p = 0x8423;
//	short newint = (p & 0xff00) | (k>>8);
//	printf("new int = %#x\n\n", newint);
//	return 0;
//}

//#include<stdio.h>

//int main() {
//	unsigned short p = 0x8423; 
//	unsigned short k = 0xa1b2; 
//	unsigned short newint = (p & 0xff00) | (k >> 8); // 组合 p 的高8位和 k 的高8位
//	printf("new int = %#x\n\n", newint);
//	return 0;
//}
//0x84al
//在C语言中，如果你想在打印16进制数时不显示前缀 0x，你可以使用 %x 或 %X 格式化字符串代替 %#x 或 %#X。%x 和 %X 
/*int main()
{
	int n = 0;
	scanf("%d", &n);
	int arr[100];
	int i = 0;
	int z = 0;
	for (i = 0; i <= n - 3; i++)
		scanf("%d", &arr[i]);
	for (i = 0; i <= n - 1; )
	{
		if (arr[i] > arr[i + 1] && arr[i + 1] < arr[i + 2])
		{
			z++;
			i += 1;
		}
		if (arr[i]<arr[i + 1] && arr[i + 1]>arr[i + 2])
		{	z++;
		
			i += 1;
		}
		else
			i++;


	}

	printf("%d", z);


	return 0;
}*/

//#include<string.h>
//int main()
//{
//	char n[100];
//	scanf("%s", n);
//	if (strlen(n)!=11)
//		printf("长度不合法");
//	else
//	{
//		int i = 0;
//		int t = 1;
//		for (i = 0; i <= 10; i++)
//		{
//			if(n[i]>'9' || n[i]<'0')
//			{
//				t = 0;
//				break;
//			}
//		}
//		if (t == 0)
//			printf("格式不合法");
//		
//		else
//		{
//			if (n[0] != '1')
//			{
//				printf("第一位不合法");
//			}
//			else
//			{
//				if (n[1] == '0 '|| n[1] == '1' || n[1] == '2')
//					printf("第二位不合法");
//
//			}
//		}
//	
//	}
//	return 0;
//}



//#include <stdio.h>
//int main() {
//	int w, k;
//	scanf("%d %d", &w, &k);
//
//	int re[100];
//	int op[100];
//	int credits1 = 0, scores1 = 0;
//	int credits2 = 0, scores2 = 0;
//	for (int i = 0; i < k; i++) {
//		int score, credit;
//		scanf("%d %d", &score, &credit);
//		credits1 += credit;
//		scores1 += score * credit;
//	}
//	for (int i = 0; i < w - k; i++) {
//		scanf("%d %d", &op[i], &re[i]);
//		credits2 += re[i];
//		scores2 += op[i] * re[i];
//	}
//	double max = (scores1 + scores2) / (credits1 + credits2);
//	for (int i = 0; i < w - k; i++) {
//		scores2 += op[i];
//		credits2 += re[i];
//		double now = (scores1 + scores2) / (credits1 + credits2);
//		if (now > max) {
//			 max = now;
//		}
//	}
//	printf("%.2f\n",max);
//
//	return 0;
//}

//本关任务：实验教材P63 程序设计第(5)题
//取出x从第ｍ位开始向左的ｎ位。
//
//测试说明
//平台会对你编写的代码进行测试：
//
//测试输入：
//4 2 1
//预期输出：(以十六进制输出)
//8000
//
//开始你的任务吧，祝你成功！














//int rollDice() {
//	return rand() % 6 + 1;
//}
//
//void diceGame(int randseed) {
//	srand(randseed);
//	int round = 1;
//	int point = 0;
//
//	while (1) {
//		int dice1 = rollDice();
//		int dice2 = rollDice();
//		int score = dice1 + dice2;
//
//		printf("Round %d:  Score:%d ", round, score);
//
//		if (score == 7 || score == 11) {
//			printf("Success!");
//			break;
//		}
//		else if (score == 2 || score == 3 || score == 12) {
//			printf("Failed!\n");
//			break;
//		}
//		else {
//			point = score;
//			printf("Continue!\n");
//		}
//
//		if (point != 0) {
//			round++;
//			while (1) {
//				int dice1 = rollDice();
//				int dice2 = rollDice();
//				int score = dice1 + dice2;
//				printf("Next round:  Score:%d ", score);
//
//				if (score == point) {
//					printf("Success!\n");
//					break;
//				}
//				else if (score == 7) {
//					printf("Failed!\n");
//					break;
//				}
//				else {
//					printf("Continue!\n");
//				}
//			}
//		}
//		round++;
//	}
//}

//#include<stdio.h>
//int main() {
//	/**********Begin**********/
//	unsigned short a = 0;
//	scanf("%d", &a);
//	printf("%d", (unsigned int)(((a >> 12) | (a << 12)) | (a & 0x0FF0)));
//	/**********End**********/
//
//	return 0;
//}
//输入两个实数和一个四则运算符（ + -*/ ），
//根据运算符执行相应的运算并输出结果，使用if语句完成。保留一位小数。
//int main()
//{
//	char yun = 0;
//	double num1, num2 = 0;
//	scanf("%lf %lf %c", &num1, &num2,&yun);
//	if (yun == '+')
//		printf("%.1f", num1 + num2);
//	else if(yun=='-')
//		printf("%.1f", num1 - num2);
//	else if(yun=='*')
//		printf("%.1f", num1 * num2);
//	else
//		printf("%.1f", num1 / num2);
//
//
//
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	char yun = 0;
//	double num1, num2 = 0;
//	scanf("%lf %lf %c", &num1, &num2, &yun);
//	switch (yun)
//	{
//	case '+':
//		printf("%.1f", num1 + num2);
//		break;
//	case '-':
//		printf("%.1f", num1 - num2);
//		break;
//	case'*':
//		printf("%.1f", num1 * num2);
//		break;
//	case '/':
//		printf("%.1f", num1 / num2);
//		break;
//
//
//	}
//	return 0;
//}
//输出斐波那契数列的前n项，
//n由终端输入（n >= 20），每行输出8个数，每个数显示的宽度为10列。
//int fib(int n)
//{
//	if (n == 1 || n == 2)
//		return 1;
//	else
//		return fib(n - 1) + fib(n - 2);
//
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		printf("%10d", fib(i));
//		if (i % 8 == 0)
//			printf("\n");
//
//	}
//
//
//	return 0;
//}

//求Π的近似值。输入精度e，根据计算公式：Π / 4 = 1 - 1 / 3 + 1 / 5 - 1 / 7 + ...，
//直到最后一项的绝对值小于e为止（该项需要加上去）。结果保留6位小数。
//#include<stdio.h>
//int main()
//{
//	float e = 0;
//	scanf("%lf", &e);
//	int i = 0;
//	double pi = 0;
//	for (i = 1; 1.0/(2 * i - 1)>=e;i++)
//	{
//		
//		if (i % 2 == 0)
//			pi = -(1.0 / (2 * i - 1))+pi;
//		else
//			pi = 1.0 / (2 * i - 1)+pi;
//	}
//	printf("%.6lf", 4*pi);
//
//
//	return 0;
//}
#include<stdio.h>
//#include<math.h>
//
//int main()
//{
//	float e = 0;
//	scanf("%f", &e);
//	int i = 0;
//	double pi = 0;
//	for (i = 1; 1.0 / (2 * i - 1) >= e; i++)
//	{
//		if (i % 2 == 0)
//			pi = pi - 4*(1.0 / (2 * i - 1));
//		else
//			pi = pi + 4*(1.0 / (2 * i - 1));
//	}
//	pi = round(pi * 1000000) / 1000000.0;
//	printf("%.6lf\n", pi ); 
//
//	return 0;
//}

//
//#include <stdio.h>
//
//int main() {
//	double epsilon, pi_over_4 = 0.0;
//	int i = 0;
//	printf("Enter the precision (e): ");
//	scanf("%lf", &epsilon);
//
//	for (i = 0; ; i++) {
//		double term = (i % 2 == 0 ? 1 : -1) * (1.0 / (2 * i + 1));
//		if (term < epsilon && term > -epsilon) {
//			break;
//		}
//		pi_over_4 += term;
//	}
//
//	double pi = 4 * pi_over_4;
//	printf("The approximate value of Pi is: %.6f\n", pi);
//
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d %d", &m, &n);
//	int i = 0;
//	int a=0,b=0;
//	a=m;
//	b=n;
//	while (n != 0)
//	{
//		i = m % n;
//		m =n;
//		n = i;
//
//
//
//	}
//	int min = 0;
//	min = (a * b)/ m;
//	printf("%d %d", m, min);
//
//
//
//	return 0;
//}
//输入一个整数n（n <= 10000），打印n以内所有这样的完全平方数y：y = a² = b²x10 + c²。例如，361 = 19² = 6²x10 + 1²，则361是这样的完全平方数。
//
//相关知识
//完全平方数
//条件语句
//循环控制语句
//
//编程要求
//根据提示，在右侧Begin - End区域编写一个完整满足任务要求的程序。
//如果符合条件的完全平方数有2种以上的分解形式，取b较小的分解形式。
//
//测试说明
//平台会对你编写的代码进行测试，若是与预期输出相同，则算通关。
//
//预期输入：
//
//500
//
//预期输出：
//49 = 7 * 7 = 2 * 2 * 10 + 3 * 3
//121 = 11 * 11 = 2 * 2 * 10 + 9 * 9
//169 = 13 * 13 = 4 * 4 * 10 + 3 * 3
//196 = 14 * 14 = 4 * 4 * 10 + 6 * 6
//361 = 19 * 19 = 6 * 6 * 10 + 1 * 1
//441 = 21 * 21 = 6 * 6 * 10 + 9 * 9
//484 = 22 * 22 = 4 * 4 * 10 + 18 * 18
//
//预期输入：
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	for (a = 1; a * a != n && a < n; a++)
//	{ }
//	for (b = 1; b * b * 10 + c * c != n && b * b * 10<n; b++)
//	{
//		for(c=1; b * b * 10 + c * c!=n&& c*c<n ;c++)
//		{
//			
//			if (b * b * 10 + c * c == n) 
//				break;
//						
//		}
//		if (b * b * 10 + c * c == n)
//			break;
//
//		
//	}
//
//	printf("%d=%d*%d=%d*%d*10+%d*%d",n,a,a,b,b,c,c);
//
//
//	return 0;
//}
//#include <stdio.h>
//#include<math.h>
//int main() {
//	int n;
//	scanf("%d", &n);
//	for (int a = 1; a * a <= n; a++) {
//		int y = a * a; // 完全平方数
//		int found = 0; // 记录是否找到符合条件的分解形式
//		int best_b = -1; // 最佳b值
//
//		for (int b = 1; b * b * 10 <= y; b++) {
//			for (int c = 1; c * c <= y; c++) {
//				if (b * b * 10 + c * c == y) {
//					if (found == 0 || b < best_b) {
//						best_b = b; // 更新最佳b值
//						found = 1; // 找到符合条件的分解形式
//					}
//				}
//			}
//		}
//
//		if (found) {
//			printf("%d = %d*%d = %d*%d * 10 + %d*%d\n", y, a,a, best_b,best_b,(int)sqrt(y - best_b * best_b * 10), (int)sqrt(y - best_b * best_b * 10));
//		}
//	}
//
//	return 0;
//}

//输入十个整数，统计其中正数的个数，并计算正数的平均值。要求循环中使用continue语句实现。
//
//相关知识
//转移语句，分支结构。
//
//编程要求
//根据提示，在右侧Begin - End区域编写一个完整满足任务要求的程序。
//
//测试说明
//平台会对你编写的代码进行测试，若是与预期输出相同，则算通关。
//
//测试输入：1 - 2 3 - 4 5 - 6 7 - 8 9 - 10
//预期输出：
//numbers = 5, average = 5.000000
//
//测试输入：10 - 20 - 30 40 - 50 60 70 80 90 - 100
//预期输出：
//numbers = 6, average = 58.333333
//#include<math.h>
//int main()
//{
//	int arr[10];
//	int i = 0;
//	for (i = 0; i <= 9; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	double sum = 0;
//	int num = 0;
//	for (i = 0; i <= 9; i++)
//	{
//		if (arr[i] <= 0)
//			continue;
//		else
//		{
//			num++;
//			sum += arr[i];
//		}
//			
//	}
//	if(num==0)
//	printf("numbers=%d average=%.6lf",0,0);
//	else
//		printf("numbers=%d average=%.6lf", num, round((sum / num)*1000000)/1000000.0);
//
//	return 0;
//}


//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	double e = 0;
//	scanf("%lf", &e);
//	int i = 0;
//	double pi = 0;
//	for (i = 1; 1.0 / (2 * i - 1) >= e; i++)
//	{
//		if (i % 2 == 0)
//			pi = pi - 4 * (1.0 / (2 * i - 1));
//		else
//			pi = pi + 4 * (1.0 / (2 * i - 1));
//	}
//
//	pi = round(pi * 1000000) / 1000000.0;
//	printf("%.6lf\n", pi);
//	return 0;
//}

//void selectSort(int arr[], int n) {
//	int i, j, minIndex, temp;
//	for (i = 0; i < n - 1; i++) {
//		// 假设当前位置为最小值
//		minIndex = i;
//		// 寻找实际的最小值
//		for(j = i + 1; j < n; j++) {
//			if (arr[j] < arr[minIndex]) {
//				minIndex = j;
//			}
//		}
//		// 将找到的最小值与当前位置交换
//		if (minIndex != i) {
//			temp = arr[i];
//			arr[i] = arr[minIndex];
//			arr[minIndex] = temp;
//		}
//	}
//}
//
//本关任务：输入n个整数到数组u中，再输入正整数k(0 < k < n)，k将数组u的n个元素划分为u[0]，……，u[k - 1]和u[k]，……，u[n - 1]两段，将两段元素交换位置但仍然存放在数组u中，输出重新排列后的数组元素。
//
//	示例如下：
//	假设n = 7，k = 3；
//	数组元素u[0]，……，u[6]依次为1, 2, 3, 4, 5, 6, 7；
//	则被交换的两段元素是：u[0]，……，u[6]交换的结果是4, 5, 6, 7, 1, 2, 3。
//
//	相关知识
//	数组长度为n，数组下标的取值范围为0~`n-1`。
//
//	编程要求
//	根据提示，在右侧编辑器中补充void move(int arr[], int n, int k)函数，要求只能使用一个数组，并将交换元素位置的功能定义为函数。
//
//	注意：本次任务不需要编写输入和输出语句，直接编写交换两段的处理函数即可
//
//	测试说明
//


//}
//#include<stdio.h>
//int main()
//{
//	short k, p;
//	scanf("%hd %hd", &k, &p);
//	printf("%hd", ((k & 0xff00) >> 8) | (p << 8));
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int n = 1;
//	for (i = 1; i <= 9; i++)
//	{
//		for (n = 0; n <i; n++)
//		{
//			printf("%d", i);
//		}
//	}
//
//
//	return 0;
//}



//只考虑/*的提取代码
//enum {a,b,c,d};
//int main()
//{
//	int state;
//	state = a;
//	char ch = 0;
//	while ((ch = getchar()) != EOF)
//	{switch(state)
//	{case a:
//		if (ch == '/')
//			state = b;
//		else if (ch == '*')
//			state = c;
//		else if (ch == '"')
//		{
//			putchar(ch);
//			state = d;
//		}
//		else
//			putchar(ch);
//		break;
//	case b:
//		if (ch != '*')
//		{
//			putchar('/');
//			putchar(ch);
//		}
//		state = a;
//		break;
//	case c:
//		if (ch != '/')
//		{
//			putchar('*');
//			putchar(ch);
//		}
//		state = a;
//		break;
//	case d:
//		if (ch != '"')
//			putchar(ch);
//		else
//		{
//			putchar(ch);
//			state = a;
//		}
//
//		
//	}
//
//	}
//	return 0;
//}

//本关任务：编程统计输入的一段文字中每个数字字符、 每个英文字符（不区分大小写）
// 和其他字符出现的次数（要求用数组元素作为每个数字字符、每个英文字符、
// 和其他字符出现的次数的计数器）。
//
//注意：统计每个字符。
//
//如：输入 12L C，统计的结果为：1个1，1个2，1个L，1个C，
// 一个其他字符（空格）。
//#include<string.h>
//#define NUM 256
//int main()
//{
//	char s[1000];
//	scanf("%s", s);
//	int sz = sizeof(s);
//	int arr[NUM] = {0};
//	int i = 0;
//	fgets(s, sizeof(s), stdin);
//	for (i = 0; i < NUM; i++)
//	{
//		char ch = s[i];
//		if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
//			arr[ch | 32]++; // 将大写字母转换为小写
//		}
//		// 其他字符
//		else {
//			arr[ch]++;
//		}
//		for (i = 0; i < NUM; i++) {
//			if (arr[i] > 0) {
//				
//					printf("%d个'%c'，", arr[i], i);
//				}
//			
//		}
//
//
//	}
//
//	return 0;
//}
//#include <stdio.h>
//#include <string.h>
//
//#define NUM 256
//
//int main() {
//	char s[1000];
//	// 使用 fgets 来读取一整行，包括空格
//	fgets(s, sizeof(s), stdin);
//	int arr[NUM] = { 0 }; // 初始化计数数组
//	int i;
//	// 计算输入字符串的长度
//	int len = strlen(s);
//	for (i = 0; i < len; i++) {
//		char ch = s[i];
//		// 检查是否为字母并转换为大写
//		if ( (ch >= 'a' && ch <= 'z')) {
//			arr[ch-32]++; // 将小写字母转换为大写
//		}
//		// 其他字符
//		else if (ch != '\n') { // 排除换行符
//			arr[ch]++; // 计数
//		}
//	}
//
//	// 输出结果
//	//对于数字
//	for (i = '0'; i <= '9'; i++) {
//		if (arr[i] > 0) {
//			printf("%c: %d\n",i, arr[i]);
//		}
//	}
//	// 对于大写字母,大写被包括了
//	for (i = 'A'; i <= 'Z'; i++) {
//		if (arr[i] > 0) {
//			printf("%c：%d\n", i, arr[i]);
//		}
//	}
//	// 输出其他字符
//	for (i = 0; i < NUM; i++) {
//		if (arr[i] > 0 && (i < 'A' || i > 'Z') && (i < 'a' || i > 'z') && (i != '\n')) {
//			printf("others：%d\n",arr[i]);
//		}
//	}
//
//	return 0;
//}


//本关任务：编写函数strnCpy(t, s, n)。
//
//它将字符数组s中的前n个字符复制到字符数组t中，并形成字符串。
//
//相关知识
//用字符数组表示字符串。
//
//编程要求
//在右侧编辑器中补充strnCpy(t, s, n)函数，
// 按任务描述中问题完成，注意输入字符长度不超过100。
//
//测试说明
//平台会对你编写的代码进行测试，
// 比对你输出的数值与实际正确数值，只有所有数据全部计算正确才能通过测试：
//
//测试输入：
//
//lang
//9

//void strnCpy(char t[], char s[], int n) {
//	
//
//
//
//}

//void fun(int y[], int n)
//{
//	int i;
//	for (i = 0; i < n; i++) 
//		y[i]++;
//}
//int main(void)
//{
//	int i, x[5] = { 1,2,3,4,5 };
//	fun(x, 5);
//	for (i = 0; i <= 4; i++) printf("%d", x[i]);
//	fun(&x[2], 3);
//	printf("\n");
//	for (i = 0; i <= 4; i++)
//		printf("%d", x[i]);
//
//	return 0;
//}

//quicksort
//void quicksort(int arr[],int low,int high )
//{
//	int i = low;
//	int j = high;
//	int temp = arr[low];
//	int c = 0;
//	while (i < j)
//	{
//		while (i<j && arr[j] >= temp)
//		{
//			j--;
//		}
//		while (i < j && arr[i] <= temp)
//		{
//			i++;
//		}
//		
//			c = arr[i];
//			arr[i] = arr[j];
//			arr[j] = arr[i];
//				
//			
//		
//	}
//	quicksort(arr, low, i - 1);
//	quicksort(arr, j + 1, high);
//
//
//
//}
//int main()
//{
//	int arr[7] = { 17,2,4,57,3,6,11};
//	int low = 0;
//	int high = 6;
//	quicksort(arr, 0, 6);
//	int k = 0;
//	for (k = 0; k <= 6; k++)
//	{
//		printf("%d ", arr[k]);
//	}
//
//}
//#include <stdio.h>
//
//void quicksort(int arr[], int low, int high) {
//	if (low < high) {
//		int i = low;
//		int j = high;
//		int temp = arr[low];
//		while (i < j) {
//			while (i < j && arr[j] >= temp) {
//				j--;
//			}
//			if (i < j) {
//				arr[i] = arr[j];
//			}
//			while (i < j && arr[i] <= temp) {
//				i++;
//			}
//			if (i < j) {
//				arr[j] = arr[i];
//			}
//		}
//		arr[i] = temp; // 将基准元素放到正确的位置
//		quicksort(arr, low, i - 1);
//		quicksort(arr, i + 1, high);
//	}
//}
//
//int main() {
//	int arr[7] = { 17, 2, 4, 57, 3, 6, 11 };
//	int low = 0;
//	int high = 6;
//	quicksort(arr, low, high);
//	for (int k = 0; k < 7; k++) { // 应该是小于7，因为数组大小是7
//		printf("%d ", arr[k]);
//	}
//	return 0;
//}
//
//int main()
//{
//	unsigned short x = 0;
//	int m = 0;
//	int n = 0;
//	scanf("%hx %d %d", &x, &m, &n);
//	unsigned short mask =(((x >> m)<<(16-n))>>(16-n)) & (32768 << n)<<(16-n);
//	x = x | mask;
//	printf("%hx", x);
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	unsigned short x = 0;
//	int m = 0;
//	int n = 0;
//	scanf("%hx %d %d", &x, &m, &n);
//	while (m >= 0 && m <= 15 && n >= 1 && n <= 16 - m)
//	{
//		// 将x向右移动m位，然后与掩码进行位与操作以取出n位
//		unsigned short mask = (x >> m) & ((1 << n) - 1);
//
//		// 将取出的n位移到最高位
//		mask <<= (16 - n);
//
//		// 将取出的位与x进行或操作，只保留取出的n位
//		x = (x & ~((1 << n) - 1 << m)) | mask;
//
//		printf("%hx\n", x);
//	}
//	return 0;
//}


//int main()
//{
//	int arr[13] = {0, 31,28,31,30,31,30,31,31,30,31,30,31 };
//	int year = 0;
//	int d = 0;
//	int i = 0;
//	scanf("%d %d", &year, &d);
//	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
//	{
//		arr[2] = 29;
//		
//	}
//	int sum = 0;
//	int day = 0;
//	for (i = 0; d > sum; i++)
//	{
//		sum += arr[i];
//
//	}
//	int m = i-1;
//	//月i 日是d-前面的sum
//	for (i = 0; i <= m - 1; i++)
//	{
//		day = d - arr[i];
//
//	}
//
//	printf("%d %d",i,day );
//
//	return 0;
//}

//读入无符号长整型数表示的互联网IP地址，
//对其译码，以常见的点分十进制形式输出。
//
//测试说明
//平台会对你编写的代码进行测试：
//
//测试输入：
//3232235876
//1
//^ Z
//预期输出：
//192.168.1.100
//
//提示：
//
//程序应能循环接受输入，直至输入Ctrl + Z。
//输入为无符号长整形。




//int main()
//{
//	int a = 2, b = 4, c = 6, x, y;
//	y = (x = a + b), (b + c);
//	printf("%d", y);//y=6
//
//
//	return 0;
//}

//本关任务：实验教材P64 程序设计第(10)题
//输入一段含西文字符和中文字符的正文，统计字数、字符数和行数。
//
//注意
//在本实验环境中，一个中文字符需要三个字节的存储空间
//
//测试说明
//平台会对你编写的代码进行测试：
//
//测试输入：
//你好
//hello Hello     HELLO
//^ Z
//
//预期输出：
//字数 5
//字符数 17   (字符数不计空白符)
//行数 2
//
//#include<stdio.h>
//#define zi 4
//
//int main(void)
//{
//	int num_of_char = 0;
//	int num_of_line = 0;
//	int num_of_zi = 0;
//	int c = '0';
//	int form = '\0';
//
//	int cnt = 0;
//
//	while ((c = getchar()) != EOF)
//	{
//		//判断是不是字符
//		if ((c < 127) && (c != ' ' && c != '\n' && c != '\t'))
//		{
//			num_of_char++;
//		}
//		//判断行
//		if (c == '\n')
//		{
//			num_of_line++;
//		}
//		//是不是字
//		if (((form != ' ' && form != '\n' && form != '\t' && form < 127) && (c == ' ' || c == '\t' || c == '\n' || c == '\0')))
//		{
//			num_of_zi++;
//		}
//		//汉字单独判断
//		if (c > 127)
//		{
//			cnt++;
//		}
//		form = c;
//		//		printf("%d\n",c);
//	}
//	num_of_char += cnt / 3;
//	num_of_zi += cnt / 3;
//	printf("字数 %d\n", num_of_zi);
//	printf("字符数 %d\n", num_of_char);
//	printf("行数 %d", num_of_line);
//	return 0;
//}
//int main()
//{
//	int i, x, k, flag,a = 0;
//	//	printf("本程序判断合数，请输入大于1的整数，以Ctrl+Z结束\n");
//	while (scanf("%d", &x) != EOF) {
//		for (i = 2,flag=0, k = x >> 1; i <= k; i++)
//		{
//			
//			if (!(x % i)) {
//				flag = 1;
//				a++;
//			}
//
//		}
//		if (a>0) printf("%d是合数", x);
//		else printf("%d不是合数", x);
//		a = 0;
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i, x, k, flag = 0;
	//	printf("本程序判断合数，请输入大于1的整数，以Ctrl+Z结束\n");
	/*while (scanf("%d", &x) != EOF) {
		i = 2, k = x >> 1;
		do
		{
			if (x % i == 0) {
				flag = 1;
				break;
			}
			i++;
		} while (i <= k);
			if (flag == 1) printf("%d是合数", x);
			else printf("%d不是合数", x);
			flag = 0;
	}
	return 0;
}*/

//#include <stdio.h>
//
//// 函数判断是否为合数
//int isComposite(int num) {
//	if (num <= 1)
//	return 0;
//	for (int i = 2; i*i <= num; i++) {
//		if (num % i == 0) 
//			return 1;
//	}
//	return 0;
//}
//
//// 函数判断是否为纯粹合数
//int isPureComposite(int num) {
//	while (num > 10) {
//		if (isComposite(num)!=1) {
//			
//			return 0;
//		}
//		num /= 10;
//	}
//	return isComposite(num);
//}
//
//int main() {
//	int n;
//	scanf("%d", &n); // 读取输入的位数
//	for (int i = 10; i < 10000; i++) {
//		if (isPureComposite(i) && ((i > 10 && i < 100 && n == 2) || (i >= 400 && i < 1000 && n == 3) || (i >=4000 && n == 4))) {
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//输入一个仅有英文大写字母、逗号、句点和空格符组成的英文句子
//（字符数不超过80个）和正整数k（1 <= k <= 26），
//将其中的大写英文字母替换成字母表中该字母开始的第k个字母，其它字符保持不变.
//
//测试说明
//平台会对你编写的代码进行测试：
//
//测试输入：
//ON A CLEAR DAY, YOU CAN SEE FOREVER
//9
//预期输出：
//VWI K MTZIL GIG, CWK VIA MMN ZWDMZM
int main()
{
	char s[80];
	return 0;
}