#include<stdio.h>
int main(){
	int a[10],n,i,key,found=0;
	printf("Enter n value");
	scanf("%d",&n);
	printf("Enter array elements: ");
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter key value: ");
	scanf("%d",&key);
	for(i=0;i<n;i++)
	{
		if (key==a[i])
		{
			printf("Element found at index: %d",i);
			found=1;
			break;
		}
	}
	if(found==0)
	{
		printf("Element not found");
	}
	return 0;
}
