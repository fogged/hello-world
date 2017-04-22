#include <stdio.h>

int main()
{
    int c,nl;
    nl = 0;
    
    //c = getchar();
    while ((c=getchar()) != EOF){
        if (c == '\n'){
            ++nl;
        }
    }
    printf("%d\n",nl);
}
