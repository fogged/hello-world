#include <stdio.h>
#include <string.h>

#define MAX 254

void escape(char*, char*);

int main(){
	char input[MAX], output[MAX*2];
	printf("Input:");
	fgets(input, sizeof(input), stdin);
	escape(input,output);
	printf("\noutput:\n\t%s\n", output);

	return 0;
}

void escape(char *s, char *x){
	int len, i, j;
	len = MAX;
	for (i = j = 0; i < len; i++){
		switch (s[i]){
		case '\n': x[j] = '\\';
			x[j+1] = 'n';
			j++;
			break;
		case '\t': x[j] = '\\';
			x[j+1] = 't';
			j++;
			break;
		case ' ': x[j] = '\\';
			x[j+1] = ' ';
			j++;
		default:
			x[j] = s[i];
		}
//		printf("%c [%d,%d]\n", x[j], i, j);
		j++;
	}
}
