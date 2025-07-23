#include <stdio.h>
#include <stdlib.h>

#include"defaultview.h"
#include"registration.h"
int main()
{
    printf("Hello world!\n");
    defaultPage();
    int x;
   scanf("%d",&x);
   if(x==1){
    registerPatient();
    }


    return 0;
}
