 #include <stdio.h>
 
int main() {
    
    float marcoInicial, marcoFinal, litrosGastos, valorRecebido;
    float precoCombustivel = 5.24; 
    
    
    
    printf("Informe o KM do início do dia: ");
    scanf("%f", &marcoInicial);
    
    printf("Informe o KM do final do dia: ");
    scanf("%f", &marcoFinal);
    
    printf("Informe o número de litros de combustível gasto: ");
    scanf("%f", &litrosGastos);
    
    printf("Digite o valor total recebido do(s) passageiro(s): ");
    scanf("%f", &valorRecebido);
    
    
    float kmPercorridos = marcoFinal - marcoInicial;
    float custoCombustivel = litrosGastos * precoCombustivel;
    float lucroDia =  custoCombustivel - valorRecebido;
    float mediaConsumo = kmPercorridos / litrosGastos;
    
    
    printf("\nMarcação do KM Inicial: %.2f \n", marcoInicial);
    printf("Marcação do KM Final: %.2f \n", marcoFinal);
    printf("Quantidade de KM Percorridos no Dia: %.2f \n", kmPercorridos);
    printf("Média do Consumo em Km: %.2f \n", mediaConsumo);
    printf("Lucro do Dia (líquido):  %.2f\n", lucroDia);
    
    return 0;
}