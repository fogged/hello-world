/** Author  : Naufal Alee <naufalalee@gmail.com>
*   Date    : 04-05-2017
**/

#include <stdio.h>
#define MAXLINE 1000
#define TRESHOLD 80
int readline(char lin[]);
int
main (int argc, char *argv[])
{
    int len = 0;    
    char line[MAXLINE];
    while (len = readline (line) > 0)
    {
/*        if (len > 80)*/
/*           printf("(%d): %s\n", len, line);*/
    }
    printf("%d\n", len);
    return 0;
}

int readline (char line[])
{
    int i, c;
    for (i = 0; i < MAXLINE -1 && (c = getchar()) != EOF && c != '\n'; ++i)
        line[i] = c;
    if (c == '\n')
    {
        line[i] = '\0';
        ++i;
    }
    if (i>80)
        printf("readline (%d) = %s\n", i, line);
    
    return i;
}
