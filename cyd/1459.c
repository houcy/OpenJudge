#include<stdio.h>
  int main()
  {    int n,i,o=1,z,x;
      scanf("%d",&n);
      x=n;
      int a[n];
     while(n--)
      {scanf("%d",&a[o]);
      o++;}
      while(scanf("%d",&i)!=EOF)
      {    z=0;
          for(o=1;o<=x;o++)
           {if(i==a[o])
           {printf("%d\n",o);o=x+1;z=1;
           }
           }
           if(z==0) printf("NOT FOUND\n");
      }

 return 0;
  }

/**************************************************************
	Problem: 1459
	User: 201901061304
	Language: C
	Result: Accepted
	Time:12 ms
	Memory:748 kb
****************************************************************/

