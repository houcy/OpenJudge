#include<stdio.h>


int main()
{
    int m,n,x;
    scanf("%d%d%d",&m,&n,&x);
    double r = m*x;
    if(r>n) r *= 0.88;
    printf("%.2f",r);

        return 0;
}

/**************************************************************
	Problem: 1009
	User: 201601011420
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

