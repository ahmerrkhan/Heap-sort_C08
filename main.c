#include<stdio.h>
#include <stdlib.h>

//C program of Heap Sort
void main(void)
{
 int arr[100],n,temp,last,i;

 printf("Enter no. of Elements: \n");
 scanf("%d",&n);

 printf("Enter %d Elements :\n",n);
 for(i=1;i<=n;i++)
 {
  scanf("%d",&arr[i]);
 }

 /*Base logic Starts here */
 arr[0]=n;
 _Heapsort(arr);

 while(arr[0] > 1)
 {
    last=arr[0];
    temp=arr[1];
    arr[1]=arr[last];
    arr[last]=temp;
    arr[0]--;
    adjust(arr,1);
}
    //Logics Ends

 printf("After Sorting : \n");
 for(i=1;i<=n;i++)
 {
   printf("%d\t",arr[i]);
 }

}  ///////////////////////////

void _Heapsort(int arr[])
{
    int i,n;
    n=arr[0];
    for(i=n/2; i>=1 ;i--)
    {
     adjust(arr,i);
    }
}

void adjust(int arr[],int i)
{
    int j,temp,n,k=1;
    n=arr[0];

    while(2*i<=n && k==1)
    {
       j=2*i;
       if(j+1<=n && arr[j+1] > arr[j])
          {
              j=j+1;
          }
       if( arr[j] < arr[i])
       {
           k=0;
       }
       else
       {
           temp=arr[i];
           arr[i]=arr[j];
           arr[j]=temp;
           i=j;
        }
    }
}
/* program end here */
