#include<stdio.h>
int put_int_sum(int a, int b)
{
    int r=a+b;
    if(r == 0) return r;
    printf("%d\n",r);

    return r;
}
int main()
{
    int a, b;
    while(scanf("%d%d", &a, &b))
        if(put_int_sum(a, b) == 0)
            break;
    return 0;
}
/**************************************************************
	Problem: 1240
	User: 201601011420
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

