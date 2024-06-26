// ILP-010 (Prof. Dr. Silvio do Lago Pereira)

//------------------------------------------------------------
// Exemplo 1 
//------------------------------------------------------------

#include <stdio.h>
#include <stdbool.h>

int main(void) {
   bool p = false, q = 7;
   printf("%d %d %d\n",sizeof(bool),p,q); // 1 0 1
   return 0;
}

//------------------------------------------------------------
// Exemplo 2 
//------------------------------------------------------------

#include <stdio.h>

int main(void) {
   printf("%d\n",1==2);       // 0
   printf("%d\n",1!=2);       // 1
   printf("%d\n",1<2);        // 1
   printf("%d\n",1>2);        // 0
   printf("%d\n",9-2<=2*3+1); // 1
   return 0;
}

//------------------------------------------------------------
// Exemplo 3 
//------------------------------------------------------------

#include <stdio.h>

int main(void) {
   printf("%d\n",!0);         // 1
   printf("%d\n",!9);         // 0
   printf("%d\n",1&&0);       // 0
   printf("%d\n",0||1);       // 1
   printf("%d\n",2<3 || 3<2); // 1
   return 0;
}

//------------------------------------------------------------
// Exercício 1
//------------------------------------------------------------

#include <stdio.h>
int main(void) {
   printf("0 && 0 == %d\n",0 && 0);
   printf("0 && 1 == %d\n",0 && 1);
   printf("1 && 0 == %d\n",1 && 0);
   printf("1 && 1 == %d\n",1 && 1);
   return 0;
}

//------------------------------------------------------------
// Exemplo 4 
//------------------------------------------------------------

#include <stdio.h>

int main(void) {
   int idade;
   printf("Idade? ");
   scanf("%d",&idade);
   if( idade<=18 ) puts("Menor");
   else puts("Maior");
   return 0;
}

//------------------------------------------------------------
// Exercício 4
//------------------------------------------------------------

#include <stdio.h>

int main(void) {
   float p1, p2, m;
   printf("Notas? ");
   scanf("%f %f",&p1,&p2);
   m = (p1+p2)/2;
   if( m>=6 ) puts("Aprovado");
   else puts("Reprovado");
   return 0;
}

//------------------------------------------------------------
// Exemplo 7 
//------------------------------------------------------------

#include <stdio.h>

int main(void) {
   int a, b;
   printf("Numeros? ");
   scanf("%d %d",&a,&b);
   printf("Maior = %d\n",(a>b ? a : b));
   return 0;
}

//------------------------------------------------------------
// Exemplo 8 
//------------------------------------------------------------

#include <stdio.h>

int main(void) {
   float a, b, c;
   printf("Numeros? ");
   scanf("%f %f %f",&a,&b,&c);
   if( a<b+c && b<a+c && c<a+b ) {
      printf("Triangulo: ");
      if( a==b && b==c ) puts("equilatero");
      else if( a==b || a==c || b==c) puts("isosceles");
      else puts("escaleno");
   }
   else puts("Nao e triangulo!");
   return 0;
}

//------------------------------------------------------------
// Exemplo 9 
//------------------------------------------------------------

#include <stdio.h>

int main(void) {
   int n;
   printf("Numero? ");
   scanf("%d",&n);
   switch( n ) {
      case  1: putchar('A'); break;
      case  3: putchar('B');
      case  4: putchar('C'); break;
      default: putchar('*');
      case  5: putchar('D');
   }
   puts("."); 
   return 0;
}

//------------------------------------------------------------
// Exemplo 10 
//------------------------------------------------------------

#include <stdio.h>

int main(void) {
   float x, y;
   char o;
   printf("Expressao? ");
   scanf("%f %c %f",&x,&o,&y);
   switch( o ) {
      case '+': printf("Valor = %.2f\n",x+y); break;
      case '-': printf("Valor = %.2f\n",x-y); break;
      case '*': printf("Valor = %.2f\n",x*y); break;
      case '/': printf("Valor = %.2f\n",x/y); break;
      default : printf("Operador invalido: %c\n",o);
   }
   return 0;
}




