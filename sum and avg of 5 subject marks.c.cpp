#include<stdio.h>
int main()
{
	int a,b,c,d,e,sum,avg;
	printf("Enter the 5 subjects marks");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	sum=a+b+c+d+e;
	printf("sum is :%d\n",sum);
	avg=sum/5;
	printf("the average of 5 subxjects is :%d",avg);
	return 0;
	
}
