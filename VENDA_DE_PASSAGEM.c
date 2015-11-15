#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
//inclusao das bibliotecas usadas
	char a[9][4], b[9][4], c[9][4], linha, coluna, qtdA, qtdB, qtdC, linhaA, linhaB, linhaC, colunaA, colunaB, colunaC, vendido;
	double total,estudante, inteira, idoso;
    int opcao_destino, menu, soma, poltrona, qa, hora, data;
    int linha1, linha2, linha3, dd, mm, aaaa, assento;
    
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

void cabecalho(){
	printf("=========================================================\n");
	printf("         SISTEMA DE VENDA DE PASSAGEM RODOVIÁRIA         \n");
	printf("=========================================================\n");
	printf("DATA : %s \t\tHORA: %s\n",__DATE__,__TIME__);
	system("color 4F");
	
}
    
void escolhadata(){

                printf("\n=========================================================");
                dia1:
				printf ("\nDIGITE O DATA DD/MM/AAAA: "); 
				scanf (" %d %*c %d %*c %d", &dd, &mm,&aaaa); 
                if (dd < 1 || dd > 31) {
                printf("\nESCOLHA UM DIA VÁLIDO");
                goto dia1;
                }                           
				if (mm < 1 || mm > 12){
                printf("\nESCOLHA UM MÊS VÁLIDO!!");
                goto dia1;
            	}

				if (aaaa <2015 || aaaa >2016){
                printf("\nESCOLHA UM ANO VÁLIDO!!");
                goto dia1;
            	}	
	
}

void poltronasocupadas(){
	printf("\n\n               +++++++++++++++++++ MENU LINHA/DESTINO ++++++++++++++++++"),   
	printf ("\n               [1] LINHA 100 - BRASÍLIA"); 
	printf ("\n               [2] LINHA 200 - NATAL");
	printf ("\n               [3] LINHA 300 - SANTOS\n");
    printf("               ESCOLHA A OPÇÃO DESEJADA: ");
    scanf("%d", &opcao_destino);
    switch (opcao_destino){
    	case 1:								
            printf("\n");
			for (linhaA=0;linhaA<9;linhaA++){
                for (colunaA=0;colunaA<4;colunaA++){
                	if (a[linhaA][colunaA]==vendido){
                        printf("[  X  ] ");
                    }
                    else{
                        printf("[ %2d ]\t ", a[linhaA][colunaA]);
                    }
                }
            printf("\n");
            }
            sleep(3);    
        break;
        
		case 2: 
            printf("\n");
			for (linhaB=0;linhaB<9;linhaB++){
                    for (colunaB=0;colunaB<4;colunaB++){
                        if (b[linhaB][colunaB]==vendido){
                        printf("[  X  ] ");
                        }
                        else{
                        printf("[ %2d ]\t ", b[linhaB][colunaB]);
                        }
                    }
                printf("\n");
                }
            sleep(3);    
            break;
            
		case 3:
            printf("\n");
			for (linhaC=0;linhaC<9;linhaC++){
                for (colunaC=0;colunaC<4;colunaC++){
                    if (c[linhaC][colunaC]==vendido){
                        printf("[  X  ] ");
                    }
                        else{
                        printf("[ %2d ]\t ", c[linhaC][colunaC]);
                        }
                    }
            printf("\n");
                }
            sleep(3);    
            break;
            
        default :
        	printf("\nOPCAO INVÁLIDA\n");
        break;
			}
	}

void codigoA(){//codigo principal
	for (linhaA=0;linhaA<9;linhaA++){   //varredura da matriz
		for (colunaA=0;colunaA<4;colunaA++){
           	qtdA++;
           	a[linhaA][colunaA] = qtdA;
       	}
    }	
}

void codigoB(){//codigo principal
	for (linhaB=0;linhaB<9;linhaB++){   //varredura da matriz
    	for (colunaB=0;colunaB<4;colunaB++){
            qtdB++;
            b[linhaB][colunaB] = qtdB;
        }
    }	
}

