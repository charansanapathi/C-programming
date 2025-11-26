#include<stdio.h>
int main()
{
	int a,b,i;
	 scanf("%d%d",&a,&b);
	 for (i=a;i<=b;i++)
{
	if (i<10)
	{
if (i==1) printf("One");
else if (i==2) printf("Two");
else if (i==3) printf("Three");
else if (i==4) printf("Four");
else if (i==5) printf("Five");
else if (i==6) printf("six");
else if (i==7) printf("seven");
else if (i==8) printf("Eight");
else if (i==9) printf("Nine");
}
else
{
	if (i%2==0) printf("Even");
	else printf("Odd");
}
printf("\n");
}
return 0;
}
