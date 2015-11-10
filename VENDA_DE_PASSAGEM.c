#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h> 


char dadospassagem(){
	
	char origem[20];
	char dataorigem[15];
	char horaorigem[15];
	char destino[20];
	char horachegada[10];
	char datachegada[10];
	char num_onibus[10];
	char nada[5];
	printf("DADOS DA PASSAGEM");
	gets(nada);
	printf("\nNUMERO DO ONIBUS:\n");
	gets(num_onibus);
	printf("\nCIDADE DE ORIGEM:\n");
	gets(origem);
	printf("\nHORA DE SAÍDA:\n");
	gets(horaorigem);
	printf("\nDATA DE SAÍDA\n");
	gets(dataorigem);
	printf("\nLOCAL DE DESTINO:\n");
	gets(destino);
	printf("\nHORA DE CHEGADA:\n");
	gets(horachegada);
	printf("\nDATA DE CHEGADA:\n");
	gets(datachegada);
	
	printf("\nONIBUS DE NUMERO %s, SAINDO DE : %s AS %s DO DIA %s COM DESTINO A: %s %s HORAS DO DIA %s \n", num_onibus, origem, horaorigem, dataorigem, destino, horachegada, datachegada);
	
	system("pause");
	return 0;
}




int main()
{

setlocale(LC_ALL, "Portuguese");

	
	printf("=========================================================================\n");
	printf("=		SISTEMA DE VENDA DE PASSAGEM RODOVIARIA			=\n");
	printf("=========================================================================\n");
	system("color CF");
 
     int a[9][4], linha, coluna, menu, soma, qtd, poltrona,  qa;
     double estudante, inteira, idoso, total;
     char dadospassagem();
     qtd = 0;
     soma = 0;
     qa = 0;
     menu = 0;
     total = 0;
     estudante = 0;
     inteira = 0;
     idoso = 0;
     
     for (linha=0;linha<9;linha++)
     {
        for (coluna=0;coluna<4;coluna++)
        {
            qtd++;
            a[linha][coluna] = qtd;
            }
            }
     while (menu!=6)
     {
     printf("\n               ***************MENU***************");
     printf("\n               *1 - POLTRONAS OCUPADAS          *");      
     printf("\n               *2 - VENDER PASSAGEM INTEIRA     *");
     printf("\n               *3 - VENDER PASSAGEM ESTUDANTE   *");
     printf("\n               *4 - VENDER PASSAGEM IDOSO       *");
     printf("\n               *5 - TOTAL DE PASSAGENS VENDIDAS *");
     printf("\n               *6 - SAIR                        *");
     printf("\n               **********************************");
     printf("\n               DIGITE A OPCAO DESEJADA: ");
     scanf("%d", &menu);
     system("cls");
     switch (menu)
     {
            //POLTRONAS OCUPADAS
			case 1:
                 for (linha=0;linha<9;linha++)
                 {
                     for (coluna=0;coluna<4;coluna++)
                     {

                        if (a[linha][coluna]==0)
                         {
                              printf("[ X ] ");
                              }
                              else
                              {
                                  printf("[ %d] ", a[linha][coluna]);
                                  }
                              }
                              printf("\n");
                              }
            break;
            

            //PASSAGENS NORMAIS
            case 2:
                 volta:
                
                 printf("\n++++++ VENDA PASSAGENS INTEIRAS ++++++\n");
                 dadospassagem();
				 printf("\nDIGITE O NÚMERO DA POLTRONA: ");
                 scanf("%d", &poltrona);
                 if (poltrona>=1 && poltrona<=36)
                 {
                 soma++;
                 inteira++;
                 for (linha=0;linha<9;linha++)
                 {
                     for(coluna=0;coluna<4;coluna++)
                     {
                          if (a[linha][coluna]==poltrona)
                          {
                              a[linha][coluna]=0;
                              
                              }
                              }
                              }
                              }
                 else
                 {

                     printf("\nAS POLTRONAS SÃO SOMENTE DE 1 A 36!!!\n");
                     
                     goto volta;
                     }
            break;
            
            //PASSAGENS DE ESTUDANTE 
            case 3:
                 printf("\n++++++VENDA PASSAGENS ESTUDANTE ++++++\n");
                dadospassagem();
				 printf("\nDIGITE O NÚMERO DA POLTRONA:  ");
                 scanf("%d", &poltrona);
                 if (poltrona>=1 && poltrona<=36)
                 {
                 soma++;
                 estudante++;
                 for (linha=0;linha<9;linha++)
                 {
                     for(coluna=0;coluna<4;coluna++)
                     {
                          if (a[linha][coluna]==poltrona)
                          {
                              a[linha][coluna]=0;
                              
                              }
                              }
                              }
                              }
                 else
                 {
                     printf("\nAS POLTRONAS SÃO SOMENTE DE 1 A 36!!!\n");
                     
                     }
            break;
            
            //PASSAGENS DE IDOSO
            case 4:
            	printf("\n++++++VENDA PASSAGENS DE IDOSO++++++\n");
                dadospassagem();
				 printf("\nDIGITE O NUMERO DA POLTRONA: ");
                 scanf("%d", &poltrona);
                 if (poltrona>=1 && poltrona<=36)
                 {
                 soma++;
                 idoso++;
                 for (linha=0;linha<9;linha++)
                 {
                     for(coluna=0;coluna<4;coluna++)
                     {
                          if (a[linha][coluna]==poltrona)
                          {
                              a[linha][coluna]=0;
                              
                              }
                              }
                              }
                              }
                 else
                 {
                     printf("\nAS POLTRONAS SÃO SOMENTE DE 1 A 36!!!\n");
                     
                     }
            break;
            
            
            case 5:
                 printf("\nVALOR DA PASSAGEM R$15,00");
                 for (linha=0;linha<9;linha++)
                 {
                     for (coluna=0;coluna<4;coluna++)
                     {
                         if (a[linha][coluna]==0)
                         {	
                         total = (inteira*15)+(estudante*7.5)+(idoso*0);
                         }
                         }
                         }
                         printf("\n++++++++TOTAL DE PASSAGENS VENDIDAS++++++++\n");
                         printf("\nTOTAL DE PASSAGENS DE INTEIRA:%2.0f\n ", inteira );
                         printf("\nTOTAL DE PASSAGENS DE ESTUDANTE:%2.0f\n ", estudante );
                         printf("\nTOTAL DE PASSAGENS DE IDOSO:%2.0f\n ", idoso );
                         printf("\nTOTAL R$%4.2f\n", total);
             break;
             default :
                     printf("\nOPCAO INVÁLIDA\n");
             break;
             }
             }
             }
