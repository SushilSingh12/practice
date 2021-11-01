#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*int arr[]={1,2,3,4,5,7,8,9,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    int m=n+1;
    int total=m*(m+1)/2;
   int sum=0;
   int i;
    for(i=0;i<n;i++)
        sum=sum+arr[i]; */
   /*     int l,h,diff,i,n;
    int arr[]={3,4,5,6,8,10,11,12};
    
    n=8;
    diff=3-0;
    i=3;
    h=12;
    
    for(i=0;i<n;i++)
    {
        if(arr[i]-i!=diff)
        {
        while(diff<arr[i]-i)
        {
            printf("%d\n",i+diff);
            printf(" missing elements is %d\n",i+diff);
            diff++;
        
        }
        }
    }*/
    /*
    int arr[]={3,4,5,5,8,9,9,12,14};
    int i,n=8;
    int lastDuplicate=0;
    
    for(i=0;i<n;i++)
    {
        if(arr[i]==arr[i+1] && arr[i]!=lastDuplicate)
        {
            printf("%d\n",arr[i]);
            lastDuplicate=arr[i];
        }
    }*/

/*int arr[]={3,3,5,5,9,9,9,12,14};
int i,j,n;
n=8;
for(i=0;i<=n-1;i++)
{
    if(arr[i]==arr[i+1])
    {
        j=i+1;
        while(arr[j]==arr[i])
            j++;
        printf("%d is appearing %d times\n",arr[i],j-i);
        i=j-1;
    }
}
*/

/*
// finding the sum of two pair of element.
int i,j,n;
int arr[]={2,4,5,6,7,8,9};
n=8;
int sum=10;
for(i=0;i<n-1;n++)
{
    for(j=i+i;j<n;j++)
    {
        if(arr[i]+arr[j]==sum)
            printf("%d+%d=%d\n",arr[i],arr[j],sum);

    }
    break;
    
}  */


/*
// finding sum of pair of element using pair of element in sorted array

int arr[]={1,2,4,5,6,7,8,9};
int n=9;
int k=10;
int i,j=n-1;


while(i<j)
{
    if(arr[i]+arr[j]==k)
    {
        printf("%d+%d=%d\n",arr[i],arr[j],k);
        i++;
        j--;
    }
    else if(arr[i]+arr[j]<k)
        i++;
    else
    j--;
}

*/


// finding the min and max in the single scan

int max,main,i,min;
int arr[]={7,6,5,4,3,2,1};
int n=8;
max=arr[0];
min=arr[0];
for(i=0;i<n-1;i++)
{
    if(arr[i]<min)
        min=arr[i];
    else if(arr[i]>max)
        max=arr[i];
}
printf("%d %d\n",min,max);

    
/*
//finding the duplicate in unsorted array
int arr[]={3,4,5,6,9,9,9,12,14};

int i,n,count,j;
n=8;
for(i=0;i<n-1;i++)
{
    count=1;
    if(arr[i]!=-1)
    {
        for(j=i+1;j<n;j++)
        {
        if(arr[i]==arr[j])
        {
            count++;
            arr[j]=-1;
        }
        }
    
        if(count>0)
         printf("%d %d\n",arr[i],count);
}
}*/



/*
finding the duplicate using hash function
int H[20]={0};
int i,j,n;
int l,h;

n=8;
for(i=0;i<=n;i++)
{
    H[arr[0]]++;
    
    
}
int max=20;
for(i=0;i<=max;i++)
{
    if(H[i]>1)
        printf("%d%d\n",i,H[i]);
}*/

    return 0;

}