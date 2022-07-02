#include<stdio.h>
int main()
{
	int m,n,p,q;
	printf("Enter rows and columns of first\n");
	scanf("%d%d",&m,&n);
	printf("Enter rows and columns of second\n");
	scanf("%d%d",&p,&q);
	if (n!=p)
	{
		printf("multiplication not pposssible &end the program");
		return 1;
	}
	int a[m][n];
	int b[p][q];
	int c[m][q];
	int i,j,k;
	printf("Enter elements into matrix a\n");
	for (i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	} 
	
	printf("Matrix a\n");
	for (i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	} 
	
	printf("Enter elements into matrix b\n");
	for (i=0;i<p;i++)
	{
		for( j=0;j<q;j++)
		{
			scanf("%d",&b[i][j]);
		}
	} 
	printf("Matrix b\n");
	for (i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
		{
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	} 
	
	//Matrix  multiplication
	for(i=0;i<m;i++)
	{
	for(j=0;j<n;j++)
	{
	int sum=0;
	for(k=0;k<p;k++)
	{
	sum=sum+a[i][k]*b[k][j];
	c[i][j]=sum;
	}
	}
	}
	printf("\n Resultant matrix\n");
	for(i=0;i<m;i++)
	{
	for(j=0;j<q;j++)
	{
	printf("%d\t",c[i][j]);
	}
	printf("\n");
	}
	
	return 0;
}
	
	

	

