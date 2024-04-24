// ILP-010 (Prof. Dr. Silvio do Lago Pereira)

//------------------------------------------------------------
// Exemplo 1
//------------------------------------------------------------

#include <stdio.h>

int main(void) {
   printf("Tamanho em bytes: %d\n",sizeof("CADEIA"));
   return 0;
}


//------------------------------------------------------------
// Exemplo 2
//------------------------------------------------------------

#include <stdio.h>

int main(void) {
   char v[] = {'D','I','G','A'};
   char w[] = "OI";
   printf("v: %s\nw: %s\n",v,w);
   return 0;
}

//------------------------------------------------------------
// Exemplo 3
//------------------------------------------------------------

#include <stdio.h>

int main(void) {
   char v[513];
   printf("Qual o seu nome? ");
   gets_s(v);
   printf("Oi %s!\n",v);
   printf("Seu nome tem: %d bits \n",sizeof(v));
   printf("Seu nome tem: %d letras \n",strlen(v));
   return 0;
}

//------------------------------------------------------------
// Exemplo 4
//------------------------------------------------------------

#include <stdio.h>

int main(void) {
   char v[513];
   printf("Qual o seu nome? ");
   gets(v);
   puts(v);
   return 0;
}

//------------------------------------------------------------
// Exemplo 5
//------------------------------------------------------------

#include <stdio.h>

int main(void) {
   char v[5] = "um";
   char w[5];
   w = v; // erro!
   puts(v);
   puts(w);
   return 0;
}

//------------------------------------------------------------
// Exemplo 6
//------------------------------------------------------------

#include <stdio.h>

void cpy(char s[],char t[]) {
   int i=0;
   while( s[i]=t[i] )
      i++;
}

int main(void) {
   char v[5] = "dois";
   char w[5];
   cpy(w,v);
   puts(v);
   puts(w);
   return 0;
}

//------------------------------------------------------------
// Exemplo 7
//------------------------------------------------------------

#include <stdio.h>

int main(void) {
   char v[5] = "um";
   char w[5] = "um";
   if( v==w ) puts("iguais");
   else puts("diferentes");
   return 0;
}

//------------------------------------------------------------
// Exemplo 8a
//------------------------------------------------------------

#include <stdio.h>

int cmp(char s[],char t[]) {
   int i=0;
   while( s[i]==t[i] && s[i] )
      i++;
   return s[i]-t[i];
}

int main(void) {
   char v[5] = "ano";
   char w[5] = "anao";
   puts( cmp(v,w)>0 ? "maior" : "menor");
   return 0;
}
//------------------------------------------------------------
// Exemplo 8b
//------------------------------------------------------------
#include <stdio.h>
#include <string.h>
int main(void) {
   char v[513],w[513];
   printf("Qual o 1o nome? ");
   gets(v);
   printf("Qual o 2o nome? ");
	gets(w);
	if (strcmp(v,w) < 0) {puts(v);puts(w);}
	else {puts(w);puts(v);}

   return 0;
}

//------------------------------------------------------------
// Exercicio 1
//------------------------------------------------------------

#include <stdio.h>

int main(void) {
   char s[513];
   printf("Senha? ");
   gets(s);
   if( strcmp(s,"Abracadabra")==0 ) puts("Senha correta!");
   else puts("Senha incorreta!");
   return 0;
}

//------------------------------------------------------------
// Exercicio 3
//------------------------------------------------------------

#include <stdio.h>

unsigned int len(char v[]){
int l = 0;
  while (v[l])
    l++;
  return l;
}


int main(void) {
   char v[10] = "teste";
   printf("Comprimento: %d\n",len(v)); // 5
   return 0;
}

//------------------------------------------------------------
// Exercicio 4
//------------------------------------------------------------
void rev(char s[]){
	int p = 0;

	int u = len(s)-1;
	while(p<u){
	char a = s[p];
	s[p] = s[u];
	s[u] = a;
p++;
u--; }
}

int main(void) {
   char v[10] = "ROMA";
   rev(v);
   puts(v); // AMOR
   return 0;
}

//------------------------------------------------------------
// Exercicio 5
//------------------------------------------------------------

int main(void) {
   char v[10] = "aba";
   char w[10] = "cate";
   cat(v,w);
   puts(v); // abacate
   return 0;
}

//------------------------------------------------------------
// Exercicio 6
//------------------------------------------------------------

void upr(char v[]){
  for (int i = 0;v[i];i++){
    d[i] = toupper(v[i]);
  }
}

void lwr(char v[]){
  for (int i = 0;v[i];i++){
    d[i] = tolower(v[i]);
  }
}




int main(void) {
   char v[10] = "Teste";
   upr(v);
   puts(v); // TESTE
   return 0;
}

//------------------------------------------------------------
// Exercicio 7
//------------------------------------------------------------
int val(char v[]){
int t = 0;
  for(int i = 0;v[i];i++){
  t = 10*t + (v[i] - '0');
  }
return t;
}
int main(void) {
   char v[] = "351";
   printf("Valor: %d\n",2*val(v)); // 702
   return 0;
}

//------------------------------------------------------------
// Exercicio 8
//------------------------------------------------------------

int main(void) {
   char v[10] = "35171";
   printf("Posicao do 1: %d\n",pos('1',v)); // 2
   printf("Posicao do 9: %d\n",pos('9',v)); // -1
   return 0;
}

//------------------------------------------------------------
// Exercicio 9
//------------------------------------------------------------

void centraliza(char v[],int y){
int x = (120 - len(v))/2 + 1;
		_gotoxy(x,y);
		puts(v);
	getchar();
}
int main(void) {
   char v[] = "Apenas um teste";
   centraliza(v,13);
   return 0;
}

//------------------------------------------------------------
// Exercicio 10
//------------------------------------------------------------

int main(void) {
   char v[] = "banana";
   printf("Ocorrencias: %d\n",ocorrencias('a',v)); // 3
   return 0;
}

//------------------------------------------------------------
// Exemplo 9
//------------------------------------------------------------

#include <stdio.h>

int main(void) {
   char v[][8] = {"Eduardo",
                  "Catia",
                  "Ana",
                  "Denise",
                  "Beatriz"};
   for(int i=0; i<5; i++)
      puts(v[i]);
   return 0;
}

//------------------------------------------------------------
// Exercicio 12
//------------------------------------------------------------

void bsort(char v[][8], int n) {
   for(int i=1; i<=n-1; i++) // fases de ordenação com o maior elemento indo para o fim
      for(int j=0; j<n-i; j++) // posição do par de comparção
         if( _stricmp(v[j],v[j+1])>0) {
            char x[8];
		strcpy(x,v[j]);
            strcpy(v[j],v[j+1]);
            strcpy(v[j+1],x);
         }
}
int main(void) {
   char v[][8] = {"Eduardo",
                  "Catia",
                  "Ana",
                  "Denise",
                  "Beatriz"};
bsort(v,5);
   for(int i=0; i<5; i++)
      puts(v[i]);

   return 0;
}
