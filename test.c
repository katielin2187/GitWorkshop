#include <stdio.h>
#include <stdlib.h>

int getMin(int x, int y){
	int min = 0;
	if(x<y){
		min = x;
	} else if(y<x){
		min = y;
	}

	return min;
}