void codigoC(){//codigo principal
	for (linhaC=0;linhaC<9;linhaC++){   //varredura da matriz
    	for (colunaC=0;colunaC<4;colunaC++){
            qtdC++;
            c[linhaC][colunaC] = qtdC;
        }
    }	
}

void menuRenda(){ 
	char op;	
	total = (inteira*50)+(estudante*25)+(idoso*0);
	cabecalho();
	printf("\n====================VALOR DA PASSAGEM====================\n");
    printf("PASSAGEM INTEIRA R$50,00\n");
    printf("PASSAGEM ESTUDANTE DESCONTO DE 50%% = R$25,00\n");
    printf("PASSAGEM IDOSO GRATUITO (limite 02 max)\n");
    printf("=========================================================\n");
    printf("\n============== TOTAL DE PASSAGENS VENDIDAS ==============\n");
    printf("\nTOTAL DE PASSAGENS DE INTEIRA:\t|%4.0f\n ", inteira);
    printf("\nTOTAL DE PASSAGENS DE ESTUDANTE:|%4.0f\n ", estudante);
    printf("\nTOTAL DE PASSAGENS DE IDOSO:\t|%4.0f\n ", idoso);
    printf("\nTOTAL R$%4.2f\n", total); 
    printf("=========================================================");
}

void escolhadahora(){
    printf("=========================================================");
    printf("\nHORÁRIO DO BILHETE   \n[1] 07:00\t[5] 15:00\n[2] 09:00\t[6] 17:00\n[3] 11:00\t[7] 19:00\n[4] 13:00\t[8] 21:00\n");
    printf("ESCOLHA A OPÇÃO DESEJADA: ");
    scanf("%d", &hora);

    printf("=========================================================\n\n\n\n");
    system("cls");
	
	cabecalho();			
	printf("=========================================================");
    printf("\n\t\t EMISSÃO DO BILHETE\t\t\t\n");
    printf("=========================================================");
}
void escolhadapoltrona(){
	printf("\n=========================================================");
    poltrona:
	printf("\nDIGITE O NÚMERO DA POLTRONA: ");
    scanf("%d", &poltrona);
	if (poltrona <1 || poltrona >36){
    	printf("\nAS POLTRONAS SÃO SOMENTE DE 1 A 36!!!\n");
    goto poltrona;
    }
}
//FUNÇÃO PARA ESCOLHA DA LINHA/DESTINO																					
void linhadestino_escolha(){
	
	printf("\n=========================================================");
	printf("\n		ESCOLHA A LINHA/DESTINO					");   
	printf("\n=========================================================");
	printf ("\n[1] LINHA 100 - BRASÍLIA"); 
	printf ("\n[2] LINHA 200 - NATAL");
	printf ("\n[3] LINHA 300 - SANTOS\n");
    printf("DIGITE A OPÇÃO DESEJADA: ");
    scanf("%d", &opcao_destino);
    switch (opcao_destino){
      	case 1:								
            for (linhaA=0;linhaA<9;linhaA++){
                for (colunaA=0;colunaA<4;colunaA++){
                    if (a[linhaA][colunaA]==poltrona){
                        a[linhaA][colunaA]=vendido;
					}
                }
            }
        break;
            
		case 2: 
            for (linhaB=0;linhaB<9;linhaB++){
                for (colunaB=0;colunaB<4;colunaB++){
                	if (b[linhaB][colunaB]==poltrona){
                        b[linhaB][colunaB]=vendido;
                    }
                }
            }
        break;
        
        case 3:
            for (linhaC=0;linhaC<9;linhaC++){
                for (colunaC=0;colunaC<4;colunaC++){
                	if (c[linhaC][colunaC]==poltrona){
                            c[linhaC][colunaC]=vendido;
                            }
                        }
                    }
            break;
             default :
                printf("\nOPCAO INVÁLIDA\n");
            break;
	}
}
//FUNÇÃO PARA ESCREVER O DESTINO																					
void linhadestino_escrita(){
	if (opcao_destino == 1){
        printf("\nDESTINO:\t\t%s\n",destino1);
    }
    
    if (opcao_destino == 2){
        printf("\nDESTINO:\t\t%s\n",destino2);
    }
    
    if (opcao_destino == 3){
        printf("\nDESTINO:\t\t%s\n",destino3);
    }
}
//FUNÇÃO PARA ESCREVER A LINHA																					
void escolhanumonibus(){
	if (opcao_destino == 1){
        printf("\nNUMERO DO ÔNIBUS:\t%d",linha1);
    }
                
	if (opcao_destino == 2){
        printf("\nNUMERO DO ÔNIBUS:\t%d",linha2);
    }
    if (opcao_destino == 3){
        printf("\nNUMERO DO ÔNIBUS:\t%d",linha3);
    }
}
//FUNÇÃO PARA ESCREVER HORARIO																
void escreverhorario(){
	if (hora == 1){
        printf("HORÁRIO:\t\t%shs\n",hora1);
    }
    if (hora == 2){
        printf("HORÁRIO:\t\t%shs\n",hora2);
    }
    if (hora == 3){
    	printf("HORÁRIO:\t\t%shs\n",hora3);
    }
    if (hora == 4){
    	printf("HORÁRIO:\t\t%shs\n",hora4);
    }
    if (hora == 5){
        printf("HORÁRIO:\t\t%shs\n",hora5);
    }
    if (hora == 6){
    	printf("HORÁRIO:\t\t%shs\n",hora6);
    }
    if (hora == 7){
    printf("HORÁRIO:\t\t%shs\n",hora7);
    }
    if (hora == 8){
    printf("HORÁRIO:\t\t%shs\n",hora8);
    }
}

