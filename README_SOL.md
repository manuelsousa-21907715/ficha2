**UNIVERSIDADE LUSÓFONA DE HUMANIDADES E TECNOLOGIAS**

*Linguagens de Programação I - 2019/2020*

# Ficha de Exercícios - 2

Na resolução destes exercícios deve ser utilizada a Linguagem de Programação C. Para além da correta implementação dos requisitos, tenha em conta os seguintes aspetos:

- O código apresentado deve ser bem indentado. 
- O código deve compilar sem erros ou *warnings* utilizando o *gcc* com as seguintes flags:
- `gcc -Wall -Wextra -Wpedantic -g exercicio1.c -o exercicio1`
- Tenha em atenção os nomes dados das variáveis, para que sejam indicadores daquilo que as mesmas vão conter.
- Evite o uso de constantes mágicas. 
- Evite duplicação de código. 
- Considere a implementação de funções para melhorar a legibilidade, evitar a duplicação e criar soluções mais genéricas.



1. Faça um programa que leia um número inteiro e o imprima.

   *Resolução:*

   ```C
   void ex1 (void){
   	int num = 0;
   	printf("\n\t******** Exercicio 1 ********\n");	
   	printf("Insira um numero inteiro:\n");
   	scanf("%d",&num);
   	printf("O numero inteiro introduzido foi o: %d\n",num);
   }
   ```

   

2. Faça um programa que leia um número real e o imprima.

   *Resolução:*

   ```C
   void ex2 (void){
   	float num;
   	printf("\n\t******** Exercicio 2 ********\n");
   	printf("Insira um numero real:\n");
   	scanf("%f",&num);
   	printf("O numero real introduzido foi o: %f\n",num);
   }
   ```

   

3. Peça ao utilizador para digitar três valores inteiros e imprima a soma deles.

   *Resolução:*

   ```C
   void ex3 (void){
   	int n1,n2,n3;
   	printf("\n\t******** Exercicio 3 ********\n");	
   	printf("Insira tres valores inteiros:\n");
   	scanf("%d %d %d",&n1,&n2,&n3);
   	printf("O valor da soma: %d", n1+n2+n3);
   }
   ```

   

4. Leia um número real e imprima o resultado do quadrado desse número.

   *Resolução:*

   ```C
   void ex4 (void){
   	float num;
   	printf("\n\t******** Exercicio 4 ********\n");
   	printf("Insira um numero real:\n");
   	scanf("%f",&num);
   	printf("O quadrado de %f: %f",num,num*num);
   }
   ```

   

5. Crie um programa capaz de ler um caractere e imprimir o seu valor em decimal e hexadecimal.

   *Resolução:*

   ```C
   void ex5 (void){
   	char c;
   	printf("\n\t******** Exercicio 5 ********\n");	
   	printf("Insira um caractere:\n");
   	scanf(" %c",&c);
   	printf("O caractere '%c' tem como valor decimal %d e hexadecimal %x\n",c,c,c);
   }
   ```

   

6. Preencha a seguinte tabela com o resultado esperado (0 ou 1) depois de aplicar o “operador lógico” aos dois valores indicados.

| Valor 1 | Operador | Valor 2 | Resultado |
| ------- | -------- | ------- | --------- |
| 1       | &&       | 0       |           |
| 10      | &&       | 1       |           |
| 0       | &&       | 0       |           |
| 1       | \|\|     | 10      |           |
| 10      | \|\|     | 0       |           |
| 0       | \|\|     | 0       |           |

*Resolução:*

```C
void ex6 (void){
	printf("\n\t******** Exercicio 6 ********\n");
	printf("1 && 0 = %d\n", 1 && 0);
	printf("10 && 1 = %d\n", 10 && 1);
	printf("0 && 0 = %d\n", 0 && 0);
	printf("1 || 10 = %d\n", 1 || 10);
	printf("10 || 0 = %d\n", 10 || 0);
	printf("0 || 0 = %d\n", 0 || 0);
}
```

