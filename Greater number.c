#include<stdio.h>
int main()
{
	int a,b,c,big;
	printf("Enter a,b,c values\n");
	scanf("%d%d%d",&a,&b,&c);
	big=a>b?(a>c?a:c):b>c?b:c;
	printf("Biggest number is:%D",big);
	return 0;
}
