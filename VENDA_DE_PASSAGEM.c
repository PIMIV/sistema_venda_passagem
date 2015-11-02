#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h> 

int main()
{

setlocale(LC_ALL, "Portuguese");

	
	printf("=========================================================================\n");
	printf("=		SISTEMA DE VENDA DE PASSAGEM RODOVIARIA			=\n");
	printf("=========================================================================\n");
	system("color CF");
 
     int a[9][4], linha, coluna, menu, soma, qtd, poltrona,  qa;
     double estudante, inteira, idoso, total;
     char psg;
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
     while (menu!=8)
     {
     printf("\n               ***************MENU***************");
     printf("\n               *1 - POLTRONAS OCUPADAS          *");
     printf("\n               *2 - POLTRONAS NA JANELA         *");
     printf("\n               *3 - POLTRONAS NO CORREDOR       *");
     printf("\n               *4 - VENDER PASSAGEM INTEIRA     *");
     printf("\n               *5 - VENDER PASSAGEM ESTUDANTE   *");
     printf("\n               *6 - VENDER PASSAGEM IDOSO       *");
     printf("\n               *7 - TOTAL DE PASSAGENS VENDIDAS *");
     printf("\n               *8 - SAIR                        *");
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
            
            // POLTRONAS NA JANELA
            case 2:
                 for (linha=0;linha<9;linha++)
                 {
                     for (coluna=0;coluna<4;coluna++)
                     {
                       if (a[linha][coluna]==0)
                         {
                              printf("[ X ]");
                              }
                        else  if (coluna==0 || coluna==3)
                         {
                                  printf("[ %d ] ", a[linha][coluna]);
                                  }

                         else if (coluna==1 || coluna==2)
                         {
                              printf("[   ] ");
                              }
                              }
                              printf("\n");
                              }
            break;
            
            // POLTRONAS NO CORREDOR
			case 3:
                 for (linha=0;linha<9;linha++)
                 {
                     for (coluna=0;coluna<4;coluna++)
                     {
                     if (a[linha][coluna]==0)
                                  {
                                       printf("[ X ] ");
                                       }
                       else  if (coluna==1 || coluna==2)
                         {
                                  printf("[ %d] ", a[linha][coluna]);
                                  }
                                  else if (coluna==0 || coluna==3)
                                  {
                                       printf("[   ] ");
                                       }
                                       }
                                       printf("\n");
                                       }
            break;
            
            //PASSAGENS NORMAIS
            case 4:
                 volta:
                
                 printf("\n++++++ VENDA PASSAGENS INTEIRAS ++++++\n");
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
            case 5:
                 printf("\n++++++VENDA PASSAGENS ESTUDANTE ++++++\n");
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
            case 6:
            	printf("\n++++++VENDA PASSAGENS DE IDOSO++++++\n");
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
            
            
            case 7:
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
                         printf("\nTOTAL DE PASSAGENS DE INTEIRA:%4.2f\n ", inteira );
                         printf("\nTOTAL DE PASSAGENS DE ESTUDANTE:%4.2f\n ", estudante );
                         printf("\nTOTAL DE PASSAGENS DE IDOSO:%4.2f\n ", idoso );
                         printf("\nTOTAL R$%4.2f\n", total);
             break;
             default :
                     printf("\nOPCAO INVÁLIDA\n");
             break;
             }
             }
             }


