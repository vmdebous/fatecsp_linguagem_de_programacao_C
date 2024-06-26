// ILP-010 (Prof. Dr. Silvio do Lago Pereira)

//------------------------------------------------------------
// Exemplo 2
//------------------------------------------------------------

#include <stdio.h>

int main(void) {
   int v[5];
   for(int i=0; i<5; i++) {
      printf("%do. item? ",i+1);
      scanf("%d",&v[i]);
   }
   puts("Ordem inversa:");
   for(int i=4; i>=0; i--)
      printf("%d\n",v[i]);
   return 0;
}

//------------------------------------------------------------
// Exercício de aula
//------------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void) {
srand(time(NULL));
   int v[5];
   for(int i=0; i<5; i++) {
      printf("%do. item? ",i+1);
      scanf("%d",&v[i]);
   }
   printf("Sorteados: \n");
   for(int i=1; i<=3; i++){
		int j = rand()%5;
      printf("%do. item %d\n",j+1,v[j+1]);}
   return 0;
}
semente em algoritmos aleatorios
srand aceita como parâmetro unsigned int seed e semeia a geração,default 1
time tipo time_t aceita parametro NULL (retorna segundos desde Unix Timestamp)

//------------------------------------------------------------
// Exercicio 1
//------------------------------------------------------------

#include <stdio.h>

void binario(int n) {
   int v[8*sizeof(int)],j=0;
   do{
v[j++] = n%2;
      n=n/2;
   }while(j <= 8*sizeof(int));
	for(int i = j;i >=0 ;i--)printf("%d",v[i]);
}
int main(void) {
   int n;
   printf("Numero? ");
   scanf("%d",&n);
   binario(n);
   return 0;
}

//------------------------------------------------------------
// Exemplo 4
//------------------------------------------------------------

#include <stdio.h>

int main(void) {
   int v[3] = {10,20,30};
   int w[2] = {40,50};
   v[3] = 60;
   w[-1] = 70;
   for(int i=0; i<3; i++) printf("%P: %d\n",&v[i],v[i]);
   for(int i=0; i<2; i++) printf("%P: %d\n",&w[i],w[i]);
   return 0;
}

%P : endereço de memória
& associa o endereço

//------------------------------------------------------------
// Exemplo 5
//------------------------------------------------------------

#include <stdio.h>

int main(void) {
   int v[5];
   printf("v == %P\n",v);
   printf("&v == %P\n",&v);
   printf("&v[0] == %P\n",&v[0]);
   return 0;
}

o nome de um vetor repsenta o seu endereço de memória v = &v

//------------------------------------------------------------
// Exemplo 6
//------------------------------------------------------------

#include <stdio.h>

void f(int y,int w[]) {
   y = w[0] = 50; 
}

int main(void) {
   int x = 10, v[3] = {20,30,40};
   f(x,v);
   printf("x == %d\n",x);
   printf("v[0] == %d\n",v[0]);
   return 0;
}

vetores são passados por referência e parâmetros são passados por valor


//------------------------------------------------------------
// Exercício passagem por referência
//------------------------------------------------------------

void troca(int y[],int x[]) {
   int z = y[0];
   y[0] = x[0];
   x[0] = z;
}

int main(void) {
   int x = 10, v = 40;
   troca(&x,&v);
   printf("x == %d\n",x);
   printf("v == %d\n",v);
   return 0;
}

//------------------------------------------------------------
// Exercicio 2
//------------------------------------------------------------

#include <stdio.h>
void preenche(float v[]){
   for(int i =0;i<7;i++){printf("%da. Temperatura? ",i+1);scanf("%f",&v[i]);}
}
float media(float v[]){
float media = 0;
   for(int j = 0;j<7;j++){
   media += v[j];
};
return media/7;
}

int conta(float v[],float m){
int resultado = 0;
for(int k = 0;k<7;k++){
if (v[k] > m){resultado++;};
}
return resultado;
}

