// MENU CARDAPIO DIGITAL
#include <stdio.h>
#include  <stdlib.h>
#include "../Assinaturas/assin_cardapio.h"
char tela_menu_cardapio(void){
char opcao;
system ("clear||cls ");
printf("|-=-=-=-             MENU CARDAPIO DIGITAL         -=-=-=-=-|\n");
printf("|-=-=-=-=-=--=-=-(1) CAFE DA MANHA-=-=-=-=-=-=-=-=-=-=-=-=-=|\n");
printf("|-=-=-=-=-=-=-=-=(2) ALMOCO-=-=-=-=-=-=-=--=-=-=-==-=-=-==-=|\n");
printf("|-=-=-=-=-=-=-=-=(3) SOBREMESA-=-=-=-=--=-=-=-=-=-=-=-=-=-=-|\n");
printf("|-=-=-=-=-=-=-=-=(4) JANTA-=-=-=-=-=-=-=--=-=-=-==-=-=-=-=-=|\n");
printf("|-=-=-=-=-=-=-=-=(5) VOLTA AO MENU INICIAL -=-=-=-=-=-=-=-=-|\n");
printf("|___________________________________________________________|\n");
printf("|Escolha uma opcao:                                         | \n");
scanf ("%c", &opcao);
printf( " \t\t\t >>> Tecle <ENTER> para continuar...                 \n");
return opcao;
getchar(); 
}

void cafe(void){
system ("clear||cls ");
printf("|-=-=-=            HORA DO CAFE DA MANHA           -=-=-=-=-|\n");
printf("|-=-=-=-=-=--=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=|\n");
printf("|VEJA AQUI NO CARDAPIO TODAS AS OPCOES EM LANCHE PARA O SEU |\n");
printf("|CAFE DA MANHA!                                             |\n");
printf("|                                                           |\n");
printf("|-=-=-=-=-=-=-=-=-(5) VOLTAR AO MENU CARDAPIO-=-=-=-=-=-=-=-|\n");
printf("|                                                           |\n");
printf( " \t\t\t >>> Tecle <ENTER> para continuar...                 \n");
getchar(); 
}


void almoco(void){
system ("clear||cls ");
printf("|-=-=-=               HORA DO ALMOCO               -=-=-=-=-|\n");
printf("|-=-=-=-=-=--=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=|\n");
printf("|VEJA AQUI NO CARDAPIO TODAS AS OPCOES EM COMIDA PARA O SEU |\n");
printf("|ALMOCO!                                                    |\n");
printf("|                                                           |\n");
printf("|-=-=-=-=-=-=-=-=-(5) VOLTAR AO MENU CARDAPIO-=-=-=-=-=-=-=-|\n");
printf("|                                                           |\n");
printf( " \t\t\t >>> Tecle <ENTER> para continuar...                 \n");
getchar(); 
}

void sobremesa(void){
system ("clear||cls ");
printf("|-=-=-=               HORA DA SOBREMESA            -=-=-=-=-|\n");
printf("|-=-=-=-=-=--=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=|\n");
printf("|VEJA AQUI NO CARDAPIO TODAS AS OPCOES EM SOBREMESA!        |\n");
printf("|                                                           |\n");
printf("|-=-=-=-=-=-=-=-=-(5) VOLTAR AO MENU CARDAPIO-=-=-=-=-=-=-=-|\n");
printf("|                                                           |\n");
printf( " \t\t\t >>> Tecle <ENTER> para continuar...                 \n");
getchar(); 
}

void janta(void){
system ("clear||cls ");
printf("|-=-=-=               HORA DA JANTA                -=-=-=-=-|\n");
printf("|-=-=-=-=-=--=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=|\n");
printf("|VEJA AQUI NO CARDAPIO TODAS AS OPCOES EM COMIDA PARA O SEU |\n");
printf("|JANTA!                                                     |\n");
printf("|                                                           |\n");
printf("|-=-=-=-=-=-=-=-=-(5) VOLTAR AO MENU CARDAPIO-=-=-=-=-=-=-=-|\n");
printf("|                                                           |\n");
printf( " \t\t\t >>> Tecle <ENTER> para continuar...                 \n");
getchar(); 
}