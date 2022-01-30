#include "stdio.h"

void swap_int(int* var1,int* var2){
	*var1+= *var2;
	*var2 = *var1 -  *var2;
	*var1 -= *var2;
	return;
}
int main(){

	int x = 2;
	int y = 4;
	printf("X = %d, Y = %d\n", x , y);
	swap_int(&x,&y);
	printf("variables swapped \n");
	printf("X = %d, Y = %d\n", x, y);
	return 0;
}
