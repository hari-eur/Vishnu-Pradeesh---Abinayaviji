#include<stdio.h>
int main()
{
	int arr[] = {1,2,3,4,5,6,7,8,9,0};
	int *ptr;
	ptr = &arr;
	int i;
	for(i=0;i<10;i++)
		printf("%d ",*(ptr+i));
	return 0;
}
