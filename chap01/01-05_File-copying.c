#include <stdio.h>

int main()
{
    int c,nl;
    nl = 0;
    
    //c = getchar();
/*  // New line count    
/*    while ((c=getchar()) != EOF){*/
/*        if (c == '\n'){*/
/*            ++nl;*/
/*        }*/
/*    }*/
/*    printf("%d\n",nl);*/

    c = getchar();
    while (c != EOF){
       putchar(c);
       c = getchar();
   }
   printf("End program properly\n");
}
