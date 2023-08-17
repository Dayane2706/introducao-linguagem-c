   #include <stdio.h>
   
 int main (){
     float base, altura, areaTotal;
     
     printf("Digite a base do triangulo: ");
     scanf("%f", &base);
     
     printf ("Digite a altura do triangulo: ");
     scanf("%f", &altura);
     
     areaTotal = (base * altura ) / 2;
     
     printf("A área total é de: %.2f metros!", areaTotal);
      
      
     return 0;
 }
 