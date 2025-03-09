//Game do labirinto
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#define ACIMA 'w' 
#define ABAIXO 's'
#define DIREITA 'd' 
#define ESQUERDA 'a'  
int main(void)
{
	int m,n,i,j;//m e n s�o linhas e colulas, respectivamente, da matriz
	char tecla; //vari�vel tecla � que guarda a informa��o da dire��o(abaixo, acima, direita, esquerda)
	
//a variavel abaixo � o mapa do labirinto
	char labirinto [7][16]={'1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1',
							'@',' ','1',' ',' ',' ','1','1',' ',' ',' ',' ',' ','1','1','1',
							'1',' ','1','1','1',' ','1','1',' ','1','1','1',' ','1','1','1',
							'1',' ',' ',' ',' ',' ',' ',' ',' ','1',' ','1',' ',' ',' ','1',
							'1',' ','1','1','1',' ','1','1',' ','1','1','1','1','1','1','1',
							'1',' ',' ',' ',' ',' ','1','1',' ',' ',' ',' ',' ',' ','1','1',
							'1','1','1','1','1','1','1','1','1','1','1','1','1',' ','1','1'};

//m e n indicam onde a "pessoa" = @, vai comecar no labirinto
	m=1;
	n=0;
//O jogo s� termina quando o jogador encontrar a sa�da
	while(1) //enquanto essa op��o for verdadeira, o programa ser� rodado.
	{
		for(i=0;i<7;i++)  
		{
			for(j=0;j<16;j++)
			{
				printf("%c",labirinto[i][j]); //imprimir o labirinto na tela
			}
			printf("\n");

		} 
//A cada comando do teclado (do jogador), � preciso alterar o local novo e local antigo do '@'
//Se a condi��o for aceita, o '@' s� se movera se o programa achar o ' ' (espaco). 

		tecla = getch(); //� s� teclar a dire��o, sem precisar teclar enter
		if ( tecla == ABAIXO ) //Se a tecla for s, ent�o soma a linha
		{
			m = m + 1; 
			if(labirinto[m][n] == ' ') // se a posi��o for ' ' (espa�o), o '@' ocupa ele e onde o '@' estava vira ' '(espa�o)
			{
				labirinto [m][n]= '@';
				labirinto [m-1][n]=' ';
			}
			else //se n�o, o '@' volta para onde estava antes
			{
				m=m-1;
			}
		}

		if ( tecla == ACIMA )
		{
			m = m - 1;
			if(labirinto[m][n] == ' ')
			{
				labirinto [m][n]= '@';
				labirinto [m+1][n]=' ';
			}
			else
			{
				m=m+1;
			}
		}

		if ( tecla == DIREITA )
		{
			n = n + 1;
			if(labirinto[m][n] == ' ')
			{
				labirinto [m][n]= '@';
				labirinto [m][n-1]=' ';
			}
			else
			{
				n=n-1;
			}
		}

		if ( tecla == ESQUERDA ) 
		{
			n = n - 1;
			if(labirinto[m][n] == ' ')
			{
				labirinto [m][n]= '@';
				labirinto [m][n+1]=' ';
			}
			else
			{
				n=n+1;
			}
		}

		if(labirinto [6][13] == '@') //se o '@' estiver na posi��o [6][13], o programa j� sai do while e mostra a mensagem de parab�ns 
		break; //esse comando serve para sair do while, sem continuar executando os comandos dentro do while
		system("cls");//limpa a tela, deixando somente o �ltimo comando (somente o labirinto com o �ltimo movimento)
	}
	system("cls");//limpa a tela, deixando somente o labirinto com o �ltimo movimento e a mensagem de parab�ns
	for(i=0;i<7;i++)//se n�o, � mostrado novamente o labirinto e volta no in�cio do while
	{
		for(j=0;j<16;j++)
		{
			printf("%c",labirinto[i][j]);
		}
		printf("\n");
	} 
	printf("!!!!!PARABENS, VOCE CONSEGUIU ESCAPAR!!!!!\n");
	getch();
}
