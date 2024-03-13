# fatecads

site da disciplina ILP-010 : https://sites.google.com/view/slagop/in%C3%ADcio/linguagem-de-programa%C3%A7%C3%A3o-n


# Linguagem C: 

(Compilador Pelles)

<h2>Introdução:</h2>

    #include <stdio.h> // entrada e saída padrão
    #include <math.h>  // funções matemáticas
    #include <locale.h> // define caracteres
    #include <stdbool.h> // booleanas
    #include <conio.h> // color
    #include <stdlib.h> // números aleatórios
    #include <time.h>
    int main(void) {

       return 0
     }
     
<h2>Variaveis</h2>

<h3>Tipos:</h3>

<table>
	<thead>
		<tr>
			<th>Tipo</th>
			<th>Tamanho na memória</th>
			<th>Limite numérico</th>
		</tr>
	</thead>
	<tbody>
		<tr>
			<td>float</td>
			<td>4 bytes</td>
			<td>+-pow(10,38)</td>
		</tr>
		<tr>
			<td>double</td>
			<td>8 bytes</td>
			<td>+-pow(10,308)</td>
		</tr>
		<tr>
			<td>int</td>
			<td>4 bytes</td>
			<td>+-pow(10,9)</td>
		</tr>
		<tr>
			<td>char</td>
			<td>1 byte</td>
			<td>-127 a +128</td>
		</tr>
	</tbody>
</table>

<h3>Tipos modificados:</h3>

<table>
	<thead>
		<tr>
			<th>Tipo</th>
			<th>Tamanho na memória</th>
			<th>Limite numérico</th>
		</tr>
	</thead>
	<tbody>
		<tr>
			<td>unsigned char</td>
			<td>1 bytes</td>
			<td>0 a 255</td>
		</tr>
		<tr>
			<td>unsigned int</td>
			<td>4 bytes</td>
			<td>0 a 4294967295</td>
		</tr>
		<tr>
			<td>short</td>
			<td>2 bytes</td>
			<td>-32767 a +32767</td>
		</tr>
		<tr>
			<td>long long</td>
			<td>8 byte</td>
			<td>-9223372036854775807 a +9223372036854775807</td>
		</tr>
		<tr>
			<td>unsigned short int</td>
			<td>2 byte</td>
			<td>0 a 65535</td>
		</tr>
		<tr>
			<td>unsigned long long int</td>
			<td>8 byte</td>
			<td>0 a 18446744073709551615</td>
		</tr>
	</tbody>
</table>


<h2>Formatação:</h2>

<h3>Especificador de formato:</h3>

*Determina o tipo de dado que será lido do teclado ou exibido no vídeo.*

<table>
	<thead>
		<tr>
			<th>Especificador</th>
			<th>Descrição</th>
		</tr>
	</thead>
	<tbody>
		<tr>
			<td>%c</td>
			<td>caractere</td>
		</tr>
		<tr>
			<td>%o</td>
			<td>octal</td>
		</tr>
		<tr>
			<td>%d</td>
			<td>decimal</td>
		</tr>
		<tr>
			<td>%x,%X</td>
			<td>hexadecimal</td>
		</tr>
		<tr>
			<td>%u</td>
			<td>número inteiro em base decimal sem sinal</td>
		</tr>
		<tr>
			<td>%hd</td>
			<td>número inteiro curto em base decimal (short int)</td>
		</tr>
		<tr>
			<td>%lld</td>
			<td>número inteiro longo longo em base decimal (long long int)</td>
		</tr>
		<tr>
			<td>%f</td>
			<td>número real de precisão simples ou dupla (float)</td>
		</tr>
		<tr>
			<td>%s</td>
			<td>cadeia de caracteres (string)</td>
		</tr>
		<tr>
			<td>%%</td>
			<td>único sinal de porcentagem</td>
		</tr>
	</tbody>
</table>

<h2>Caracteres de controle:</h2>

*Representa um caractere especial da tabela ASCII.*

<table>
	<thead>
		<tr>
			<th>Caracter de controle</th>
			<th>Descrição</th>
		</tr>
	</thead>
	<tbody>
		<tr>
			<td>\a </td>
			<td>soa o alarme do computador</td>
		</tr>
		<tr>
			<td>\b</td>
			<td>o cursor retrocede à coluna anterior</td>
		</tr>
		<tr>
			<td>\f</td>
			<td>alimenta página na impressora</td>
		</tr>
		<tr>
			<td>\n</td>
			<td>o cursor avança para uma nova linha</td>
		</tr>
		<tr>
			<td>\r</td>
			<td>o cursor retrocede para a primeira coluna da linha</td>
		</tr>
		<tr>
			<td>\t</td>
			<td>o cursor avança para próxima marca de tabulação</td>
		</tr>
		<tr>
			<td>\0</td>
			<td>indica o final de uma cadeia de caracteres</td>
		</tr>
	</tbody>
