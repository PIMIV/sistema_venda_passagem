#include <stdio.h>
#include <locale.h>
#include <time.h> 



     	

int main()
{

setlocale(LC_ALL, "Portuguese");

	
	printf("=========================================================================\n");
	printf("=		SISTEMA DE VENDA DE PASSAGEM RODOVIARIA			=\n");
	printf("=========================================================================\n");
	system("color CF");
	
     int a[9][4], l, c, menu, soma, qtd, lugar,  qa;
     double meia, inteira, idoso,t;
     char psg;
     
    
	 

	 qtd = 0;
     soma = 0;
     qa = 0;
     menu = 0;
     t = 0;
     
     meia = 0;
     inteira = 0;
     idoso = 0;
     
     for (l=0;l<9;l++)
     {
        for (c=0;c<4;c++)
        {
            qtd++;
            a[l][c] = qtd;
            }
            }
     while (menu!=8)
     {
     printf("\n     ***************MENU***************");
     printf("\n     *1 - POLTRONAS OCUPADAS          *");
     printf("\n     *2 - POLTRONAS NA JANELA         *");
     printf("\n     *3 - POLTRONAS NO CORREDOR       *");
     printf("\n     *4 - VENDER PASSAGEM Normal      *");
     printf("\n     *5 - VENDER PASSAGEM Meia        *");
     printf("\n     *6 - VENDER PASSAGEM Idoso       *");
	 printf("\n     *7 - TOTAL DE PASSAGENS VENDIDAS *");
     printf("\n     *8 - SAIR                        *");
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
                     printf("\nAS POLTRONAS SÃO SOMENTE DE 1 A 36!!!\n");
                     goto volta;
                     }
            break;
            
            case 5:
                 
            
                
                 printf("\nDIGITE O NUMERO DA POLTRONA:  ");
                 scanf(" %d " , &lugar);
                 
                 
            
                 if (lugar>=1 && lugar<=36)
                 {
                 soma++;
                 meia++;
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
                     printf("\nAS POLTRONAS SÃO SOMENTE DE 1 A 36!!!\n");
                     
                     }
            break;
            
            case 6:
                 
                
                
                 printf("\nDIGITE O NUMERO DA POLTRONA: ");
                 scanf("%d", &lugar);
                 if (lugar>=1 && lugar<=36)
                 {
                 soma++;
                 idoso++;
                 for (l=0;l<9;l++)
                 {
                     for(c=0;c<4;c++)
                     {
                          if (a[l][c]==lugar)
                          {
                              a[l][c]=0;
                              idoso++;
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
                 for (l=0;l<9;l++)
                 {
                     for (c=0;c<4;c++)
                     {
                         if (a[l][c]==0)
                         {
                         t = (qa*15)+(meia*7.5)+(idoso*0);
                         }
                         }
                         }
                         printf("\nTOTAL DE PASSAGENS VENDIDAS inteiras %4d meia %4f idoso %4f", qa, meia, idoso);
                         printf("\nTOTAL R$%f\n", t);
             break;
             default :
                     printf("\nOPCAO INVALIDA\n");
             break;
             }
             }
             }


