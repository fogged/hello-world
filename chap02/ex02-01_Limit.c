#include<stdio.h>
#include<limits.h>
// determine ranges of char, short, int and long [signed/unsigned]
int
main()
{
    char max_char, min_char;
    short max_short, min_short;
    int max_int, min_int;
    long max_long, min_long;
    unsigned char uchar;
    unsigned short ushort;
    unsigned int uint;
    unsigned long ulong;
    max_char = CHAR_MAX;
    min_char = CHAR_MIN;
    max_short = SHRT_MAX;
    min_short = SHRT_MIN;
    max_int = INT_MAX;
    min_int = INT_MIN;
    max_long = LONG_MAX;
    min_long = LONG_MIN;
    uchar = UCHAR_MAX;
    ushort = USHRT_MAX;
    uint = UINT_MAX;
    ulong = ULONG_MAX;

    printf("char = [%d,%d]\n",min_char,max_char);
    printf("short = [%d,%d]\n",min_short,max_short);
    printf("int = [%d,%d]\n",min_int,max_int);
    printf("long = [%ld,%ld]\n",min_long,max_long);
    printf("uchar = [0,%u]\n",uchar);
    printf("ushort = [0,%u]\n",ushort);
    printf("uint = [0,%u]\n",uint);
    printf("ulong = [0,%lu]\n",ulong);
    return 0;
}
