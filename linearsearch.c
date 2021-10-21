#include <stdio.h>
 struct Array{
    int A[10];
    int size;
    int length;

};
void Display(struct Array arr)
{
    int i;
    printf("\n Elements in the table are:\n");
    for(i=0;i<arr.length;i++)
    printf("%d ",arr.A[i]);
    
    
} 
void swap(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
}
int LinearSearch(struct Array arr,int key)
{
    int i;
    for(i=0;i<arr.length;i++)
    {
        if(key==arr.A[i])
        return i;
    }
    return -1;
}
int main()
{
    struct Array arr={{3,4,5,6,7},10,5};
    printf("%d\n",LinearSearch(arr,7));
    Display(arr);
    return 0;
}