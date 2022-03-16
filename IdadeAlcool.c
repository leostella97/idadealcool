#include <stdio.h>
int main(){
	int idade;
	printf("Insira sua idade: ");
	scanf ("%d", &idade);
	if (idade<18){
		printf("Nao pode ingerir bebida alcoolica ou utilizar o uso de nicotina");
	} else {
		printf("Pode encher a cara com vontade, so vamo!!");
	}
	getch();
}