7. Indique qual o resultado das seguintes expressões. Assuma que todas as variáveis são inteiras:

- X = 5 && 6; 
- X = 5 && 0; 
- X = 5 > 2; 
- X = 5==6; 
- X = !5; 
- X = !0; 
- X = 5­3­2 || 1; 
- X = 5­6 || 1; 
- X = 5­7 || 0; 
- X = 0*3 || 5*0; 
- X = 0 || !0; 
- X = 50 >> 2; 
- X = 100 << 3

   *Resolução:*

   ```C
   void ex7 (void){
   	int X;
   	printf("\n\t******** Exercicio 7 ********\n");	
   	X = 5 && 6;
   	printf("5 && 6 = %d\n",X);
   	X = 5 && 0;
   	printf("5 && 0 = %d\n",X);
   	X = 5 > 2;
   	printf("5 > 2 = %d\n",X);
   	X = 5==6;
   	printf("5==6 = %d\n",X);
   	X = !5;
   	printf("!5 = %d\n",X);
   	X = !0;
   	printf("!0 = %d\n",X);
   	X = 532 || 1;
   	printf("532 || 1 = %d\n",X);
   	X = 56 || 1;
   	printf("56 || 1 = %d\n",X);
   	X = 57 || 0;
   	printf("57 || 0 = %d\n",X);
   	X = 0*3 || 5*0;
   	printf("0*3 || 5*0 = %d\n",X);
   	X = 0 || !0;
   	printf("0 || !0 = %d\n",X);
   	X = 50 >> 2;
   	printf("50 >> 2 = %d\n",X);
   	X = 100 << 3;
   	printf("100 << 3 = %d\n",X);
   }
   ```

8. Implemente uma função que recebe o número de quilómetros que percorreu e o número de litros de combustível que o automóvel consumiu e retorne o número de litros que este consome em média em 100 quilómetros. Use constantes para representar os vários fatores de conversão.

   *Exemplo de uma sessão de uso do programa (à frente do símbolo ‘>’ aparece o input do utilizador):*

   ```bash
   Qual o número de quilómetros que percorreu?
   > 100
   Qual o número de litros que consumiu?
   > 10
   Consumo aos 100 Km = 10
   ```
   
   *Resolução:*
   
   ```C
   float consumo (float km, float lts){
   	const int aos = 100;
   	return lts*aos/km;
   }
   void ex8 (void){
   	float km,lts;
   	printf("\n\t******** Exercicio 8 ********\n");	
   	printf("Qual o numero de quilometros que percorreu?\n");
   	scanf("%f",&km);
   	printf("Qual o numero de litros que consumiu?\n");
   	scanf("%f",&lts);
   	printf("Consumo aos 100 Km = %f\n", consumo(km,lts));
   }
   ```
   



9. Implemente uma função que recebe um horário, através da Hora, dos Minutos e dos Segundos, e com estes dados calcule e retorne o tempo total em segundos.

   *Exemplo de uma sessão de uso do programa:*

   ```bash
   Qual a hora?
   > 10
   Qual o minuto?
   > 20
   Qual o segundo?
   > 35
   Total de segundos = 37235
   ```

   *Resolução:*

   ```C
   int calculaSegundos(int horas,int minutos, int segundos){
   	return horas*60*60+minutos*60+segundos;
   }
   void ex9 (void){
   	int horas,minutos,segundos;
   	printf("\n\t******** Exercicio 9 ********\n");	
   	printf("Qual a hora?\n");
   	scanf("%d",&horas);
   	printf("Qual o minuto?\n");
   	scanf("%d",&minutos);
   	printf("Qual o segundo?\n");
   	scanf("%d",&segundos);
   	printf("Total de segundos = %d",calculaSegundos(horas,minutos,segundos));
   }
   ```

   

