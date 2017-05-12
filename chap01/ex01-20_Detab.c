#include<stdio.h>

#define MAXLINE 1000
int readline(char line[]);
int main()
{
    int len;
    char line[MAXLINE];
    len = readline(line);
    printf("%s%d\n", line, len);

}
int readline(char line[])
{
    int c,i,j;
    i = j = 0;
    while ((c = getchar()) != EOF)
    {
        if (c != '\t')
            line[i] = c;
        else
        {
            for(j = 0;j <4 ;++j)
            {
                line[i] = '_';
                ++i;
                //printf("_");
            }
            --i;
        }
        ++i;
    }
    line[i] = '\0';
    return i;
}
