#include <stdio.h>
#include <locale.h>
#include <time.h> /*pra mecher com hora e data*/



int main()
{

setlocale(LC_ALL, "Portuguese");

	
	printf("=========================================================================\n");
	printf("=		SISTEMA DE VENDA DE PASSAGEM RODOVIARIA			=\n");
	printf("=========================================================================\n");
	system("color CF");
	
     int a[9][4], l, c, menu, soma, qtd, lugar, t, qa; /*mudei de 12 p/ 9 = 36*/
     qtd = 0;
     soma = 0;
     qa = 0;
     menu = 0;
     t = 0;
     for (l=0;l<9;l++)
     {
        for (c=0;c<4;c++)
        {
            qtd++;
            a[l][c] = qtd;
            }
            }
     while (menu!=6)
     {
     printf("\n     ***************MENU***************");
     printf("\n     *1 - POLTRONAS OCUPADAS          *");
     printf("\n     *2 - POLTRONAS NA JANELA         *");
     printf("\n     *3 - POLTRONAS NO CORREDOR       *");
     printf("\n     *4 - VENDER PASSAGEM             *");
     printf("\n     *5 - TOTAL DE PASSAGENS VENDIDAS *");
     printf("\n     *6 - SAIR                        *");
     printf("\n     **********************************");
     printf("\n     DIGITE A OPCAO DESEJADA: ");
     scanf("%d", &menu);
     system("cls");
     switch (menu)
     {
            case 1:
                 for (l=0;l<9;l++)
                 {
                     for (c=0;c<4;c++)
                     {

                        if (a[l][c]==0)
                         {
                              printf("[ v ] ");
                              }
                              else
                              {
                                  printf("[ %d] ", a[l][c]);
                                  }
                              }
                              printf("\n");
                              }
            break;
            case 2:
                 for (l=0;l<9;l++)
                 {
                     for (c=0;c<4;c++)
                     {
                       if (a[l][c]==0)
                         {
                              printf("[ X ]");
                              }
                        else  if (c==0 || c==3)
                         {
                                  printf("[ %d ] ", a[l][c]);
                                  }

                         else if (c==1 || c==2)
                         {
                              printf("[   ] ");
                              }
                              }
                              printf("\n");
                              }
            break;
            case 3:
                 for (l=0;l<9;l++)
                 {
                     for (c=0;c<4;c++)
                     {
                     if (a[l][c]==0)
                                  {
                                       printf("[ X ] ");
                                       }
                       else  if (c==1 || c==2)
                         {
                                  printf("[ %d] ", a[l][c]);
                                  }
                                  else if (c==0 || c==3)
                                  {
                                       printf("[   ] ");
                                       }
                                       }
                                       printf("\n");
                                       }
            break;
            case 4:
                 volta:
                 printf("\nVALOR DA PASSAGEM R$15,00");
                 printf("\nDIGITE O NUMERO DA POLTRONA: ");
                 scanf("%d", &lugar);
                 if (lugar>=1 && lugar<=36)
                 {
                 soma++;
                 qa++;
                 for (l=0;l<9;l++)
                 {
                     for(c=0;c<4;c++)
                     {
                          if (a[l][c]==lugar)
                          {
                              a[l][c]=0;
                              }
                              }
                              }
                              }
                 else
                 {
                     printf("\nAS POLTRONAS SÃO SOMENTE DE 1 A 48!!!\n");
                     goto volta;
                     }
            break;
            case 5:
                 printf("\nVALOR DA PASSAGEM R$15,00");
                 for (l=0;l<9;l++)
                 {
                     for (c=0;c<4;c++)
                     {
                         if (a[l][c]==0)
                         {
                         t = soma * 15;
                         }
                         }
                         }
                         printf("\nTOTAL DE PASSAGENS VENDIDAS %d", qa);
                         printf("\nTOTAL R$%d,00\n", t);
             break;
             default :
                     printf("\nOPCAO INVALIDA\n");
             break;
             }
             }
             }


