#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
<<<<<<< HEAD
//inclusao das bibliotecas usadas
char a[9][4], linha, coluna,qtd;
double total,estudante, inteira, idoso;
    int opcao_destino, menu, soma, poltrona, qa, hora, data;
    int linha1, linha2, linha3, dd, mm, aaaa, assento;
    
    char psg, ocupado;
    char destino1[20] = "BRAS�LIA";
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
void poltronasocupadas(){
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
}
void codigo(){//codigo principal
	    for (linha=0;linha<9;linha++)   //varredura da matriz
    {
        for (coluna=0;coluna<4;coluna++)
        {
            qtd++;
            a[linha][coluna] = qtd;
        }
    }
=======
#include <conio.c>
#include <conio.h>


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
	printf("\nHORA DE SA�DA:\n");
	gets(horaorigem);
	printf("\nDATA DE SA�DA\n");
	gets(dataorigem);
	printf("\nLOCAL DE DESTINO:\n");
	gets(destino);
	printf("\nHORA DE CHEGADA:\n");
	gets(horachegada);
	printf("\nDATA DE CHEGADA:\n");
	gets(datachegada);
>>>>>>> origin/master
	
}
void menuRenda(){ 
	char op;
	

	total = (inteira*50)+(estudante*25)+(idoso*0);
	printf("\n====================VALOR DA PASSAGEM====================\n");
    printf("\nPASSAGEM INTEIRA R$50,00\n");
    printf("\nPASSAGEM ESTUDANTE DESCONTO DE 50%% = R$25,00\n");
    printf("\nPASSAGEM IDOSO GRATUITO (limite 02 max)\n");
    printf("\n=========================================================\n\n");
    printf("\n\n\n++++++++TOTAL DE PASSAGENS VENDIDAS++++++++\n");
    printf("=========================================================\n");
    printf("\nTOTAL DE PASSAGENS DE INTEIRA:\t|%4.0f\n ", inteira );
    printf("\nTOTAL DE PASSAGENS DE ESTUDANTE:|%4.0f\n ", estudante );
    printf("\nTOTAL DE PASSAGENS DE IDOSO:\t|%4.0f\n ", idoso );
    printf("\nTOTAL R$%4.2f\n", total);
    
}
void passageminteira(){
	            printf("=========================================================");
                printf("\n=\t\tVENDA PASSAGENS INTEIRAS\t\t=\n");
                printf("=========================================================");

                //ESCOLHA DA LINHA E DESTINO
                destino1:
				printf("\n\n+++++++++++++++++++ MENU LINHA/DESTINO ++++++++++++++++++"),   
				printf ("\n[1] LINHA 100 - BRAS�LIA"); 
				printf ("\n[2] LINHA 200 - NATAL");
				printf ("\n[3] LINHA 300 - SANTOS\n");
                printf("ESCOLHA A OP��O DESEJADA: ");
                scanf("%d", &opcao_destino);
                if (opcao_destino < 1 || opcao_destino >3)
                {
                	printf("OP��O INV�LIDA!!");
                	printf("\n=========================================================");
                goto destino1;
				}

                //ESCOLHA DA POLTRONA
                printf("=========================================================");
                poltrona:
				printf("\nDIGITE O N�MERO DA POLTRONA: ");
                scanf("%d", &poltrona);
				if (poltrona <1 || poltrona >36)
                {
                printf("\nAS POLTRONAS S�O SOMENTE DE 1 A 36!!!\n");
                goto poltrona;
                }
                
				//ESCOLHA DA DATA:
						//escolha do dia
				dia1:
                printf("=========================================================");
                printf ("\nDIGITE O DIA: "); scanf ("%d",&dd); 
                if (dd < 1 || dd > 31) 
                {
                printf("ESCOLHA O DIA DO M�S V�LIDO\n");
                goto dia1;
                }                           
                		//escolha do mes				
				mes1:
				printf ("DIGITE O M�S: "); scanf("%d",&mm);
				if (mm < 1 || mm > 12)
                {
                printf("ESCOLHA O M�S V�LIDO!!");
                goto mes1;
            	}
            	
            	       	//escolha do ano				
				ano1:
				printf ("DIGITE O ANO: "); scanf("%d",&aaaa);
				if (aaaa <2015 || aaaa >2016)
                {
                printf("ESCOLHA UM ANO V�LIDO!!");
                goto ano1;
            	}


                //ESCOLHA DA HORA:
                printf("=========================================================");
                printf("\nHOR�RIO DO BILHETE   \n[1] 07:00\t[5] 15:00\n[2] 09:00\t[6] 17:00\n[3] 11:00\t[7] 19:00\n[4] 13:00\t[8] 21:00\n");
                printf("ESCOLHA A OP��O DESEJADA: ");
                scanf("%d", &hora);

<<<<<<< HEAD
                printf("=========================================================\n\n\n\n");
                system("cls");
				
				printf("=========================================================");
                printf("\n=\t\tEMISS�O DO BILHETE\t\t\t=\n");
                printf("=========================================================");
                printf("\n=\t\tPassagem Inteira\t\t\t=\n");
                printf("=========================================================");                 
                
                //ESCREVER A ESCOLHA DO NUMERO DO �NIBUS
                if (opcao_destino == 1)
                {
                printf("\nNUMERO DO �NIBUS:\t%d",linha1);
                }
                if (opcao_destino == 2)
                {
                printf("\nNUMERO DO �NIBUS:\t%d",linha2);
                }
                if (opcao_destino == 3)
                {
                printf("\nNUMERO DO �NIBUS:\t%d",linha3);
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

                //ESCREVER O HOR�RIO
                if (hora == 1)
                {
                printf("HOR�RIO:\t\t%shs\n",hora1);
                }
                if (hora == 2)
                {
                printf("HOR�RIO:\t\t%shs\n",hora2);
                }
                if (hora == 3)
                {
                printf("HOR�RIO:\t\t%shs\n",hora3);
                }
                if (hora == 4)
                {
                printf("HOR�RIO:\t\t%shs\n",hora4);
                }
                if (hora == 5)
                {
                printf("HOR�RIO:\t\t%shs\n",hora5);
                }
                if (hora == 6)
                {
                printf("HOR�RIO:\t\t%shs\n",hora6);
                }
                if (hora == 7)
                {
                printf("HOR�RIO:\t\t%shs\n",hora7);
                }
                if (hora == 8)
                {
                printf("HOR�RIO:\t\t%shs\n",hora8);
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
                printf("\nAS POLTRONAS S�O SOMENTE DE 1 A 36!!!\n");
                //goto volta;
                }
				printf("=========================================================\n\n");
			sleep(5);// o bilhete aparece por 5 segundos
	
}

void passagemestudante(){
	 printf("=========================================================");
                printf("\n=\t\tVENDA PASSAGENS IDOSO\t\t=\n");
                printf("=========================================================");

                //ESCOLHA DA LINHA E DESTINO
                destino2:
=======
setlocale(LC_ALL, "Portuguese");
//system ("title SISTEMA DE VENDA DE PASSAGEM RODOVI�RIA");

	printf("=========================================================================\n");
	printf("=		SISTEMA DE VENDA DE PASSAGEM RODOVI�RIA			=\n");
	printf("=========================================================================\n");
<<<<<<< HEAD
	system("color 4F");
		system ( "date /t" );
	system ("time /t");
	

    int a[9][4], linha, opcao_destino, coluna, menu, soma, qtd, poltrona, qa, hora, data;
    int linha1, linha2, linha3, dd, mm, aaaa, assento;
    double estudante, inteira, idoso, total;
    char psg, ocupado;
    char destino1[20] = "BRAS�LIA";
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
=======
	system("color CF");
 
     int a[9][4], linha, coluna, menu, soma, qtd, poltrona,  qa;
     double estudante, inteira, idoso, total;
     char dadospassagem();
     qtd = 0;
>>>>>>> origin/master
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
<<<<<<< HEAD
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
    printf("\n               DIGITE A OP��O DESEJADA: ");
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
=======
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

>>>>>>> origin/master
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
<<<<<<< HEAD


//PASSAGENS INTEIRAS
            case 2:
                
                printf("=========================================================");
                printf("\n=\t\tVENDA PASSAGENS INTEIRAS\t\t=\n");
                printf("=========================================================");

                //ESCOLHA DA LINHA E DESTINO
                destino1:
>>>>>>> origin/master
				printf("\n\n+++++++++++++++++++ MENU LINHA/DESTINO ++++++++++++++++++"),   
				printf ("\n[1] LINHA 100 - BRAS�LIA"); 
				printf ("\n[2] LINHA 200 - NATAL");
				printf ("\n[3] LINHA 300 - SANTOS\n");
                printf("ESCOLHA A OP��O DESEJADA: ");
                scanf("%d", &opcao_destino);
                if (opcao_destino < 1 || opcao_destino >3)
                {
                	printf("OP��O INV�LIDA!!");
                	printf("\n=========================================================");
<<<<<<< HEAD
                goto destino2;
				}
=======
                goto destino1;
				}

                //ESCOLHA DA POLTRONA
                printf("=========================================================");
                poltrona:
				printf("\nDIGITE O N�MERO DA POLTRONA: ");
                scanf("%d", &poltrona);
				if (poltrona <1 || poltrona >36)
                {
                printf("\nAS POLTRONAS S�O SOMENTE DE 1 A 36!!!\n");
                goto poltrona;
                }
                
				//ESCOLHA DA DATA:
						//escolha do dia
				dia1:
                printf("=========================================================");
                printf ("\nDIGITE O DIA: "); scanf ("%d",&dd); 
                if (dd < 1 || dd > 31) 
                {
                printf("ESCOLHA O DIA DO M�S V�LIDO\n");
                goto dia1;
                }                           
                						//escolha do mes				
				mes1:
				printf ("DIGITE O M�S: "); scanf("%d",&mm);
				if (mm < 1 || mm > 12)
                {
                printf("ESCOLHA O M�S V�LIDO!!");
                goto mes1;
            	}
            	
            	                						//escolha do ano				
				ano1:
				printf ("DIGITE O ANO: "); scanf("%d",&aaaa);
				if (aaaa <2015 || aaaa >2016)
                {
                printf("ESCOLHA UM ANO V�LIDO!!");
                goto ano1;
            	}

                
            
                
               /* }
                printf ("\n\nDIGITE O M�S: ");
                scanf("%d",&mm);
                if (mm < 1 ) || mm > 12))
                {
                printf("DATA INVÁLIDA");
                break;
                }*/
=======
            
>>>>>>> origin/master

                //ESCOLHA DA POLTRONA
                printf("=========================================================");
                poltrona2:
				printf("\nDIGITE O N�MERO DA POLTRONA: ");
                scanf("%d", &poltrona);
				if (poltrona <1 || poltrona >36)
                {
                printf("\nAS POLTRONAS S�O SOMENTE DE 1 A 36!!!\n");
                goto poltrona2;
                }
                
<<<<<<< HEAD
				//ESCOLHA DA DATA:
						//escolha do dia
				dia2:
                printf("=========================================================");
                printf ("\nDIGITE O DIA: "); scanf ("%d",&dd); 
                if (dd < 1 || dd > 31) 
                {
                printf("ESCOLHA O DIA DO M�S V�LIDO\n");
                goto dia2;
                }                           
                		//escolha do mes				
				mes2:
				printf ("DIGITE O M�S: "); scanf("%d",&mm);
				if (mm < 1 || mm > 12)
                {
                printf("ESCOLHA O M�S V�LIDO!!");
                goto mes2;
            	}
            	
           		//escolha do ano				
				ano2:
				printf ("DIGITE O ANO: "); scanf("%d",&aaaa);
				if (aaaa <2015 || aaaa >2016)
                {
                printf("ESCOLHA UM ANO V�LIDO!!");
                goto ano2;
            	}


=======
                 printf("\n++++++ VENDA PASSAGENS INTEIRAS ++++++\n");
                 dadospassagem();
				 printf("\nDIGITE O N�MERO DA POLTRONA: ");
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
>>>>>>> origin/master


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
                printf("\nHOR�RIO DO BILHETE   \n[1] 07:00\t[5] 15:00\n[2] 09:00\t[6] 17:00\n[3] 11:00\t[7] 19:00\n[4] 13:00\t[8] 21:00\n");
                printf("ESCOLHA A OP��O DESEJADA: ");
                scanf("%d", &hora);

                printf("=========================================================\n\n\n\n");
                system("cls");
				
				printf("=========================================================");
                printf("\n=\t\tEMISS�O DO BILHETE\t\t\t=\n");
                printf("=========================================================");
                printf("\n=\t\tPassagem Inteira\t\t\t=\n");
                printf("=========================================================");                 
                
                //ESCREVER A ESCOLHA DO NUMERO DO �NIBUS
                if (opcao_destino == 1)
                {
                printf("\nNUMERO DO �NIBUS:\t%d",linha1);
                }
                if (opcao_destino == 2)
                {
                printf("\nNUMERO DO �NIBUS:\t%d",linha2);
                }
                if (opcao_destino == 3)
                {
                printf("\nNUMERO DO �NIBUS:\t%d",linha3);
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

                //ESCREVER O HOR�RIO
                if (hora == 1)
                {
                printf("HOR�RIO:\t\t%shs\n",hora1);
                }
                if (hora == 2)
                {
                printf("HOR�RIO:\t\t%shs\n",hora2);
                }
                if (hora == 3)
                {
                printf("HOR�RIO:\t\t%shs\n",hora3);
                }
                if (hora == 4)
                {
                printf("HOR�RIO:\t\t%shs\n",hora4);
                }
                if (hora == 5)
                {
                printf("HOR�RIO:\t\t%shs\n",hora5);
                }
                if (hora == 6)
                {
                printf("HOR�RIO:\t\t%shs\n",hora6);
                }
                if (hora == 7)
                {
                printf("HOR�RIO:\t\t%shs\n",hora7);
                }
                if (hora == 8)
                {
                printf("HOR�RIO:\t\t%shs\n",hora8);
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
                printf("\nAS POLTRONAS S�O SOMENTE DE 1 A 36!!!\n");
                //goto volta;
                }
printf("=========================================================\n\n");
			sleep(5);// o bilhete aparece por 5 segundos
            break;
            
<<<<<<< HEAD

//PASSAGENS DE ESTUDANTE
            case 3:
                printf("=========================================================");
                printf("\n=\t\tVENDA PASSAGENS IDOSO\t\t=\n");
                printf("=========================================================");

                //ESCOLHA DA LINHA E DESTINO
                destino2:
				printf("\n\n+++++++++++++++++++ MENU LINHA/DESTINO ++++++++++++++++++"),   
				printf ("\n[1] LINHA 100 - BRAS�LIA"); 
				printf ("\n[2] LINHA 200 - NATAL");
				printf ("\n[3] LINHA 300 - SANTOS\n");
                printf("ESCOLHA A OP��O DESEJADA: ");
                scanf("%d", &opcao_destino);
                if (opcao_destino < 1 || opcao_destino >3)
                {
                	printf("OP��O INV�LIDA!!");
                	printf("\n=========================================================");
                goto destino2;
				}

                //ESCOLHA DA POLTRONA
                printf("=========================================================");
                poltrona2:
				printf("\nDIGITE O N�MERO DA POLTRONA: ");
                scanf("%d", &poltrona);
				if (poltrona <1 || poltrona >36)
                {
                printf("\nAS POLTRONAS S�O SOMENTE DE 1 A 36!!!\n");
                goto poltrona2;
                }
                
				//ESCOLHA DA DATA:
						//escolha do dia
				dia2:
                printf("=========================================================");
                printf ("\nDIGITE O DIA: "); scanf ("%d",&dd); 
                if (dd < 1 || dd > 31) 
                {
                printf("ESCOLHA O DIA DO M�S V�LIDO\n");
                goto dia2;
                }                           
                		//escolha do mes				
				mes2:
				printf ("DIGITE O M�S: "); scanf("%d",&mm);
				if (mm < 1 || mm > 12)
                {
                printf("ESCOLHA O M�S V�LIDO!!");
                goto mes2;
            	}
            	
            	                						//escolha do ano				
				ano2:
				printf ("DIGITE O ANO: "); scanf("%d",&aaaa);
				if (aaaa <2015 || aaaa >2016)
                {
                printf("ESCOLHA UM ANO V�LIDO!!");
                goto ano2;
            	}


>>>>>>> origin/master
                //ESCOLHA DA HORA:
                printf("=========================================================");
                printf("\nHOR�RIO DO BILHETE   \n[1] 07:00\t[5] 15:00\n[2] 09:00\t[6] 17:00\n[3] 11:00\t[7] 19:00\n[4] 13:00\t[8] 21:00\n");
                printf("ESCOLHA A OP��O DESEJADA: ");
                scanf("%d", &hora);

                printf("=========================================================\n\n\n\n");
                system("cls");
				
				printf("=========================================================");
                printf("\n=\t\tEMISS�O DO BILHETE\t\t\t=\n");
                printf("=========================================================");
                printf("\n=\t\tPassagem Estudante\t\t\t=\n");
                printf("=========================================================");                 
                
                //ESCREVER A ESCOLHA DO NUMERO DO �NIBUS
                if (opcao_destino == 1)
                {
                printf("\nNUMERO DO �NIBUS:\t%d",linha1);
                }
                if (opcao_destino == 2)
                {
                printf("\nNUMERO DO �NIBUS:\t%d",linha2);
                }
                if (opcao_destino == 3)
                {
                printf("\nNUMERO DO �NIBUS:\t%d",linha3);
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

                //ESCREVER O HOR�RIO
                if (hora == 1)
                {
                printf("HOR�RIO:\t\t%shs\n",hora1);
                }
                if (hora == 2)
                {
                printf("HOR�RIO:\t\t%shs\n",hora2);
                }
                if (hora == 3)
                {
                printf("HOR�RIO:\t\t%shs\n",hora3);
                }
                if (hora == 4)
                {
                printf("HOR�RIO:\t\t%shs\n",hora4);
                }
                if (hora == 5)
                {
                printf("HOR�RIO:\t\t%shs\n",hora5);
                }
                if (hora == 6)
                {
                printf("HOR�RIO:\t\t%shs\n",hora6);
                }
                if (hora == 7)
                {
                printf("HOR�RIO:\t\t%shs\n",hora7);
                }
                if (hora == 8)
                {
                printf("HOR�RIO:\t\t%shs\n",hora8);
                }

                 
                 
                 
                 
<<<<<<< HEAD
=======
=======
            //PASSAGENS DE ESTUDANTE 
            case 3:
                 printf("\n++++++VENDA PASSAGENS ESTUDANTE ++++++\n");
                dadospassagem();
				 printf("\nDIGITE O N�MERO DA POLTRONA:  ");
                 scanf("%d", &poltrona);
>>>>>>> origin/master
>>>>>>> origin/master
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
                     printf("\nAS POLTRONAS S�O SOMENTE DE 1 A 36!!!\n");
                     
                     }
printf("=========================================================\n\n");
			sleep(5);// o bilhete aparece por 5 segundos
<<<<<<< HEAD
	
}

void passagemidoso(){
	 printf("=========================================================");
=======
            break;
            
<<<<<<< HEAD

//PASSAGENS DE IDOSO
            case 4: 
                printf("=========================================================");
>>>>>>> origin/master
                printf("\n=\t\tVENDA PASSAGENS IDOSO\t\t=\n");
                printf("=========================================================");

                //ESCOLHA DA LINHA E DESTINO
                destino3:
				printf("\n\n+++++++++++++++++++ MENU LINHA/DESTINO ++++++++++++++++++"),   
				printf ("\n[1] LINHA 100 - BRAS�LIA"); 
				printf ("\n[2] LINHA 200 - NATAL");
				printf ("\n[3] LINHA 300 - SANTOS\n");
                printf("ESCOLHA A OP��O DESEJADA: ");
                scanf("%d", &opcao_destino);
                if (opcao_destino < 1 || opcao_destino >3)
                {
                	printf("OP��O INV�LIDA!!");
                	printf("\n=========================================================");
                goto destino3;
				}

                //ESCOLHA DA POLTRONA
                printf("=========================================================");
                poltrona3:
				printf("\nDIGITE O N�MERO DA POLTRONA: ");
                scanf("%d", &poltrona);
				if (poltrona <1 || poltrona >36)
                {
                printf("\nAS POLTRONAS S�O SOMENTE DE 1 A 36!!!\n");
                goto poltrona3;
                }
                
				//ESCOLHA DA DATA:
						//escolha do dia
				dia3:
                printf("=========================================================");
                printf ("\nDIGITE O DIA: "); scanf ("%d",&dd); 
                if (dd < 1 || dd > 31) 
                {
                printf("ESCOLHA O DIA DO M�S V�LIDO\n");
                goto dia3;
                }                           
                		//escolha do mes				
				mes3:
				printf ("DIGITE O M�S: "); scanf("%d",&mm);
				if (mm < 1 || mm > 12)
                {
                printf("ESCOLHA O M�S V�LIDO!!");
                goto mes3;
            	}
            	
<<<<<<< HEAD
            	//escolha do ano				
=======
            	                						//escolha do ano				
>>>>>>> origin/master
				ano3:
				printf ("DIGITE O ANO: "); scanf("%d",&aaaa);
				if (aaaa <2015 || aaaa >2016)
                {
                printf("ESCOLHA UM ANO V�LIDO!!");
                goto ano3;
            	}


                //ESCOLHA DA HORA:
                printf("=========================================================");
                printf("\nHOR�RIO DO BILHETE   \n[1] 07:00\t[5] 15:00\n[2] 09:00\t[6] 17:00\n[3] 11:00\t[7] 19:00\n[4] 13:00\t[8] 21:00\n");
                printf("ESCOLHA A OP��O DESEJADA: ");
                scanf("%d", &hora);

                printf("=========================================================\n\n\n\n");
                system("cls");
				
				printf("=========================================================");
                printf("\n=\t\tEMISS�O DO BILHETE\t\t\t=\n");
                printf("=========================================================");
                printf("\n=\t\tPassagem Idoso\t\t\t=\n");
                printf("=========================================================");                
                
                //ESCREVER A ESCOLHA DO NUMERO DO �NIBUS
                if (opcao_destino == 1)
                {
                printf("\nNUMERO DO �NIBUS:\t%d",linha1);
                }
                if (opcao_destino == 2)
                {
                printf("\nNUMERO DO �NIBUS:\t%d",linha2);
                }
                if (opcao_destino == 3)
                {
                printf("\nNUMERO DO �NIBUS:\t%d",linha3);
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

                //ESCREVER O HOR�RIO
                if (hora == 1)
                {
                printf("HOR�RIO:\t\t%shs\n",hora1);
                }
                if (hora == 2)
                {
                printf("HOR�RIO:\t\t%shs\n",hora2);
                }
                if (hora == 3)
                {
                printf("HOR�RIO:\t\t%shs\n",hora3);
                }
                if (hora == 4)
                {
                printf("HOR�RIO:\t\t%shs\n",hora4);
                }
                if (hora == 5)
                {
                printf("HOR�RIO:\t\t%shs\n",hora5);
                }
                if (hora == 6)
                {
                printf("HOR�RIO:\t\t%shs\n",hora6);
                }
                if (hora == 7)
                {
                printf("HOR�RIO:\t\t%shs\n",hora7);
                }
                if (hora == 8)
                {
                printf("HOR�RIO:\t\t%shs\n",hora8);
                }





                if (poltrona>=1 && poltrona<=36)
<<<<<<< HEAD
=======
=======
            //PASSAGENS DE IDOSO
            case 4:
            	printf("\n++++++VENDA PASSAGENS DE IDOSO++++++\n");
                dadospassagem();
				 printf("\nDIGITE O NUMERO DA POLTRONA: ");
                 scanf("%d", &poltrona);
                 if (poltrona>=1 && poltrona<=36)
>>>>>>> origin/master
>>>>>>> origin/master
                 {
                 soma++;
                 idoso++;
                if (idoso >2){ //retorna mais que duas passagem para idoso
                printf("PASSAGEM PARA IDOSO ESGOTADA!!!");
                idoso--;
<<<<<<< HEAD
                
=======
                break;
>>>>>>> origin/master
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
                     printf("\nAS POLTRONAS S�O SOMENTE DE 1 A 36!!!\n");
                }
<<<<<<< HEAD
			printf("=========================================================\n\n");
			sleep(5);// o bilhete aparece por 5 segundos
}

int main()
{

setlocale(LC_ALL, "Portuguese");
//system ("title SISTEMA DE VENDA DE PASSAGEM RODOVI�RIA");

	printf("=========================================================================\n");
	printf("=		SISTEMA DE VENDA DE PASSAGEM RODOVI�RIA		                	=\n");
	printf("=========================================================================\n");
	system("color 4F");
	system ("date /t");
	system ("time /t");
	void menuRenda();
	void codigo();
	void passagemidoso();
	void passagemestudante();
	void passageminteira();
	void poltronasocupadas();
//declara��o das variaveis

//inicializa��o de variaveis
     qtd = 0, linha1 = 100, linha2 = 200, linha3 = 300;
     soma = 0;
     qa = 0;
     menu = 0;
     total = 0;
     estudante = 0;
     inteira = 0;
     idoso = 0;



//INICIO DO CODIGO
   codigo();
    while (menu!=6) //menu principal
    {
    printf("\n               ***************MENU***************");
    printf("\n               *1 - POLTRONAS OCUPADAS          *");
    printf("\n               *2 - VENDER PASSAGEM INTEIRA     *");
    printf("\n               *3 - VENDER PASSAGEM ESTUDANTE   *");
    printf("\n               *4 - VENDER PASSAGEM IDOSO       *");
    printf("\n               *5 - TOTAL DE PASSAGENS VENDIDAS *");
    printf("\n               *6 - SAIR                        *");
    printf("\n               **********************************");
    printf("\n               DIGITE A OP��O DESEJADA: ");
    scanf("%d", &menu);
    system("cls");
    switch (menu)
    {
    //POLTRONAS OCUPADAS
            case 1:
            poltronasocupadas();   
            break;


//PASSAGENS INTEIRAS
            case 2:                
            passageminteira();
            break;
            
//PASSAGENS DE ESTUDANTE
            case 3:
            passagemestudante();  
            break;
			            
//PASSAGENS DE IDOSO
            case 4: 
               passagemidoso();
            break;
 //caixa           
            case 5:
			 menuRenda();                
            break;

            case 6:
            exit(0);

            default :
                printf("\nOPCAO INV�LIDA\n");
            break;
        }
    }
    
}
=======
printf("=========================================================\n\n");
			sleep(5);// o bilhete aparece por 5 segundos
            break;
            
<<<<<<< HEAD


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
                printf("\nOPCAO INV�LIDA\n");
            break;
        }
    }
    
}

=======
            
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
                     printf("\nOPCAO INV�LIDA\n");
             break;
             }
             }
             }
>>>>>>> origin/master
>>>>>>> origin/master
