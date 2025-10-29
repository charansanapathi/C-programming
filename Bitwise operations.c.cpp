#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter a,b values\n");
	scanf("%d%d",&a,&b);
	c=a&b;
	printf("Bitwise AND:%d\n",c);
	c=a|b;
	printf("Bitwise OR:%d\n",c);
	c=a^b;
	printf("Bitwise Ex-or:%d\n",c);
	c=a<<b;
	printf("Bitwise Left shift:%d\n",c);
	c=a>>b;
	printf("Bitwise Right shift:%d\n",c);
	return 0;
}
