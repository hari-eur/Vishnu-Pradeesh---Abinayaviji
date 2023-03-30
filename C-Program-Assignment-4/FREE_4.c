#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *ptr;
	int n;
	printf("ENTER N VALUE : ");
	scanf("%d",&n);
	ptr = (int*) calloc(n,sizeof(ptr));
	int i;
	int sum =0;
	for(i=0;i<n;i++)
	{
		scanf("%d",ptr+i);
		sum = sum + *(ptr+i);
	}
	printf("%d",sum);
	free(ptr);
	return 0;
}
