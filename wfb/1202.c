#include <stdio.h>

int is_swapped(int * a, int * b)
{
	if(*a > *b)
	{
		int *t = a;
		a = b;
		b = t;
		return 1;
	}
	return 0;
}
int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    if(is_swapped(&a, &b))
        printf("%d %d YES", b, a);
    else
        printf("%d %d NO", a, b);
}
/**************************************************************
	Problem: 1202
	User: 201601011420
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