10. Implemente um programa que peça ao utilizador para introduzir dois números inteiros (a e b) e, de seguida, apresente no ecrã o resultado das seguintes operações aritméticas:

   - a+b

   - a-b (assim com b-a)

   - a*b

   - a/b (assim como b/a)
   
     

   *Notas:* 

- Deve ter em conta que o operador de divisão, quando aplicado a dois números inteiros, descarta a parte fracionária do resultado. Neste exercício, se o utilizador introduzir o valor 1 para o primeiro número e o valor 2 para o segundo número, o programa deve apresentar o valor 0.5 como resultado de a / b.

- 
  Deve ter em atenção situações de erro possíveis. Por exemplo, quando o utilizador introduzir 50 para o primeiro número e o valor 0 para o segundo número, não deve ser executada a operação a/b .

- Deve ter em atenção situações de erro possíveis. Por exemplo, quando o utilizador introduzir o valor 50 para o primeiro número e o valor 0 para o segundo número, não deve ser executada a operação a/b (pois seria 50/0.

  *Resolução:*

  ```C
  void ex10 (void){
  	int a,b;
	printf("\n\t******** Exercicio 10 ********\n");	
  	printf("insira dois numeros inteiros separados por espaco ' '\n");
  	scanf("%d %d", &a, &b);
  	printf("a+b = %d\n",a+b);
  	printf("a-b = %d\n",a-b);
  	printf("b-a = %d\n",b-a);
  	printf("a*b = %d\n",a*b);
  	if(b){
  		printf("a/b = %f\n",(float)a/b);
  	}
  	if(a){
  		printf("b/a = %f\n",(float)b/a);
  	}
  }
  ```
  

 

11. Considere o seguinte programa em C:

    ```C
    # include <stdio.h>
    int main (void)
    {
    	char alpha = (char) 0xF0;
    	unsigned int clr = 0xBF3F3FF0 ;
    	unsigned char beta;
    	unsigned char gr = (clr >> 16) & (0x000000FF);
    	beta = alpha >> 4;
    	return 0;
    }
    ```

    - Calcule, manualmente e sem compilar o código, o valor das variáveis `alpha`, `beta`, `clr` e `gr`.
    - A variável beta é um número negativo ou positivo?
    - Compile o código e verifique se o resultado foi o esperado. Caso não seja, identifique o erro e volte a fazer a primeira alínea.

  *Resolução:*
  
   Para calcular o valor de gr podemos converter para binário, ou podemos trabalhar directamente em hexadecimal já que a primeira operação é um *shift right* de 16 bits ou seja 4 dígitos hexadecimais.
   `clr >> 16 = 0x0000BF3F` 
  Em binário entram 16 zeros à esquerda (porque o número é sem sinal), e os 16 bits mais à direita perdem-se.
  Em seguida aplica-se a operação AND bit-a-bit:
   ```
       0x0000BF3F
    &  0x000000FF
   -----------------
       0x0000003F
   ``` 
   Logo, `gr = 0x0000003F`

   O calculo do `alpha` embora pareça mais simples tem um pormenor importate. `alpha` é do tipo `char` e portanto é um número com sinal (está em notação complemento para 2). Esse número pode ser positivo ou negativo dependendo do bit mais significativo. Se o número mais significativo (mais à esquerda) for `1`, o número é negativo. Se for `0`, o número é positivo. Portanto, neste caso `alpha` contém um número negativo porque `alpha = '1111 0000' b`. Quando um número é negativo, um shift para a direita introduz um `1` à esquerda em vez de `0`. E portanto `alpha >> 4 = '1111 1111' b = 0xFF = -1`.
   Note que se o número fosse positivo ou sem sinal (`unsigned`) entrariam zeros à esquerda. Note também que uma deslocação para a direita é uma divisão por 2. Se o número é negativo e for dividido por 2, tem de continuar a ser negativo. Se entrassem zeros, o número passaria a positivo e portanto estaria errado.
   
   
   
