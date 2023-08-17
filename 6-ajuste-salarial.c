 #include <stdio.h>
 
int main() {
    
    char  nome[100];
    float salarioBruto, inss, ir, salarioLiquido, horasTrabalhadas;
    int dependentes;

    
    printf("Informe o nome do(a) funcionário(a): ");
    scanf("%s", nome);

    printf("Informe o número de horas trabalhadas: ");
    scanf("%f", &horasTrabalhadas);

    printf("Informe o número de dependentes: ");
    scanf("%d", &dependentes);

    
    salarioBruto = (horasTrabalhadas * 12) + (dependentes * 40);
    inss = salarioBruto * 0.085;  
    ir = salarioBruto * 0.05;     
    salarioLiquido = salarioBruto - inss - ir;

    
    printf("\nNome: %s\n", nome);
    printf("Salário Bruto: %.2f\n", salarioBruto);
    printf("Valor descontado para INSS: %.2f\n", inss);
    printf("Valor descontado para IR: %.2f\n", ir);
    printf("Salário Líquido: %.2f\n", salarioLiquido);

    return 0;
}
