/** Author  : Naufal Alee <naufalalee@gmail.com>
*   Date    : 23-04-2017
**/

#include <stdio.h>

#define MAX_LENGTH 15
int main()
{
	unsigned long c;
	int len[MAX_LENGTH];
	int i, j, wc, space, max;
	
	wc = space = max = 0;
	for (i = 0; i< MAX_LENGTH; ++i)
		len[i] = 0;

	while ((c = getchar()) != EOF){
        if (space == 1){   
		    if (c != ' ' && c != '\n')
		    {
			    ++wc;
		    }
	    }
	    else
	    {   
	        if (c == ' ' || c == '\n'){
	            ++len[wc];
			    wc = 0;
		    }
		    else if (c != ' ' && c != '\n')
		    {
		        ++wc;
		    }
	    }	
		
		if (c == ' ' || c == '\n')
		{
		    space = 1;
		}
		else
		{
		    space = 0;
	    }
	}

	printf("Frequency of world length =\n");


	for (i = 0; i < MAX_LENGTH; ++i)
	{
		printf(" %2d", len[i]);
		if (len[i] > max)
		    max = len[i];
	}
	printf("\n");
	
	for (j = 0; j < max; ++j){
	    for (i = 0; i < MAX_LENGTH ; ++i){
	        if ((len[i] - (max - 1)) > 0)
	        {
	            printf("  X");
            }
            else
            {
                printf("  .");
                ++len[i];
            }
            	    
        }
        printf("\n");
    }
	for (i = 0; i < MAX_LENGTH; ++i)
	    printf(" %2d", i);
	printf("\n");
}
