#include <stdio.h>
#include <string.h>

//Struct produtos
typedef struct{
    int codigo;
    char nome[100];
    float valor;
    int quantidade;
}Produtos;

void limpabuffer(){
    int c; 
    while((c = getchar()) != '\n' && c != EOF); //Permite guardar string em char com buffer limpo
}

void menuProdutos(Produtos pr[], int *contpr) {
    codigoValido=0;
        //Sub menu
        printf("\n--Produtos--\n1. Cadastrar produto\n2. Listar produtos cadastrados\n
            3. Buscar produto por codigo\n4. Voltar ao menu principal: ");
        scanf("%d",&escolhaProdutos);
        if(escolhaProdutos != 4){
        switch(escolhaProdutos){
            default:
            printf("\nDigite uma opção correta!\n");
            break;

            case 1:
            printf("\n--Cadastro de Produtos--\nQual o código do produto?");
            scanf("%d",&pr[contpr].codigo);

        if(contpr>0){
            for(int i=0; i< contpr; i++){
                if(pr[contpr].codigo == pr[i].codigo){
                    printf("\nCódigo já Existente!\n");
                    codigoValido = 1;
                }
            }
        }
        
        limpabuffer();

        printf("\nQual o nome do produto?: ");
        fgets(pr[contpr].nome,100,stdin);

        printf("\nQual o valor de %s?: ",pr[contpr].nome);
        scanf("%f",&pr[contpr].valor);

        printf("\nDefina a quantidade de %s?: ",pr[contpr].nome);
        scanf("%d",&pr[contpr].quantidade);

        contpr++;
        break;

        case 2:
        printf("\n--Listagem de Produtos--\n");
        if(contpr == 0)
        printf("Mas não há nada em Produtos!");

        for(int i = 0; i<contpr; i++){
            printf("\nCOD: %d NOME: %s QTD: %d",pr[i].codigo,pr[i].nome,pr[i].quantidade);
            }

        case 3:
            
        }
    }
        //cadastrar
}

int main()
{
    printf("--------------------\n      CFORGE\n--------------------\n");
    
//DEFINIÇÃO DAS VARIAVEIS
    int escolhaMain, condicaoMain=1, contpr=0, codigoValido=0,escolhaProdutos;
    
    Produtos pr[100];
    
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
        
        //Opção dos Produtos com proteção que futuramente virará legado!
        case 1:
        do{
        }while(codigoValido);
      
           
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
