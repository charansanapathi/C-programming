#include<stdio.h>
int main()
{
int a[10][10],t[10][10],i,j,r,c;
printf("Enter row and coloumn values\n");
scanf ("%d %d",&r,&c);
printf("Enter A matrix elements \n");
for (i=0;i<r;i++)
{
	for(j=0;j<c;j++)
	{
		scanf("%d",&a[i][j]);
	}
}
for (i=0;i<r;i++) {
	for(j=0;j<c;j++) {
		t[j][i]=a[i][j];
	}
}
		printf("Matrix Transpose is: \n");
		for (i=0;i<c;i++) {
			for (j=0;j<r;j++) {
				printf("%d\t",t[i][j]);
			}
			printf ("\n");
		}
		return 0;
	}

	
