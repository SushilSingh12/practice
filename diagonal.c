#include <stdio.h>
struct matrix
{
    int A[10];
    int n;

};


void set(struct matrix *m,int i,int j,int x)
{
    if(i==j)
        m->A[i-1]=x;
    
}
int get(struct matrix m,int i,int j)
{
    if(i==j)
        return m.A[i-1];
    else
        return 0;
}
void Display(struct matrix m)
{
    int i,j;
    for(i=0;i<m.n;i++)
    {
        for(j=0;j<m.n;j++)
        {
            if(i==j)
                printf("%d ",m.A[i]);
            else
                printf("0 ");

        }
        printf("\n");
    }
}
int main()
{
    struct matrix m;
    m.n=6;
    set(&m,1,1,5);
    set(&m,2,2,6);set(&m,3,3,7);set(&m,4,4,9);set(&m,5,5,2);set(&m,6,6,10);
    Display(m);
    printf("%d\n ",get(m,2,2));
    printf("%d\n",get(m,5,5));
    return 0;
}