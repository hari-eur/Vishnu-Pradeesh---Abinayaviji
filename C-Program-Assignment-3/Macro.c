#include<stdio.h>
#define data "all"
#define get_data(data_1,data_2) (printf("Hello to %s\nWelcome to %s\n",data_1,data_2))
int main()
{
	printf("Welcome to %s\n",data);
	get_data("Everybody","Everyone");
	return 0;
}
