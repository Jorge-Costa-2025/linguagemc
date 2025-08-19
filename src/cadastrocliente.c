


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../lib/criararquivo.h"

//Vamos criar uma estrutura(struct) que representa o cliente, com seus respectivos dados.

struct Cliente{
    char nome[100];
    char email[100];
    int idade;
};

int main(){
    system ("clear");
    //Vamos definir uma variavél do tipo stuct de Cliente assim podems acessar as prpriedades
    //da estrutura cliente.
   
    struct Cliente cli;
    //scanf ("%s", cli.nome);
    printf ("Digite o nome do clinte:\n");
    fgets(cli.nome, sizeof(cli.nome), stdin);

    printf ("Digite o e-mail do cliente:\n");
    fgets(cli.email, sizeof(cli.email), stdin);

    printf ("Digite a idade do cliente:\n");
    scanf ("%d", &cli.idade);
    {
     
    }

    printf("%s - %s - %d\n",cli.nome, cli.email, cli.idade);
    // Realizr a concentração (junção de elementod distintos) para
    // gravar os dados de uma só vez.
    char dados_cliente[100];
    char nome[30] = {"nome: "};
    strcat (nome, cli.nome);
    strcat(dados_cliente, nome);
    
    char email[30] = {"Email: "};
    strcat(email, cli.email);
    strcat(dados_cliente, email);

    // Vamos converter a idade, que é um valor inteiro()int, para string
    // Assim sera possivel concatenar o texto idade com o valor real da 
    // idade do cliente.
    // Utilizaremos um novo arrey  de chars que ira guardar o numero, agora no 
    // inicio do comando pede o array de chars para quardar o resultado 
    // da conversão, o sewguendo item do comamdo pede o formato original do valor 
    // a ser convertido, neste caso %d decimal. E, o ultimo valor é o numero 
    // que sera convertido ()cli.idade).

    char idade[30];
    char idadecli[20];
    char id = sprintf(idadecli, "%d", cli.idade);
    strcat(idade, idadecli);
    strcat(dados_cliente, idade);

    

    char *resultado = criar("Files/cadastro.txt", dados_cliente);
    printf("%s", resultado);

    


return 0;

}