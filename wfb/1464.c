#include<stdio.h>
int put_sum(int a, int b)
{
    printf("%d\n",a+b);

    return 0;
}

int main()
{
    int a, b;

    while(scanf("%d%d", &a, &b) != EOF)
        put_sum(a, b);

    return 0;
}
/**************************************************************
	Problem: 1464
	User: 201601011420
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

