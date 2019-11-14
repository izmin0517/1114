#include<stdio.h>

int sum = 1;

void out(void);

int main()
{
	int sum = 0;
	
	printf("sum = %d\n",sum);
	out();
	
	return 0;
}

void out(void)
{
	printf("sum = %d\n",sum);
}

//process : 현재 실행중인 프로그램(main memory) 
//프로세스의 영역 : 텍스트영역/데이터영역/힙영역/스택영역 
