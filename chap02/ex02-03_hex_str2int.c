#include<stdio.h>
#include<ctype.h>

/* Write a function htoi(s), which converts a string of hexadecimal digits
   (including an optional 0x or 0X) into its equivalent integer value. The allowable digits are 0
   through 9, a through f, and A through F.
*/
#define MAXLINE 255
int islegit(char line[]);
int conv_hto(char line[]);
int main()
{
    int c;
    char line[MAXLINE];
    printf("Input hexadecimal number: ");
    scanf("%s", line);
    islegit(line);
    while (1)
    {
        if (!islegit(line))
        {
            printf("???\nInput hexadecimal number: ");
            scanf("%s", line);
        }
        else
        {
            c = conv_hto(line);
            printf("return number = %d\n", c);
            printf("Input hexadecimal number: ");
            scanf("%s", line);
        }
    }
    return 0;
}

int islegit(char line[])
{
    int i=0;
    if(line[0] == '0' && (line[1] == 'x' || line[1] == 'X'))
        i += 2;

    for (i; line[i] != '\0'; i++)
    {
        if (!(isdigit(line[i]) || (line[i] >= 'a' && line[i] <= 'f') || (line[i] >= 'A' && line[i] <= 'F')))
        {
            return 0;
        }
    }
    return i+1;
}
int conv_hto( char line[])
{
    int val = 0;
    int i = 0;
    int tresh = 0;
    //printf("debug[%d]\n", i);
    if(line[0] == '0' && (line[1] == 'x' || line[1] == 'X'))
        i += 2;
    for (i; line[i] != '\0'; i++)
    {
        if (line[i] > '9')
            tresh = 7;
        if (line[i] > 'Z')
            tresh = 39;
        val = val * 16 + ((line[i]-'0') - tresh);
        //printf("[str:%c:%d], [val:%d]\n", line[i], line[i]-'0', val);
    }
    return val;
}
