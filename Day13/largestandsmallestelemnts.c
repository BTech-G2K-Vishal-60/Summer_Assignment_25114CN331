#include<stdio.h>

int main(){
    int n,a[100];
    printf("Enter number of elements:\n");
    scanf("%d",&n);
    printf("Enter elements of array\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    int max = a[0],min = a[0];
    for (int i = 0; i <= n-1; i++)
    {
        if(a[i]>max){
            max=a[i];
        }
        if(a[i]<min){
            min = a[i];
        }
    }
   printf("Largest element of the array is %d\n",max);
    printf("Smallest element of the array is %d\n",min);
    return 0;
}