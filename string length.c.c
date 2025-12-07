#include<stdio.h>
int main()
{
	char a[30];
	int i;
	scanf("%[^\n]s",&a);
	for(i=0;a[i]!='\0';i++)
	i++;
	printf("%d",i);
	return 0;
}
