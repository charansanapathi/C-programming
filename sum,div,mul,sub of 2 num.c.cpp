#include <stdio.h>

int main()
{
	int a,b,sum,sub,mul;
	float div;
	scanf("%d%d",&a,&b);
    sum=a+b;
    sub=a-b;
    mul=a*b;
    div=a/b;
    printf("sum is :%d\n",sum);
    printf("subtraction is :%d\n",sub);
    printf("multiplication is :%d\n",mul);
    printf("division :%f",div);

    return 0;
}
