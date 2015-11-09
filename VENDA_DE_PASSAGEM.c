#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main()
{

setlocale(LC_ALL, "Portuguese");
//system ("title SISTEMA DE VENDA DE PASSAGEM RODOVIÁRIA");

	printf("=========================================================================\n");
	printf("=		SISTEMA DE VENDA DE PASSAGEM RODOVIÁRIA			=\n");
	printf("=========================================================================\n");
	system("color 4F");
		system ( "date /t" );
	system ("time /t");
	

    int a[9][4], linha, opcao_destino, coluna, menu, soma, qtd, poltrona, qa, hora, data;
    int linha1, linha2, linha3, dd, mm, aaaa, assento;
    double estudante, inteira, idoso, total;
    char psg, ocupado;
    char destino1[20] = "BRASÍLIA";
    char destino2[20] = "NATAL";
    char destino3[20]= "SANTOS";
    char hora1[20] = "07:00";
    char hora2[20] = "09:00";
    char hora3[20] = "11:00";
    char hora4[20] = "13:00";
    char hora5[20] = "15:00";
    char hora6[20] = "18:00";
    char hora7[20] = "19:00";
    char hora8[20] = "21:00";

     qtd = 0, linha1 = 100, linha2 = 200, linha3 = 300;
     soma = 0;
     qa = 0;
     menu = 0;
     total = 0;
     estudante = 0;
     inteira = 0;
     idoso = 0;



//INICIO DO CODIGO
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
    printf("\n               DIGITE A OPÇÃO DESEJADA: ");
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
                        printf("[%d]\t ", a[linha][coluna]);
                        }
                    }
                printf("\n");
                }
            break;


