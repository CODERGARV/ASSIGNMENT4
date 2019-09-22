#include<stdio.h>
int main()
{ for(int i=0;i<=100;i++)//maximum limit is not givin so i am taking as 100
        {if((i%3==0 || i%5==0) && i%15!=0)
                printf("\n%d",i);
        }
}

