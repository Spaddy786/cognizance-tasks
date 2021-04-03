#include <stdio.h>

int main()
{
    int i,num,d;
    printf("no of steps:\n");
    scanf("%d",&num);
        if(num%5==0)
        {
            d=num/5;
            printf("%d",d);

        }
        else{
            d=num/5;
            d=d+1;
            printf("%d",d);
            return 0;
        }
}        
        