#include <stdio.h>
#include <math.h>
int func(int num)
{
	if(num == 1) return num;
	if(num > 1) return num + func(num-1) ;
}
int main()
{
	int num;
	scanf("%d",&num);
    printf("%d\n",func(num));
    return 0;
}
