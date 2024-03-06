#include <stdio.h>
#include <locale.h>
#include <time.h>
#include <stdlib.h>
#define N 50
int main (){
	setlocale (LC_ALL, "PORTUGUESE");
	
	char jogador[N], enter[N];
	int numeroContador = 1;
	int decisao, chuteJogador, defesaJogador, lykosGoleiro, lykosBatedor, golTotalJogador, golTotalLykos;
	int golMataMataJogador = 0, golMataMataLykos = 0, golJogador = 0, golLykos = 0;  

	
	printf ("----- C O B R A N Ç A   D E   P E N A L T I S -----\n");
	printf ("\n");
	printf ("Escolha o nivel de dificuldade:\n");
	printf ("\n");
	printf ("[1]- AMADOR\n");
	printf ("[2]- PROFISSIONAL\n");
	printf ("\n");
	printf ("Escolha numero: ");
	scanf ("%d", &decisao);
	fflush (stdin);
	
	system ("cls");
	
	switch (decisao){
		case 1: {
			printf ("Digite o nome do batedor/goleiro:\n");
			scanf ("%49[^\n]s", jogador);
			fflush (stdin);
			
			system ("cls");
			srand(time(NULL));
			do {
				printf ("Vamos para a %do cobrança de penaltis!\n", numeroContador);
				printf ("\n");
				printf ("Lykos [%d]     X     [%d] %s\n", golLykos, golJogador, jogador);
				printf ("\n");
				printf ("Escolha o lado que %s vai chutar:\n", jogador);
				printf ("\n");
				printf ("[1]- CANTO INFERIOR ESQUERDO;\n");
				printf ("[2]- CANTO INFERIOR DIREITO\n");
				printf ("\n");
				scanf ("%d", &chuteJogador);
				fflush (stdin);
			
				system ("cls");
			
				printf ("%s vai para cobrança, ajeita a bola com carinho e fixa o olha para o goleiro Lykos!\n", jogador);
				printf ("Autoriza o juiz para cobrança!\n");
				printf ("%s corre para chutar... BATEU...\n", jogador);
				printf ("\n");
				printf ("Aperte qualquer tecla e aperte enter\n");
				scanf ("%s", enter);
				fflush (stdin);
			
				system ("cls");
				
					lykosGoleiro = rand ()% 2 + 1;
			
				if(chuteJogador == lykosGoleiro){
					printf ("DEFENDEEEEEEEEEEEU!\n");
					printf ("Lykos Vangelo é o nome dele.\n");
					printf ("%s lamenta muito pela perca do gol!\n", jogador);
					printf ("\n");
					printf ("Aperte qualquer tecla e aperte enter\n");
					scanf ("%s", enter);
					fflush (stdin);
					system ("cls");			
				}
				else {
					if(chuteJogador != lykosGoleiro){
						printf ("GOOOOOOOOOOOOOOOOOOOOOOOOLLLLLL!\n");
						printf ("%s cobrou de uma forma expetacular!\n", jogador);
						printf ("\n");
						printf ("Aperte qualquer tecla e aperte enter\n");
						scanf ("%s", enter);
						fflush (stdin);
						system ("cls");		
					}
				}
			
				system ("cls");
			
				printf ("Lykos vai para cobrança, ele pega distancia para fazer o gol no goleiro %s!\n", jogador);
				printf ("Autoriza o juiz para cobrança!\n");
				printf ("Vem o Lykos para cobrançAAAAAAAAA...\n");
				printf ("\n");
				printf ("Aperte qualquer tecla e aperte enter\n");
				scanf ("%s", enter);
				fflush (stdin);
			
				system ("cls");
			
				printf ("Escolha o lado que %s vai pegar a bola:\n");
				printf ("\n");
				printf ("[1]- CANTO INFERIOR ESQUERDO;\n");
				printf ("[2]- CANTO INFERIOR DIREITO\n");
				printf ("\n");
				scanf ("%d", &defesaJogador);
				fflush (stdin);
			
				system ("cls");
				
				lykosBatedor = rand ()% 2 + 1;
						
				if(defesaJogador == lykosBatedor){
					printf ("DEFENDEEEEEEEEEEEU!\n");
					printf ("%s... Buscou a bola no canto certo!\n", jogador);
					printf ("Lykos coloca a mão no rosto lamentando a perca do gol!\n");
				}
				else {
					if(defesaJogador != lykosBatedor){
						printf ("GOOOOOOOOOOOOOOOOOOOOOOOOLLLLLL!\n");
						printf ("Lykos deu uma bomba sem dar chances ao goleiro %s!\n", jogador);
					}
				}
				printf ("\n");
				printf ("Aperte qualquer tecla e aperte enter\n");
				scanf ("%s", enter);
				fflush (stdin);
				system ("cls");
				
				if (chuteJogador != lykosGoleiro){
					golJogador = golJogador + 1;
				}
				if (defesaJogador != lykosBatedor){
					golLykos = golLykos + 1;
				}
				numeroContador ++;
			}
			while (numeroContador <= 5);			
			
			if (golLykos == golJogador){
				printf ("Lykos [%d]     X     [%d] %s\n", golLykos, golJogador, jogador);
				printf ("\n");
				printf ("Empate entre os dois jogadores, será definido no mata-mata!\n");
				do{
					printf ("Jogo extremamente emocionante!\n");
					printf ("Quem perder o penalti esta fora!\n");
					printf ("\n");
					printf ("Aperte qualquer tecla e aperte enter\n");
					scanf ("%s", enter);
					fflush (stdin);
					system ("cls");
				
					printf ("Escolha o lado que %s vai chutar:\n", jogador);
					printf ("\n");
					printf ("[1]- CANTO INFERIOR ESQUERDO;\n");
					printf ("[2]- CANTO INFERIOR DIREITO\n");
					printf ("\n");
					scanf ("%d", &chuteJogador);
					fflush (stdin);
			
					system ("cls");
			
					printf ("%s vai para cobrança, ajeita a bola com carinho e fixa o olha para o goleiro Lykos!\n", jogador);
					printf ("Autoriza o juiz para cobrança!\n");
					printf ("%s corre para chutar... BATEU...\n", jogador);
					printf ("\n");
					printf ("Aperte qualquer tecla e aperte enter\n");
					scanf ("%s", enter);
					fflush (stdin);
			
					system ("cls");
							
					lykosGoleiro = rand ()% 2 + 1;
					
					if(chuteJogador == lykosGoleiro){
						printf ("DEFENDEEEEEEEEEEEU!\n");
						printf ("Lykos Vangelo é o nome dele.\n");
						printf ("%s lamenta muito pela perca do gol!\n", jogador);
						printf ("\n");
						printf ("Aperte qualquer tecla e aperte enter\n");
						scanf ("%s", enter);
						fflush (stdin);
						system ("cls");			
					}	
					else {
						if(chuteJogador != lykosGoleiro){
							printf ("GOOOOOOOOOOOOOOOOOOOOOOOOLLLLLL!\n");
							printf ("%s cobrou de uma forma expetacular!\n", jogador);
							printf ("\n");
							printf ("Aperte qualquer tecla e aperte enter\n");
							scanf ("%s", enter);
							fflush (stdin);
							system ("cls");		
						}
					}
			
					system ("cls");
			
					printf ("Lykos vai para cobrança, ele pega distancia para fazer o gol no goleiro %s!\n", jogador);
					printf ("Autoriza o juiz para cobrança!\n");
					printf ("Vem o Lykos para cobrançAAAAAAAAA...\n");
					printf ("\n");
					printf ("Aperte qualquer tecla e aperte enter\n");
					scanf ("%s", enter);
					fflush (stdin);
			
					system ("cls");
			
					printf ("Escolha o lado que %s vai pegar a bola:\n");
					printf ("\n");
					printf ("[1]- CANTO INFERIOR ESQUERDO;\n");
					printf ("[2]- CANTO INFERIOR DIREITO\n");
					printf ("\n");
					scanf ("%d", &defesaJogador);
					fflush (stdin);
			
					system ("cls");
			
					lykosBatedor = rand ()% 2 + 1;
											
					if(defesaJogador == lykosBatedor){
						printf ("DEFENDEEEEEEEEEEEU!\n");
						printf ("%s... Buscou a bola no canto certo!\n", jogador);
						printf ("Lykos coloca a mão no rosto lamentando a perca do gol!\n");
					}
					else {
						if(defesaJogador != lykosBatedor){
							printf ("GOOOOOOOOOOOOOOOOOOOOOOOOLLLLLL!\n");
							printf ("Lykos deu uma bomba sem dar chances ao goleiro %s!\n", jogador);
						}
					}
					printf ("\n");
					printf ("Aperte qualquer tecla e aperte enter\n");
					scanf ("%s", enter);
					fflush (stdin);
					system ("cls");
					
					if (chuteJogador != lykosGoleiro){
						golMataMataJogador = golMataMataJogador + 1;
					}
					if (defesaJogador != lykosBatedor){
						golMataMataLykos = golMataMataLykos + 1;
					}
				
				if (golMataMataLykos == golMataMataJogador){
					numeroContador = 0;
				}
				else{
					if (golMataMataLykos != golMataMataJogador){
						numeroContador = 1;
					}
				}
				numeroContador ++;
				}
				while (numeroContador <= 1);
				
				golTotalLykos = golMataMataLykos + golLykos;
				golTotalJogador = golMataMataJogador +  golJogador;
				
				printf ("-- C O B R A N Ç A   D E   P E N A L T I S   M / M -\n");
				printf ("\n");
				printf ("------------  F I M   D O   J O G O  --------------\n");
				printf ("\n");
				printf ("           Lykos [%d]     X     [%d] %s            \n", golTotalLykos, golTotalJogador, jogador);
				printf ("\n");
				printf ("---------------------------------------------------\n");	
			}	
			else {
				if (golLykos != golJogador){
					printf ("----- C O B R A N Ç A   D E   P E N A L T I S -----\n");
					printf ("\n");
					printf ("------------  F I M   D O   J O G O  --------------\n");
					printf ("\n");
					printf ("           Lykos [%d]     X     [%d] %s            \n", golLykos, golJogador, jogador);
					printf ("\n");
					printf ("---------------------------------------------------\n");	
				}
			}						
			break;
		}
		case 2: {
			printf ("Digite o nome do batedor/goleiro:\n");
			scanf ("%49[^\n]s", jogador);
			fflush (stdin);
			
			system ("cls");
			srand(time(NULL));
			do {
				printf ("Vamos para a %do cobrança de penaltis!\n", numeroContador);
				printf ("\n");
				printf ("Lykos [%d]     X     [%d] %s\n", golLykos, golJogador, jogador);
				printf ("\n");
				printf ("Escolha o lado que %s vai chutar:\n", jogador);
				printf ("\n");
				printf ("[1]- CANTO INFERIOR ESQUERDO;\n");
				printf ("[2]- CANTO INFERIOR DIREITO\n");
				printf ("[3]- CANTO SUPERIOR ESQUERDO;\n");
				printf ("[4]- CANTO SUPERIOR DIREITO\n");
				printf ("\n");
				scanf ("%d", &chuteJogador);
				fflush (stdin);
			
				system ("cls");
			
				printf ("%s vai para cobrança, ajeita a bola com carinho e fixa o olha para o goleiro Lykos!\n", jogador);
				printf ("Autoriza o juiz para cobrança!\n");
				printf ("%s corre para chutar... BATEU...\n", jogador);
				printf ("\n");
				printf ("Aperte qualquer tecla e aperte enter\n");
				scanf ("%s", enter);
				fflush (stdin);
			
				system ("cls");
				
					lykosGoleiro = rand ()% 4 + 1;
			
				if(chuteJogador == lykosGoleiro){
					printf ("DEFENDEEEEEEEEEEEU!\n");
					printf ("Lykos Vangelo é o nome dele.\n");
					printf ("%s lamenta muito pela perca do gol!\n", jogador);
					printf ("\n");
					printf ("Aperte qualquer tecla e aperte enter\n");
					scanf ("%s", enter);
					fflush (stdin);
					system ("cls");			
				}
				else {
					if(chuteJogador != lykosGoleiro){
						printf ("GOOOOOOOOOOOOOOOOOOOOOOOOLLLLLL!\n");
						printf ("%s cobrou de uma forma expetacular!\n", jogador);
						printf ("\n");
						printf ("Aperte qualquer tecla e aperte enter\n");
						scanf ("%s", enter);
						fflush (stdin);
						system ("cls");		
					}
				}
			
				system ("cls");
			
				printf ("Lykos vai para cobrança, ele pega distancia para fazer o gol no goleiro %s!\n", jogador);
				printf ("Autoriza o juiz para cobrança!\n");
				printf ("Vem o Lykos para cobrançAAAAAAAAA...\n");
				printf ("\n");
				printf ("Aperte qualquer tecla e aperte enter\n");
				scanf ("%s", enter);
				fflush (stdin);
			
				system ("cls");
			
				printf ("Escolha o lado que %s vai pegar a bola:\n");
				printf ("\n");
				printf ("[1]- CANTO INFERIOR ESQUERDO;\n");
				printf ("[2]- CANTO INFERIOR DIREITO\n");
				printf ("[3]- CANTO SUPERIOR ESQUERDO;\n");
				printf ("[4]- CANTO SUPERIOR DIREITO\n");
				printf ("\n");
				scanf ("%d", &defesaJogador);
				fflush (stdin);
			
				system ("cls");
				
				lykosBatedor = rand ()% 4 + 1;
						
				if(defesaJogador == lykosBatedor){
					printf ("DEFENDEEEEEEEEEEEU!\n");
					printf ("%s... Buscou a bola no canto certo!\n", jogador);
					printf ("Lykos coloca a mão no rosto lamentando a perca do gol!\n");
				}
				else {
					if(defesaJogador != lykosBatedor){
						printf ("GOOOOOOOOOOOOOOOOOOOOOOOOLLLLLL!\n");
						printf ("Lykos deu uma bomba sem dar chances ao goleiro %s!\n", jogador);
					}
				}
				printf ("\n");
				printf ("Aperte qualquer tecla e aperte enter\n");
				scanf ("%s", enter);
				fflush (stdin);
				system ("cls");
				
				if (chuteJogador != lykosGoleiro){
					golJogador = golJogador + 1;
				}
				if (defesaJogador != lykosBatedor){
					golLykos = golLykos + 1;
				}
				numeroContador ++;
			}
			while (numeroContador <= 5);			
			
			if (golLykos == golJogador){
				printf ("Lykos [%d]     X     [%d] %s\n", golLykos, golJogador, jogador);
				printf ("\n");
				printf ("Empate entre os dois jogadores, será definido no mata-mata!\n");
				do{
					printf ("Jogo extremamente emocionante!\n");
					printf ("Quem perder o penalti esta fora!\n");
					printf ("\n");
					printf ("Aperte qualquer tecla e aperte enter\n");
					scanf ("%s", enter);
					fflush (stdin);
					system ("cls");
				
					printf ("Escolha o lado que %s vai chutar:\n", jogador);
					printf ("\n");
					printf ("[1]- CANTO INFERIOR ESQUERDO;\n");
					printf ("[2]- CANTO INFERIOR DIREITO\n");
					printf ("[3]- CANTO SUPERIOR ESQUERDO;\n");
					printf ("[4]- CANTO SUPERIOR DIREITO\n");
					printf ("\n");
					scanf ("%d", &chuteJogador);
					fflush (stdin);
			
					system ("cls");
			
					printf ("%s vai para cobrança, ajeita a bola com carinho e fixa o olha para o goleiro Lykos!\n", jogador);
					printf ("Autoriza o juiz para cobrança!\n");
					printf ("%s corre para chutar... BATEU...\n", jogador);
					printf ("\n");
					printf ("Aperte qualquer tecla e aperte enter\n");
					scanf ("%s", enter);
					fflush (stdin);
			
					system ("cls");
							
					lykosGoleiro = rand ()% 4 + 1;
					
					if(chuteJogador == lykosGoleiro){
						printf ("DEFENDEEEEEEEEEEEU!\n");
						printf ("Lykos Vangelo é o nome dele.\n");
						printf ("%s lamenta muito pela perca do gol!\n", jogador);
						printf ("\n");
						printf ("Aperte qualquer tecla e aperte enter\n");
						scanf ("%s", enter);
						fflush (stdin);
						system ("cls");			
					}	
					else {
						if(chuteJogador != lykosGoleiro){
							printf ("GOOOOOOOOOOOOOOOOOOOOOOOOLLLLLL!\n");
							printf ("%s cobrou de uma forma expetacular!\n", jogador);
							printf ("\n");
							printf ("Aperte qualquer tecla e aperte enter\n");
							scanf ("%s", enter);
							fflush (stdin);
							system ("cls");		
						}
					}
			
					system ("cls");
			
					printf ("Lykos vai para cobrança, ele pega distancia para fazer o gol no goleiro %s!\n", jogador);
					printf ("Autoriza o juiz para cobrança!\n");
					printf ("Vem o Lykos para cobrançAAAAAAAAA...\n");
					printf ("\n");
					printf ("Aperte qualquer tecla e aperte enter\n");
					scanf ("%s", enter);
					fflush (stdin);
			
					system ("cls");
			
					printf ("Escolha o lado que %s vai pegar a bola:\n");
					printf ("\n");
					printf ("[1]- CANTO INFERIOR ESQUERDO;\n");
					printf ("[2]- CANTO INFERIOR DIREITO\n");
					printf ("[3]- CANTO SUPERIOR ESQUERDO;\n");
					printf ("[4]- CANTO SUPERIOR DIREITO\n");
					printf ("\n");
					scanf ("%d", &defesaJogador);
					fflush (stdin);
			
					system ("cls");
			
					lykosBatedor = rand ()% 4 + 1;
											
					if(defesaJogador == lykosBatedor){
						printf ("DEFENDEEEEEEEEEEEU!\n");
						printf ("%s... Buscou a bola no canto certo!\n", jogador);
						printf ("Lykos coloca a mão no rosto lamentando a perca do gol!\n");
					}
					else {
						if(defesaJogador != lykosBatedor){
							printf ("GOOOOOOOOOOOOOOOOOOOOOOOOLLLLLL!\n");
							printf ("Lykos deu uma bomba sem dar chances ao goleiro %s!\n", jogador);
						}
					}
					printf ("\n");
					printf ("Aperte qualquer tecla e aperte enter\n");
					scanf ("%s", enter);
					fflush (stdin);
					system ("cls");
					
					if (chuteJogador != lykosGoleiro){
						golMataMataJogador = golMataMataJogador + 1;
					}
					if (defesaJogador != lykosBatedor){
						golMataMataLykos = golMataMataLykos + 1;
					}
				
				if (golMataMataLykos == golMataMataJogador){
					numeroContador = 0;
				}
				else{
					if (golMataMataLykos != golMataMataJogador){
						numeroContador = 1;
					}
				}
				numeroContador ++;
				}
				while (numeroContador <= 1);
				
				golTotalLykos = golMataMataLykos + golLykos;
				golTotalJogador = golMataMataJogador +  golJogador;
				
				printf ("-- C O B R A N Ç A   D E   P E N A L T I S   M / M -\n");
				printf ("\n");
				printf ("------------  F I M   D O   J O G O  --------------\n");
				printf ("\n");
				printf ("           Lykos [%d]     X     [%d] %s            \n", golTotalLykos, golTotalJogador, jogador);
				printf ("\n");
				printf ("---------------------------------------------------\n");	
			}	
			else {
				if (golLykos != golJogador){
					printf ("----- C O B R A N Ç A   D E   P E N A L T I S -----\n");
					printf ("\n");
					printf ("------------  F I M   D O   J O G O  --------------\n");
					printf ("\n");
					printf ("           Lykos [%d]     X     [%d] %s            \n", golLykos, golJogador, jogador);
					printf ("\n");
					printf ("---------------------------------------------------\n");	
				}
			}						
			break;
		}
	}
}
