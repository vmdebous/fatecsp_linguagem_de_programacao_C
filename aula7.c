// ILP-010 (Prof. Dr. Silvio do Lago Pereira)

//------------------------------------------------------------
// Exemplo 2
//------------------------------------------------------------

void troca(int v[], int i, int j) {
   int x = v[i];
   v[i] = v[j];
   v[j] = x;
}

void bsort(int v[], int n) {
   for(int i=1; i<=n; i++)
      for(int j=0; j<n-i; j++)
         if( v[j]>v[j+1] )
            troca(v,j,j+1);
}

//------------------------------------------------------------
// Exercício 1
//------------------------------------------------------------

#include <stdio.h>

int main(void) {
   int v[10] = {83,31,91,46,27,20,96,25,96,80};
   bsort(v,10);
   exibe(v,10);
   return 0;
}

//------------------------------------------------------------
// Exemplo de aula
//------------------------------------------------------------
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 15
void preenche(int v[],int n, int m){
 for (int i=0;i<n;++i){
	v[i] = rand()%m;
	}
}
void troca(int v[], int i, int j) {
   int x = v[i];
   v[i] = v[j];
   v[j] = x;
}

int maior(int x,int y){
return (x>y);}

int menor(int x,int y){
return (x<y);}

void exibe(int v[],int n){
	printf("[");
	for (int i = 0;i<n;++i){
		printf("%d",v[i]);
		(i<n-1 ? printf(",") : printf(""));
	}
	printf("]\n");
}

void bsort(int cmp(int,int),int v[], int n) {
   for(int i=1; i<=n; i++)
      for(int j=0; j<n-i; j++)
         if(cmp(v[j],v[j+1]))
            troca(v,j,j+1);
}
int main(void) {
srand(time(NULL));
   int v[MAX];
   preenche(v,MAX,60);
   exibe(v,MAX);
   bsort(maior,v,MAX);
   exibe(v,MAX);
   getchar();
   bsort(menor,v,MAX);
   exibe(v,MAX);
   return 0;
}








//------------------------------------------------------------
// Exemplo 03
//------------------------------------------------------------


int lsearch(int x, int v[], int n) {
   for(int i=0; i<n; i++)
      if( x == v[i] )
         return 1;
   return 0;
}

//------------------------------------------------------------
// Exercício 4
//------------------------------------------------------------

#include <stdio.h>

int main(void) {
   int v[8] = {66,80,31,48,27,75,19,52};
   printf("27: %d\n",lsearch(27,v,8));
   printf("51: %d\n",lsearch(51,v,8));
   return 0;
}

//------------------------------------------------------------
// Exemplo 4
//------------------------------------------------------------


int maior(int x,int y){
return (x>y);}

int menor(int x,int y){
return (x<y);}

int bsearch(int cmp(int a,int b),int x, int v[], int n) {
   int p = 0;
   int u = n-1;
   while( p<=u ) {
      int m = (p+u)/2;
      if( x==v[m] ) return 1;
      if( cmp(x,v[m]) ) u = m-1;
      else p = m+1; 
   }
   return 0;
}

//------------------------------------------------------------
// Exercício 5
//------------------------------------------------------------

#include <stdio.h>

int main(void) {
   int v[8] = {19,27,31,48,52,66,75,80};
   printf("27: %d\n",bsearch(menor,27,v,8));
   printf("51: %d\n",bsearch(menor,51,v,8));
   return 0;
}

