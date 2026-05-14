#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <windows.h>

void main(){
	SetConsoleOutputCP(CP_UTF8);
	int matriz[5][5];
	int x, y;
	int num;
	int i, j;
	int resp = 0;
	
	srand(time(NULL));
	for(i=0; i<5; i++){
		for(j=0; j<5; j++){
			matriz[i][j] = rand() % 101;
			printf("%d\t", matriz[i][j]);
		}
		printf("\n");	
	}
	
	printf("\nDigite um número:\n");
	scanf("%d", &num);
	
	for(i=0; i<5; i++){
		for(j=0; j<5; j++){
			if(num == matriz[i][j]){
				x = i;
				resp++;
				y = j;
				resp++;
				printf("Seu número existe e estão na coluna %d, e na linha %d\n", y+1, x+1);
			}
		}
	}
	if(resp == 0){
		printf("Seu número não existe.");
	}	
	getch();
}
