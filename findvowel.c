#include <stdio.h>
#include <stdlib.h>
#include <String.h>

int main()
{
char A[]="WELCOME";
int vcount=0,Ccount=0;

int i;
for(i=0;A[i]!='\0';i++)
{
    if(A[i]=='a'||A[i]=='e'||A[i]=='i'||A[i]=='o'||A[i]=='u'||A[i]=='A'||A[i]=='E'||A[i]=='I'||A[i]=='O'||A[i]=='U')
        vcount++;
    

    else if((A[i]>='a' && A[i]<='z')||(A[i]>='A' && A[i]<='Z'))
        Ccount++;

}

printf("number of vowels is %d\n",vcount);
printf("Number of consonant is %d\n",Ccount);
    return 0;

}
