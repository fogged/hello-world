#include <stdio.h>

int
main (int argc, char *argv[])
{
    unsigned long c,d;
    int space;
    
    space = 0;
    c = getchar();
    while(c != EOF){
        
        if (space == 1)
        {
            if (c != ' ')
            {
                putchar(c);
            }
        }
        else
            putchar(c);
            
        if (c == ' ')
            space = 1;
        else 
            space = 0;
        c = getchar();
    }

    return 0;
}
