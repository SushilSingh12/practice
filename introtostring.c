#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  / char name[10]={'s','u','s','h','i','l','\0'};
    printf("%s\n",name);
    char name1[]={"sumanth"};
    printf("%s\n",name1);
    char name2[30]={"sumanth singh"};
    printf("%s\n",name2);
    char name3[]={"sunil shethy"};
    printf("%s\n",name3); 
   
//    finding the length of the string.
    char name4[]="Sushil Singh"; 
    int i;
    for(i=0;name4[i]!='\0';i++)
    {
        

    }
    printf("length of the string is %d \n",i);
     
    

//  changing the program from upprer case to lower case and viceversa

   char name5[]="WELCOME";
   int i;
   for(i=0;name5[i]!='\0';i++)
   {
       name5[i]=name5[i]+32;
   }
   printf("%s\n",name5);
   

// Toggle the  alphabets(changing uper case to lower case and vice versa at a single scan).
  char name6[]="wElcoMe";
  int i;
  for(i=0;name6[i]!='\0';i++)
  {
      if(name6[i]>='A' && name6[i]<='Z')
        name6[i]+=32;
     else if(name6[i]>='a' && name6[i]<='z')
        name6[i]-=32;
  }
  printf("%s\n",name6);
  
    return 0;
}