#define _CRT_SECURE_NO_WARNINGS 1
//
//int main()
//{
//	1/2;
//	3%2;
//	return 0;
//}

//int main()
//{
//	//>> 右移操作符
//	//<< 左移操作符
//	//移的是二进制位
//	//二进制表示
//	//原码
//	//反码
//	//补码
//	//正数的原码、反码、补码相同
//	//负数
//	//
//	int a = 10;
//	int b = -1;
//	int c = 0;
////	c = a>>1;
//	//00000000000000000000000000001010
//	//
//	c = b>>1;
//	printf("%d\n", c);
//	//10000000000000000000000000000001-原码
//	//11111111111111111111111111111110-反码
//	//11111111111111111111111111111111-补码
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	printf("hehe\n");
//
//	{
//		int b = 10;
//
//
//	}
//	return 0;
//}
#include <stdio.h>
//
//1 2 3 4 5 1 2 3 4
//
//
//int main()
//{
//	int a = 3;
//	int b = -2;
//	int c = a^b;
//	//00000000000000000000000000000011-补码
//	//10000000000000000000000000000010
//	//11111111111111111111111111111101
//	//11111111111111111111111111111110-补码
//	//00000000000000000000000000000011-补码
//	//11111111111111111111111111111101-补码
//	//11111111111111111111111111111100
//	//10000000000000000000000000000011
//	//
//	printf("%d\n", c);
//
//	return 0;
//}
//
//int main()
//{
//	int a = 11;
//	a = a+10;//1
//	a += 10; //2
//	a = a+1;
//	a += 1;
//	a++;
//	//0000000000000000000000000001011
//	//1111111111111111111111111110111
//	//0000000000000000000000000000011
//	//0000000000000000000000000001000
//	//0000000000000000000000000001011
//
//	//0000000000000000000000000000001
//	
//	//a&1;
//	return 0;
//}
//
//int main()
//{
//	//printf("%d\n", !0);
//	int flag = 1;
//	if(flag)
//	{
//		//
//	}
//	if(!flag)
//	{
//
//	}
//	return 0;
//}

// int main()
// {
// 	int a = 10;
// 	int* pa = &a;
// 	int arr[10] = {0};
// 
// 	//parr = &arr;//数组指针
// 	return 0;
//}
//
//int main()
//{
//	//int a = 10;
//	//int arr[10] = {0};
//	//printf("%d\n", sizeof(a));//4
//	//printf("%d\n", sizeof(int));//4
//
//	//printf("%d\n", sizeof(arr));//40
//	//printf("%d\n", sizeof(int [10]));//40
//// 	printf("%d\n", sizeof(a));//4
//// 	printf("%d\n", sizeof(int));//4
//// 
//// 	printf("%d\n", sizeof(arr));//40
//// 	printf("%d\n", sizeof(int [10]));//40
//
//	int a = 10;
//	short s = 0;
//	printf("%d\n", sizeof(s=a+5));//2
//	printf("%d\n", s);//0
//	printf("%d\n", a);//10
//
//
//	return 0;
//}
//
//int main()
//{
//	int a = 11;
//	//00000000000000000000000000000001011
//	//11111111111111111111111111111110111
//	//00000000000000000000000000000001000
//	//00000000000000000000000000000000001
//	return 0;
//}
//
//int main()
//{
//	int a = 10;
//	int b = --a;
//
//	return 0;
//}
//
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	*pa;//解引用
//	return 0;
//}
//
//int main()
//{
//	int a = (int)3.14;//
//	return 0;
//}

//int main()
//{
//	printf("%d\n", sizeof(int*));
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int i = 0,a=1,b=2,c =3,d=4;
//	//i = a++ && ++b && d++;
//	i = a++||++b||d++;
//	printf("a = %d\n b = %d\n c = %d\nd = %d\n", a, b, c, d);
//	//
//	//2 3 3 4-2
//	//2 3 3 5-2
//	//
//
//	return 0;
//}

//
//int main()
//{
//	//b = (a>5 ? 3 : -3);
//	int a = 10;
//	int b = 20;
//	int max = 0;
//	max = (a>b ? a : b);
//
//	if(a>b)
//		max = a;
//	else
//		max = b;
//	return 0;
//}
//
//int Add(int x, int y)
//{
//	return x+y;
//}
//
//int main()
//{
//	//函数调用操作符
//	int c = Add(2, 3);
//
//	//int arr[10] = {1,2,3};//
//	//arr[7];//7[arr]
//	return 0;
//}
#include <string.h>

struct S
{
	char name[20];
	short age;
	char sex[5];
};

//int main()
//{
//	struct S s = {"张三", 40, "男"};//结构体变量
//	//printf("%s %d %s\n", s.name, s.age, s.sex);
//	struct S* ps = &s;
//	printf("%s %d %s\n", ps->name, ps->age, ps->sex);
//	strcpy(ps->name, "李四");
//	printf("%s %d %s\n", (*ps).name, (*ps).age, (*ps).sex);
//
//	return 0;
//}