//PASSAGENS INTEIRAS
            case 2:
                
                printf("=========================================================");
                printf("\n=\t\tVENDA PASSAGENS INTEIRAS\t\t=\n");
                printf("=========================================================");

                //ESCOLHA DA LINHA E DESTINO
                destino1:
				printf("\n\n+++++++++++++++++++ MENU LINHA/DESTINO ++++++++++++++++++"),   
				printf ("\n[1] LINHA 100 - BRASÍLIA"); 
				printf ("\n[2] LINHA 200 - NATAL");
				printf ("\n[3] LINHA 300 - SANTOS\n");
                printf("ESCOLHA A OPÇÃO DESEJADA: ");
                scanf("%d", &opcao_destino);
                if (opcao_destino < 1 || opcao_destino >3)
                {
                	printf("OPÇÃO INVÁLIDA!!");
                	printf("\n=========================================================");
                goto destino1;
				}

                //ESCOLHA DA POLTRONA
                printf("=========================================================");
                poltrona:
				printf("\nDIGITE O NÚMERO DA POLTRONA: ");
                scanf("%d", &poltrona);
				if (poltrona <1 || poltrona >36)
                {
                printf("\nAS POLTRONAS SÃO SOMENTE DE 1 A 36!!!\n");
                goto poltrona;
                }
                
				//ESCOLHA DA DATA:
						//escolha do dia
				dia1:
                printf("=========================================================");
                printf ("\nDIGITE O DIA: "); scanf ("%d",&dd); 
                if (dd < 1 || dd > 31) 
                {
                printf("ESCOLHA O DIA DO MÊS VÁLIDO\n");
                goto dia1;
                }                           
                						//escolha do mes				
				mes1:
				printf ("DIGITE O MÊS: "); scanf("%d",&mm);
				if (mm < 1 || mm > 12)
                {
                printf("ESCOLHA O MÊS VÁLIDO!!");
                goto mes1;
            	}
            	
            	                						//escolha do ano				
				ano1:
				printf ("DIGITE O ANO: "); scanf("%d",&aaaa);
				if (aaaa <2015 || aaaa >2016)
                {
                printf("ESCOLHA UM ANO VÁLIDO!!");
                goto ano1;
            	}

                
            
                
               /* }
                printf ("\n\nDIGITE O MÊS: ");
                scanf("%d",&mm);
                if (mm < 1 ) || mm > 12))
                {
                printf("DATA INVÃLIDA");
                break;
                }*/


                /*if ((dd>31||dd<0)&&(mm>12))
                //{
                //printf("\n\DATA: %d/%d"), dd, mm;
                //}
                else if (dd<=31)
                {
                        if ((mm==1)||(mm==3)||(mm==5)||(mm==7)||(mm==8)||(mm==10)||(mm==12))
                        {
                        printf("\n\nEsta data e Valida\n\n");
                        }
                        else
                        {
                        printf("\n\nEsta data e Invalida\n\n");
                        }
                }
                else if (dd<=30)
                {
                        if ((mm==4)||(mm==6)||(mm==9)||(mm==11))
                        {
                        printf("\n\nEsta data e Valida\n\n");
                        }
                        else
                        {
                        printf("\n\nEsta data e Invalida\n\n");
                        }
                }
                else if (dd<=28)
                {
                    if (mm==2)
                    {
                    printf("\n\nEsta data e Valida\n\n");
                    }
                    else
                    {
                    printf("\n\nEsta data e Invalida\n\n");
                    }
                }

                */



                //ESCOLHA DA HORA:
                printf("=========================================================");
                printf("\nHORÁRIO DO BILHETE   \n[1] 07:00\t[5] 15:00\n[2] 09:00\t[6] 17:00\n[3] 11:00\t[7] 19:00\n[4] 13:00\t[8] 21:00\n");
                printf("ESCOLHA A OPÇÃO DESEJADA: ");
                scanf("%d", &hora);

                printf("=========================================================\n\n\n\n");
                system("cls");
				
				printf("=========================================================");
                printf("\n=\t\tEMISSÃO DO BILHETE\t\t\t=\n");
                printf("=========================================================");
                printf("\n=\t\tPassagem Inteira\t\t\t=\n");
                printf("=========================================================");                 
                
                //ESCREVER A ESCOLHA DO NUMERO DO ÔNIBUS
                if (opcao_destino == 1)
                {
                printf("\nNUMERO DO ÔNIBUS:\t%d",linha1);
                }
                if (opcao_destino == 2)
                {
                printf("\nNUMERO DO ÔNIBUS:\t%d",linha2);
                }
                if (opcao_destino == 3)
                {
                printf("\nNUMERO DO ÔNIBUS:\t%d",linha3);
                }

                //ESCREVER A ESCOLHA DO DESTINO
                if (opcao_destino == 1)
                {
                printf("\nDESTINO:\t\t%s\n",destino1);
                }
                if (opcao_destino == 2)
                {
                printf("\nDESTINO:\t\t%s\n",destino2);
                }
                if (opcao_destino == 3)
                {
                printf("\nDESTINO:\t\t%s\n",destino3);
                }

                //ESCREVER A POLTRONA
                printf("NUMERO DA POLTRONA:\t%2.2d\n",poltrona);

                //ESCREVER A DATA
				printf("DATA:\t\t\t%2.2d/%2.2d/%d\n", dd, mm, aaaa);

                //ESCREVER O HORÁRIO
                if (hora == 1)
                {
                printf("HORÁRIO:\t\t%shs\n",hora1);
                }
                if (hora == 2)
                {
                printf("HORÁRIO:\t\t%shs\n",hora2);
                }
                if (hora == 3)
                {
                printf("HORÁRIO:\t\t%shs\n",hora3);
                }
                if (hora == 4)
                {
                printf("HORÁRIO:\t\t%shs\n",hora4);
                }
                if (hora == 5)
                {
                printf("HORÁRIO:\t\t%shs\n",hora5);
                }
                if (hora == 6)
                {
                printf("HORÁRIO:\t\t%shs\n",hora6);
                }
                if (hora == 7)
                {
                printf("HORÁRIO:\t\t%shs\n",hora7);
                }
                if (hora == 8)
                {
                printf("HORÁRIO:\t\t%shs\n",hora8);
                }





                if (poltrona>=1 && poltrona<=36)
                {

                inteira++;
                    for (linha=0;linha<9;linha++)
                    {
                        for (coluna=0;coluna<4;coluna++)
                        {
                            if (a[linha][coluna]==poltrona)
                            {
                            a[linha][coluna]=0;
                            }
                        }
                    }
                }
                if (poltrona >36)
                {
                printf("\nAS POLTRONAS SÃO SOMENTE DE 1 A 36!!!\n");
                //goto volta;
                }
