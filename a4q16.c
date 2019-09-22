#include<stdio.h>
int main()
{ int a,b;
     for(int i=0;i<=100;i++)//maximum limit is not givin so i am taking as 100
        {if(i/10%3!=0 && i%2==0)
                printf("\n%d",i);
        }
}

