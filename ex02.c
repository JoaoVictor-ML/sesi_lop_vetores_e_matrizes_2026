#include <stdio.h>
#include <time.h>
#include <stdlib.h>
void main(){
	srand(time(NULL));
	int vet[25];
	for(int i = 0; i<25; i++){
		vet[25] = rand() % 101;
		printf("%d,", vet[25]);
	}
	getch();
}