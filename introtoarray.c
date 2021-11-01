#include <stdio.h>
#include <stdlib.h>
/**
int main()
{
    
        int A[5]={3,2,4,5,0};
        int *p;
        int i;
        p=(int*)malloc(5*sizeof(int));
         p[0]= 6;
         p[1]=7;
         p[2]=8;
         p[3]=10;
         p[4]=11;

        for(i=0;i<5;i++)
            printf("%d\n",A[i]);
        printf("\n..................................\n");
        for(i=0;i<5;i++)
            printf("%d\n",p[i]);
        
     return 0;
}
**/


// Dynamic memory allocation using index
int main()
{
    int *p,*q;
    p=(int*)malloc(5*sizeof(int));
    p[0]=2,p[1]=3,p[2]=5,p[3]=6,p[4]=8;
    
      q=(int*)malloc(5*sizeof(int));
      
      for(int i=0;i<5;i++)
      q[i]=p[i];
      free(p);
      p=q;
      q=NULL;
      for(int i=0;i<5;i++)
      printf("%d\n",p[i]);
      return 0;

}