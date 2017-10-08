#include <stdio.h>
#define MAXLINE 1024
void squeeze(char s1, char str_s2[]);
void book_sqeeze(char s[], char c);
int main(){
    char str_s2[MAXLINE];
    char s1;
    printf("enter string: ");
    scanf("%s", str_s2);
    //printf("%s\n", str_s2);
    printf("enter char: ");
    scanf(" %c", &s1);
    squeeze(s1,str_s2);
    //book_sqeeze(str_s2,s1);
    printf("%s\n", str_s2);
    return 0;
}
void squeeze(char s1, char str_s2[]){
    int i,j;
    for ( i = j = 0; str_s2[i] != '\0'; i++)
    {
        if (str_s2[j] == s1)
            j++;
        str_s2[i] = str_s2[j];
        j++;
    }
    str_s2[i] = '\0';
}
void book_sqeeze(char s[], char c){
    int i,j;
    for (i = j = 0; s[i] != '\0'; i++)
        if (s[i] != c){
            s[j++] = s[i];
            printf("match %c[%d]\n", c,i);
        }
    s[j] = '\0';
}
