#include<stdio.h>

void main()
{
    int id;
    id=fork();

    if(id>0)
    {
        printf("Parent will sleep");
        sleep(10);
    }
    if(id==0)
        printf("I am child");
}
