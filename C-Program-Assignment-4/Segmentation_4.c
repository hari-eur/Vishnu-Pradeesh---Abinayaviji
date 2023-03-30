#include<stdio.h>
int main()
{
	char* str;
    str = "ABCD";
    *(str + 1) = 'n';
    return 0;
}

