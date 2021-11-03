#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 int main()
 {
//      char A[]="sushil";
//      char B[10];
//      int i;
//      for(i=0;A[i]!='\0';i++)
//      {
        
//      }
//       i=i-1;
//       int j;
//       for(j=0;i>=0;i--,j++)
//       {
//           B[j]=A[i];
//       }
//       B[j]='\0';
//       printf("the reverse string is %s\n",B);  
//  }
 // second method to reverse the string.

 char C[]="sushil";
 char t;
 int i,j;
 for(j=0;C[j]!='\0';j++)
 {
 }
 j=j-1;
 for(i=0;i<j;i++,j--)
 {
     t=C[i];
     C[i]=C[j];
     C[j]=t;
 }
 printf("%s\n",C);
 
 }


