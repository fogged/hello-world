#include <stdio.h>
#define MAXLINE 1024
void squeeze(char s1, char str_s2[]);
int any(char s1, char str_s2[]);
int main(){
    char str_s2[MAXLINE];
    char s1;
    int found;
    printf("enter string: ");
    scanf("%s", str_s2);
    printf("enter char: ");
    scanf(" %c", &s1);
    //squeeze(s1,str_s2);
    found = any(s1, str_s2);
    //printf("%s\n", str_s2);
    if (found > 0)
        printf("found = %d\n", found);
    else
        printf("not found\n");
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
int any(char s1, char str_s2[]){
    int i;
    for (i = 0; str_s2[i] != '\0'; i++){
        if (str_s2[i] == s1)
            return i+1;
    }
    return -1;
}
