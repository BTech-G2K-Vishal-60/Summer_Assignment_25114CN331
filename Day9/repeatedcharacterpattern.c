#include<stdio.h>

int main(){
    char a='A';
    for (int i = 1; i <=5; i++)
    {
        for (int j = 1; j<=i; j++)
        {
            printf("%c",a);
        }
        a++;
        printf("\n");
    }
    
    return 0;
}       