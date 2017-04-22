#include <stdio.h>
    
int
main (int argc, char *argv[])
{
    int blank,tab,nl;
    unsigned long c;
    
    blank = tab = nl =0;
    while ( (c = getchar()) != EOF){
        if (c == ' ')
            ++blank;
        if (c == '\t')
            ++tab;
        if (c == '\n')
            ++nl;
    }
    printf("blank = %d, tab = %d, nl = %d\n", blank, tab, nl);
    return 0;
}
