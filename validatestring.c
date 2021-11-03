#include <stdio.h>
#include <stdlib.h>
#include <String.h>

int valid(char A[])
{
    int i;
    for(i=0;A[i]!='\0';i++)
{
    if((A[i]>='A' && A[i]<='Z')||(A[i]>='a' && A[i]<='z')||(A[i]>=48 && A[i]<=57))
        return 1;
    else 
        return 0;
        
}

}

int main()
{
char *A="sushilsingh";
if(valid(A))
    printf("valid String\n");
else
    printf("Invalid String\n");
return 0;
}