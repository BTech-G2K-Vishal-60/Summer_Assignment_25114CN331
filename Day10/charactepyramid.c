#include<stdio.h>
int main(){
    char a = 'A';
    for (int i = 1; i <=5; i++)
    {
        for (int j = 1; j <=5-i; j++)
        {
                printf(" ");
        }
            for (int k = 0; k < i; k++)
            {
            printf("%c",k+a);
            }
            for (int l = i-1; l >=1 ; l--)
            {
             printf("%c",a+l-1);
            }
        printf("\n");
    }
    
    return 0;
}