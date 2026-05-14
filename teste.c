#include <stdio.h>
#include <time.h>
#include <stdlib.h>
void main(){
	int resp, num;
	int i, vet[2];
	srand(time(NULL));
	for(i=0; i<2;i++){
		vet[i]= rand() % 101;
	}
	printf("Digite um número entre 0 e 100:\n");
	scanf("%d ", &resp);
	if(resp == vet[i]){
		printf("Vo~ce acertou!!!");
	}else{
		printf("Você errou!!!");
	}
	getch();
}