int main(void) {
   float v[7];
   preenche(v);
   float m = media(v);
   printf("Media: %.1f %cC\n",m,248);
   printf("Dias acima da media: %d\n",conta(v,m));
   return 0;
}
//------------------------------------------------------------
// Exercicio 3
//------------------------------------------------------------

#include <stdio.h>
#include <conio.h>

void preenche(float v[]){
   for(int i =0;i<7;i++){printf("%da. Temperatura? ",i+1);scanf("%f",&v[i]);}
}
float media(float v[]){
float media = 0;
   for(int j = 0;j<7;j++){
   media += v[j];
};
return media/7;
}

void histograma(float v[],float m){

for (int i = 0; i<7;i++){
if (v[i]<m){_textcolor(1);}
else if (v[i]>m){_textcolor(4);}
else{_textcolor(2);}
for(int c = 0;c<v[i];c++){putchar(220);}
printf("\n");_textcolor(7);
}

}

int main(void) {
   float v[7];
   preenche(v);
   histograma(v,media(v));
   return 0;
}


//------------------------------------------------------------
// Exemplo 8
//------------------------------------------------------------

#include <stdio.h>

int main(void) {
   int m[6][7] = {{1,1,1,1,1,1,1},
                  {0,0,1,0,0,0,1},
                  {1,0,0,0,1,1,1},
                  {1,0,1,0,1,0,0},
                  {1,0,1,0,0,0,1},
                  {1,1,1,1,1,1,1}};
   for(int i=0; i<6; i++) {
      for(int j=0; j<7; j++)
         printf("%s",m[i][j] ? "\xDB\xDB" : "  ");
      puts("");
   }
   return 0;
}

//------------------------------------------------------------
// Exercicio 4
//------------------------------------------------------------

#include <stdio.h>
#define MAX 8

void exibe(int v[][MAX]){
      for(int i=0; i<MAX; i++) {
      for(int j=0; j<MAX; j++)
         printf("%s",v[i][j] ? "\xDB\xDB" : "  ");
      puts("");
   }
}
int main(void) {
   int m[MAX][MAX] = {{1,1,1,1,1,1,1,1},
                      {0,0,1,0,0,0,0,1},
                      {1,0,1,0,1,0,1,1},
                      {1,0,1,0,1,0,0,1},
                      {1,0,0,0,1,1,0,1},
                      {1,0,1,0,0,1,0,1},
                      {1,0,1,0,1,1,0,0},
                      {1,1,1,1,1,1,1,1}};
   exibe(m);
   return 0;
}

//------------------------------------------------------------
// Exercicio 5
//------------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 15

int main(void) {
   int m[MAX][MAX];
   srand(time(NULL));
   gera(m);
   exibe(m);
   return 0;
}

//------------------------------------------------------------
// Exercicio 6
//------------------------------------------------------------
#include <stdio.h>
#define MAX 8

void exibe(int v[][MAX]){
      for(int i=0; i<MAX; i++) {
      for(int j=0; j<MAX; j++)
         printf("%s",v[i][j] ? "\xDB\xDB" : "  ");
      puts("");
   }
}
void mostra(char c,int i,int j) {
   _gotoxy(2*j+1,i+1); printf("%c%c\b",c,c); _sleep(0);
}

int sai(int m[MAX][MAX],int i,int j) {
   m[i][j] = 2;
   mostra('\xB0',i,j);
   if( i==MAX-2 && j==MAX-1 ) return 1;
   if( m[i+1][j]==0 && sai(m,i+1,j) ) return 1;
   if( m[i][j+1]==0 && sai(m,i,j+1) ) return 1;
   if( m[i-1][j]==0 && sai(m,i-1,j) ) return 1;
   if( j>0 && m[i][j-1]==0 && sai(m,i,j-1) ) return 1;
   mostra(' ',i,j);
   return 0;
}
int main(void) {
   int m[MAX][MAX] = {{1,1,1,1,1,1,1,1},
                      {0,0,1,0,0,0,0,1},
                      {1,0,1,0,1,0,1,1},
                      {1,0,1,0,1,0,0,1},
                      {1,0,0,0,1,1,0,1},
                      {1,0,1,0,0,1,0,1},
                      {1,0,1,0,1,1,0,0},
                      {1,1,1,1,1,1,1,1}};
   exibe(m);
int r = sai(m,1,0);
	_gotoxy(1,MAX+2);
	if(r){printf("Achou a saida\n");}
	else{puts("Não há saída");}
   return 0;
}

