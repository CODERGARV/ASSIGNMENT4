#include<stdio.h>
int main()
{ for(int i=0;i<=100;i++)//maximum limit is not givin so i am taking as 100
        {if(i%10==0 || i%10==3 || i%10==6 || i%10==9)
                printf("\n%d",i);
        }
}

