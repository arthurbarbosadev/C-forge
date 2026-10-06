#include <stdio.h>

int main()
{
    printf("--------------------\n      CFORGE\n--------------------\n");
    
//DEFINIÇÃO DAS VARIAVEIS
    int escolhaMain, condicaoMain=1;
    
//PAINEL v0.1
    do{

    printf("\n1. Produtos\n2. Usuários\n3. Pedidos\n0. Sair");
    printf("\n\nEscolha: ");
    scanf("%d",&escolhaMain);

    switch(escolhaMain){
        
        //flag de saida
        case 0:
        
        condicaoMain = 0;
        break;
        
        
        //Opção dos Produtos
        case 1:
        
        break;
        
        //Opção dos Usuários
        case 2:
        
        break;
        
        //Opção dos Pedidos
        case 3:
        
        break;
        
        //Prevent Defaut
        default:
        
        printf("\nDIGITE APENAS OPÇÕES VÁLIDAS!\n");
        
        break;
    }
    
    }while(condicaoMain); //Executa o painel até ter uma condição de saida
    
    
    return 0;
}
