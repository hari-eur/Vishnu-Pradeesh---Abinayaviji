#include<stdio.h>
int main()
{
	int n,m,num;
	printf("ENTER THE DIMENSION : ");
	scanf("%d",&n);
	printf("ENTER THE NUMBER TO BE REPLACED : ");
	scanf("%d",&m);
	int arr[n][n];
	int i,j;
	printf("ENTER THE NUMBERS IN THE ARRAY : ");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&num);
			arr[i][j] = num;
			
		}
	}
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(m == arr[i][j] && i>0)
			{
				arr[i][j] = arr[i-1][j];
			}
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
