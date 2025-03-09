//Exercício 5 Terceira Lista

#include <stdio.h>
#include <conio.h>
#define TM 10

int main ()
{
	int vet[TM], vetp[TM], vetn[TM], pp=0, pn=0;
	for (int x = 0; x < TM; x++)
	{
		printf("Digite o valor para a posicao %i: ", x);
		scanf("%i", &vet[x]);
	}
	for (int x = 0; x < TM; x++)
	{
		if(vet[x]>=0)
		{
			vetp[pp]=vet[x];
			pp++;
		}
		else
		{
		vetn[pn] = vet[x];
		pn++;
		}
	}
	printf("Positivos: \n");
	for (int x = 0; x < pp; x++)
	{
		printf("Posicao: %i valor: %i\n", x, vetp[x]);
	}
	printf("Negativos: \n");
	for (int x = 0; x < pn; x++)
	{
			printf("Posicao: %i valor: %i\n", x, vetn[x]);	
	}
	getch();
}
