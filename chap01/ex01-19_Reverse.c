/** Author  : Naufal Alee <naufalalee@gmail.com>
*   Date    : 04-05-2017
**/

#include <stdio.h>
#define MAXLEN 1024

int readline(char line[]);
void reverse(char line[]);
void printline(char line[]);
int
main (int argc, char *argv[])
{
    int i, len;
    char line[MAXLEN];
    while( len = readline(line) > 0)
    {
        reverse(line);
        printline(line);
    }
    
    return 0;
}
int readline (char line[])
{
    int i, c;
    for (i = 0; i < MAXLEN -1 && (c = getchar()) != EOF && c != '\n'; ++i)
        line[i] = c;
    if ( c == '\n')
    {
        line[i] = '\0';
        ++i;
    }
    return i;
}
void reverse (char line[])
{
    int i, j;
    i = 0;
    char temp[MAXLEN];
    while ( line[i] != '\0')
    {
        temp[i] = line[i];
        ++i;
    }
    temp[i] = '\0';
    for (j = 0; j <= i; ++j)
        line[j] = temp[i-j-1];
}
void printline(char line[])
{
    printf("%s\n", line);
}
