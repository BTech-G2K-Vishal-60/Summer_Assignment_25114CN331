#include<stdio.h>

int main(){
    int n,a[100];
    printf("Enter numbers of elements of array\n");
    scanf("%d",&n);
    printf("Enter the elements\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    int sum =0;
    printf("The sum of elements of array\n");
    for (int i = 0; i < n; i++)
    {
        sum+=a[i];
    }
    printf("%d\n",sum);
    printf("The average all elements of array\n%f",(float)sum/n);
    return 0;
}