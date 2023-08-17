 #include <stdio.h>
 
 float main (){
    
   float litrosComb, kmPercorrido;
   float precoLitro = 5.24;
   
   
   printf("Digite a quantidade de litros gasto: ");
   scanf("%f", &litrosComb);
   
   printf("Digite o total do Km percorrido: ");
   scanf("%f", &kmPercorrido);
   
    float totalGasto = litrosComb * precoLitro;
    float consumoMedio = kmPercorrido / litrosComb;
   
   
   printf("\nDetalhes da Viagem:\n");
   
   printf("Quantidade em litros gastos: %.2f\n", litrosComb);
   printf("Total Km percorrido: %.2f\n", kmPercorrido);
   printf("Total gasto de combustivel: %.2f\n", totalGasto);
   printf("Consumo médio de combustivel: %.2f\n", consumoMedio);
   
   return 0;
    
}