//------------------------------------------------------------
// Exemplo 9
//------------------------------------------------------------

#include <stdio.h>
#include <conio.h>

void exibe(char m[3][3]) {
   _clrscr();
   for(int i=0; i<3; i++) {
     printf(" %c | %c | %c \n",m[i][0],m[i][1],m[i][2]);
     if( i<2 ) puts("---+---+---");
   }
}

int main(void) {
   char m[3][3] = {{' ',' ',' '},{' ',' ',' '},{' ',' ',' '}};
   exibe(m);
   return 0;
}

//------------------------------------------------------------
// Exercicio 7
//------------------------------------------------------------

#define iguais(a,b,c) (a!=' ' && a==b && b==c)

int vencedor(char m[3][3]) {
   for(int i=0; i<3; i++) {
      if( iguais(m[i][0],m[i][1],m[i][2]) ) return m[i][0];
      if( iguais(m[0][i],m[1][i],m[2][i]) ) return m[0][i];
   }
   if( iguais(m[0][0],m[1][1],m[2][2]) ) return m[0][0];
   if( iguais(m[0][2],m[1][1],m[2][0]) ) return m[0][2];
   return ' ';
}

int main(void) {
   char m[3][3] = {{'x',' ','o'},{' ','x','o'},{' ',' ','x'}};
   exibe(m);
   printf("\nVencedor: %c\n\n",vencedor(m));
   return 0;
}

//------------------------------------------------------------
// Exercicio 10
//------------------------------------------------------------

#define iguais(a,b,c) (a!=' ' && a==b && b==c)

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int vencedor(char m[3][3]) {
   for(int i=0; i<3; i++) {
      if( iguais(m[i][0],m[i][1],m[i][2]) ) return m[i][0];
      if( iguais(m[0][i],m[1][i],m[2][i]) ) return m[0][i];
   }
   if( iguais(m[0][0],m[1][1],m[2][2]) ) return m[0][0];
   if( iguais(m[0][2],m[1][1],m[2][0]) ) return m[0][2];
   return ' ';
}
void exibe(char m[3][3]) {
   _clrscr();
   for(int i=0; i<3; i++) {
     printf(" %c | %c | %c \n",m[i][0],m[i][1],m[i][2]);
     if( i<2 ) puts("---+---+---");
   }
}

void usuario(char m[3][3]){
int i,j;
do{printf("Posicao? ");scanf("%d,%d",&i,&j);}
while(i<0 || i>2 || j<0 || j>2 || m[i][j] != ' ');
m[i][j]='x';}

void computador(char m[3][3]){
int i,j;
do{ i = rand()%3;
		j = rand()%3;
	}while(m[i][j] != ' ');
m[i][j]='o';}
int main(void) {
   char m[3][3] = {{' ',' ',' '},{' ',' ',' '},{' ',' ',' '}}; 
   int j=0, e, s;
   char v;  
   printf("Par (0) ou impar (1)? ");
   scanf("%d",&e);
   srand(time(NULL));
   s = rand()%2;
   printf("Sorteado: %d\n",s);
   if( e==s ) puts("Voce comeca!");
   else puts("Eu comeco!");
   printf("Pressione enter...");
   _getch();
   do {
      exibe(m);
      if( e==s ) usuario(m);
      else computador(m);
      v = vencedor(m);
      s = !s;
   } while( ++j<9 && v==' ');
   exibe(m);
   switch( v ) {
      case ' ': puts("\nEmpate!\n"); break;
      case 'x': puts("\nVoce venceu!\n"); break;
      case 'o': puts("\nEu venci!\n"); break;
   }
   return 0;
}

