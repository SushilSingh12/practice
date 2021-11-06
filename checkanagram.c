#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char A[]="test";
    char B[]="ttew";
    int i,H[26]={0};

    for(i=0;A[i]!='\0';i++)
    {
        H[A[i]-97]+=1;
    }
    for(i=0;B[i]!='\0';i++)
    {
        H[B[i]-97]-=1;
        if(H[B[i]-97]<0)
        {
            printf("string is NOT ANAGRAM\n");
            break;
        }
    }
    if(B[i]=='\0')
        printf("string is ANAGRAM\n");
}