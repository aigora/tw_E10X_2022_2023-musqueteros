//Hacer un programa que calcule e imprima en la pantalla la suma de los términos de la siguiente serie que terminen en 7
//Donde A y B son dos números enteros que deben verificar las condiciones A>0 y A<B (si el usuario introduce números que no cumplan estas condiciones, el programa se los volverá a pedir y así sucesivamente).

#include <stdio.h>

 main(){
	int a, b, i;
	int suma;
	do{
		printf("establezca el lin superior\n");
		scanf("%i", &b);
		printf("establezca el limite inferior\n");
		scanf("%i", &a);
		printf("ola %i %i \n", a, b);
	}
	while((a<=0)||(a>=b));
	
	i=a;
	while (i<=b)
	{
		i=i+a;
		suma=i;
		printf("patimicola\n");
	}
		
	printf("la suma es: %i \n", suma);
}
