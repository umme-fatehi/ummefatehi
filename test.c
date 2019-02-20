
#include <stdio.h>
#include <stdlib.h>
int *myfunc(void);
void pattern(int **);
int main()
{
   int **ptr=myfunc();
   for(int i=0;i<10;i++)
   {
   for(int j=0;j<5;j++)
   {
      printf("%d ",ptr[i][j]);
   }
   printf("\n");
   }
   pattern(ptr);
   return 0;
   } 

int *myfunc()
{

int t=1;
int **iptr=malloc(10*sizeof(int));
for(int i=0;i<10;i++)
{
    iptr[i]=malloc(5*sizeof(int));
}
for(int i=0;i<10;i++)
{
    for(int j=0;j<5;j++)
    {
     *(*(iptr+i)+j)=t;
    }
    t++;
    printf("\n");
}
   return iptr;
}


/******************************************************************************
*                      Internal functions

* Name: pattern(int ** iptr)
* Description:  prints pattern in place of data.
******************************************************************************/

void pattern(int ** iptr)
{

    for(int i=1;i<(*(iptr+i)+0);i++)
    {

        for(int j=1;j<i;j++)
            {
                printf("* ");
            }
            printf("\n");
    }
}


/******************************************************************************
*                      End of File
******************************************************************************/

