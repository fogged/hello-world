/** Author  : Naufal Alee <naufalalee@gmail.com>
*   Date    : 23-04-2017
**/

#include <stdio.h>

int main()
{
	unsigned long c;
	int len[10];
	int i, j, wc, space, max;
	
	wc = space = max = 0;
	for (i = 0; i< 10; ++i)
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


	for (i = 0; i < 10; ++i)
	{
		printf(" %d", len[i]);
		if (len[i] > max)
		    max = len[i];
	}
	printf("\n");
	
/*    for (i = 0; i < 01; ++i)*/
/*    {*/
/*        if (len[i] > max)*/
/*            max = len [i];*/
/*    }*/
	for (j = 0; j < max; ++j){
	    for (i = 0; i < 10 ; ++i){
	        if ((len[i] - (max - 1)) > 0)
	        {
	            printf(" |");
            }
            else
            {
                printf("  ");
                ++len[i];
                
            }
            	    
        }
        printf("\n");
    }
	for (i = 0; i < 10; ++i)
	    printf(" %d", i);
	printf("\n");
}
