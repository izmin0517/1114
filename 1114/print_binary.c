#include<stdio.h>

int main()
{
	printf("���� �Է�:");
	scanf("%d",&n);
	print_binary(n);
}

void print_binary(int x)
{
	if(x > 0)
	{
		int a;
		a = x / 2;
		printf("%d\n",a);
		print_binary(a);
		printf("%d",x%2);
		printf("%d\n",a);
	}
}
