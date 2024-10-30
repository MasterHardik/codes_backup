#include<stdio.h>
int main(){
    int i,j,number,temp,a[100];
    printf("\n\tBubble Sort without use of third variable");
    printf("\n\nEnter the size of array :");
    scanf("%d",&number);
    for(i=0;i<number;i++)
    {printf("\nEnter array elements");
    scanf("%d",&a[i]);
    }
    
    for(i=0;i<number-1;i++)
    {
       for(j=0;j<(number-1-i);j++)
     {
         if(a[j]>a[j+1])
     {
          a[j]=a[j]+a[j+1];
          a[j+1]=a[j]-a[j+1];
          a[j]=a[j]-a[j+1];
     }
     }
    }
    printf("\nAscending order sorted :");
   for(i=0;i<number;i++)
    {
        printf("%d,",a[i]);
        }
    printf("Descending order: ");
       for(i=number-1;i>=0;i--)
    {
        printf("%d,",a[i]);
        }
    return 0;
}