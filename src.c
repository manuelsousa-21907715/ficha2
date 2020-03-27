#include<stdio.h>
#include <locale.h>
void ex1 (void);
void ex2 (void);
void ex3 (void);
void ex4 (void);
void ex5 (void);
void ex6 (void);
void ex7 (void);
void ex8 (void);
void ex9 (void);
void ex10 (void);
void ex11 (void);

int main(void){
	setlocale (LC_ALL, "");
	ex1();
	ex2();
	ex3();
	ex4();
	ex5();
	ex6();
	ex7();
	ex8();
	ex9();
	ex10();
	ex11();

	return 0;
}

void ex1 (void){
	int num = 0;
	printf("\n\t******** Exercicio 1 ********\n");	
	printf("Insira um numero inteiro:\n");
	scanf("%d",&num);
	printf("O numero inteiro introduzido foi o: %d\n",num);
}
void ex2 (void){
	float num;
	printf("\n\t******** Exercicio 2 ********\n");
	printf("Insira um numero real:\n");
	scanf("%f",&num);
	printf("O numero real introduzido foi o: %f\n",num);
}
void ex3 (void){
	int n1,n2,n3;
	printf("\n\t******** Exercicio 3 ********\n");	
	printf("Insira tres valores inteiros:\n");
	scanf("%d %d %d",&n1,&n2,&n3);
	printf("O valor da soma: %d", n1+n2+n3);
}
void ex4 (void){
	float num;
	printf("\n\t******** Exercicio 4 ********\n");
	printf("Insira um numero real:\n");
	scanf("%f",&num);
	printf("O quadrado de %f: %f",num,num*num);
}

void ex5 (void){
	char c;
	printf("\n\t******** Exercicio 5 ********\n");	
	printf("Insira um caractere:\n");
	scanf(" %c",&c);
	printf("O caractere '%c' tem como valor decimal %d e hexadecimal %x\n",c,c,c);
}

void ex6 (void){
	printf("\n\t******** Exercicio 6 ********\n");
	printf("1 && 0 = %d\n", 1 && 0);
	printf("10 && 1 = %d\n", 10 && 1);
	printf("0 && 0 = %d\n", 0 && 0);
	printf("1 || 10 = %d\n", 1 || 10);
	printf("10 || 0 = %d\n", 10 || 0);
	printf("0 || 0 = %d\n", 0 || 0);
}
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
void ex10 (void){
	int a,b;
	printf("\n\t******** Exercicio 10 ********\n");	
	printf("insira dois numeros inteiros separados por espa�o ' '\n");
	scanf("%d %d",&a,&b);
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

void ex11 (void){
	char nome1[100];
	char nome2[100];
	printf("\n\t******** Exercicio 11 ********\n");	
	printf("Insira o primeiro nome:\n");
	scanf(" %s",nome1);
	printf("Insira o segundo nome:\n");
	scanf(" %s",nome2);
	if(nome1[0]<nome2[0]){
		printf("%s\n",nome1);
		printf("%s\n",nome2);
	}else{
		printf("%s\n",nome2);
		printf("%s\n",nome1);
	}

}
