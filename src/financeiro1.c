#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "../lib/financeiro.h"

struct financeiro1
{
    char nome[100];
    float salario;
    float convenio;
    float premio;;
    float salario_liquido;
};

int main() {
    system("clear");
    struct financeiro1 fun;
    printf("Digite o nome do funcionário:\n");
    fgets(fun.nome, sizeof(fun.nome), stdin);
    fun.nome[strcspn(fun.nome, "\n")] = 0; // Remove o '\n' do final

    printf("Digite o salário bruto (use ponto para casas decimais):\n");
    scanf("%f", &fun.salario);

    printf("Digite o percentual de desconto do convênio (ex: 0.05 para 5%%):\n");
    scanf("%f", &fun.convenio);

    printf("Digite o percentual de prêmio (ex: 0.10 para 10%%):\n");
    scanf("%f", &fun.premio);

    printf("O desconto do convênio é: %.2f\n" , jurosSimples(fun.salario, fun.convenio));
    printf("O prêmio é: %.2f\n", jurosSimples(fun.salario, fun.premio));

    fun.salario_liquido = fun.salario + jurosSimples(fun.salario, fun.premio) - jurosSimples(fun.salario, fun.convenio);

    printf("O salário líquido é: %.2f\n", fun.salario_liquido);

    // Vamos criar um composição com textos literais e variavel para 
    // quardar no arquivo de texto.

    char dados_funcionario[100];
    
    char nome[30] = {" Nome:\n"};
    strcat(nome, fun.nome);
    strcat(dados_funcionario, nome);

// criamos o vetor salario para armazenar o texto salario com R$ 
// e juntar (concatenar) com o valor do salario do funcionario.

    char salario[20] = {"\nSalário: R$"};
    // foi criado o vetor c_salario para guardar o avlor do salario convertido 
    // em char. Somente assim, sera concatenado com o texto "Salário: R$ ".
    // O comando sprintf converte o valor do salario, que é um float, para string.
    // O primeiro item do comando é o array de chars que ira guardar o resultado 
    // da conversão, o segundo item do comando pede o formato original do valor 
    // a ser convertido, neste caso %.2f para float com duas casas decimais.
    // E, o ultimo valor é o numero que sera convertido (fun.salario).
    // O resultado da conversão é guardado no array c_salario, que é do tipo char.

    // O comando strcat concatena o texto "Salário: R$ " com o valor do salario 
    // do funcionario, que foi convertido para string.

    // O comando strcat concatena o texto "Salário: R$ " com o valor do salario 
    // do funcionario, que foi convertido para string.  
    char c_salario[10];
    // estamos usando o comando sprintf para converter o valor digitatdo do salario
    // que vem no formato float, para o formato char 
    // assim podemos juntar com o vetor salario, criando então a 
    // estrutura: Salário: R$ 00000.00
    sprintf(c_salario, "%.2f", fun.salario);

    // junçao (concatenação) do texto "Salário: R$ " com o valor do c_salario
    // com c_salario (O valor digitado do salario do funcionario).
    // O resultado é guardado no vetor dados_funcionario.
    strcat(salario, c_salario);

    // depois de juntar o vetores relacionados a salario. agora iremos 
    // adicionar ao vetor de dados_funcionario paar, então, gravar no arquivo de texto.
    strcat(dados_funcionario, salario);

    char salario_liquido[30] = {"\nSalário Líquido: R$"};
    char c_salario_liquido[10];
    sprintf(c_salario_liquido, "%.2f", fun.salario_liquido);
    strcat(salario_liquido, c_salario_liquido);
    strcat(dados_funcionario, salario_liquido);


       

    char *resposta = criar("funcionario.txt", dados_funcionario);
    printf("%s", resposta);
    
    return 0;
    
    
}
