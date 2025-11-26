#include<stdio.h>
int main()
{
	char  a[30];
	int i,v=0,c=0,d=0,s=0;
	scanf("%[^\n]s",&a);
	for(i=0;a[i]!='\0';i++)
	{
		if (a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
		v++;
		else if(a[i]==' ')
		s++;
		else if(a[i]>='0'&&a[i]<='9')
		d++;
		else
		c++;
    }
    printf("Vowels are:%d\n Constants are:%d\n Digits are:%d\n symbols are:%d\n",v,s,d,c);
    return 0;
}