</table>




<h5>Observações:</h5>

sendo n posição do número, leitura da direita para esquerda, para conversão para decimal:

binário: somatorio(digiton*pow(2,n))

octal: somatorio(digitoN*pow(8,n))

hexadecimal: somatorio(digitoN*pow(16,n))

iniciados com 0 : número octal



<h2>Operadores</h2>

<h3>Operadores relacionais</h3>

<table>
	<thead>
		<tr>
			<th>Operador</th>
			<th>Significado</th>
		</tr>
	</thead>
	<tbody>
		<tr>
			<td>==</td>
			<td>Igual</td>
		</tr>
		<tr>
			<td>!=</td>
			<td>Diferente</td>
		</tr>
		<tr>
			<td>\<</td>
			<td>Menor</td>
		</tr>
		<tr>
			<td>\></td>
			<td>Maior</td>
		</tr>
		<tr>
			<td>\<=</td>
			<td>Menor ou igual</td>
		</tr>
		<tr>
			<td>\>=</td>
			<td>Maior ou igual</td>
		</tr>
	</tbody>
</table>


<h3>Operadores lógicos</h3>

<table>
	<thead>
		<tr>
			<th>Operador</th>
			<th>Significado</th>
		</tr>
	</thead>
	<tbody>
		<tr>
			<td>!</td>
			<td>Negação (não)</td>
		</tr>
		<tr>
			<td>&&</td>
			<td>Conjunção</td>
		</tr>
		<tr>
			<td>||</td>
			<td>Disjunção</td>
		</tr>
	</tbody>
</table>


<h5>Observações:</h5>

! tem prioridade sobre &&, que tem prioridade sobre ||.

Os resultados dos operadores lógicos são definidos por suas respectivas tabelas-verdade.

<h3>Operador ternário</h3>

	(condicao ? expressao1 : expressao2)

 <h3>Operador de atribuição aritmético</h3>

- <strong>Prefixado</strong> o valor de x é calculado <strong>antes</strong> da expressão

- <strong>Posfixado</strong> o valor de x é calculado <strong>após</strong> a expressão

  

<table>
	<thead>
		<tr>
			<th>Forma estendida</th>
			<th>Forma posfixa</th>
			<th>Forma prefixa</th>
		</tr>
	</thead>
	<tbody>
		<tr>
			<td>x = x + 1</td>
			<td>x++</td>
   			<td>++x</td>
		</tr>
		<tr>
			<td>x = x - 1</td>
			<td>x--</td>
   			<td>--x</td>
		</tr>
	</tbody>
</table>

<h2>Comandos de seleção</h2>

<h3>Comando if-else</h3>

	if ( condicao-1) comando1;
 	else if(condicao-2) comando2;
 	else condicao-3 comando-3;

<h3>Comando switch-case</h3>

	switch ( expressao){
 		case constante: sequencia_de_comandos;break;
   		default: sequencia_de_comandos;break;
	}
 
<h3>Bloco</h3>

	int main(void) {
	    for(int c = 0;c<=15;c++){
			_textcolor(14);
			_textbackground(1);
			if (c!=7) {printf("%20s\n"," ");}
			else{
				printf("%7s"," ");
				_textcolor(1);
				_textbackground(14);
				printf("%5s","TESTE");
				_textcolor(14);
				_textbackground(1);
				printf("%8s\n"," ");
			};
		}
		getchar();
	  return 0;
	}

<h2>Comandos de repetição</h2>

<h3>Comando for</h3>

	int main(void) {
		int n;
		printf("Tamanho? ");
		scanf("%d",&n);
		for (int i=1;i<=n;++i){
			for(int j = 1;j<=n;++j){
				_textcolor((i+j)%2 ? 15 : 8);
				printf("%c%c",219,219);
			}
			putchar('\n');
		}
   		return 0;
	}

 <h3>Comando while</h3>

	int main(void) {
		srand(time(NULL));
		int c, n = rand()%7 + 1;
		do {
			printf("Chute entre 1 e 7: ");
			scanf("%d",&c);
			if(c>n) puts("Muito alto!");
			else if(c<n) puts("Muito baixo!");
			else puts("Voce acertou!");
		} while(n!=c);
  		return 0;
	}

 <h3>Comando break</h3>

