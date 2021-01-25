#include <stdio.h>

int main()
{
 int arr[20],pos,i,num,n;
 printf("Enter the size of array\n");
 scanf("%d",&n);
 printf("Enter the elemnts of array\n");
 for(i=0;i<n;i++)
 {
     scanf("%d",&arr[i]);
 }
 for(i=0;i<n;i++)
  printf("%d\t",arr[i]);
  printf("\nEnter the number to be inserted in the  array\n");
   scanf("%d",&num);
    printf("Enter the position for the number to be inserted in the  array\n");
     scanf("%d",&pos);
   for(i=n;i>=pos;i--)
   {
       arr[i+1]=arr[i];
      
   }
    arr[pos]=num;
       
   for(i=0;i<n+1;i++)
    printf("%d\t",arr[i]);
   
   
   
}
