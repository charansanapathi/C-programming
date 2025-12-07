#include<stdio.h>
int gcd(int a,int b)
{
	int  i,g=1;
	for(i=2;i<=a&&i<b;i++)
	{
		if(a%i==0&&b%i==0)
		g=i;
	}
	return g;
}
int lcm(int a, int b)
{
	return (a*b)/gcd(a,b);
}
  int main()
  {
  	int a,b;
  	printf("enter a,b values ");
  	scanf("%d%d",&a,&b);
  	printf("LCM of %d and %d is: %d",a,b,lcm(a,b));
     return 0;
   }
