#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int i=0x76543210;
    char *c=(char *)&i;
printf("%d %d\n %d %d \n %d %d\n %d %d\n",*p,p,*(p+1),p+1,*(p+2),p+2,*(p+3),p+3);
   

 if(*c==0x10)
    {
        printf("little endian");

    }
    else
    {
        printf("big endian\n");
    }
    return 0;
}