//FUNÇÃO PARA VENDA DE PASSAGEM INTEIRA																										
void passageminteira(){
	cabecalho();
	 printf("=========================================================");
     printf("\n\t\tVENDA PASSAGENS INTEIRAS\t\t\n");
     printf("=========================================================");

                //ESCOLHA DA POLTRONA               
                volta:
				escolhadapoltrona();
                if (poltrona>=1 && poltrona<=36){

                inteira++;
                destino1:
				linhadestino_escolha();
    			}
                if (poltrona >36){
                printf("\nAS POLTRONAS SÃO SOMENTE DE 1 A 36!!!\n");
                goto volta;
                }
				//ESCOLHA DA DATA:
				
				escolhadata();

                //ESCOLHA DA HORA:
                escolhadahora();
                
                //ESCREVER A ESCOLHA DO NUMERO DO ÔNIBUS
                escolhanumonibus();

                //ESCREVER A ESCOLHA DO DESTINO
				linhadestino_escrita();

                //ESCREVER A POLTRONA
                printf("NUMERO DA POLTRONA:\t%2.2d\n",poltrona);

                //ESCREVER A DATA
				printf("DATA:\t\t\t%2.2d/%2.2d/%d\n", dd, mm, aaaa);

                //ESCREVER O HORÁRIO
        	escreverhorario();
        	
        	
        	
			printf("=========================================================\n\n");
			sleep(3);// o bilhete aparece por 5 segundos	
}


//FUNÇÃO PARA VENDA DE PASSAGEM ESTUDANTE																								
void passagemestudante(){
	cabecalho();
	 printf("=========================================================");
                printf("\n\t\tVENDA PASSAGENS ESTUDANTE\t\t\n");
                printf("=========================================================");

                //ESCOLHA DA POLTRONA
                 escolhadapoltrona();
                 
                if (poltrona>=1 && poltrona<=36){
                soma++;
                estudante++;
                destino1:
				linhadestino_escolha(); 
                }
                else{
                    printf("\nAS POLTRONAS SÃO SOMENTE DE 1 A 36!!!\n");
                }
                
				//ESCOLHA DA DATA:
				escolhadata();	

                //ESCOLHA DA HORA:
               escolhadahora();                
                
                //ESCREVER A ESCOLHA DO NUMERO DO ÔNIBUS
                escolhanumonibus();

                //ESCREVER A ESCOLHA DO DESTINO
                linhadestino_escrita();

                //ESCREVER A POLTRONA
                printf("NUMERO DA POLTRONA:\t%2.2d\n",poltrona);

                //ESCREVER A DATA
				printf("DATA:\t\t\t%2.2d/%2.2d/%d\n", dd, mm, aaaa);

                //ESCREVER O HORÁRIO
                escreverhorario();

printf("=========================================================\n\n");
			sleep(3);// o bilhete aparece por 3 segundos	
}

