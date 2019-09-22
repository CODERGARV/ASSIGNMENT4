#include<stdio.h>
int main()
{ for(int i=0;i<=100;i++)//maximum limit is not givin so i am taking as 100
        {if(i<=50 && i%2==0 || i>=50 && i%2==1)
                printf("\n%d",i);
        }
}

