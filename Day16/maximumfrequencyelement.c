#include<stdio.h>

int main(){
    int a,arr[100],count;
    printf("Enter number of elements of array\n");
    scanf("%d",&a);
    printf("Enter element of array\n");
    for (int i = 0; i < a; i++)
    {
        scanf("%d",&arr[i]);
    }
    int fre =0,max;
    for (int i = 0; i < a; i++)
    {
        int count =1;
        for (int j = i+1; j <a; j++)
        {
            if (arr[i]==arr[j])
            {
                count++;
            }
            
        }
        if (count>fre)
        {
            fre=count;
            max=arr[i];
        }
        
    }
    printf("The element with max frequency is %d\n",max);
    printf("Frequency of element is: %d\n",fre);
    return 0;
}