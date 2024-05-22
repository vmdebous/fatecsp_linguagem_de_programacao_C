
// ILP-010 (Prof. Dr. Silvio do Lago Pereira)

//------------------------------------------------------------
// Exemplo 1
//------------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>

int main(void) {
   int *p;
   p = malloc(sizeof(int));
   *p = 5;
   printf("%d\n",*p);
   return 0;
}

//------------------------------------------------------------
// Exemplo 2
//------------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>

int main(void) {
   int *p = malloc(sizeof(int));
   *p = 5;
   printf("%d\n",*p);
   free(p);
   p = NULL;   
   return 0;
}

//------------------------------------------------------------
// Exemplo 3
//------------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>

void leia(int v[],int n) {
   for(int i=0; i<n; i++) {
      printf("%do numero? ",i+1);
      scanf("%f",&v[i]);
   }
}

float media(float v[], int n) {
   float s = 0;
   for(int i=0; i<n; i++) 
      s += v[i];
   return s/n;
}

int main(void) {
   int n;
   printf("Tamanho da sequencia? ");
   scanf("%d",&n);
   float *v = malloc(n*sizeof(float)); // cria vetor!
   leia(v,n);
   printf("Media = %.2f\n",media(v,n));
   return 0;
}

//------------------------------------------------------------
// Exercicio 1
//------------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>

int main(void) {
   int v[5] = {12,39,61,75,99};
   int w[4] = {28,40,55,81};
   int *p = merge(v,5,w,4);
   for(int i=0; i<9; i++) printf("%d\n",p[i]);
   free(p);
   return 0;
}

#include <stdio.h>
#include <stdlib.h>

typedef int Item;

typedef struct no {
   Item item;
   struct no *prox;
} *Lista;

Lista no(Item x, Lista p) {
   Lista n = malloc(sizeof(struct no));
   n->item = x;
   n->prox = p;
   return n;
}

void exibe(Lista L) {
	printf("[");
   while( L ) {
      printf("%d",L->item);
	(L -> prox != NULL) ? printf(","):printf("");
      L = L->prox;
   }
	printf("]\n");
}

int tamanho(Lista L) {
   int t = 0;
   while( L ) {
      t++;
      L = L->prox;
   }
   return t; 
}

int soma(Lista L) {
   int s = 0;
   while( L ) {
      s+=L -> item;
      L = L->prox;
   }
   return s; 
}
Lista range(int n){
Lista acumulador = NULL;
while(n>0){acumulador = no(--n,acumulador);}

return acumulador;}

int recursivelen(Lista L){
if (!L) return 0;
return 1 + recursivelen(L ->prox);}

int recursivesum(Lista L){
	if (!L) return 0;
	return L->item + recursivesum(L->prox);}

Lista recursiveclone(Lista L){
if (!L) return NULL;
return no(L -> item,recursiveclone(L->prox));}

Item ultimo(Lista L){
 if (!L) {puts("Erro: não há último em lista vazia");
abort();}else{while(L -> prox)L = L -> prox;} 
return L -> item;}

int main(void) {
    Lista I = range(10);
   exibe(I);
		Lista b = recursiveclone(I);
		exibe(b);
	printf("Tamanho = %d\n",recursivelen(I));
		printf("Soma = %d\n",recursivesum(I));
	printf("Ultimo termo = %d\n",ultimo(I));
   return 0;
}

