#include<stdio.h>
#include<stdlib.h>
int main()
{
	int A[10][10],B[10][10],C[10][10],r1,c1,r2,c2,i,j,k;
	printf("enter A matrix rows and column");
	scanf("%d%d",&r1,&c1);
	printf("enter B matrix rows and columns");
	scanf("%d%d",&r2,&c2);
	if(r1!=c2)
	{
		printf("matix multiplication is not possible");
		exit(1);
	}
	printf("enter A matrix values");
	for (i=0;i<r1;i++);
	{
		for(j=0;j<c1;j++);
		{
			scanf("%d",&A[i][j]);
		}
	}
	printf("enter B matrix values");
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			scanf("%d",&B[i][j]);
		}
	}
	     for(i=0;i<r1;i++);
	     {
	     	for(j=0;j<c1;j++)
	     	{
	     		C[i][j]=0;
	     		for(k=0;k<r2;k++)
				 {
	     			C[i][j] = C[i][j]+A[i][j]+B[i][j];
				 }
			 }
		 }
		 return 0;
		  
}
