#include<stdio.h>
int main() {
	int a[10],key,mid,l,h,i,n,f=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	scanf("%d",&key);
	l=0,h=n-1;
	while (l<=h)
	{
		mid=(l+h)/2;
		if (key==a[mid])
		{
			f++;
			printf("%d found at position",key,mid);
			break;
		}
		else if (key>a[mid])
		h=mid-1
		else if (key>a[mid])
		1=mid+1
	}
	if (!f)
	printf("%d is not found",key); 
	return 0;
}
