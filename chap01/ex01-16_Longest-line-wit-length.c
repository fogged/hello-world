/** Author  : Naufal Alee <naufalalee@gmail.com>
*   Date    : 03-05-2017
**/

#include <stdio.h>
#define MAXLINE 1000

int getlin(char line[], int maxline);

void copy(char to[], char from[]);

int
main (int argc, char *argv[])
{
    int len;
    int max;
    char line[MAXLINE];
    char longest[MAXLINE];
    
    max = 0;
    while ((len = getlin (line, MAXLINE)) > 0)
        if (len > max)
        {
            max = len;
            copy (longest, line);
        }
    if (max > 0)
        printf("the longest line (%d): \"%s\"\n", max, longest);
    return 0;
}

int getlin(char s[], int lim)
{
    int c, i;
    for (i = 0; i < lim -1 && (c = getchar()) != EOF && c != '\n'; ++i)
        s[i] = c;
    if (c == '\n')
    {
        s[i] = '\0';
        ++i;
    }
    return i;
}

void copy (char to[], char from[])
{
    int i;
    
    i = 0;
    while ((to[i] = from[i]) != '\0')
        ++i;
}
