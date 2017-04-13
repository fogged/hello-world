#include <stdio.h>

void main(){
	int Cel,step;
	int Fah;
	printf("%d\t%d\n",1,5*(1-32)/9);
	for(Cel=20;Cel<=300;Cel+=20){
	    Fah = 5*(Cel-32)/9;
	    printf("%d\t%d\n",Cel,Fah);
    }
}
