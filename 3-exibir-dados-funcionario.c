   #include <stdio.h>
   
 int main(){
    
    char nome [100],cargo[100];
    int idade;
    float salarioBruto, salarioCorrigido, gratificacao, desconto, salarioLiquido;
    
    printf("Digite o nome do(a) funcionário(a): ");
    scanf("%s", nome);
    
    printf("Digite o cargo do(a) funcionário(a): ");
    scanf("%s", cargo);
    
    printf("Digite a idade do(a) funcionário(a): ");
    scanf("%d", &idade);
    
    printf("Digite o salário bruto do funcionário: ");
    scanf("%f", &salarioBruto);
    
    salarioCorrigido = salarioBruto * 1.38;
    gratificacao = salarioBruto * 0.20;
    desconto = salarioCorrigido * 0.15;
    salarioLiquido = salarioCorrigido - desconto + gratificacao;
    
    printf("\nResultados do(a) funcionário(a)\n");
    
    printf("\n");
    
    printf("Nome: %s\n", nome);
    printf("Cargo: %s\n", cargo);
    printf("Idade: %d\n", idade);
    
    printf("Salário bruto anterior: %.2f\n", salarioBruto);
    printf("Salário bruto corrigido: %.2f\n", salarioCorrigido);
    printf("Gratificação: %.2f\n", gratificacao);
    printf("Desconto: %.2f\n", desconto);
    printf("Salário líquido %.2f\n", salarioLiquido);
    
    return 0;
}
