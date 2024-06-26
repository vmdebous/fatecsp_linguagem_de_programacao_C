// ILP-010 (Prof. Dr. Silvio do Lago Pereira)

//------------------------------------------------------------
// Exemplo 1    
//------------------------------------------------------------                                               

#include <stdio.h>

int main(void) {
   int x=5, y=5;
   ++x;
   y--;
   printf("x=%d y=%d\n",x,y); // x=6 y=4
   return 0;
}

//------------------------------------------------------------
// Exemplo 2   
//------------------------------------------------------------                                               

#include <stdio.h>

int main(void) {
   int x=5, y=5;
   x++;
   --y;
   printf("x=%d y=%d\n",x,y); // x=6 y=4
   return 0;
}

//------------------------------------------------------------
// Exemplo 3   
//------------------------------------------------------------                                               

#include <stdio.h>

int main(void) {
   int x=5, y, z;
   y = ++x + 2;
   z = x-- + 2;
   printf("x=%d y=%d z=%d\n",x,y,z); // x=5 y=8 z=8
   return 0;
}

//------------------------------------------------------------
// Exemplo 4   
//------------------------------------------------------------                                               

#include <stdio.h>

int main(void) {
   int x=5, y, z;
   y = x++ + 2;
   z = --x + 2;
   printf("x=%d y=%d z=%d\n",x,y,z); // x=5 y=7 z=7
   return 0;
}

//------------------------------------------------------------
// Exemplo 5   
//------------------------------------------------------------                                               

#include <stdio.h>

int main(void) {
   int i;
   for(i=1; i<=9; i++)
      printf("%d\n",i);
   return 0;
}

//------------------------------------------------------------
// Exemplo 6   
//------------------------------------------------------------                                               

#include <stdio.h>

int main(void) {
   int n;
   printf("Numero? ");
   scanf("%d",&n);
   for(int i=1; i<=10; i++)
      printf("%d x %2d = %3d\n",n,i,n*i);
   return 0;
}

//------------------------------------------------------------
// Exercício 2
//------------------------------------------------------------                                               

#include <stdio.h>
#include <conio.h>

int main(void) {
   int c;
   for(c=0; c<=15; c++)
      _textcolor(c);
      printf("Cor %d\n",c);
   return 0;
}

//------------------------------------------------------------
// Exemplo 7   
//------------------------------------------------------------                                               

#include <stdio.h>
#include <conio.h>

int main(void) {
   for(int c=0; c<=255; c++) {
      printf("%3d => %c\n",c,c);
      if( c%16==15 ) {
         printf("\nPressione enter...");
         _getch();
         _clrscr();
      }
   }
   return 0;
}

//------------------------------------------------------------
// Exemplo 8   
//------------------------------------------------------------                                               

#include <stdio.h>
#include <conio.h>

int main(void) {
   int n;
   printf("Tamanho? "); 
   scanf("%d",&n);
   for(int i=1; i<=n; i++) {
      for(int j=1; j<=n; j++) {
         _textcolor((i+j)%2==0 ? 8 : 15);
         printf("%c%c",219,219);
      }
      putchar('\n');
   }
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
   while( n>0 ) {
      printf("%d\n",n%10);
      n /= 10;
   }
   return 0;
}

//------------------------------------------------------------
// Exemplo 10   
//------------------------------------------------------------                                               

#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <stdlib.h>

int main(void) {
   int col=40, lin=12;
   while( 1 ) {
      _gotoxy(col,lin); 
      _putch(219);
      switch( toupper(_getch()) ) {
         case 'N': if( lin> 1 ) lin--; break;
         case 'S': if( lin<24 ) lin++; break;
         case 'L': if( col<80 ) col++; break;
         case 'O': if( col> 1 ) col--; break;
         case 'F': exit(1);
      }
   }
   return 0;
}

//------------------------------------------------------------
// Exemplo 11   
//------------------------------------------------------------                                               

#include <stdio.h>

int main(void) {
   int s=0, n;
   do {
      printf("Numero? ");
      scanf("%d",&n);
      s += n;
   } while( n!=0 );
   printf("Soma = %d\n",s);
   return 0;
}

//------------------------------------------------------------
// Exemplo 12   
//------------------------------------------------------------                                               

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
   srand(time(NULL));
   int c, n = rand()%7 + 1;
   do {
      printf("Chute entre 1 e 7: ");
      scanf("%d",&c);
      if( c>n ) puts("Muito alto!");
      else if( c<n ) puts("Muito baixo!");
      else puts("Voce acertou!");
   } while( n!=c );
   return 0;
}

//------------------------------------------------------------
// Exemplo 13   
//------------------------------------------------------------                                               

#include <stdio.h>
#include <conio.h>
#include <time.h>

int main(void) {
   int x=1, y=1, dx=-1, dy=-1;
   do {
      _gotoxy(x,y); 
      printf("O\b"); 
      _sleep(1); // pausa em segundos             
      printf(".");
      if( x==1 || x==80 ) dx = -dx;
      if( y==1 || y==24 ) dy = -dy;
      x += dx;
      y += dy;
   } while( !_kbhit() );
   return 0;
}

//------------------------------------------------------------
// Exemplo 14   
//------------------------------------------------------------                                               

#include <stdio.h>

int main(void) {
   int n, d;
   printf("Numero? ");
   scanf("%d",&n);
   for(d=2; d<=n-1; d++) 
      if( n%d == 0 ) break;
   if( d==n ) puts("E primo!");
   else puts("Nao e primo!");
   return 0;
}