//FUNÇÃO PARA VENDA DE PASSAGEM IDOSO																								
void passagemidoso(){
	cabecalho();
	 printf("=========================================================");
                printf("\n\t\tVENDA PASSAGENS IDOSO\t\t\n");
                printf("=========================================================");

                //ESCOLHA DA POLTRONA
               escolhadapoltrona();
               
                if (poltrona>=1 && poltrona<=36){
                	soma++;
                	idoso++;
                	if (idoso >2){ //retorna mais que duas passagem para idoso
                	printf("PASSAGEM PARA IDOSO ESGOTADA!!!");
                	idoso--;
                	linhadestino_escolha();
					}
                }
                
				if (poltrona > 36){
                	printf("\nAS POLTRONAS SÃO SOMENTE DE 1 A 36!!!\n");
                }
                
				//ESCOLHA DA DATA:
				escolhadata();

                //ESCOLHA DA HORA:
                escolhadahora();               
                
                //ESCREVER A ESCOLHA DO NUMERO DO ÔNIBUS
                escolhanumonibus();

                //ESCREVER A ESCOLHA DO DESTINO
                linhadestino_escrita();

                //ESCREVER A POLTRONA
                printf("NUMERO DA POLTRONA:\t%2.2d\n",poltrona);

                //ESCREVER A DATA
				printf("DATA:\t\t\t%2.2d/%2.2d/%d\n", dd, mm, aaaa);

                //ESCREVER O HORÁRIO
				 escreverhorario();

			printf("=========================================================\n\n");
			sleep(3);// o bilhete aparece por 3 segundos
}


//FUNÇÃO MAIN()																
int main()
{

setlocale(LC_ALL, "Portuguese");
//system ("title SISTEMA DE VENDA DE PASSAGEM RODOVIÁRIA");

	cabecalho();

	void menuRenda();
	void codigoA();
	void codigoB();
	void codigoC();
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
	void escolhadata();
	void cabecalho();
//declaração das variaveis

//inicialização de variaveis
     linha1 = 100, linha2 = 200, linha3 = 300;
     soma = 0;
     qa = 0;
     menu = 0;
     total = 0;
     estudante = 0;
     inteira = 0;
     idoso = 0;
     qtdA = 0, qtdB = 0, qtdC = 0;
	 a[9][4] = 0, b[9][4] =0, c[9][4]=0;  



//INICIO DO CODIGO
	codigoA();
	codigoB();
	codigoC();
	while (menu!=6){ //menu principal
    	printf("\n            ***************MENU***************");
    	printf("\n            *1 - POLTRONAS OCUPADAS          *");
   		printf("\n            *2 - VENDER PASSAGEM INTEIRA     *");
    	printf("\n            *3 - VENDER PASSAGEM ESTUDANTE   *");
    	printf("\n            *4 - VENDER PASSAGEM IDOSO       *");
    	printf("\n            *5 - TOTAL DE PASSAGENS VENDIDAS *");
    	printf("\n            *6 - SAIR                        *");
    	printf("\n            **********************************");
    	printf("\n            DIGITE A OPÇÃO DESEJADA: ");
    	scanf("%d", &menu);
    	system("cls");
    	switch (menu){
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
 //SAIDA   
            case 6:
            exit(0);
 //DEFAULT 
            default :
                printf("\nOPCAO INVÁLIDA\n");
            break;
        }
    }
    
}

