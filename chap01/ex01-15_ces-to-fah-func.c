/** Author  : Naufal Alee <naufalalee@gmail.com>
*   Date    : 03-05-2017
**/

#include <stdio.h>
float cel2fah (int cel);
int
main (int argc, char *argv[])
{
    int start, step, max, cel;
    float fah;
    start = 1;
    step = 20;
    max = 300;
    cel = 0;
    
    while (cel <= max){
        printf("%d\t%.2f\n", cel, cel2fah(cel));
        cel += step;
    }
    
    return 0;
}
float cel2fah (int cel)
{
    float fah;
    float temp;
    fah = 32.0 + (((float)cel * 9.0) / 5.0);
    return fah;
}
