#include <stdio.h>

#define IN 1
#define OUT 0

int
main (int argc, char *argv[])
{
    int c, nl, nw, nc, state, dl;
    
    state = OUT;
    dl = OUT;
    nl = nw = nc = 0;
    while ((c = getchar()) != EOF){
        if (state == IN)
        {
            dl = IN;
            if (c != ' ' && c != '\t')
            {
                if (dl ==IN)
                    printf("\n");
                dl = OUT; 
                putchar(c);
            }
        }
        else
        {   
            
            putchar(c);
        }        
        if (c == ' ' || c == '\t')
        {
            state = IN;
        }
        else
        {
            state = OUT;
        }
    }
    return 0;
}
