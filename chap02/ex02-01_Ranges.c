#include<stdio.h>
// determine ranges of char, short, int and long [signed/unsigned]
int
main()
{
    unsigned long t_ulong, max_ulong, min_ulong;
    char t_char,max_char, min_char;
    short t_short, max_short, min_short;
    int t_int, max_int, min_int;
    long t_long, max_long, min_long;

    t_ulong = max_ulong = min_ulong = 0;
    t_char = max_char = min_char = 0;
    t_short = max_short = min_short = 0;
    t_int = max_int = min_int = 0;
    t_long = max_long = min_long = 0;

    while(t_int+1 != 0)
    {
        t_char++;
        //t_ulong++;
        t_short++;
        t_int++;
        //t_long++;

        if (t_char > max_char)
            max_char = t_char;
        if (t_char < min_char)
            min_char = t_char;
        //if (t_ulong > max_ulong)
        //  max_ulong = t_ulong;
        if (t_short > max_short)
            max_short = t_short;
        if (t_short < min_short)
            min_short = t_short;
        if (t_int > max_int)
            max_int = t_int;
        if (t_int < min_int)
            min_int = t_int;
        //if (t_long > max_long)
        //  max_long = t_long;
    }
    printf("char = [%d,%d]\n",min_char,max_char);
    printf("short = [%d,%d]\n",min_short,max_short);
    printf("int = [%d,%d]\n",min_int,max_int);
}
