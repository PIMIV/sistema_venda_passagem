#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
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
void escolhadahora(){
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
}
void escolhadapoltrona(){
	printf("=========================================================");
                poltrona:
				printf("\nDIGITE O N�MERO DA POLTRONA: ");
                scanf("%d", &poltrona);
				if (poltrona <1 || poltrona >36)
                {
                printf("\nAS POLTRONAS S�O SOMENTE DE 1 A 36!!!\n");
                goto poltrona;
                }
}
void linhadestino_escolha(){
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
                
				}
}
void linhadestino_escrita(){
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
}
void escolhanumonibus(){
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
}
void escreverhorario(){
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
}
void passageminteira(){
	            printf("=========================================================");
                printf("\n=\t\tVENDA PASSAGENS INTEIRAS\t\t=\n");
                printf("=========================================================");

                //ESCOLHA DA LINHA E DESTINO
                destino1:
				linhadestino_escolha();

                //ESCOLHA DA POLTRONA               
                escolhadapoltrona();
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
                escolhadahora();
                
                //ESCREVER A ESCOLHA DO NUMERO DO �NIBUS
                escolhanumonibus();

                //ESCREVER A ESCOLHA DO DESTINO
				linhadestino_escrita();

                //ESCREVER A POLTRONA
                printf("NUMERO DA POLTRONA:\t%2.2d\n",poltrona);

                //ESCREVER A DATA
				printf("DATA:\t\t\t%2.2d/%2.2d/%d\n", dd, mm, aaaa);

                //ESCREVER O HOR�RIO
                escreverhorario();


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
                 linhadestino_escolha();

                //ESCOLHA DA POLTRONA
                 escolhadapoltrona();
                
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


                //ESCOLHA DA HORA:
               escolhadahora();                
                
                //ESCREVER A ESCOLHA DO NUMERO DO �NIBUS
                escolhanumonibus();

                //ESCREVER A ESCOLHA DO DESTINO
                linhadestino_escrita();

                //ESCREVER A POLTRONA
                printf("NUMERO DA POLTRONA:\t%2.2d\n",poltrona);

                //ESCREVER A DATA
				printf("DATA:\t\t\t%2.2d/%2.2d/%d\n", dd, mm, aaaa);

                //ESCREVER O HOR�RIO
                escreverhorario();

                                               
                 
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
	
}

void passagemidoso(){
	 printf("=========================================================");
                printf("\n=\t\tVENDA PASSAGENS IDOSO\t\t=\n");
                printf("=========================================================");

                //ESCOLHA DA LINHA E DESTINO
                linhadestino_escolha();

                //ESCOLHA DA POLTRONA
               escolhadapoltrona();
                
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
            	
            	//escolha do ano				
				ano3:
				printf ("DIGITE O ANO: "); scanf("%d",&aaaa);
				if (aaaa <2015 || aaaa >2016)
                {
                printf("ESCOLHA UM ANO V�LIDO!!");
                goto ano3;
            	}


                //ESCOLHA DA HORA:
                escolhadahora();               
                
                //ESCREVER A ESCOLHA DO NUMERO DO �NIBUS
                escolhanumonibus();

                //ESCREVER A ESCOLHA DO DESTINO
                linhadestino_escrita();

                //ESCREVER A POLTRONA
                printf("NUMERO DA POLTRONA:\t%2.2d\n",poltrona);

                //ESCREVER A DATA
				printf("DATA:\t\t\t%2.2d/%2.2d/%d\n", dd, mm, aaaa);

                //ESCREVER O HOR�RIO
				 escreverhorario();


                if (poltrona>=1 && poltrona<=36)
                 {
                 soma++;
                 idoso++;
                if (idoso >2){ //retorna mais que duas passagem para idoso
                printf("PASSAGEM PARA IDOSO ESGOTADA!!!");
                idoso--;
                
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
	void linhadestino_escolha();
	void linhadestino_escrita();
	void escolhadapoltrona();
	void escolhadahora();
	void escolhanumonibus();
	void escreverhorario();
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
