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
	int m,n,i,j;//m e n são linhas e colulas, respectivamente, da matriz
	char tecla; //variável tecla é que guarda a informação da direção(abaixo, acima, direita, esquerda)
	
//a variavel abaixo é o mapa do labirinto
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
//O jogo só termina quando o jogador encontrar a saída
	while(1) //enquanto essa opção for verdadeira, o programa será rodado.
	{
		for(i=0;i<7;i++)  
		{
			for(j=0;j<16;j++)
			{
				printf("%c",labirinto[i][j]); //imprimir o labirinto na tela
			}
			printf("\n");

		} 
//A cada comando do teclado (do jogador), é preciso alterar o local novo e local antigo do '@'
//Se a condição for aceita, o '@' só se movera se o programa achar o ' ' (espaco). 

		tecla = getch(); //é só teclar a direção, sem precisar teclar enter
		if ( tecla == ABAIXO ) //Se a tecla for s, então soma a linha
		{
			m = m + 1; 
			if(labirinto[m][n] == ' ') // se a posição for ' ' (espaço), o '@' ocupa ele e onde o '@' estava vira ' '(espaço)
			{
				labirinto [m][n]= '@';
				labirinto [m-1][n]=' ';
			}
			else //se não, o '@' volta para onde estava antes
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

		if(labirinto [6][13] == '@') //se o '@' estiver na posição [6][13], o programa já sai do while e mostra a mensagem de parabéns 
		break; //esse comando serve para sair do while, sem continuar executando os comandos dentro do while
		system("cls");//limpa a tela, deixando somente o último comando (somente o labirinto com o último movimento)
	}
	system("cls");//limpa a tela, deixando somente o labirinto com o último movimento e a mensagem de parabéns
	for(i=0;i<7;i++)//se não, é mostrado novamente o labirinto e volta no início do while
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
