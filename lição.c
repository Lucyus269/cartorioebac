#include <stdio.h>//biblioteca de comunica��o do usuario
#include <stdlib.h>//biblioteca de aloca��o de espa�o em memoria
#include <locale.h>//biblioteca de aloca��o de texto por regi�o
#include <string.h>//biblioteca responsavel por cuidar das string
int registro()
{
	 char arquivo[10000];
	 char cpf[10000];
	 char nome[10000];
	 char sobrenome[10000];
	 char cargo[10000];
	 
	 printf("digite seu cpf a ser cadastrado:\n");
	 scanf("%s", cpf);
	
	 strcpy(arquivo, cpf);//responsavel por copiar valores da string
	 FILE*file;//cria o arquivo
	 file = fopen(arquivo,"w");//cria o arquivo
	 fprintf(file,cpf);//salva o valor
	 fclose(file);//encerra o arquivo
	 
	 file = fopen(arquivo,"a");
	 fprintf(file,",");
	 fclose(file);
	 
	 printf("digite o nome a ser cadastrado:\n");
	 scanf ("%s",nome);
	 
	 file = fopen(arquivo,"a");
	 fprintf(file,nome);
	 fclose(file);
	 
	 file = fopen(arquivo,"a");
	 fprintf(file,",");
	 fclose(file);
	 
	 printf("Digite o sobrenome a ser cadastrado:\n");
	 scanf("%s",sobrenome);
	 
	 file = fopen(arquivo,"a");
	 fprintf(file,sobrenome);
	 fclose(file);
	 
	 file = fopen(arquivo,"a");
	 fprintf(file,",");
	 fclose(file);
	 
	 printf("Digite o cargo a ser cadstrado:\n");
	 scanf("%s",cargo);
	 
	 file = fopen(arquivo,"a");
	 fprintf(file,cargo);
	 fclose(file);
	 
	 file = fopen(arquivo,"a");
	 fprintf(file,",");
	 fclose(file);
	 
	 system("pause");
	 
}


int consulta()
{
	 setlocale(LC_ALL, "Portuguese");//definindo a linguagem
	 char cpf[10000];
	 char conteudo[10000];
	 
	 printf("Digite o cpf a ser consultado:\n");
	 scanf("%s",cpf);
	 
	 FILE *file;
	 file = fopen(cpf,"r");
	 
	 if(file == NULL)
	 {
	    printf("n�o foi possivel abrir o arquivo, cpf n�o localizado!");
	    
	 }
	 
	 while(fgets(conteudo,10000,file)!= NULL)
	 {
	      printf("\nEssas s�o as informa��es do usuario: ");
	      printf("%s",conteudo);
	      printf("\n\n");
	 }
	  
	  system ("pause");


	 
}

int deletar()
{
	 char cpf[10000];
	 
	 printf("digite o cpf a ser deletado: ");
	 scanf("%s",cpf);
	 remove(cpf);
	 
	 FILE *file;
	 file = fopen(cpf,"r");
	 
	 if(file == NULL)
	 {
	 	printf("arquivo n�o encontrado\n");
	 	system("pause");
	 	
	 }
	 




}




int main()
{
    int opcao=0;//definindo variaveis 
	int voltar=1;
	
	for(voltar=1;voltar=1;){
	
	 system("cls");
	 setlocale(LC_ALL, "Portuguese");//definindo a linguagem
    
    
     printf("### Cart�rio da ebac ###\n\n");//inicio do menu
     printf("Escolha a op��o desejada: \n\n");//texto
     printf("\t1 - resgistra nomes\n");//op�ao 1
     printf("\t2 - Consultar nomes\n");//op��o 2
     printf("\t3 - deletar nomes\n");//op�ao 3
     printf("\t4 - sair do aplicativo\n\n");
     printf("escolha sua op��o: \n");
	 scanf("%d",&opcao);//armazena a escolha do usuario
	
	 system("cls");
	 
	 switch(opcao)
	{
		case 1:
	    registro();
		break;	
		
		case 2:
	    consulta();
		break;	
		
		case 3:
	    deletar();
		break;	
		
		case 4:
	    printf("Obrigado por utilizar o sistema!\n");
		return 0;
		break;
		
		
		default:
	    printf("essa op��o n�o existe\n");	
	    system("pause");
		break;	
	}
	
	
}
}
