#include "stdio.h"
#define n 4
int main(){
	

	//const int n = 5;
	int a[n] = {4,6,2,8};
	int b[n];
	for(int i = 0; i < n; i++){
		b[i] = 1;
		for(int j = 0; j < n; j++){
			if(j !=i){
				b[i]*=a[j];
			}
		}
	}

	for(int i = 0; i < n; ++i){
		printf("%d ", b[i]);
	}
}
