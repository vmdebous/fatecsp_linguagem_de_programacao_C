# fatecads

site da disciplina ILP-010 : https://sites.google.com/view/slagop/in%C3%ADcio/linguagem-de-programa%C3%A7%C3%A3o-n

## Linguagem C:


### Tipos:
float 4 bytes , limites numéricos: +-pow(10,38) 

double 8 bytes , limites numéricos : +-pow(10,308)

int 4 bytes , limites numéricos: +- pow(10,9)

char 1 byte. limite; -127 a +128

void 0

#### Tipos modificados:
unsigned char 1 byte  limites numéricos: 0 ... 255

unsigned int 4 bytes limites numéricos: 0 ... 4294967295

short int 2 bytes   limites numéricos: +-32767

long long int 8 bytes   limites numéricos:  -+9223372036854775807

unsigned short int 2 bytes limites numéricos: 0 ... 65535

unsigned long long int 8 bytes limites numéricos: 0 ... 18446744073709551615

### Formatação:

#### Especificador de formato:
*Determina o tipo de dado que será lido do teclado ou exibido no vídeo.*

%c caractere

%o, %d, %x, %X número inteiro em octal, decimal ou hexadecimal

%u número inteiro em base decimal sem sinal (unsigned)

%hd número inteiro curto em base decimal (short int)

%lld número inteiro longo longo em base decimal (long long int)

%f número real de precisão simples ou dupla (float)

%s cadeia de caracteres (string)

%% único sinal de porcentagem

#### Caracteres de controle:
*Representa um caractere especial da tabela ASCII.*

\a soa o alarme do computador

\b o cursor retrocede à coluna anterior

\f alimenta página na impressora

\n o cursor avança para uma nova linha

\r o cursor retrocede para a primeira coluna da linha

\t o cursor avança para próxima marca de tabulação

\" exibe uma única aspa

\' exibe um único apóstrofo

\\ exibe uma única barra invertida

\0 indica o final de uma cadeia de caracteres





### Introdução:
    #include <stdio.h> // entrada e saída padrão
    #include <math.h>  // funções matemáticas
    #include <locale.h>
    int main(void) {
	    setlocale(LC_CTYPE,"BR");
	    /* printf("Decimal? ");
	    scanf("%d",&v);
      printf("Decimal = %6d\nOctal = %8o\nHexadecimal = %2X\n",v,v,v);
	    */
	    for(int c = 0;c<=15;c++)
		    printf("Caracter =  \%c ASCII = %3d\n",c,c);

	    //printf("\nBytes de 7/2 %5d\nBytes de 7/2.0 %3d\n",sizeof(7/2),sizeof(7/2.0));
	  return 0;
}



### Observações:
sendo n posição do número, leitura da direita para esquerda, para conversão para decimal:

binário: somatorio(digiton*pow(2,n))

octal: somatorio(digitoN*pow(8,n))

hexadecimal: somatorio(digitoN*pow(16,n))

iniciados com 0 : número octal

