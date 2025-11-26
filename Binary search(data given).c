#include<stdio.h>
int main()
{
	int a[]={2, 4, 6, 8, 10, 12, 14};
	int i,mid,f=0,key=4;
	int n=sizeof(a),l=0,h=n-1;
	for(i=0;i<n;i++) {
        mid=(l+h)/2;
	if(key==a[mid])
	{
		printf("Element is: %d",mid);
		f=1;
		break;
	}
	else if (key<a[mid])
	{
		l=mid+1;
	}
	else {
		h=mid-1;
	}
    }
    if (!f)
    printf("Invalid element");
    return 0;
}