printf("=========================================================\n\n");
			sleep(5);// o bilhete aparece por 5 segundos
            break;
            

//PASSAGENS DE ESTUDANTE
            case 3:
                printf("=========================================================");
                printf("\n=\t\tVENDA PASSAGENS IDOSO\t\t=\n");
                printf("=========================================================");

                //ESCOLHA DA LINHA E DESTINO
                destino2:
				printf("\n\n+++++++++++++++++++ MENU LINHA/DESTINO ++++++++++++++++++"),   
				printf ("\n[1] LINHA 100 - BRASÍLIA"); 
				printf ("\n[2] LINHA 200 - NATAL");
				printf ("\n[3] LINHA 300 - SANTOS\n");
                printf("ESCOLHA A OPÇÃO DESEJADA: ");
                scanf("%d", &opcao_destino);
                if (opcao_destino < 1 || opcao_destino >3)
                {
                	printf("OPÇÃO INVÁLIDA!!");
                	printf("\n=========================================================");
                goto destino2;
				}

                //ESCOLHA DA POLTRONA
                printf("=========================================================");
                poltrona2:
				printf("\nDIGITE O NÚMERO DA POLTRONA: ");
                scanf("%d", &poltrona);
				if (poltrona <1 || poltrona >36)
                {
                printf("\nAS POLTRONAS SÃO SOMENTE DE 1 A 36!!!\n");
                goto poltrona2;
                }
                
				//ESCOLHA DA DATA:
						//escolha do dia
				dia2:
                printf("=========================================================");
                printf ("\nDIGITE O DIA: "); scanf ("%d",&dd); 
                if (dd < 1 || dd > 31) 
                {
                printf("ESCOLHA O DIA DO MÊS VÁLIDO\n");
                goto dia2;
                }                           
                		//escolha do mes				
				mes2:
				printf ("DIGITE O MÊS: "); scanf("%d",&mm);
				if (mm < 1 || mm > 12)
                {
                printf("ESCOLHA O MÊS VÁLIDO!!");
                goto mes2;
            	}
            	
            	                						//escolha do ano				
				ano2:
				printf ("DIGITE O ANO: "); scanf("%d",&aaaa);
				if (aaaa <2015 || aaaa >2016)
                {
                printf("ESCOLHA UM ANO VÁLIDO!!");
                goto ano2;
            	}


                //ESCOLHA DA HORA:
                printf("=========================================================");
                printf("\nHORÁRIO DO BILHETE   \n[1] 07:00\t[5] 15:00\n[2] 09:00\t[6] 17:00\n[3] 11:00\t[7] 19:00\n[4] 13:00\t[8] 21:00\n");
                printf("ESCOLHA A OPÇÃO DESEJADA: ");
                scanf("%d", &hora);

                printf("=========================================================\n\n\n\n");
                system("cls");
				
				printf("=========================================================");
                printf("\n=\t\tEMISSÃO DO BILHETE\t\t\t=\n");
                printf("=========================================================");
                printf("\n=\t\tPassagem Estudante\t\t\t=\n");
                printf("=========================================================");                 
                
                //ESCREVER A ESCOLHA DO NUMERO DO ÔNIBUS
                if (opcao_destino == 1)
                {
                printf("\nNUMERO DO ÔNIBUS:\t%d",linha1);
                }
                if (opcao_destino == 2)
                {
                printf("\nNUMERO DO ÔNIBUS:\t%d",linha2);
                }
                if (opcao_destino == 3)
                {
                printf("\nNUMERO DO ÔNIBUS:\t%d",linha3);
                }

                //ESCREVER A ESCOLHA DO DESTINO
                if (opcao_destino == 1)
                {
                printf("\nDESTINO:\t\t%s\n",destino1);
                }
                if (opcao_destino == 2)
                {
                printf("\nDESTINO:\t\t%s\n",destino2);
                }
                if (opcao_destino == 3)
                {
                printf("\nDESTINO:\t\t%s\n",destino3);
                }

                //ESCREVER A POLTRONA
                printf("NUMERO DA POLTRONA:\t%2.2d\n",poltrona);

                //ESCREVER A DATA
				printf("DATA:\t\t\t%2.2d/%2.2d/%d\n", dd, mm, aaaa);

                //ESCREVER O HORÁRIO
                if (hora == 1)
                {
                printf("HORÁRIO:\t\t%shs\n",hora1);
                }
                if (hora == 2)
                {
                printf("HORÁRIO:\t\t%shs\n",hora2);
                }
                if (hora == 3)
                {
                printf("HORÁRIO:\t\t%shs\n",hora3);
                }
                if (hora == 4)
                {
                printf("HORÁRIO:\t\t%shs\n",hora4);
                }
                if (hora == 5)
                {
                printf("HORÁRIO:\t\t%shs\n",hora5);
                }
                if (hora == 6)
                {
                printf("HORÁRIO:\t\t%shs\n",hora6);
                }
                if (hora == 7)
                {
                printf("HORÁRIO:\t\t%shs\n",hora7);
                }
                if (hora == 8)
                {
                printf("HORÁRIO:\t\t%shs\n",hora8);
                }

                 
                 
                 
                 
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
printf("=========================================================\n\n");
			sleep(5);// o bilhete aparece por 5 segundos
            break;
            

