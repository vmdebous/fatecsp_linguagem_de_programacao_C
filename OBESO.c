
// ILP-010 (Prof. Dr. Silvio do Lago Pereira)

//------------------------------------------------------------
// Exemplo 1    
//------------------------------------------------------------                                               

/* OBESO.C - determina se uma pessoa está obesa */

#include <stdio.h> // entrada e saída padrão
#include <math.h>  // funções matemáticas

int main(void) {
   float peso, altura, imc;
   printf("Qual o peso e a altura? ");
   scanf("%f %f", &peso, &altura);
   imc = peso/pow(altura,2);
   printf("IMC = %.1f\n",imc);
   if( imc<=30 ) printf("Nao esta obesa!\n");
   else printf("Esta obesa!\n");
   return 0;
}

//------------------------------------------------------------
// Exemplo 4    
//------------------------------------------------------------                                               

#include <stdio.h>

int main(void) {
   char v = 'A';
   printf("%d\n", sizeof(int)); 
   printf("%d\n", sizeof(1.2));      
   printf("%d\n", sizeof(v));
   printf("%d\n", sizeof(v+1));
   return 0;
}

//------------------------------------------------------------
// Exemplo 7    
//------------------------------------------------------------                                               

#include <stdio.h>

int main(void) {
   int a = 678;
   float b = 12.3416;
   printf("%5d\n",a);     // 678 
   printf("%06d\n",a);    // 000678 
   printf("%7.3f\n",b);   // 12.342 
   return 0;
}
lp-01.txt
Exibindo lp-01.txt…
