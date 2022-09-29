// MENU RELATORIO
#include <stdio.h>
#include  <stdlib.h>
#include "../Assinaturas/assin_relatorios.h"
#include "../Assinaturas/menus.h"

void moduloRelatorio(void){
    char escolha;

    do {
        escolha = tela_menu_relatorios();
        switch(escolha) {
            case '1':   relatorio_ingredientes();
                        break;
            case '2':   relatorio_receitas();
                        break;
            case '3':   relatorio_chefe();
                        break;
            
        } 	
    } while (escolha != '0');


}

char tela_menu_relatorios(void){
char opcao;
system ("clear||cls ");
printf("|-=-=-=-             MENU RELATORIO                -=-=-=-=-|\n");
printf("|-=-=-=-=-=--=-=-(1) RELATORIO DE TODOS OS INGREDIENTES-=-=-|\n");
printf("|-=-=-=-=-=-=-=-=(2) RELATORIO DE TODAS AS RECEITAS-=-=-=-==|\n");
printf("|-=-=-=-=-=-=-=-=(3) RELATORIO DE TODOS OS CHEFES=-=-=-=-==-|\n");
printf("|                                                           |\n");
printf("|-=-=-=-=-=-=-=-=(0) VOLTA AO MENU INICIAL -=-=-=-=-=-=-=-=-|\n");
printf("|___________________________________________________________|\n");
printf("|Escolha uma opcao:                                         | \n");
scanf ("%c", &opcao);
getchar();
printf( " \t\t\t >>> Tecle <ENTER> para continuar...                 \n");
getchar();
return opcao; 
}

void relatorio_ingredientes(void){
system ("clear||cls ");
printf("|-=-=-=       RELATORIO DE TODOS OS INGREDIENTES   -=-=-=-=-|\n");
printf("|-=-=-=-=-=--=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=|\n");
printf("|                                                           |\n");
printf("|                                                           |\n");
printf("|                                                           |\n");
printf("|-=-=-=-=-=-=-=-=-(0) VOLTAR AO MENU CARDAPIO-=-=-=-=-=-=-=-|\n");
printf("|                                                           |\n");
printf( " \t\t\t >>> Tecle <ENTER> para continuar...                 \n");
getchar(); 
}

void relatorio_receitas(void){
system ("clear||cls ");
printf("|-=-=-=       RELATORIO DE TODAS AS RECEITAS       -=-=-=-=-|\n");
printf("|-=-=-=-=-=--=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=|\n");
printf("|                                                           |\n");
printf("|                                                           |\n");
printf("|                                                           |\n");
printf("|-=-=-=-=-=-=-=-=-(0) VOLTAR AO MENU CARDAPIO-=-=-=-=-=-=-=-|\n");
printf("|                                                           |\n");
printf( " \t\t\t >>> Tecle <ENTER> para continuar...                 \n");
getchar(); 
}

void relatorio_chefe(void){
system ("clear||cls ");
printf("|-=-=-=       RELATORIO DE TODOS OS CHEFES         -=-=-=-=-|\n");
printf("|-=-=-=-=-=--=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=|\n");
printf("|                                                           |\n");
printf("|                                                           |\n");
printf("|                                                           |\n");
printf("|-=-=-=-=-=-=-=-=-(0) VOLTAR AO MENU CARDAPIO-=-=-=-=-=-=-=-|\n");
printf("|                                                           |\n");
printf( " \t\t\t >>> Tecle <ENTER> para continuar...                 \n");
getchar(); 
}