//PASSAGENS DE IDOSO
            case 4: 
                printf("=========================================================");
                printf("\n=\t\tVENDA PASSAGENS IDOSO\t\t=\n");
                printf("=========================================================");

                //ESCOLHA DA LINHA E DESTINO
                destino3:
				printf("\n\n+++++++++++++++++++ MENU LINHA/DESTINO ++++++++++++++++++"),   
				printf ("\n[1] LINHA 100 - BRASÍLIA"); 
				printf ("\n[2] LINHA 200 - NATAL");
				printf ("\n[3] LINHA 300 - SANTOS\n");
                printf("ESCOLHA A OPÇÃO DESEJADA: ");
                scanf("%d", &opcao_destino);
                if (opcao_destino < 1 || opcao_destino >3)
                {
                	printf("OPÇÃO INVÁLIDA!!");
                	printf("\n=========================================================");
                goto destino3;
				}

                //ESCOLHA DA POLTRONA
                printf("=========================================================");
                poltrona3:
				printf("\nDIGITE O NÚMERO DA POLTRONA: ");
                scanf("%d", &poltrona);
				if (poltrona <1 || poltrona >36)
                {
                printf("\nAS POLTRONAS SÃO SOMENTE DE 1 A 36!!!\n");
                goto poltrona3;
                }
                
				//ESCOLHA DA DATA:
						//escolha do dia
				dia3:
                printf("=========================================================");
                printf ("\nDIGITE O DIA: "); scanf ("%d",&dd); 
                if (dd < 1 || dd > 31) 
                {
                printf("ESCOLHA O DIA DO MÊS VÁLIDO\n");
                goto dia3;
                }                           
                		//escolha do mes				
				mes3:
				printf ("DIGITE O MÊS: "); scanf("%d",&mm);
				if (mm < 1 || mm > 12)
                {
                printf("ESCOLHA O MÊS VÁLIDO!!");
                goto mes3;
            	}
            	
            	                						//escolha do ano				
				ano3:
				printf ("DIGITE O ANO: "); scanf("%d",&aaaa);
				if (aaaa <2015 || aaaa >2016)
                {
                printf("ESCOLHA UM ANO VÁLIDO!!");
                goto ano3;
            	}


                //ESCOLHA DA HORA:
                printf("=========================================================");
                printf("\nHORÁRIO DO BILHETE   \n[1] 07:00\t[5] 15:00\n[2] 09:00\t[6] 17:00\n[3] 11:00\t[7] 19:00\n[4] 13:00\t[8] 21:00\n");
                printf("ESCOLHA A OPÇÃO DESEJADA: ");
                scanf("%d", &hora);

                printf("=========================================================\n\n\n\n");
                system("cls");
				
				printf("=========================================================");
                printf("\n=\t\tEMISSÃO DO BILHETE\t\t\t=\n");
                printf("=========================================================");
                printf("\n=\t\tPassagem Idoso\t\t\t=\n");
                printf("=========================================================");                
                
                //ESCREVER A ESCOLHA DO NUMERO DO ÔNIBUS
                if (opcao_destino == 1)
                {
                printf("\nNUMERO DO ÔNIBUS:\t%d",linha1);
                }
                if (opcao_destino == 2)
                {
                printf("\nNUMERO DO ÔNIBUS:\t%d",linha2);
                }
                if (opcao_destino == 3)
                {
                printf("\nNUMERO DO ÔNIBUS:\t%d",linha3);
                }

                //ESCREVER A ESCOLHA DO DESTINO
                if (opcao_destino == 1)
                {
                printf("\nDESTINO:\t\t%s\n",destino1);
                }
                if (opcao_destino == 2)
                {
                printf("\nDESTINO:\t\t%s\n",destino2);
                }
                if (opcao_destino == 3)
                {
                printf("\nDESTINO:\t\t%s\n",destino3);
                }

                //ESCREVER A POLTRONA
                printf("NUMERO DA POLTRONA:\t%2.2d\n",poltrona);

                //ESCREVER A DATA
				printf("DATA:\t\t\t%2.2d/%2.2d/%d\n", dd, mm, aaaa);

                //ESCREVER O HORÁRIO
                if (hora == 1)
                {
                printf("HORÁRIO:\t\t%shs\n",hora1);
                }
                if (hora == 2)
                {
                printf("HORÁRIO:\t\t%shs\n",hora2);
                }
                if (hora == 3)
                {
                printf("HORÁRIO:\t\t%shs\n",hora3);
                }
                if (hora == 4)
                {
                printf("HORÁRIO:\t\t%shs\n",hora4);
                }
                if (hora == 5)
                {
                printf("HORÁRIO:\t\t%shs\n",hora5);
                }
                if (hora == 6)
                {
                printf("HORÁRIO:\t\t%shs\n",hora6);
                }
                if (hora == 7)
                {
                printf("HORÁRIO:\t\t%shs\n",hora7);
                }
                if (hora == 8)
                {
                printf("HORÁRIO:\t\t%shs\n",hora8);
                }





                if (poltrona>=1 && poltrona<=36)
                 {
                 soma++;
                 idoso++;
                if (idoso >2){ //retorna mais que duas passagem para idoso
                printf("PASSAGEM PARA IDOSO ESGOTADA!!!");
                idoso--;
                break;
				}
                    
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
                if (poltrona > 36)
                {
                     printf("\nAS POLTRONAS SÃO SOMENTE DE 1 A 36!!!\n");
                }
printf("=========================================================\n\n");
			sleep(5);// o bilhete aparece por 5 segundos
            break;
            


            case 5:
                printf("\n====================VALOR DA PASSAGEM====================\n");
                printf("\nPASSAGEM INTEIRA R$50,00\n");
                printf("\nPASSAGEM ESTUDANTE DESCONTO DE 50%% = R$25,00\n");
                printf("\nPASSAGEM IDOSO GRATUITO (limite 02 max)\n");
                printf("\n=========================================================\n\n");
                for (linha=0;linha<9;linha++)
                {
                    for (coluna=0;coluna<4;coluna++)
                    {
                        if (a[linha][coluna]==0)
                        {
 
                        total = (inteira*50)+(estudante*25)+(idoso*0);
                        }
                    }
                }
                
				printf("\n\n\n++++++++TOTAL DE PASSAGENS VENDIDAS++++++++\n");
                printf("=========================================================\n");
                printf("\nTOTAL DE PASSAGENS DE INTEIRA:\t|%4.0f\n ", inteira );
                printf("\nTOTAL DE PASSAGENS DE ESTUDANTE:|%4.0f\n ", estudante );
                printf("\nTOTAL DE PASSAGENS DE IDOSO:\t|%4.0f\n ", idoso );
                printf("\nTOTAL R$%4.2f\n", total);
                

            break;


            case 6:
            exit(0);

            default :
                printf("\nOPCAO INVÁLIDA\n");
            break;
        }
    }
    
}

