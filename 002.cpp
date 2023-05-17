#include<stdio.h>
int p1=1;
int *p2=&p1;//相当于：p2=&p1
int **p3=&p2;//相当于：p3=&p2

int main()
{
//%x、%X和%p的相同点都是16进制 
//不同点是%p按编译器位数长短（32位/64位）输出地址，不够的补零 
	printf("p1=%d\n",p1);
	printf("p1=%x\n",&p1);//用%x打印地址，不补零 
	printf("p1=%p\n",&p1);//用%p打印地址，补零 
	return 0;  
