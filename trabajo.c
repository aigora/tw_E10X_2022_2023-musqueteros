/*A continuación están indicadas las líneas en las que se encuentra los fopen para poder poner la dirección del archivo en caso de
 necesitarlo: 5908, 6047, 6080, 6397, 6397, 6436, 6480, 6569, 6687, 6776, 6894, 6984, 7102, 7192, 7310, 7400, 7518, 7608, 7726, 7816,
 7934, 8024, 8142, 8230, 8348, 8438, 8556, 8644, 8762,8850,  8966,  9054, 9170, 9258, 9376, 9467, 9583, 9671, 9787, 9876

La contrasena para la parte 1, 2 y 3 es: acelgas. Para la parte 4: elNANO33
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
	
int mes;
int anyo;	
	
} fecha;

typedef struct
{
	char nombre[20];
	float vector[24];
}energia;

typedef struct {
    char nombre[40];
    float numero;
    float porcentaje;
} ranquin;

int vector_columna(int k);
int dar_un_numero(int m, int k);
void cambiar_numero_1 (float valor, int m);
void cambiar_numero_2 (float valor, int m);
void cambiar_numero_3 (float valor, int m);
void cambiar_numero_4 (float valor, int m);
void cambiar_numero_5 (float valor, int m);
void cambiar_numero_6 (float valor, int m);
void cambiar_numero_7 (float valor, int m);
void cambiar_numero_8 (float valor, int m);
void cambiar_numero_9 (float valor, int m);
void cambiar_numero_10 (float valor, int m);
void cambiar_numero_11 (float valor, int m);
void cambiar_numero_12 (float valor, int m);
void cambiar_numero_13 (float valor, int m);
void cambiar_numero_14 (float valor, int m);
void cambiar_numero_15 (float valor, int m);
void cambiar_numero_16 (float valor, int m);
void cambiar_numero_17 (float valor, int m);

void analiza(int w);
int verificarcontrasena(const char *contrasena);
void ranquin_absolutos(int mes);
float datos_tabla(const char* filausuario, int numuero_columna);
void imprimirColumna(const char *energia, const char *energia1, const char *energia2);


int main()
{		
float valor;
  int n, n1, k, m;
  int  bucle= 0;
  fecha gen;
  char l1, l;
  const char *password= "elNANO33";
	int comprobacioncontrasena2;
	
	int seleccion, seleccion1, seleccion2, i;
    	
    	const char *energias[] = {
		"Hidráulica","Turbinación bombeo","Nuclear","Carbón","Motores diésel","Turbina de gas","Turbina de vapor",
		"Ciclo combinado","Hidroeólica","Eólica","Solar fotovoltaica","Solar térmica","Otras renovables","Cogeneración",
		"Residuos no renovables","Residuos renovables","Generación total"    };
    	char comunidad;
	int vueltaalmenu1;
	int comprobacioncontrasena;
    	const char *contrasenadosejemploparaparte2 = "acelgas"; //para de momento nos vale
	printf("Bienvenido a la base de datos de la genereación de energía a nivel nacional (2021-2022)\n\n");
	do {//bucle para volver al menu principal
	vueltaalmenu1=0;//en caso de volver necesitar volver al menu, se cambiara la variable por 1 y volvera al bucle
	
	
	printf("si quiere pasar a Analisis detallado de una energía, pulse 1\n");
	printf("si quiere pasar a el ranquin por meses de la generación de los distintos tipos de energías, pulse 2\n");
	printf("si quiere pasar a la comparación de distintas energías, pulse 3\n");
	printf("si quiere modificar los datos del fichero, pulse 4\n");
	printf("si quiere cerrar el programa, pulse 5\n");
	
  char menu1;
  scanf("%c", &menu1);
  switch(menu1)
    {
    case '1':
    comprobacioncontrasena = verificarcontrasena(contrasenadosejemploparaparte2);
      if (comprobacioncontrasena==1) {
      
      int w;
      
do
{
printf("\n si quiere estudiar la energia hidraulica introduzca 0");
printf("\n si quiere estudiar la energia de turbinacion de bombeo introduzca 1");
printf("\n si quiere estudiar la energia nuclear introduzca 2");
printf("\n si quiere estudiar la energia de carbon introduzca 3");
printf("\n si quiere estudiar la energia de motores diesel introduzca 4");
printf("\n si quiere estudiar la energia de turbina de gas introduzca 5");
printf("\n si quiere estudiar la energia de turbina de vapor introduzca 6");
printf("\n si quiere estudiar la energia de ciclo combinado introduzca 7");
printf("\n si quiere estudiar la energia hidroeolica pulse introduzca 8");
printf("\n si quiere estudiar la energia eolica introduzca 9");
printf("\n si quiere estudiar la energia solar fotovoltaica introduzca 10");
printf("\n si quiere estudiar la energia solar termica introduzca 11");
printf("\n si quiere estudiar la energia de otras renovables introduzca 12 \n \n ");
scanf("  %i",&w);
}while (w>12||w<0);



analiza(w);

      
      
	  }
else 
		{
			printf("CONTRASEÑA INCORRECTA. Acceso denegado.\n");
        	vueltaalmenu1=1;
        	break;
    		}
		break;

break;
      
    case '2':
      comprobacioncontrasena = verificarcontrasena(contrasenadosejemploparaparte2);
      if (comprobacioncontrasena==1) {
      	int mes_cogido_ranquin;
        do 
		{
	        printf("Escoja el mes para realizar el ranquin:\n\n");
	        printf("1. Enero del 2021\t13. Enero del 2022\n");
	        printf("2. Febrero del 2021\t14. Febrero del 2022\n");
	        printf("3. Marzo del 2021\t15. Marzo del 2022\n");
	        printf("4. Abril del 2021\t16. Abril del 2022\n");
	        printf("5. Mayo del 2021\t17. Mayo del 2022\n");
	        printf("6. Junio del 2021\t18. Junio del 2022\n");
	        printf("7. Julio del 2021\t19. Julio del 2022\n");
	        printf("8. Agosto del 2021\t20. Agosto del 2022\n");
	        printf("9. Septiembre del 2021\t21. Septiembre del 2022\n");
	        printf("10. Octubre del 2021\t22. Octubre del 2022\n");
	        printf("11. Noviembre del 2021\t23. Noviembre del 2022\n");
	        printf("12. Diciembre del 2021\t24. Diciembre del 2022\n");
	        printf("\nEscriba el numero indicado al lado del mes deseado: ");
	        scanf("%i", &mes_cogido_ranquin);
	    } while (mes_cogido_ranquin <= 0 || mes_cogido_ranquin >= 25);
	
	    ranquin_absolutos(mes_cogido_ranquin);
        
        
    	} 
	  else {
        printf("Contraseña incorrecta. Acceso denegado.\n");
        vueltaalmenu1=1;
        break;
    	}
      break;
      
    case '3':
      	printf("\nHa accedido a GENERACION ENTRE COMUNIDADES:\n");
        comprobacioncontrasena = verificarcontrasena(contrasenadosejemploparaparte2);
        if (comprobacioncontrasena==1) 
		{
			printf("\nCONTRASEÑA CORRECTA.\n");
			
			printf("Seleccione una opción:\n");
    			for (i = 0; i < sizeof(energias) / sizeof(energias[0]); i++)
			{
        			printf("%d. %s\n", i + 1, energias[i]);
    			}

    			printf("Primera energia:\n");
			scanf("%d", &seleccion);
	
			printf("Segunda energia:\n");
			scanf("%d", &seleccion1);
	
			printf("Tercera energia:\n");
			scanf("%d", &seleccion2);

    			if (seleccion >= 1 && seleccion <= sizeof(energias) / sizeof(energias[0]))
			{
        			imprimirColumna(energias[seleccion - 1], energias[seleccion1 - 1], energias[seleccion2 - 1] );
    			} 
			else
			{
        			printf("Opción inválida.\n");
    			}
		} 
	    else 
		{
			printf("CONTRASEÑA INCORRECTA. Acceso denegado.\n");
        	vueltaalmenu1=1;
        	break;
    		}
		break;
      
    case '4':

       
  comprobacioncontrasena2 = verificarcontrasena(password);
      if (comprobacioncontrasena2==1) {

  
  while(bucle != 33)
  {
    printf("\nQue datos de generacion quieres ver?.\n \n");
  
    printf("Para ver Hidraulica pulse 1.\n");
    printf("Para ver Turbinacion Bombeo pulse 2.\n");
    printf("Para ver Nuclear pulse 3.\n");
    printf("Para ver Carbon pulse 4.\n");
    printf("Para ver Motores diesel pulse 5.\n");
    printf("Para ver Turbina de gas pulse 6.\n");
    printf("Para ver Turvina de vapor pulse 7.\n");
    printf("Para ver Ciclo combinado pulse 8.\n");
    printf("Para ver Hidroeolica pulse 9.\n");
    printf("Para ver Eolica pulse 10.\n");
    printf("Para ver Solar fotovoltaica pulse 11.\n");
    printf("Para ver Solar termica pulse 12.\n");
    printf("Para ver Otras renovables pulse 13.\n");
    printf("Para ver Cogeneracion pulse 14.\n");
    printf("Para ver Residuos no renovables pulse 15.\n");
    printf("Para ver Residuos renovables pulse 16.\n");
    printf("Para ver Generacion total pulse 17.\n");
    printf("Para cerrar el programa pulse 18.\n \n");
  
    k=3;  
     
    scanf("%i", &n);
    switch(n)
    {
      case 1:

      	  k++;
		  printf("\nQue quieres hacer?\n");
		  
		  printf("Para ver la generacion durante todo los meses pulse 1\n");
		  printf("Para ver la generacion de un mes y cambiarla pulse 2\n");
		  printf("Para volver al menu anterior pulse 3\n");
		  
		  scanf("%i", &n1);
		  switch(n1)
		  { 
		  	case 1:
		  		printf("Aqui esta la generacion de todos los meses del 1-2021 al 12-2022:\n");
		  		vector_columna(k);
		  		
		  		break;
		  	case 2:
		  	  printf("\nCual mes quieres ver?\n");
              printf("(Ejemplo: 1 2021====>enero 2021)\n");
              scanf("%i %i", &gen.mes, &gen.anyo);
              switch(gen.anyo)
                {
                  case 2021:
                  	switch(gen.mes)
                  	{
                  	case 1:
                  	 m=0;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                     scanf(" %c", &l);
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_1(valor, m);
                     }
                     break;
                    case 2:
                  	 m=1;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l); 
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_1(valor, m);
                     }
                     break;
                    case 3:
                  	 m=2;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l); 
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_1(valor, m);
                  	 }
                  	 break;
                    case 4:
                  	 m=3;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l); 
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_1(valor, m);
                  	 }
                  	 break;
                    case 5:
                  	 m=4;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l); //tengo que poner 2, para que lea 1   	 
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_1(valor, m);
                  	 }
                  	 break;
                    case 6:
                  	 m=5;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l == 's' )
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_1(valor, m);
                  	 }
                  	 break;
                    case 7:
                  	 m=6;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_1(valor, m);
                  	 }
                  	 break;
                    case 8:
                  	 m=7;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_1(valor, m);
                  	 }
                  	 break;
                    case 9:
                  	 m=8;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_1(valor, m);
                  	 }
                  	 break;
                    case 10:
                  	 m=9;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_1(valor, m);
                  	 }
                  	 break;
                    case 11:
                  	 m=10;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_1(valor, m);
                  	 }
                  	 break;
                    case 12:
                  	 m=11;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_1(valor, m);
                  	 }
                  	 break;
					 }
                  	break;
                  case 2022:
                  	switch(gen.mes)
                  	{
                  	case 1:
                  	 m=12;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_1(valor, m);
                     }
                     break;
                    case 2:
                  	 m=13;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_1(valor, m);
                     }
                     break;
                    case 3:
                  	 m=14;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_1(valor, m);
                  	 }
                  	 break;
                    case 4:
                  	 m=15;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l== 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_1(valor, m);
                  	 }
                  	 break;
                    case 5:
                  	 m=16;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l== 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_1(valor, m);
                  	 }
                  	 break;
                    case 6:
                  	 m=17;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l== 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_1(valor, m);
                  	 }
                  	 break;
                    case 7:
                  	 m=18;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l== 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_1(valor, m);
                  	 }
                  	 break;
                    case 8:
                  	 m=19;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l== 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_1(valor, m);
                  	 }
                  	 break;
                    case 9:
                  	 m=20;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l== 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_1(valor, m);
                  	 }
                  	 break;
                    case 10:
                  	 m=21;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l== 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_1(valor, m);
                  	 }
                  	 break;
                    case 11:
                  	 m=22;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l== 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_1(valor, m);
                  	 }
                  	 break;
                    case 12:
                  	 m=23;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l== 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_1(valor, m);
                  	 }
                  	 break;
					 }
					default:
                      printf("ERROR, pulse alguno de los numeros indicados");
                  	break;		
					}
              break;
        
            default:
              printf("ERROR, pulse alguno de los numeros indicados");
		  }	     	  
      break;
      
      case 2:
         
      	  k=5;
		  printf("\nQue quieres hacer?\n");
		  
		  printf("Para ver la generacion durante todo los meses pulse 1\n");
		  printf("Para ver la generacion de un mes y cambiarla pulse 2\n");
		  printf("Para volver al menu anterior pulse 3\n");
		  
		  scanf("%i", &n1);
		  switch(n1)
		  { 
		  	case 1:
		  		printf("Aqui esta la generacion de todos los meses del 1-2021 al 12-2022:\n");
		  		vector_columna(k);
		  		
		  		break;
		  	case 2:
		  	  printf("\nCual mes quieres ver?\n");
              printf("(Ejemplo: 1 2021====>enero 2021)\n");
              scanf("%i %i", &gen.mes, &gen.anyo);
              switch(gen.anyo)
                {
                  case 2021:
                  	switch(gen.mes)
                  	{
                  	case 1:
                  	 m=0;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                     scanf(" %c", &l);
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_2(valor, m);
                     }
                     break;
                    case 2:
                  	 m=1;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l); 
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_2(valor, m);
                     }
                     break;
                    case 3:
                  	 m=2;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l); 
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_2(valor, m);
                  	 }
                  	 break;
                    case 4:
                  	 m=3;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l); 
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_2(valor, m);
                  	 }
                  	 break;
                    case 5:
                  	 m=4;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l); //tengo que poner 2, para que lea 1   	 
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_2(valor, m);
                  	 }
                  	 break;
                    case 6:
                  	 m=5;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l == 's' )
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_2(valor, m);
                  	 }
                  	 break;
                    case 7:
                  	 m=6;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_2(valor, m);
                  	 }
                  	 break;
                    case 8:
                  	 m=7;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_2(valor, m);
                  	 }
                  	 break;
                    case 9:
                  	 m=8;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_2(valor, m);
                  	 }
                  	 break;
                    case 10:
                  	 m=9;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_2(valor, m);
                  	 }
                  	 break;
                    case 11:
                  	 m=10;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_2(valor, m);
                  	 }
                  	 break;
                    case 12:
                  	 m=11;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_2(valor, m);
                  	 }
                  	 break;
					 }
                  	break;
                  case 2022:
                  	switch(gen.mes)
                  	{
                  	case 1:
                  	 m=12;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_2(valor, m);
                     }
                     break;
                    case 2:
                  	 m=13;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_2(valor, m);
                     }
                     break;
                    case 3:
                  	 m=14;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_2(valor, m);
                  	 }
                  	 break;
                    case 4:
                  	 m=15;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l== 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_2(valor, m);
                  	 }
                  	 break;
                    case 5:
                  	 m=16;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l== 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_2(valor, m);
                  	 }
                  	 break;
                    case 6:
                  	 m=17;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l== 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_2(valor, m);
                  	 }
                  	 break;
                    case 7:
                  	 m=18;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l== 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_2(valor, m);
                  	 }
                  	 break;
                    case 8:
                  	 m=19;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l== 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_2(valor, m);
                  	 }
                  	 break;
                    case 9:
                  	 m=20;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l== 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_2(valor, m);
                  	 }
                  	 break;
                    case 10:
                  	 m=21;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l== 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_2(valor, m);
                  	 }
                  	 break;
                    case 11:
                  	 m=22;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l== 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_2(valor, m);
                  	 }
                  	 break;
                    case 12:
                  	 m=23;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l== 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_2(valor, m);
                  	 }
                  	 break;
					 }
					
                  	break;		
					}
              break;
        
            default:
              printf("ERROR, pulse alguno de los numeros indicados");
		  }	     	  
      break;	  
        
      
      case 3:

      	  k=6;
		  printf("\nQue quieres hacer?\n");
		  
		  printf("Para ver la generacion durante todo los meses pulse 1\n");
		  printf("Para ver la generacion de un mes y cambiarla pulse 2\n");
		  printf("Para volver al menu anterior pulse 3\n");
		  
		  scanf("%i", &n1);
		  switch(n1)
		  { 
		  	case 1:
		  		printf("Aqui esta la generacion de todos los meses del 1-2021 al 12-2022:\n");
		  		vector_columna(k);
		  		
		  		break;
		  	case 2:
		  	  printf("\nCual mes quieres ver?\n");
              printf("(Ejemplo: 1 2021====>enero 2021)\n");
              scanf("%i %i", &gen.mes, &gen.anyo);
              switch(gen.anyo)
                {
                  case 2021:
                  	switch(gen.mes)
                  	{
                  	case 1:
                  	 m=0;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                     scanf(" %c", &l);
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_3(valor, m);
                     }
                     break;
                    case 2:
                  	 m=1;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l); 
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_3(valor, m);
                     }
                     break;
                    case 3:
                  	 m=2;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l); 
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_3(valor, m);
                  	 }
                  	 break;
                    case 4:
                  	 m=3;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l); 
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_3(valor, m);
                  	 }
                  	 break;
                    case 5:
                  	 m=4;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l); //tengo que poner 2, para que lea 1   	 
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_3(valor, m);
                  	 }
                  	 break;
                    case 6:
                  	 m=5;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l == 's' )
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_3(valor, m);
                  	 }
                  	 break;
                    case 7:
                  	 m=6;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_3(valor, m);
                  	 }
                  	 break;
                    case 8:
                  	 m=7;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_3(valor, m);
                  	 }
                  	 break;
                    case 9:
                  	 m=8;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_3(valor, m);
                  	 }
                  	 break;
                    case 10:
                  	 m=9;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_3(valor, m);
                  	 }
                  	 break;
                    case 11:
                  	 m=10;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_3(valor, m);
                  	 }
                  	 break;
                    case 12:
                  	 m=11;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_3(valor, m);
                  	 }
                  	 break;
					 }
                  	break;
                  case 2022:
                  	switch(gen.mes)
                  	{
                  	case 1:
                  	 m=12;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_3(valor, m);
                     }
                     break;
                    case 2:
                  	 m=13;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_3(valor, m);
                     }
                     break;
                    case 3:
                  	 m=14;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_3(valor, m);
                  	 }
                  	 break;
                    case 4:
                  	 m=15;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l== 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_3(valor, m);
                  	 }
                  	 break;
                    case 5:
                  	 m=16;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l== 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_3(valor, m);
                  	 }
                  	 break;
                    case 6:
                  	 m=17;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l== 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_3(valor, m);
                  	 }
                  	 break;
                    case 7:
                  	 m=18;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l== 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_3(valor, m);
                  	 }
                  	 break;
                    case 8:
                  	 m=19;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l== 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_3(valor, m);
                  	 }
                  	 break;
                    case 9:
                  	 m=20;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l== 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_3(valor, m);
                  	 }
                  	 break;
                    case 10:
                  	 m=21;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l== 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_3(valor, m);
                  	 }
                  	 break;
                    case 11:
                  	 m=22;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l== 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_3(valor, m);
                  	 }
                  	 break;
                    case 12:
                  	 m=23;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l== 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_3(valor, m);
                  	 }
                  	 break;
					 }
					
                  	break;		
					}
              break;
        
            default:
              printf("ERROR, pulse alguno de los numeros indicados");
		  }	     	  
      break;	  
 
      case 4:
      	
      	  k=7;
		  printf("\nQue quieres hacer?\n");
		  
		  printf("Para ver la generacion durante todo los meses pulse 1\n");
		  printf("Para ver la generacion de un mes y cambiarla pulse 2\n");
		  printf("Para volver al menu anterior pulse 3\n");
		  
		  scanf("%i", &n1);
		  switch(n1)
		  { 
		  	case 1:
		  		printf("Aqui esta la generacion de todos los meses del 1-2021 al 12-2022:\n");
		  		vector_columna(k);
		  		
		  		break;
		  	case 2:
		  	  printf("\nCual mes quieres ver?\n");
              printf("(Ejemplo: 1 2021====>enero 2021)\n");
              scanf("%i %i", &gen.mes, &gen.anyo);
              switch(gen.anyo)
                {
                  case 2021:
                  	switch(gen.mes)
                  	{
                  	case 1:
                  	 m=0;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                     scanf(" %c", &l);
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_4(valor, m);
                     }
                     break;
                    case 2:
                  	 m=1;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l); 
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_4(valor, m);
                     }
                     break;
                    case 3:
                  	 m=2;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l); 
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_4(valor, m);
                  	 }
                  	 break;
                    case 4:
                  	 m=3;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l); 
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_4(valor, m);
                  	 }
                  	 break;
                    case 5:
                  	 m=4;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l); //tengo que poner 2, para que lea 1   	 
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_4(valor, m);
                  	 }
                  	 break;
                    case 6:
                  	 m=5;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l == 's' )
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_4(valor, m);
                  	 }
                  	 break;
                    case 7:
                  	 m=6;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_4(valor, m);
                  	 }
                  	 break;
                    case 8:
                  	 m=7;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_4(valor, m);
                  	 }
                  	 break;
                    case 9:
                  	 m=8;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_4(valor, m);
                  	 }
                  	 break;
                    case 10:
                  	 m=9;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_4(valor, m);
                  	 }
                  	 break;
                    case 11:
                  	 m=10;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_4(valor, m);
                  	 }
                  	 break;
                    case 12:
                  	 m=11;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_4(valor, m);
                  	 }
                  	 break;
					 }
                  	break;
                  case 2022:
                  	switch(gen.mes)
                  	{
                  	case 1:
                  	 m=12;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_4(valor, m);
                     }
                     break;
                    case 2:
                  	 m=13;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_4(valor, m);
                     }
                     break;
                    case 3:
                  	 m=14;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_4(valor, m);
                  	 }
                  	 break;
                    case 4:
                  	 m=15;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l== 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_4(valor, m);
                  	 }
                  	 break;
                    case 5:
                  	 m=16;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l== 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_4(valor, m);
                  	 }
                  	 break;
                    case 6:
                  	 m=17;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l== 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_4(valor, m);
                  	 }
                  	 break;
                    case 7:
                  	 m=18;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l== 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_4(valor, m);
                  	 }
                  	 break;
                    case 8:
                  	 m=19;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l== 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_4(valor, m);
                  	 }
                  	 break;
                    case 9:
                  	 m=20;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l== 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_4(valor, m);
                  	 }
                  	 break;
                    case 10:
                  	 m=21;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l== 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_4(valor, m);
                  	 }
                  	 break;
                    case 11:
                  	 m=22;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l== 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_4(valor, m);
                  	 }
                  	 break;
                    case 12:
                  	 m=23;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l== 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_4(valor, m);
                  	 }
                  	 break;
					 }
					
                  	break;		
					}
              break;
        
            default:
              printf("ERROR, pulse alguno de los numeros indicados");
		  }	     	  
      break;
      
      case 5:
      	  
      	  k=8;
		  printf("\nQue quieres hacer?\n");
		  
		  printf("Para ver la generacion durante todo los meses pulse 1\n");
		  printf("Para ver la generacion de un mes y cambiarla pulse 2\n");
		  printf("Para volver al menu anterior pulse 3\n");
		  
		  scanf("%i", &n1);
		  switch(n1)
		  { 
		  	case 1:
		  		printf("Aqui esta la generacion de todos los meses del 1-2021 al 12-2022:\n");
		  		vector_columna(k);
		  		
		  		break;
		  	case 2:
		  	  printf("\nCual mes quieres ver?\n");
              printf("(Ejemplo: 1 2021====>enero 2021)\n");
              scanf("%i %i", &gen.mes, &gen.anyo);
              switch(gen.anyo)
                {
                  case 2021:
                  	switch(gen.mes)
                  	{
                  	case 1:
                  	 m=0;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                     scanf(" %c", &l);
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_5(valor, m);
                     }
                     break;
                    case 2:
                  	 m=1;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l); 
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_5(valor, m);
                     }
                     break;
                    case 3:
                  	 m=2;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l); 
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_5(valor, m);
                  	 }
                  	 break;
                    case 4:
                  	 m=3;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l); 
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_5(valor, m);
                  	 }
                  	 break;
                    case 5:
                  	 m=4;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l); //tengo que poner 2, para que lea 1   	 
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_5(valor, m);
                  	 }
                  	 break;
                    case 6:
                  	 m=5;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l == 's' )
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_5(valor, m);
                  	 }
                  	 break;
                    case 7:
                  	 m=6;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_5(valor, m);
                  	 }
                  	 break;
                    case 8:
                  	 m=7;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_5(valor, m);
                  	 }
                  	 break;
                    case 9:
                  	 m=8;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_5(valor, m);
                  	 }
                  	 break;
                    case 10:
                  	 m=9;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_5(valor, m);
                  	 }
                  	 break;
                    case 11:
                  	 m=10;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_5(valor, m);
                  	 }
                  	 break;
                    case 12:
                  	 m=11;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_5(valor, m);
                  	 }
                  	 break;
					 }
                  	break;
                  case 2022:
                  	switch(gen.mes)
                  	{
                  	case 1:
                  	 m=12;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_5(valor, m);
                     }
                     break;
                    case 2:
                  	 m=13;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_5(valor, m);
                     }
                     break;
                    case 3:
                  	 m=14;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_5(valor, m);
                  	 }
                  	 break;
                    case 4:
                  	 m=15;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l== 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_5(valor, m);
                  	 }
                  	 break;
                    case 5:
                  	 m=16;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l== 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_5(valor, m);
                  	 }
                  	 break;
                    case 6:
                  	 m=17;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l== 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_5(valor, m);
                  	 }
                  	 break;
                    case 7:
                  	 m=18;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l== 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_5(valor, m);
                  	 }
                  	 break;
                    case 8:
                  	 m=19;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l== 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_5(valor, m);
                  	 }
                  	 break;
                    case 9:
                  	 m=20;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l== 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_5(valor, m);
                  	 }
                  	 break;
                    case 10:
                  	 m=21;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l== 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_5(valor, m);
                  	 }
                  	 break;
                    case 11:
                  	 m=22;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l== 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_5(valor, m);
                  	 }
                  	 break;
                    case 12:
                  	 m=23;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l== 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_5(valor, m);
                  	 }
                  	 break;
					 }
					
                  	break;		
					}
              break;
        
            default:
              printf("ERROR, pulse alguno de los numeros indicados");
		  }	     	  
      break;
      
      case 6:
      
      	  k=9;
		  printf("\nQue quieres hacer?\n");
		  
		  printf("Para ver la generacion durante todo los meses pulse 1\n");
		  printf("Para ver la generacion de un mes y cambiarla pulse 2\n");
		  printf("Para volver al menu anterior pulse 3\n");
		  
		  scanf("%i", &n1);
		  switch(n1)
		  { 
		  	case 1:
		  		printf("Aqui esta la generacion de todos los meses del 1-2021 al 12-2022:\n");
		  		vector_columna(k);
		  		
		  		break;
		  	case 2:
		  	  printf("\nCual mes quieres ver?\n");
              printf("(Ejemplo: 1 2021====>enero 2021)\n");
              scanf("%i %i", &gen.mes, &gen.anyo);
              switch(gen.anyo)
                {
                  case 2021:
                  	switch(gen.mes)
                  	{
                  	case 1:
                  	 m=0;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                     scanf(" %c", &l);
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_6(valor, m);
                     }
                     break;
                    case 2:
                  	 m=1;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l); 
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_6(valor, m);
                     }
                     break;
                    case 3:
                  	 m=2;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l); 
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_6(valor, m);
                  	 }
                  	 break;
                    case 4:
                  	 m=3;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l); 
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_6(valor, m);
                  	 }
                  	 break;
                    case 5:
                  	 m=4;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l); //tengo que poner 2, para que lea 1   	 
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_6(valor, m);
                  	 }
                  	 break;
                    case 6:
                  	 m=5;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l == 's' )
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_6(valor, m);
                  	 }
                  	 break;
                    case 7:
                  	 m=6;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_6(valor, m);
                  	 }
                  	 break;
                    case 8:
                  	 m=7;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_6(valor, m);
                  	 }
                  	 break;
                    case 9:
                  	 m=8;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_6(valor, m);
                  	 }
                  	 break;
                    case 10:
                  	 m=9;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_6(valor, m);
                  	 }
                  	 break;
                    case 11:
                  	 m=10;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_6(valor, m);
                  	 }
                  	 break;
                    case 12:
                  	 m=11;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_6(valor, m);
                  	 }
                  	 break;
					 }
                  	break;
                  case 2022:
                  	switch(gen.mes)
                  	{
                  	case 1:
                  	 m=12;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_6(valor, m);
                     }
                     break;
                    case 2:
                  	 m=13;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_6(valor, m);
                     }
                     break;
                    case 3:
                  	 m=14;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_6(valor, m);
                  	 }
                  	 break;
                    case 4:
                  	 m=15;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l== 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_6(valor, m);
                  	 }
                  	 break;
                    case 5:
                  	 m=16;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l== 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_6(valor, m);
                  	 }
                  	 break;
                    case 6:
                  	 m=17;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l== 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_6(valor, m);
                  	 }
                  	 break;
                    case 7:
                  	 m=18;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l== 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_6(valor, m);
                  	 }
                  	 break;
                    case 8:
                  	 m=19;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l== 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_6(valor, m);
                  	 }
                  	 break;
                    case 9:
                  	 m=20;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l== 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_6(valor, m);
                  	 }
                  	 break;
                    case 10:
                  	 m=21;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l== 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_6(valor, m);
                  	 }
                  	 break;
                    case 11:
                  	 m=22;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l== 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_6(valor, m);
                  	 }
                  	 break;
                    case 12:
                  	 m=23;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l== 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_6(valor, m);
                  	 }
                  	 break;
					 }
					
                  	break;		
					}
              break;
        
            default:
              printf("ERROR, pulse alguno de los numeros indicados");
		  }	     	  
      break;	  

      case 7:
      	 
      	  k=10;
		  printf("\nQue quieres hacer?\n");
		  
		  printf("Para ver la generacion durante todo los meses pulse 1\n");
		  printf("Para ver la generacion de un mes y cambiarla pulse 2\n");
		  printf("Para volver al menu anterior pulse 3\n");
		  
		  scanf("%i", &n1);
		  switch(n1)
		  { 
		  	case 1:
		  		printf("Aqui esta la generacion de todos los meses del 1-2021 al 12-2022:\n");
		  		vector_columna(k);
		  		
		  		break;
		  	case 2:
		  	  printf("\nCual mes quieres ver?\n");
              printf("(Ejemplo: 1 2021====>enero 2021)\n");
              scanf("%i %i", &gen.mes, &gen.anyo);
              switch(gen.anyo)
                {
                  case 2021:
                  	switch(gen.mes)
                  	{
                  	case 1:
                  	 m=0;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                     scanf(" %c", &l);
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_7(valor, m);
                     }
                     break;
                    case 2:
                  	 m=1;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l); 
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_7(valor, m);
                     }
                     break;
                    case 3:
                  	 m=2;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l); 
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_7(valor, m);
                  	 }
                  	 break;
                    case 4:
                  	 m=3;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l); 
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_7(valor, m);
                  	 }
                  	 break;
                    case 5:
                  	 m=4;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l); //tengo que poner 2, para que lea 1   	 
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_7(valor, m);
                  	 }
                  	 break;
                    case 6:
                  	 m=5;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l == 's' )
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_7(valor, m);
                  	 }
                  	 break;
                    case 7:
                  	 m=6;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_7(valor, m);
                  	 }
                  	 break;
                    case 8:
                  	 m=7;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_7(valor, m);
                  	 }
                  	 break;
                    case 9:
                  	 m=8;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_7(valor, m);
                  	 }
                  	 break;
                    case 10:
                  	 m=9;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_7(valor, m);
                  	 }
                  	 break;
                    case 11:
                  	 m=10;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_7(valor, m);
                  	 }
                  	 break;
                    case 12:
                  	 m=11;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_7(valor, m);
                  	 }
                  	 break;
					 }
                  	break;
                  case 2022:
                  	switch(gen.mes)
                  	{
                  	case 1:
                  	 m=12;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_7(valor, m);
                     }
                     break;
                    case 2:
                  	 m=13;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_7(valor, m);
                     }
                     break;
                    case 3:
                  	 m=14;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_7(valor, m);
                  	 }
                  	 break;
                    case 4:
                  	 m=15;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l== 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_7(valor, m);
                  	 }
                  	 break;
                    case 5:
                  	 m=16;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l== 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_7(valor, m);
                  	 }
                  	 break;
                    case 6:
                  	 m=17;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l== 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_7(valor, m);
                  	 }
                  	 break;
                    case 7:
                  	 m=18;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l== 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_7(valor, m);
                  	 }
                  	 break;
                    case 8:
                  	 m=19;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l== 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_7(valor, m);
                  	 }
                  	 break;
                    case 9:
                  	 m=20;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l== 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_7(valor, m);
                  	 }
                  	 break;
                    case 10:
                  	 m=21;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l== 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_7(valor, m);
                  	 }
                  	 break;
                    case 11:
                  	 m=22;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l== 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_7(valor, m);
                  	 }
                  	 break;
                    case 12:
                  	 m=23;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l== 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_7(valor, m);
                  	 }
                  	 break;
					 }
					
                  	break;		
					}
              break;
        
            default:
              printf("ERROR, pulse alguno de los numeros indicados");
		  }	     	  
      break;
      
      case 8:
      
	        	  k=11;
		  printf("\nQue quieres hacer?\n");
		  
		  printf("Para ver la generacion durante todo los meses pulse 1\n");
		  printf("Para ver la generacion de un mes y cambiarla pulse 2\n");
		  printf("Para volver al menu anterior pulse 3\n");
		  
		  scanf("%i", &n1);
		  switch(n1)
		  { 
		  	case 1:
		  		printf("Aqui esta la generacion de todos los meses del 1-2021 al 12-2022:\n");
		  		vector_columna(k);
		  		
		  		break;
		  	case 2:
		  	  printf("\nCual mes quieres ver?\n");
              printf("(Ejemplo: 1 2021====>enero 2021)\n");
              scanf("%i %i", &gen.mes, &gen.anyo);
              switch(gen.anyo)
                {
                  case 2021:
                  	switch(gen.mes)
                  	{
                  	case 1:
                  	 m=0;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                     scanf(" %c", &l);
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_8(valor, m);
                     }
                     break;
                    case 2:
                  	 m=1;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l); 
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_8(valor, m);
                     }
                     break;
                    case 3:
                  	 m=2;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l); 
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_8(valor, m);
                  	 }
                  	 break;
                    case 4:
                  	 m=3;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l); 
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_8(valor, m);
                  	 }
                  	 break;
                    case 5:
                  	 m=4;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l); //tengo que poner 2, para que lea 1   	 
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_8(valor, m);
                  	 }
                  	 break;
                    case 6:
                  	 m=5;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l == 's' )
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_8(valor, m);
                  	 }
                  	 break;
                    case 7:
                  	 m=6;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_8(valor, m);
                  	 }
                  	 break;
                    case 8:
                  	 m=7;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_8(valor, m);
                  	 }
                  	 break;
                    case 9:
                  	 m=8;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_8(valor, m);
                  	 }
                  	 break;
                    case 10:
                  	 m=9;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_8(valor, m);
                  	 }
                  	 break;
                    case 11:
                  	 m=10;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_8(valor, m);
                  	 }
                  	 break;
                    case 12:
                  	 m=11;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_8(valor, m);
                  	 }
                  	 break;
					 }
                  	break;
                  case 2022:
                  	switch(gen.mes)
                  	{
                  	case 1:
                  	 m=12;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_8(valor, m);
                     }
                     break;
                    case 2:
                  	 m=13;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_8(valor, m);
                     }
                     break;
                    case 3:
                  	 m=14;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_8(valor, m);
                  	 }
                  	 break;
                    case 4:
                  	 m=15;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l== 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_8(valor, m);
                  	 }
                  	 break;
                    case 5:
                  	 m=16;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l== 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_8(valor, m);
                  	 }
                  	 break;
                    case 6:
                  	 m=17;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l== 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_8(valor, m);
                  	 }
                  	 break;
                    case 7:
                  	 m=18;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l== 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_8(valor, m);
                  	 }
                  	 break;
                    case 8:
                  	 m=19;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l== 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_8(valor, m);
                  	 }
                  	 break;
                    case 9:
                  	 m=20;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l== 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_8(valor, m);
                  	 }
                  	 break;
                    case 10:
                  	 m=21;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l== 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_8(valor, m);
                  	 }
                  	 break;
                    case 11:
                  	 m=22;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l== 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_8(valor, m);
                  	 }
                  	 break;
                    case 12:
                  	 m=23;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l== 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_8(valor, m);
                  	 }
                  	 break;
					 }
					
                  	break;		
					}
              break;
        
            default:
              printf("ERROR, pulse alguno de los numeros indicados");
		  }	     	  
      break;
      
      case 9:
      	 
	      k=12;
		  printf("\nQue quieres hacer?\n");
		  
		  printf("Para ver la generacion durante todo los meses pulse 1\n");
		  printf("Para ver la generacion de un mes y cambiarla pulse 2\n");
		  printf("Para volver al menu anterior pulse 3\n");
		  
		  scanf("%i", &n1);
		  switch(n1)
		  { 
		  	case 1:
		  		printf("Aqui esta la generacion de todos los meses del 1-2021 al 12-2022:\n");
		  		vector_columna(k);
		  		
		  		break;
		  	case 2:
		  	  printf("\nCual mes quieres ver?\n");
              printf("(Ejemplo: 1 2021====>enero 2021)\n");
              scanf("%i %i", &gen.mes, &gen.anyo);
              switch(gen.anyo)
                {
                  case 2021:
                  	switch(gen.mes)
                  	{
                  	case 1:
                  	 m=0;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                     scanf(" %c", &l);
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_9(valor, m);
                     }
                     break;
                    case 2:
                  	 m=1;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l); 
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_9(valor, m);
                     }
                     break;
                    case 3:
                  	 m=2;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l); 
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_9(valor, m);
                  	 }
                  	 break;
                    case 4:
                  	 m=3;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l); 
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_9(valor, m);
                  	 }
                  	 break;
                    case 5:
                  	 m=4;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l); //tengo que poner 2, para que lea 1   	 
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_9(valor, m);
                  	 }
                  	 break;
                    case 6:
                  	 m=5;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l == 's' )
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_9(valor, m);
                  	 }
                  	 break;
                    case 7:
                  	 m=6;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_9(valor, m);
                  	 }
                  	 break;
                    case 8:
                  	 m=7;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_9(valor, m);
                  	 }
                  	 break;
                    case 9:
                  	 m=8;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_9(valor, m);
                  	 }
                  	 break;
                    case 10:
                  	 m=9;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_9(valor, m);
                  	 }
                  	 break;
                    case 11:
                  	 m=10;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_9(valor, m);
                  	 }
                  	 break;
                    case 12:
                  	 m=11;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_9(valor, m);
                  	 }
                  	 break;
					 }
                  	break;
                  case 2022:
                  	switch(gen.mes)
                  	{
                  	case 1:
                  	 m=12;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_9(valor, m);
                     }
                     break;
                    case 2:
                  	 m=13;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_9(valor, m);
                     }
                     break;
                    case 3:
                  	 m=14;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_9(valor, m);
                  	 }
                  	 break;
                    case 4:
                  	 m=15;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l== 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_9(valor, m);
                  	 }
                  	 break;
                    case 5:
                  	 m=16;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l== 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_9(valor, m);
                  	 }
                  	 break;
                    case 6:
                  	 m=17;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l== 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_9(valor, m);
                  	 }
                  	 break;
                    case 7:
                  	 m=18;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l== 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_9(valor, m);
                  	 }
                  	 break;
                    case 8:
                  	 m=19;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l== 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_9(valor, m);
                  	 }
                  	 break;
                    case 9:
                  	 m=20;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l== 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_9(valor, m);
                  	 }
                  	 break;
                    case 10:
                  	 m=21;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l== 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_9(valor, m);
                  	 }
                  	 break;
                    case 11:
                  	 m=22;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l== 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_9(valor, m);
                  	 }
                  	 break;
                    case 12:
                  	 m=23;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l== 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_9(valor, m);
                  	 }
                  	 break;
					 }
					
                  	break;		
					}
              break;
        
            default:
              printf("ERROR, pulse alguno de los numeros indicados");
		  }	     	  
      break;
      
      case 10:
      	
	  k=13;
		  printf("\nQue quieres hacer?\n");
		  
		  printf("Para ver la generacion durante todo los meses pulse 1\n");
		  printf("Para ver la generacion de un mes y cambiarla pulse 2\n");
		  printf("Para volver al menu anterior pulse 3\n");
		  
		  scanf("%i", &n1);
		  switch(n1)
		  { 
		  	case 1:
		  		printf("Aqui esta la generacion de todos los meses del 1-2021 al 12-2022:\n");
		  		vector_columna(k);
		  		
		  		break;
		  	case 2:
		  	  printf("\nCual mes quieres ver?\n");
              printf("(Ejemplo: 1 2021====>enero 2021)\n");
              scanf("%i %i", &gen.mes, &gen.anyo);
              switch(gen.anyo)
                {
                  case 2021:
                  	switch(gen.mes)
                  	{
                  	case 1:
                  	 m=0;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                     scanf(" %c", &l);
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_10(valor, m);
                     }
                     break;
                    case 2:
                  	 m=1;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l); 
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_10(valor, m);
                     }
                     break;
                    case 3:
                  	 m=2;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l); 
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_10(valor, m);
                  	 }
                  	 break;
                    case 4:
                  	 m=3;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l); 
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_10(valor, m);
                  	 }
                  	 break;
                    case 5:
                  	 m=4;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l); //tengo que poner 2, para que lea 1   	 
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_10(valor, m);
                  	 }
                  	 break;
                    case 6:
                  	 m=5;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l == 's' )
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_10(valor, m);
                  	 }
                  	 break;
                    case 7:
                  	 m=6;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_10(valor, m);
                  	 }
                  	 break;
                    case 8:
                  	 m=7;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_10(valor, m);
                  	 }
                  	 break;
                    case 9:
                  	 m=8;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_10(valor, m);
                  	 }
                  	 break;
                    case 10:
                  	 m=9;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_10(valor, m);
                  	 }
                  	 break;
                    case 11:
                  	 m=10;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_10(valor, m);
                  	 }
                  	 break;
                    case 12:
                  	 m=11;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_10(valor, m);
                  	 }
                  	 break;
					 }
                  	break;
                  case 2022:
                  	switch(gen.mes)
                  	{
                  	case 1:
                  	 m=12;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_10(valor, m);
                     }
                     break;
                    case 2:
                  	 m=13;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_10(valor, m);
                     }
                     break;
                    case 3:
                  	 m=14;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_10(valor, m);
                  	 }
                  	 break;
                    case 4:
                  	 m=15;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l== 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_10(valor, m);
                  	 }
                  	 break;
                    case 5:
                  	 m=16;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l== 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_10(valor, m);
                  	 }
                  	 break;
                    case 6:
                  	 m=17;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l== 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_10(valor, m);
                  	 }
                  	 break;
                    case 7:
                  	 m=18;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l== 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_10(valor, m);
                  	 }
                  	 break;
                    case 8:
                  	 m=19;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l== 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_10(valor, m);
                  	 }
                  	 break;
                    case 9:
                  	 m=20;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l== 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_10(valor, m);
                  	 }
                  	 break;
                    case 10:
                  	 m=21;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l== 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_10(valor, m);
                  	 }
                  	 break;
                    case 11:
                  	 m=22;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l== 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_10(valor, m);
                  	 }
                  	 break;
                    case 12:
                  	 m=23;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l== 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_10(valor, m);
                  	 }
                  	 break;
					 }
					
                  	break;		
					}
              break;
        
            default:
              printf("ERROR, pulse alguno de los numeros indicados");
		  }	     	  
      break;
      
      case 11:
      	
      k=14;
		  printf("\nQue quieres hacer?\n");
		  
		  printf("Para ver la generacion durante todo los meses pulse 1\n");
		  printf("Para ver la generacion de un mes y cambiarla pulse 2\n");
		  printf("Para volver al menu anterior pulse 3\n");
		  
		  scanf("%i", &n1);
		  switch(n1)
		  { 
		  	case 1:
		  		printf("Aqui esta la generacion de todos los meses del 1-2021 al 12-2022:\n");
		  		vector_columna(k);
		  		
		  		break;
		  	case 2:
		  	  printf("\nCual mes quieres ver?\n");
              printf("(Ejemplo: 1 2021====>enero 2021)\n");
              scanf("%i %i", &gen.mes, &gen.anyo);
              switch(gen.anyo)
                {
                  case 2021:
                  	switch(gen.mes)
                  	{
                  	case 1:
                  	 m=0;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                     scanf(" %c", &l);
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_11(valor, m);
                     }
                     break;
                    case 2:
                  	 m=1;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l); 
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_11(valor, m);
                     }
                     break;
                    case 3:
                  	 m=2;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l); 
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_11(valor, m);
                  	 }
                  	 break;
                    case 4:
                  	 m=3;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l); 
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_11(valor, m);
                  	 }
                  	 break;
                    case 5:
                  	 m=4;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l); //tengo que poner 2, para que lea 1   	 
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_11(valor, m);
                  	 }
                  	 break;
                    case 6:
                  	 m=5;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l == 's' )
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_11(valor, m);
                  	 }
                  	 break;
                    case 7:
                  	 m=6;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_11(valor, m);
                  	 }
                  	 break;
                    case 8:
                  	 m=7;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_11(valor, m);
                  	 }
                  	 break;
                    case 9:
                  	 m=8;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_11(valor, m);
                  	 }
                  	 break;
                    case 10:
                  	 m=9;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_11(valor, m);
                  	 }
                  	 break;
                    case 11:
                  	 m=10;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_11(valor, m);
                  	 }
                  	 break;
                    case 12:
                  	 m=11;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_11(valor, m);
                  	 }
                  	 break;
					 }
                  	break;
                  case 2022:
                  	switch(gen.mes)
                  	{
                  	case 1:
                  	 m=12;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_11(valor, m);
                     }
                     break;
                    case 2:
                  	 m=13;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_11(valor, m);
                     }
                     break;
                    case 3:
                  	 m=14;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_11(valor, m);
                  	 }
                  	 break;
                    case 4:
                  	 m=15;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l== 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_11(valor, m);
                  	 }
                  	 break;
                    case 5:
                  	 m=16;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l== 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_11(valor, m);
                  	 }
                  	 break;
                    case 6:
                  	 m=17;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l== 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_11(valor, m);
                  	 }
                  	 break;
                    case 7:
                  	 m=18;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l== 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_11(valor, m);
                  	 }
                  	 break;
                    case 8:
                  	 m=19;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l== 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_11(valor, m);
                  	 }
                  	 break;
                    case 9:
                  	 m=20;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l== 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_11(valor, m);
                  	 }
                  	 break;
                    case 10:
                  	 m=21;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l== 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_11(valor, m);
                  	 }
                  	 break;
                    case 11:
                  	 m=22;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l== 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_11(valor, m);
                  	 }
                  	 break;
                    case 12:
                  	 m=23;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l== 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_11(valor, m);
                  	 }
                  	 break;
					 }
					
                  	break;		
					}
              break;
        
            default:
              printf("ERROR, pulse alguno de los numeros indicados");
		  }	     	  
      break;
      
      case 12:
      	
          k=15;
		  printf("\nQue quieres hacer?\n");
		  
		  printf("Para ver la generacion durante todo los meses pulse 1\n");
		  printf("Para ver la generacion de un mes y cambiarla pulse 2\n");
		  printf("Para volver al menu anterior pulse 3\n");
		  
		  scanf("%i", &n1);
		  switch(n1)
		  { 
		  	case 1:
		  		printf("Aqui esta la generacion de todos los meses del 1-2021 al 12-2022:\n");
		  		vector_columna(k);
		  		
		  		break;
		  	case 2:
		  	  printf("\nCual mes quieres ver?\n");
              printf("(Ejemplo: 1 2021====>enero 2021)\n");
              scanf("%i %i", &gen.mes, &gen.anyo);
              switch(gen.anyo)
                {
                  case 2021:
                  	switch(gen.mes)
                  	{
                  	case 1:
                  	 m=0;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                     scanf(" %c", &l);
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_12(valor, m);
                     }
                     break;
                    case 2:
                  	 m=1;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l); 
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_12(valor, m);
                     }
                     break;
                    case 3:
                  	 m=2;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l); 
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_12(valor, m);
                  	 }
                  	 break;
                    case 4:
                  	 m=3;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l); 
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_12(valor, m);
                  	 }
                  	 break;
                    case 5:
                  	 m=4;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l); //tengo que poner 2, para que lea 1   	 
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_12(valor, m);
                  	 }
                  	 break;
                    case 6:
                  	 m=5;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l == 's' )
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_12(valor, m);
                  	 }
                  	 break;
                    case 7:
                  	 m=6;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_12(valor, m);
                  	 }
                  	 break;
                    case 8:
                  	 m=7;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_12(valor, m);
                  	 }
                  	 break;
                    case 9:
                  	 m=8;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_12(valor, m);
                  	 }
                  	 break;
                    case 10:
                  	 m=9;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_12(valor, m);
                  	 }
                  	 break;
                    case 11:
                  	 m=10;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_12(valor, m);
                  	 }
                  	 break;
                    case 12:
                  	 m=11;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_12(valor, m);
                  	 }
                  	 break;
					 }
                  	break;
                  case 2022:
                  	switch(gen.mes)
                  	{
                  	case 1:
                  	 m=12;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_12(valor, m);
                     }
                     break;
                    case 2:
                  	 m=13;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_12(valor, m);
                     }
                     break;
                    case 3:
                  	 m=14;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_12(valor, m);
                  	 }
                  	 break;
                    case 4:
                  	 m=15;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l== 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_12(valor, m);
                  	 }
                  	 break;
                    case 5:
                  	 m=16;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l== 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_12(valor, m);
                  	 }
                  	 break;
                    case 6:
                  	 m=17;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l== 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_12(valor, m);
                  	 }
                  	 break;
                    case 7:
                  	 m=18;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l== 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_12(valor, m);
                  	 }
                  	 break;
                    case 8:
                  	 m=19;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l== 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_12(valor, m);
                  	 }
                  	 break;
                    case 9:
                  	 m=20;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l== 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_12(valor, m);
                  	 }
                  	 break;
                    case 10:
                  	 m=21;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l== 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_12(valor, m);
                  	 }
                  	 break;
                    case 11:
                  	 m=22;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l== 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_12(valor, m);
                  	 }
                  	 break;
                    case 12:
                  	 m=23;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l== 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_12(valor, m);
                  	 }
                  	 break;
					 }
					
                  	break;		
					}
              break;
        
            default:
              printf("ERROR, pulse alguno de los numeros indicados");
		  }	     	  
      break;
      
      case 13:
      	  
          k=16;
		  printf("\nQue quieres hacer?\n");
		  
		  printf("Para ver la generacion durante todo los meses pulse 1\n");
		  printf("Para ver la generacion de un mes y cambiarla pulse 2\n");
		  printf("Para volver al menu anterior pulse 3\n");
		  
		  scanf("%i", &n1);
		  switch(n1)
		  { 
		  	case 1:
		  		printf("Aqui esta la generacion de todos los meses del 1-2021 al 12-2022:\n");
		  		vector_columna(k);
		  		
		  		break;
		  	case 2:
		  	  printf("\nCual mes quieres ver?\n");
              printf("(Ejemplo: 1 2021====>enero 2021)\n");
              scanf("%i %i", &gen.mes, &gen.anyo);
              switch(gen.anyo)
                {
                  case 2021:
                  	switch(gen.mes)
                  	{
                  	case 1:
                  	 m=0;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                     scanf(" %c", &l);
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_13(valor, m);
                     }
                     break;
                    case 2:
                  	 m=1;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l); 
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_13(valor, m);
                     }
                     break;
                    case 3:
                  	 m=2;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l); 
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_13(valor, m);
                  	 }
                  	 break;
                    case 4:
                  	 m=3;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l); 
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_13(valor, m);
                  	 }
                  	 break;
                    case 5:
                  	 m=4;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l); //tengo que poner 2, para que lea 1   	 
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_13(valor, m);
                  	 }
                  	 break;
                    case 6:
                  	 m=5;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l == 's' )
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_13(valor, m);
                  	 }
                  	 break;
                    case 7:
                  	 m=6;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_13(valor, m);
                  	 }
                  	 break;
                    case 8:
                  	 m=7;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_13(valor, m);
                  	 }
                  	 break;
                    case 9:
                  	 m=8;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_13(valor, m);
                  	 }
                  	 break;
                    case 10:
                  	 m=9;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_13(valor, m);
                  	 }
                  	 break;
                    case 11:
                  	 m=10;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_13(valor, m);
                  	 }
                  	 break;
                    case 12:
                  	 m=11;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_13(valor, m);
                  	 }
                  	 break;
					 }
                  	break;
                  case 2022:
                  	switch(gen.mes)
                  	{
                  	case 1:
                  	 m=12;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_13(valor, m);
                     }
                     break;
                    case 2:
                  	 m=13;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_13(valor, m);
                     }
                     break;
                    case 3:
                  	 m=14;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_13(valor, m);
                  	 }
                  	 break;
                    case 4:
                  	 m=15;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l== 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_13(valor, m);
                  	 }
                  	 break;
                    case 5:
                  	 m=16;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l== 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_13(valor, m);
                  	 }
                  	 break;
                    case 6:
                  	 m=17;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l== 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_13(valor, m);
                  	 }
                  	 break;
                    case 7:
                  	 m=18;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l== 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_13(valor, m);
                  	 }
                  	 break;
                    case 8:
                  	 m=19;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l== 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_13(valor, m);
                  	 }
                  	 break;
                    case 9:
                  	 m=20;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l== 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_13(valor, m);
                  	 }
                  	 break;
                    case 10:
                  	 m=21;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l== 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_13(valor, m);
                  	 }
                  	 break;
                    case 11:
                  	 m=22;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l== 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_13(valor, m);
                  	 }
                  	 break;
                    case 12:
                  	 m=23;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l== 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_13(valor, m);
                  	 }
                  	 break;
					 }
					
                  	break;		
					}
              break;
        
            default:
              printf("ERROR, pulse alguno de los numeros indicados");
		  }	     	  
      break;
    
      case 14:
      	  
          k=17;
		  printf("\nQue quieres hacer?\n");
		  
		  printf("Para ver la generacion durante todo los meses pulse 1\n");
		  printf("Para ver la generacion de un mes y cambiarla pulse 2\n");
		  printf("Para volver al menu anterior pulse 3\n");
		  
		  scanf("%i", &n1);
		  switch(n1)
		  { 
		  	case 1:
		  		printf("Aqui esta la generacion de todos los meses del 1-2021 al 12-2022:\n");
		  		vector_columna(k);
		  		
		  		break;
		  	case 2:
		  	  printf("\nCual mes quieres ver?\n");
              printf("(Ejemplo: 1 2021====>enero 2021)\n");
              scanf("%i %i", &gen.mes, &gen.anyo);
              switch(gen.anyo)
                {
                  case 2021:
                  	switch(gen.mes)
                  	{
                  	case 1:
                  	 m=0;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                     scanf(" %c", &l);
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_14(valor, m);
                     }
                     break;
                    case 2:
                  	 m=1;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l); 
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_14(valor, m);
                     }
                     break;
                    case 3:
                  	 m=2;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l); 
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_14(valor, m);
                  	 }
                  	 break;
                    case 4:
                  	 m=3;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l); 
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_14(valor, m);
                  	 }
                  	 break;
                    case 5:
                  	 m=4;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l); //tengo que poner 2, para que lea 1   	 
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_14(valor, m);
                  	 }
                  	 break;
                    case 6:
                  	 m=5;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l == 's' )
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_14(valor, m);
                  	 }
                  	 break;
                    case 7:
                  	 m=6;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_14(valor, m);
                  	 }
                  	 break;
                    case 8:
                  	 m=7;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_14(valor, m);
                  	 }
                  	 break;
                    case 9:
                  	 m=8;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_14(valor, m);
                  	 }
                  	 break;
                    case 10:
                  	 m=9;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_14(valor, m);
                  	 }
                  	 break;
                    case 11:
                  	 m=10;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_14(valor, m);
                  	 }
                  	 break;
                    case 12:
                  	 m=11;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_14(valor, m);
                  	 }
                  	 break;
					 }
                  	break;
                  case 2022:
                  	switch(gen.mes)
                  	{
                  	case 1:
                  	 m=12;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_14(valor, m);
                     }
                     break;
                    case 2:
                  	 m=13;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_14(valor, m);
                     }
                     break;
                    case 3:
                  	 m=14;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_14(valor, m);
                  	 }
                  	 break;
                    case 4:
                  	 m=15;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l== 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_14(valor, m);
                  	 }
                  	 break;
                    case 5:
                  	 m=16;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l== 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_14(valor, m);
                  	 }
                  	 break;
                    case 6:
                  	 m=17;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l== 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_14(valor, m);
                  	 }
                  	 break;
                    case 7:
                  	 m=18;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l== 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_14(valor, m);
                  	 }
                  	 break;
                    case 8:
                  	 m=19;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l== 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_14(valor, m);
                  	 }
                  	 break;
                    case 9:
                  	 m=20;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l== 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_14(valor, m);
                  	 }
                  	 break;
                    case 10:
                  	 m=21;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l== 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_14(valor, m);
                  	 }
                  	 break;
                    case 11:
                  	 m=22;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l== 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_14(valor, m);
                  	 }
                  	 break;
                    case 12:
                  	 m=23;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l== 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_14(valor, m);
                  	 }
                  	 break;
					 }
					
                  	break;		
					}
              break;
        
            default:
              printf("ERROR, pulse alguno de los numeros indicados");
		  }	     	  
      break;

      case 15:
      	  
      k=18;
		  printf("\nQue quieres hacer?\n");
		  
		  printf("Para ver la generacion durante todo los meses pulse 1\n");
		  printf("Para ver la generacion de un mes y cambiarla pulse 2\n");
		  printf("Para volver al menu anterior pulse 3\n");
		  
		  scanf("%i", &n1);
		  switch(n1)
		  { 
		  	case 1:
		  		printf("Aqui esta la generacion de todos los meses del 1-2021 al 12-2022:\n");
		  		vector_columna(k);
		  		
		  		break;
		  	case 2:
		  	  printf("\nCual mes quieres ver?\n");
              printf("(Ejemplo: 1 2021====>enero 2021)\n");
              scanf("%i %i", &gen.mes, &gen.anyo);
              switch(gen.anyo)
                {
                  case 2021:
                  	switch(gen.mes)
                  	{
                  	case 1:
                  	 m=0;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                     scanf(" %c", &l);
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_15(valor, m);
                     }
                     break;
                    case 2:
                  	 m=1;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l); 
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_15(valor, m);
                     }
                     break;
                    case 3:
                  	 m=2;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l); 
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_15(valor, m);
                  	 }
                  	 break;
                    case 4:
                  	 m=3;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l); 
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_15(valor, m);
                  	 }
                  	 break;
                    case 5:
                  	 m=4;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l); //tengo que poner 2, para que lea 1   	 
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_15(valor, m);
                  	 }
                  	 break;
                    case 6:
                  	 m=5;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l == 's' )
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_15(valor, m);
                  	 }
                  	 break;
                    case 7:
                  	 m=6;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_15(valor, m);
                  	 }
                  	 break;
                    case 8:
                  	 m=7;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_15(valor, m);
                  	 }
                  	 break;
                    case 9:
                  	 m=8;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_15(valor, m);
                  	 }
                  	 break;
                    case 10:
                  	 m=9;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_15(valor, m);
                  	 }
                  	 break;
                    case 11:
                  	 m=10;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_15(valor, m);
                  	 }
                  	 break;
                    case 12:
                  	 m=11;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_15(valor, m);
                  	 }
                  	 break;
					 }
                  	break;
                  case 2022:
                  	switch(gen.mes)
                  	{
                  	case 1:
                  	 m=12;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_15(valor, m);
                     }
                     break;
                    case 2:
                  	 m=13;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_15(valor, m);
                     }
                     break;
                    case 3:
                  	 m=14;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_15(valor, m);
                  	 }
                  	 break;
                    case 4:
                  	 m=15;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l== 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_15(valor, m);
                  	 }
                  	 break;
                    case 5:
                  	 m=16;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l== 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_15(valor, m);
                  	 }
                  	 break;
                    case 6:
                  	 m=17;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l== 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_15(valor, m);
                  	 }
                  	 break;
                    case 7:
                  	 m=18;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l== 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_15(valor, m);
                  	 }
                  	 break;
                    case 8:
                  	 m=19;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l== 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_15(valor, m);
                  	 }
                  	 break;
                    case 9:
                  	 m=20;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l== 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_15(valor, m);
                  	 }
                  	 break;
                    case 10:
                  	 m=21;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l== 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_15(valor, m);
                  	 }
                  	 break;
                    case 11:
                  	 m=22;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l== 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_15(valor, m);
                  	 }
                  	 break;
                    case 12:
                  	 m=23;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l== 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_15(valor, m);
                  	 }
                  	 break;
					 }
					
                  	break;		
					}
              break;
        
            default:
              printf("ERROR, pulse alguno de los numeros indicados");
		  }	     	  
      break;
      
      case 16:
      	  
          k=19;
		  printf("\nQue quieres hacer?\n");
		  
		  printf("Para ver la generacion durante todo los meses pulse 1\n");
		  printf("Para ver la generacion de un mes y cambiarla pulse 2\n");
		  printf("Para volver al menu anterior pulse 3\n");
		  
		  scanf("%i", &n1);
		  switch(n1)
		  { 
		  	case 1:
		  		printf("Aqui esta la generacion de todos los meses del 1-2021 al 12-2022:\n");
		  		vector_columna(k);
		  		
		  		break;
		  	case 2:
		  	  printf("\nCual mes quieres ver?\n");
              printf("(Ejemplo: 1 2021====>enero 2021)\n");
              scanf("%i %i", &gen.mes, &gen.anyo);
              switch(gen.anyo)
                {
                  case 2021:
                  	switch(gen.mes)
                  	{
                  	case 1:
                  	 m=0;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                     scanf(" %c", &l);
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_16(valor, m);
                     }
                     break;
                    case 2:
                  	 m=1;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l); 
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_16(valor, m);
                     }
                     break;
                    case 3:
                  	 m=2;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l); 
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_16(valor, m);
                  	 }
                  	 break;
                    case 4:
                  	 m=3;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l); 
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_16(valor, m);
                  	 }
                  	 break;
                    case 5:
                  	 m=4;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l); //tengo que poner 2, para que lea 1   	 
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_16(valor, m);
                  	 }
                  	 break;
                    case 6:
                  	 m=5;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l == 's' )
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_16(valor, m);
                  	 }
                  	 break;
                    case 7:
                  	 m=6;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_16(valor, m);
                  	 }
                  	 break;
                    case 8:
                  	 m=7;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_16(valor, m);
                  	 }
                  	 break;
                    case 9:
                  	 m=8;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_16(valor, m);
                  	 }
                  	 break;
                    case 10:
                  	 m=9;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_16(valor, m);
                  	 }
                  	 break;
                    case 11:
                  	 m=10;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_16(valor, m);
                  	 }
                  	 break;
                    case 12:
                  	 m=11;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_16(valor, m);
                  	 }
                  	 break;
					 }
                  	break;
                  case 2022:
                  	switch(gen.mes)
                  	{
                  	case 1:
                  	 m=12;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_16(valor, m);
                     }
                     break;
                    case 2:
                  	 m=13;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_16(valor, m);
                     }
                     break;
                    case 3:
                  	 m=14;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_16(valor, m);
                  	 }
                  	 break;
                    case 4:
                  	 m=15;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l== 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_16(valor, m);
                  	 }
                  	 break;
                    case 5:
                  	 m=16;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l== 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_16(valor, m);
                  	 }
                  	 break;
                    case 6:
                  	 m=17;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l== 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_16(valor, m);
                  	 }
                  	 break;
                    case 7:
                  	 m=18;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l== 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_16(valor, m);
                  	 }
                  	 break;
                    case 8:
                  	 m=19;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l== 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_16(valor, m);
                  	 }
                  	 break;
                    case 9:
                  	 m=20;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l== 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_16(valor, m);
                  	 }
                  	 break;
                    case 10:
                  	 m=21;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l== 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_16(valor, m);
                  	 }
                  	 break;
                    case 11:
                  	 m=22;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l== 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_16(valor, m);
                  	 }
                  	 break;
                    case 12:
                  	 m=23;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l== 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_16(valor, m);
                  	 }
                  	 break;
					 }
					
                  	break;		
					}
              break;
        
            default:
              printf("ERROR, pulse alguno de los numeros indicados");
		  }	     	  
      break;
      
      case 17:
      	 
          k=20;
		  printf("\nQue quieres hacer?\n");
		  
		  printf("Para ver la generacion durante todo los meses pulse 1\n");
		  printf("Para ver la generacion de un mes y cambiarla pulse 2\n");
		  printf("Para volver al menu anterior pulse 3\n");
		  
		  scanf("%i", &n1);
		  switch(n1)
		  { 
		  	case 1:
		  		printf("Aqui esta la generacion de todos los meses del 1-2021 al 12-2022:\n");
		  		vector_columna(k);
		  		
		  		break;
		  	case 2:
		  	  printf("\nCual mes quieres ver?\n");
              printf("(Ejemplo: 1 2021====>enero 2021)\n");
              scanf("%i %i", &gen.mes, &gen.anyo);
              switch(gen.anyo)
                {
                  case 2021:
                  	switch(gen.mes)
                  	{
                  	case 1:
                  	 m=0;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                     scanf(" %c", &l);
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_17(valor, m);
                     }
                     break;
                    case 2:
                  	 m=1;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l); 
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_17(valor, m);
                     }
                     break;
                    case 3:
                  	 m=2;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l); 
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_17(valor, m);
                  	 }
                  	 break;
                    case 4:
                  	 m=3;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l); 
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_17(valor, m);
                  	 }
                  	 break;
                    case 5:
                  	 m=4;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l); //tengo que poner 2, para que lea 1   	 
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_17(valor, m);
                  	 }
                  	 break;
                    case 6:
                  	 m=5;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l == 's' )
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_17(valor, m);
                  	 }
                  	 break;
                    case 7:
                  	 m=6;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_17(valor, m);
                  	 }
                  	 break;
                    case 8:
                  	 m=7;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_17(valor, m);
                  	 }
                  	 break;
                    case 9:
                  	 m=8;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_17(valor, m);
                  	 }
                  	 break;
                    case 10:
                  	 m=9;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_17(valor, m);
                  	 }
                  	 break;
                    case 11:
                  	 m=10;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_17(valor, m);
                  	 }
                  	 break;
                    case 12:
                  	 m=11;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_17(valor, m);
                  	 }
                  	 break;
					 }
                  	break;
                  case 2022:
                  	switch(gen.mes)
                  	{
                  	case 1:
                  	 m=12;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_17(valor, m);
                     }
                     break;
                    case 2:
                  	 m=13;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_17(valor, m);
                     }
                     break;
                    case 3:
                  	 m=14;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l == 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_17(valor, m);
                  	 }
                  	 break;
                    case 4:
                  	 m=15;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l== 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_17(valor, m);
                  	 }
                  	 break;
                    case 5:
                  	 m=16;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l== 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_17(valor, m);
                  	 }
                  	 break;
                    case 6:
                  	 m=17;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l== 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_17(valor, m);
                  	 }
                  	 break;
                    case 7:
                  	 m=18;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l== 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_17(valor, m);
                  	 }
                  	 break;
                    case 8:
                  	 m=19;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l== 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_17(valor, m);
                  	 }
                  	 break;
                    case 9:
                  	 m=20;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l== 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_17(valor, m);
                  	 }
                  	 break;
                    case 10:
                  	 m=21;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l== 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_17(valor, m);
                  	 }
                  	 break;
                    case 11:
                  	 m=22;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l== 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_17(valor, m);
                  	 }
                  	 break;
                    case 12:
                  	 m=23;
                  	 dar_un_numero(m, k);
                  	 printf("Quieres cambiarlo?(s==si) \n");
                  	 scanf(" %c", &l);
                  	 if(l== 's')
                  	 {
                  	 	printf("Que valor quieres poner? \n");
                  	 	scanf("%f", &valor);
                  	 	cambiar_numero_17(valor, m);
                  	 }
                  	 break;
					 }
					
                  	break;		
					}
              break;
        
            default:
              printf("ERROR, pulse alguno de los numeros indicados");
		  }	     	  
      break;
      
      case 18:
      	printf("Programa finalizado");
        return -1; 
	  
      break;
        default:
        printf("ERROR, pulse alguno de los numeros indicados");
     }
   }
    }
else 
	{
		printf("CONTRASEÑA INCORRECTA. Acceso denegado.\n");
	vueltaalmenu1=1;
	break;
	}
	break;	  
		  
		  
      break;
      
      case '5':
      break;
      
    default:
      printf("Porfavor elija una de las opciones.\n");
      vueltaalmenu1=1;
      break;
    }
	
	}while(vueltaalmenu1!=0);
	return 0;
}

       
    

int verificarcontrasena(const char *contrasena) //funcion contraseña
{
	int i=0, j=0;
	char respuesta[10];
    for (i=0; i<=2; i++){
    	printf("porfavor introduzca la contraseÃ±a\nte quedan %i  intentos\n", 3-i);
    	scanf("%s", respuesta);
    if (strcmp(contrasena, respuesta) == 0) {
    	j=1;
        break; // las contraseñas son iguales asique es valida
    	}
	}
	return j;
}

float datos_tabla(const char* filausuario, int numuero_columna) 
{
    FILE* archivo = fopen("generacion2.csv", "r");
    if (archivo == NULL) {
        printf("\nError al abrir el archivo.\n");
        return 0.0f;
    } else {
        const int MAX_CARACTERES = 1000;
        char linea[MAX_CARACTERES];
        char* token;
        int i = 0, j = 0;
        int filaSeleccionada = -1;
        int columnaSeleccionada = numuero_columna;

        int fila = 0;
        while (fgets(linea, sizeof(linea), archivo)) {
            fila++;
            token = strtok(linea, ",");
            if (strcmp(token, filausuario) == 0) {
                filaSeleccionada = fila;
                break;
            }
        }

        if (filaSeleccionada != -1) 
	{
            rewind(archivo);
            for (i = 0; i < filaSeleccionada; i++) 
	    {
                fgets(linea, sizeof(linea), archivo);
            }

            token = strtok(linea, ",");
            for (j = 0; j < columnaSeleccionada; j++) 
	    {
                token = strtok(NULL, ",");
            }

            float dato = atof(token);
            fclose(archivo);
            return dato;
        } 
	    else 
	    {
            printf("No se encontro la fila especificada.\n");
            fclose(archivo);
            return 0.0f;
        }
    }
}

void ranquin_absolutos(int mes) 
{
    int i, j, n = 16; 
    float numTotal;
    const char* hidraulica = "Hidraulica";
    const char* turbinacion = "Turbinacion bombeo";
    const char* nucelar = "Nuclear";
    const char* carbon = "Carbon";
    const char* diesel = "Motores diesel";
    const char* tgas = "Turbina de gas";
    const char* tvapor = "Turbina de vapor";
    const char* cicloc = "Ciclo combinado";
    const char* hidroeolica = "Hidroeolica";
    const char* eolica = "Eolica";
    const char* fotovoltaica = "Solar fotovoltaica";
    const char* stermico = "Solar termica";
    const char* otrasr = "Otras renovables";
    const char* congeneracion = "Cogeneracion";
    const char* rnr = "Residuos no renovables";
    const char* rr = "Residuos renovables";
    const char* total = "Generacion total";
    float aux1, aux3;
    char aux2[40];
    numTotal = datos_tabla(total, mes);
    ranquin vector_ranquin[17] = 
	{ 
        {"Hidráulica", datos_tabla(hidraulica, mes), ((datos_tabla(hidraulica, mes) / numTotal) * 100)},
        {"Turbinación bombeo", datos_tabla(turbinacion, mes), ((datos_tabla(turbinacion, mes) / numTotal) * 100)},
        {"Nuclear", datos_tabla(nucelar, mes), ((datos_tabla(nucelar, mes) / numTotal) * 100)},
        {"Motores diésel", datos_tabla(diesel, mes), ((datos_tabla(diesel, mes) / numTotal) * 100)},
        {"Carbón", datos_tabla(carbon, mes), ((datos_tabla(carbon, mes) / numTotal) * 100)},
        {"Turbina de gas", datos_tabla(tgas, mes), ((datos_tabla(tgas, mes) / numTotal) * 100)},
        {"Turbina de vapor", datos_tabla(tvapor, mes), ((datos_tabla(tvapor, mes) / numTotal) * 100)},
        {"Ciclo combinado", datos_tabla(cicloc, mes), ((datos_tabla(cicloc, mes) / numTotal) * 100)},
        {"Hidroeólica", datos_tabla(hidroeolica, mes), ((datos_tabla(hidroeolica, mes) / numTotal) * 100)},
        {"Eólica", datos_tabla(eolica, mes), ((datos_tabla(eolica, mes) / numTotal) * 100)},
        {"Solar fotovoltaica", datos_tabla(fotovoltaica, mes), ((datos_tabla(fotovoltaica, mes) / numTotal) * 100)},
        {"Solar térmica", datos_tabla(stermico, mes), ((datos_tabla(stermico, mes) / numTotal) * 100)},
        {"Otras renovables", datos_tabla(otrasr, mes), ((datos_tabla(otrasr, mes) / numTotal) * 100)},
        {"Cogeneración", datos_tabla(congeneracion, mes), ((datos_tabla(congeneracion, mes) / numTotal) * 100)},
        {"Residuos no renovables", datos_tabla(rnr, mes), ((datos_tabla(rnr, mes) / numTotal) * 100)},
        {"Residuos renovables", datos_tabla(rr, mes), ((datos_tabla(rr, mes) / numTotal) * 100)}
    };
    // ORDENAMIENTO 
    for (i = 0; i < n - 1; i++) 
	{ 
        for (j = i + 1; j < n; j++) { 
            if (vector_ranquin[i].numero > vector_ranquin[j].numero) {
                aux1 = vector_ranquin[i].numero;
                strcpy(aux2, vector_ranquin[i].nombre);
                aux3 = vector_ranquin[i].porcentaje;
                vector_ranquin[i].numero = vector_ranquin[j].numero;
                strcpy(vector_ranquin[i].nombre, vector_ranquin[j].nombre);
                vector_ranquin[i].porcentaje = vector_ranquin[j].porcentaje;
                vector_ranquin[j].numero = aux1;
                strcpy(vector_ranquin[j].nombre, aux2);
                vector_ranquin[j].porcentaje = aux3;
            } 	
        }
    }
    printf("La tabla ordenada de mayor a menor:\n");
    printf("Generación (GWh):\tPorcentaje:\tTipo de energÃ­a:\n");
    for (i = n - 1; i >= 0; i--) { 
        printf("%f\t\t %.2f \t\t%s\n", vector_ranquin[i].numero, vector_ranquin[i].porcentaje, vector_ranquin[i].nombre);
    }
    printf("\nLa generación total fue: %f\n", numTotal);
}




void analiza(int w)
{
int x;
x=w;
	
float sanual1, sanual2, tanual1, tanual2, panual1, panual2;	
float vgraf, vaux;
int contador=0;
float max1, max2, max3, max4;	
char nmax1[10], nmax2[10], nmax3[10], nmax4[10];
int i=0;
int r=0;
int a=-1;	
char letra;
	
FILE *pfl;

energia tipo[20];

pfl=fopen("generacion.csv","r");

if (pfl == NULL)
 printf("error al abrir archivo");
 
while(i<4)
  {
    fscanf(pfl,"%c",&letra);
     if (letra=='\n')
     {   
     i++;
     }
  }
  
i=0; 
 
fscanf(pfl,"%c",&letra);
while(fscanf(pfl,"%c",&letra)!= EOF)
    {
    	
     if (letra=='\n')
     {   
     a++;
     fscanf(pfl," %19[^,]",tipo[a].nombre);
     
     i=0;
     }
     
    }
    
fclose(pfl);    

  
pfl=fopen("generacion.csv","r");
 
while(i<5)
  {
    fscanf(pfl,"%c",&letra);
     if (letra=='\n')
     {   
     i++;
     }
  }
  
i=0;  
fscanf(pfl,"%c",&letra);
a=0;
 
while(fscanf(pfl,"%c",&letra)!= EOF)
    {  
     if (letra==',')
     {  
     fscanf(pfl,"%f",&tipo[a].vector[i]);
     //printf("%f",tipo[a].vector[i]);
     i++;
     
     }
    if (letra=='\n')
     {   
     a++;
     i=0;
     }
    }
    
fclose(pfl);      
printf("%s",tipo[x].nombre);
    

max1=tipo[x].vector[0];
if(tipo[x].vector[1]>max1) 
{
 contador=contador+1; 
 max1=tipo[x].vector[1];
} 
if(tipo[x].vector[2]>max1) 
{
 contador=contador+10; 
 max1=tipo[x].vector[2];
} 
if(tipo[x].vector[3]>max1) 
{
 contador=contador+100;
 max1=tipo[x].vector[3];
} 
if(tipo[x].vector[4]>max1) 
{
 contador=contador+1000;
 max1=tipo[x].vector[4];
} 
if(tipo[x].vector[5]>max1) 
{
 contador=contador+10000; 
 max1=tipo[x].vector[5];
}   


printf("\n \n Mes pico en el primer medio ano de 2021     ");
if(contador>-1&&contador<1)  
 printf("enero");
if(contador>0&&contador<8)  
 printf("febrero");
if(contador>4&&contador<80)  
 printf("marzo");
if(contador>40&&contador<800)  
 printf("abril");
if(contador>400&&contador<8000)  
 printf("mayo");
if(contador>4000)  
 printf("junio");

printf("  %f GWh",max1) ;


contador=0;
max2=tipo[x].vector[6];
if(tipo[x].vector[7]>max2) 
{
 contador=contador+1; 
 max2=tipo[x].vector[7];
} 
if(tipo[x].vector[8]>max2) 
{
 contador=contador+10; 
 max2=tipo[x].vector[8];
} 
if(tipo[x].vector[9]>max2) 
{
 contador=contador+100;
 max2=tipo[x].vector[9];
} 
if(tipo[x].vector[10]>max2) 
{
 contador=contador+1000;
 max2=tipo[x].vector[10];
} 
if(tipo[x].vector[11]>max2) 
{
 contador=contador+10000; 
 max2=tipo[x].vector[11];
}   



printf("\n \n Mes pico en el segundo medio ano de 2021     ");
if(contador>-1&&contador<1)  
 printf("julio");
if(contador>0&&contador<8)  
 printf("agosto");
if(contador>4&&contador<80)  
 printf("septiembre");
if(contador>40&&contador<800)  
 printf("octubre");
if(contador>400&&contador<8000)  
 printf("noviembre");
if(contador>4000)  
 printf("diciembre");

printf("  %f GWh",max2) ;



contador=0;
max1=tipo[x].vector[12];
if(tipo[x].vector[13]>max1) 
{
 contador=contador+1; 
 max1=tipo[x].vector[13];
} 
if(tipo[x].vector[14]>max1) 
{
 contador=contador+10; 
 max1=tipo[x].vector[14];
} 
if(tipo[x].vector[15]>max1) 
{
 contador=contador+100;
 max1=tipo[x].vector[15];
} 
if(tipo[x].vector[16]>max1) 
{
 contador=contador+1000;
 max1=tipo[x].vector[16];
} 
if(tipo[x].vector[17]>max1) 
{
 contador=contador+10000; 
 max1=tipo[x].vector[17];
}   
//////////////////////////////////////////////////////////////////////
printf("\n \n Mes pico en el primer medio ano de 2022     ");
if(contador>-1&&contador<1)  
 printf("enero");
if(contador>0&&contador<8)  
 printf("febrero");
if(contador>4&&contador<80)  
 printf("marzo");
if(contador>40&&contador<800)  
 printf("abril");
if(contador>400&&contador<8000)  
 printf("mayo");
if(contador>4000)  
 printf("junio");

printf("  %f GWh",max1) ;


contador=0;
max2=tipo[x].vector[18];
if(tipo[x].vector[19]>max2) 
{
 contador=contador+1; 
 max2=tipo[x].vector[19];
} 
if(tipo[x].vector[20]>max2) 
{
 contador=contador+10; 
 max2=tipo[x].vector[20];
} 
if(tipo[x].vector[21]>max2) 
{
 contador=contador+100;
 max2=tipo[x].vector[21];
} 
if(tipo[x].vector[22]>max2) 
{
 contador=contador+1000;
 max2=tipo[x].vector[22];
} 
if(tipo[x].vector[23]>max2) 
{
 contador=contador+10000; 
 max2=tipo[x].vector[23];
}   


printf("\n \n Mes pico en el segundo medio ano de 2022     ");
if(contador>-1&&contador<1)  
 printf("julio");
if(contador>0&&contador<8)  
 printf("agosto");
if(contador>4&&contador<80)  
 printf("septiembre");
if(contador>40&&contador<800)  
 printf("octubre");
if(contador>400&&contador<8000)  
 printf("noviembre");
if(contador>4000)  
 printf("diciembre");

printf("  %f GWh",max2) ;


 
printf("\n\n\nGrafica de la evolucion mensual en los años 2021-2022:\n") ;
printf("\nEnero 2021");
vgraf=max1/30;
for(i=0;i<24;i++)
{
	if(i==12)
	 printf("\n Cambio de ano");
	printf("\n |");
	vaux=tipo[x].vector[i]/vgraf;
	for(r=0;r<=vaux;r++)
	{
		printf("*");
	}

}
printf("\nDiciembre 2022");


sanual1=0;
sanual2=0;
tanual1=0;
tanual2=0;

for(i=0;i<12;i++)
{
tanual1=tanual1+tipo[16].vector[i];
}


for(i=12;i<24;i++)
{
tanual2=tanual2+tipo[16].vector[i];
}



for(i=0;i<12;i++)
{
sanual1=sanual1+tipo[x].vector[i];
}


for(i=12;i<23;i++)
{
sanual2=sanual2+tipo[x].vector[i];
}

panual1=sanual1/tanual1*100;
panual2=sanual2/tanual2*100;

printf("\n \n Porcentaje anual respecto al resto de energias en 2021: %f %c",panual1,'%');
printf("\n \n Porcentaje anual respecto al resto de energias en 2022: %f %c",panual2,'%');


printf("\n\n\n");
  
      
	
}

void imprimirColumna(const char *energia, const char *energia1, const char *energia2) 
{
    FILE *archivo;
    char linea[500];
    char *token, *token1, *token2, *token3, *prueba;

    archivo = fopen("generacion_por_tecnologias_21_22_puntos_simplificado (2).txt", "r");
    if (archivo == NULL)
    {
        printf("No se pudo abrir el archivo.\n");
        return;
    }
	printf("%s %s %s", energia, energia1, energia2);
	printf("\n");
    	while (fgets(linea, sizeof(linea), archivo) != NULL)
	{
		token1 = strtok( linea, ",");    
		if (strcmp(token1, energia) == 0 || strcmp(token1, energia1) == 0 || strcmp(token1, energia2) == 0)
		{
	   		printf( "%s\n", token1 );
	   		while( (token1 = strtok( NULL, ",")) != NULL )    
	   		{
	     			printf( "%s\n", token1);
			}
		}
    }
    fclose(archivo);
}


int vector_columna(int k) {
  long int i;
  float prueba[23];
  char numero[500], letra[500], bucle;

  FILE *pf;

  pf = fopen("generacion.csv", "r");

  if (pf == NULL)
  {
    printf("Error al abrir el fichero.\n");
  }
  else
  { 
    for(i=0; i<=k; i++)
    {
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", numero);
    }
    
    fseek(pf, 1,  1);
    char aux1[30], aux2;
    fscanf(pf, "%[^,]s", aux1);
    printf("%s \n", aux1);
    fscanf(pf, "%c  ", &aux2);
    
    for(i=0; i<=23; i++)
    {
    fscanf(pf, "%f", &prueba[i]); 
    fscanf(pf, "%c", &bucle);
    printf("%f\n", prueba[i]);
	}
    int fclose (FILE *pf);
  }
}

int dar_un_numero(int m, int k) {
  float prueba[23];
  long int i;
  char numero[500], letra[300];
  char bucle;

  FILE *pf;
  // Atención a los separadores en la ruta del fichero, 
  //y a las comillas dobles
  pf = fopen("generacion.csv", "r");

  if (pf == NULL)
  {
    printf("Error al abrir el fichero.\n");
    return -1;
  }
  else
  {
 
    for(i=0; i<=k; i++)
    {
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", numero);
    }
        
    char aux1[30], aux2;
    fseek(pf, 1, 1);
    fscanf(pf, "%[^,]s", aux1);
    printf("%s \n", aux1);
    
    fscanf(pf, "%c  ", &aux2);    
    for(i=0; i<=23; i++)
    {
    fscanf(pf, "%f", &prueba[i]); 
    fscanf(pf, "%c", &bucle);
	}
	printf("%f \n", prueba[m]);
	
	int fclose (FILE *pf);
  }
}

void cambiar_numero_1 (float valor, int m) {
	
	char cadena1[400], cadena2[400], cadena3[400], cadena4[400], cadena5[400], cadena7[400], cadena8[400]; 
	char cadena9[400], cadena10[400], cadena11[400], cadena12[400], cadena13[400], cadena14[400], cadena15[400];  
	char cadena16[400], cadena17[400], cadena18[400], cadena19[400], cadena20[400], cadena21[400], cadena22[400];
	int i; 
	float prueba[23];
	
    FILE *ph;
  // Atención a los separadores en la ruta del fichero, 
  //y a las comillas dobles
  ph = fopen("generacion.csv", "r");

  if (ph == NULL)
  {
    printf("Error al abrir el fichero.\n");

  }
  else
  {  
    fseek(ph, 0,  1);
    fscanf(ph, "%[^\n]", cadena1);
    
    fseek(ph, 1,  1);
    fscanf(ph, "%[^\n]", cadena2);
        
    fseek(ph, 1,  1);
    fscanf(ph, "%[^\n]", cadena3);
	    
    fseek(ph, 1,  1);
    fscanf(ph, "%[^\n]", cadena4);
    
    fseek(ph, 1,  1);
    fscanf(ph, "%[^\n]", cadena5);
    
    char aux1[30], aux2;
    fseek(ph, 1, 1);
    fscanf(ph, "%[^,]s", aux1);
    
    fscanf(ph, "%c  ", &aux2);
    for(i=0; i<=23; i++)
    {
    fscanf(ph, "%f", &prueba[i]);
    if(i!= 23)
    fscanf(ph, "%c", &aux2);
	}
    prueba[m]= valor;
        
	
	fseek(ph, 1,  1);
    fscanf(ph, "%[^\n]", cadena7);
	    
    fseek(ph, 1,  1);
    fscanf(ph, "%[^\n]", cadena8);
	    
    fseek(ph, 1,  1);
    fscanf(ph, "%[^\n]", cadena9);
	    
    fseek(ph, 1,  1);
    fscanf(ph, "%[^\n]", cadena10);
	    
    fseek(ph, 1,  1);
    fscanf(ph, "%[^\n]", cadena11);
	    
    fseek(ph, 1,  1);
    fscanf(ph, "%[^\n]", cadena12);
	    
    fseek(ph, 1,  1);
    fscanf(ph, "%[^\n]", cadena13);
	    
    fseek(ph, 1,  1);
    fscanf(ph, "%[^\n]", cadena14);
	    
    fseek(ph, 1,  1);
    fscanf(ph, "%[^\n]", cadena15);
	    
    fseek(ph, 1,  1);
    fscanf(ph, "%[^\n]", cadena16);
	    
    fseek(ph, 1,  1);
    fscanf(ph, "%[^\n]", cadena17);
	    
    fseek(ph, 1,  1);
    fscanf(ph, "%[^\n]", cadena18);
	    
    fseek(ph, 1,  1);
    fscanf(ph, "%[^\n]", cadena19);
	    
    fseek(ph, 1,  1);
    fscanf(ph, "%[^\n]", cadena20);
	    
    fseek(ph, 1,  1);
    fscanf(ph, "%[^\n]", cadena21);
	    
    fseek(ph, 1,  1);
    fscanf(ph, "%[^\n]", cadena22);
    
    int fclose (FILE *ph);
    
    FILE *pg;
    pg = fopen("generacion.csv", "w");
    
    if (pg == NULL)
  {
    printf("Error al abrir el fichero.\n");
    
  }
    else
	{
		fprintf(pg,"%s", cadena1);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena2);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena3);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena4);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena5);
		fprintf(pg,"\n");
		
		
		fprintf(pg,"%s", aux1);
		fprintf(pg,",");
		for (i=0; i<=23; i++)
		{
		   fprintf(pg, "%f", prueba[i]);
		   if(i!= 23)
	       fprintf(pg,",");
		}
		fprintf(pg,"\n");
		
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena7);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena8);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena9);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena10);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena11);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena12);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena13);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena14);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena15);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena16);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena17);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena18);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena19);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena20);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena21);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena22);
		fprintf(pg,"\n");
			
        fclose(pg);	
	}
  }	
}

void cambiar_numero_2 (float valor, int m) {
	char cadena1[400], cadena2[400], cadena3[400], cadena4[400], cadena5[400], cadena6[400], cadena8[400]; 
	char cadena9[400], cadena10[400], cadena11[400], cadena12[400], cadena13[400], cadena14[400], cadena15[400];  
	char cadena16[400], cadena17[400], cadena18[400], cadena19[400], cadena20[400], cadena21[400], cadena22[400];
	int i; 
	float prueba[23];
    FILE *pf;
  // Atención a los separadores en la ruta del fichero, 
  //y a las comillas dobles
  pf = fopen("generacion.csv", "r");

  if (pf == NULL)
  {
    printf("Error al abrir el fichero.\n");

  }
  else
  {  
    fseek(pf, 0,  1);
    fscanf(pf, "%[^\n]", cadena1);
    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena2);
        
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena3);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena4);
    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena5);
    
	fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena6);
    
    char aux1[50], aux2;
    fseek(pf, 1, 1);
    fscanf(pf, "%[^,]s", aux1);
    
    fscanf(pf, "%c  ", &aux2);
    for(i=0; i<=23; i++)
    {
    fscanf(pf, "%f", &prueba[i]);
    if(i!= 23)
    fscanf(pf, "%c", &aux2);
	}
    prueba[m]= valor;
    
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena8);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena9);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena10);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena11);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena12);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena13);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena14);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena15);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena16);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena17);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena18);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena19);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena20);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena21);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena22);
    
    int fclose (FILE *pf);
    
    FILE *pg;
    pg = fopen("generacion.csv", "w");
    
    if (pg == NULL)
  {
    printf("Error al abrir el fichero.\n");
    
  }
    else
	{
		fprintf(pg,"%s", cadena1);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena2);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena3);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena4);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena5);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena6);
		fprintf(pg,"\n");		
		
		
		fprintf(pg,"%s", aux1);
		fprintf(pg,",");
		for (i=0; i<=23; i++)
		{
		   fprintf(pg, "%f", prueba[i]);
		   if(i!= 23)
	       fprintf(pg,",");
		}
		fprintf(pg,"\n");
		
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena8);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena9);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena10);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena11);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena12);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena13);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena14);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena15);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena16);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena17);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena18);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena19);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena20);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena21);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena22);
		fprintf(pg,"\n");
			
        fclose(pg);	
	}
  }	
}

void cambiar_numero_3 (float valor, int m) {
	char cadena1[400], cadena2[400], cadena3[400], cadena4[400], cadena5[400], cadena6[400], cadena7[400]; 
	char cadena9[400], cadena10[400], cadena11[400], cadena12[400], cadena13[400], cadena14[400], cadena15[400];  
	char cadena16[400], cadena17[400], cadena18[400], cadena19[400], cadena20[400], cadena21[400], cadena22[400];
	int i; 
	float prueba[23];
    FILE *pf;
  // Atención a los separadores en la ruta del fichero, 
  //y a las comillas dobles
  pf = fopen("generacion.csv", "r");

  if (pf == NULL)
  {
    printf("Error al abrir el fichero.\n");

  }
  else
  {  
    fseek(pf, 0,  1);
    fscanf(pf, "%[^\n]", cadena1);
    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena2);
        
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena3);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena4);
    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena5);
    
	fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena6);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena7);
    
    
       char aux1[30], aux2;
    fseek(pf, 1, 1);
    fscanf(pf, "%[^,]s", aux1);
    
    fscanf(pf, "%c  ", &aux2);
    for(i=0; i<=23; i++)
    {
    fscanf(pf, "%f", &prueba[i]);
    if(i!= 23)
    fscanf(pf, "%c", &aux2);
	}
    prueba[m]= valor;
	    
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena9);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena10);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena11);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena12);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena13);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena14);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena15);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena16);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena17);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena18);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena19);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena20);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena21);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena22);
    
    int fclose (FILE *pf);
    
    FILE *pg;
    pg = fopen("generacion.csv", "w");
    
    if (pg == NULL)
  {
    printf("Error al abrir el fichero.\n");
    
  }
    else
	{
		fprintf(pg,"%s", cadena1);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena2);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena3);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena4);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena5);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena6);
		fprintf(pg,"\n");		
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena7);
		fprintf(pg,"\n");
		
		
		fprintf(pg,"%s", aux1);
		fprintf(pg,",");
		for (i=0; i<=23; i++)
		{
		   fprintf(pg, "%f", prueba[i]);
		   if(i!= 23)
	       fprintf(pg,",");
		}
		fprintf(pg,"\n");
		
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena9);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena10);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena11);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena12);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena13);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena14);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena15);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena16);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena17);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena18);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena19);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena20);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena21);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena22);
		fprintf(pg,"\n");
			
        fclose(pg);	
	}
  }	
}

void cambiar_numero_4 (float valor, int m) {
	char cadena1[400], cadena2[400], cadena3[400], cadena4[400], cadena5[400], cadena6[400], cadena7[400]; 
	char cadena8[400], cadena10[400], cadena11[400], cadena12[400], cadena13[400], cadena14[400], cadena15[400];  
	char cadena16[400], cadena17[400], cadena18[400], cadena19[400], cadena20[400], cadena21[400], cadena22[400];
	int i; 
	float prueba[23];
    FILE *pf;
  // Atención a los separadores en la ruta del fichero, 
  //y a las comillas dobles
  pf = fopen("generacion.csv", "r");

  if (pf == NULL)
  {
    printf("Error al abrir el fichero.\n");

  }
  else
  {  
    fseek(pf, 0,  1);
    fscanf(pf, "%[^\n]", cadena1);
    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena2);
        
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena3);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena4);
    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena5);
    
	fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena6);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena7);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena8);
	    
	    
	    char aux1[30], aux2;
    fseek(pf, 1, 1);
    fscanf(pf, "%[^,]s", aux1);
    
    fscanf(pf, "%c  ", &aux2);
    for(i=0; i<=23; i++)
    {
    fscanf(pf, "%f", &prueba[i]);
    if(i!= 23)
    fscanf(pf, "%c", &aux2);
	}
    prueba[m]= valor;
	    
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena10);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena11);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena12);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena13);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena14);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena15);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena16);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena17);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena18);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena19);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena20);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena21);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena22);
    
    int fclose (FILE *pf);
    
    FILE *pg;
    pg = fopen("generacion.csv", "w");
    
    if (pg == NULL)
  {
    printf("Error al abrir el fichero.\n");
    
  }
    else
	{
		fprintf(pg,"%s", cadena1);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena2);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena3);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena4);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena5);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena6);
		fprintf(pg,"\n");		
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena7);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena8);
		fprintf(pg,"\n");
		
		
		fprintf(pg,"%s", aux1);
		fprintf(pg,",");
		for (i=0; i<=23; i++)
		{
		   fprintf(pg, "%f", prueba[i]);
		   if(i!= 23)
	       fprintf(pg,",");
		}
		fprintf(pg,"\n");		
		
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena10);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena11);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena12);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena13);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena14);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena15);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena16);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena17);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena18);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena19);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena20);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena21);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena22);
		fprintf(pg,"\n");
			
        fclose(pg);	
	}
  }	
}

void cambiar_numero_5 (float valor, int m) {
	char cadena1[400], cadena2[400], cadena3[400], cadena4[400], cadena5[400], cadena6[400], cadena7[400]; 
	char cadena8[400], cadena9[400], cadena11[400], cadena12[400], cadena13[400], cadena14[400], cadena15[400];  
	char cadena16[400], cadena17[400], cadena18[400], cadena19[400], cadena20[400], cadena21[400], cadena22[400];
	int i; 
	float prueba[23];
    FILE *pf;
  // Atención a los separadores en la ruta del fichero, 
  //y a las comillas dobles
  pf = fopen("generacion.csv", "r");

  if (pf == NULL)
  {
    printf("Error al abrir el fichero.\n");

  }
  else
  {  
    fseek(pf, 0,  1);
    fscanf(pf, "%[^\n]", cadena1);
    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena2);
        
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena3);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena4);
    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena5);
    
	fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena6);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena7);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena8);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena9);
    
    
    char aux1[30], aux2;
    fseek(pf, 1, 1);
    fscanf(pf, "%[^,]s", aux1);
    
    fscanf(pf, "%c  ", &aux2);
    for(i=0; i<=23; i++)
    {
    fscanf(pf, "%f", &prueba[i]);
    if(i!= 23)
    fscanf(pf, "%c", &aux2);
	}
    prueba[m]= valor;
	    
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena11);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena12);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena13);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena14);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena15);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena16);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena17);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena18);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena19);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena20);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena21);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena22);
    
    int fclose (FILE *pf);
    
    FILE *pg;
    pg = fopen("generacion.csv", "w");
    
    if (pg == NULL)
  {
    printf("Error al abrir el fichero.\n");
    
  }
    else
	{
		fprintf(pg,"%s", cadena1);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena2);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena3);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena4);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena5);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena6);
		fprintf(pg,"\n");		
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena7);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena8);
		fprintf(pg,"\n");
	
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena9);
		fprintf(pg,"\n");
		
				
		fprintf(pg,"%s", aux1);
		fprintf(pg,",");
		for (i=0; i<=23; i++)
		{
		   fprintf(pg, "%f", prueba[i]);
		   if(i!= 23)
	       fprintf(pg,",");
		}
		fprintf(pg,"\n");		
		
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena11);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena12);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena13);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena14);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena15);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena16);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena17);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena18);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena19);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena20);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena21);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena22);
		fprintf(pg,"\n");
			
        fclose(pg);	
	}
  }	
}

void cambiar_numero_6 (float valor, int m) {
	char cadena1[400], cadena2[400], cadena3[400], cadena4[400], cadena5[400], cadena6[400], cadena7[400]; 
	char cadena8[400], cadena9[400], cadena10[400], cadena12[400], cadena13[400], cadena14[400], cadena15[400];  
	char cadena16[400], cadena17[400], cadena18[400], cadena19[400], cadena20[400], cadena21[400], cadena22[400];
	int i; 
	float prueba[23];
    FILE *pf;
  // Atención a los separadores en la ruta del fichero, 
  //y a las comillas dobles
  pf = fopen("generacion.csv", "r");

  if (pf == NULL)
  {
    printf("Error al abrir el fichero.\n");

  }
  else
  {  
    fseek(pf, 0,  1);
    fscanf(pf, "%[^\n]", cadena1);
    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena2);
        
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena3);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena4);
    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena5);
    
	fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena6);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena7);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena8);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena9);
        
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena10);
	    
	    
	char aux1[30], aux2;
    fseek(pf, 1, 1);
    fscanf(pf, "%[^,]s", aux1);
    
    fscanf(pf, "%c  ", &aux2);
    for(i=0; i<=23; i++)
    {
    fscanf(pf, "%f", &prueba[i]);
    if(i!= 23)
    fscanf(pf, "%c", &aux2);
	}
    prueba[m]= valor;
	    
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena12);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena13);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena14);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena15);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena16);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena17);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena18);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena19);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena20);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena21);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena22);
    
    int fclose (FILE *pf);
    
    FILE *pg;
    pg = fopen("generacion.csv", "w");
    
    if (pg == NULL)
  {
    printf("Error al abrir el fichero.\n");
    
  }
    else
	{
		fprintf(pg,"%s", cadena1);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena2);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena3);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena4);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena5);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena6);
		fprintf(pg,"\n");		
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena7);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena8);
		fprintf(pg,"\n");
	
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena9);
		fprintf(pg,"\n");
	
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena10);
		fprintf(pg,"\n");
		
		
		fprintf(pg,"%s", aux1);
		fprintf(pg,",");
		for (i=0; i<=23; i++)
		{
		   fprintf(pg, "%f", prueba[i]);
		   if(i!= 23)
	       fprintf(pg,",");
		}
		fprintf(pg,"\n");
		
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena12);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena13);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena14);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena15);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena16);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena17);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena18);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena19);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena20);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena21);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena22);
		fprintf(pg,"\n");
			
        fclose(pg);	
	}
  }	
}

void cambiar_numero_7 (float valor, int m) {
	char cadena1[400], cadena2[400], cadena3[400], cadena4[400], cadena5[400], cadena6[400], cadena7[400]; 
	char cadena8[400], cadena9[400], cadena10[400], cadena11[400], cadena13[400], cadena14[400], cadena15[400];  
	char cadena16[400], cadena17[400], cadena18[400], cadena19[400], cadena20[400], cadena21[400], cadena22[400];
	int i; 
	float prueba[23];
    FILE *pf;
  // Atención a los separadores en la ruta del fichero, 
  //y a las comillas dobles
  pf = fopen("generacion.csv", "r");

  if (pf == NULL)
  {
    printf("Error al abrir el fichero.\n");

  }
  else
  {  
    fseek(pf, 0,  1);
    fscanf(pf, "%[^\n]", cadena1);
    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena2);
        
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena3);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena4);
    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena5);
    
	fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena6);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena7);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena8);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena9);
        
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena10);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena11);
	
	    
	char aux1[30], aux2;
    fseek(pf, 1, 1);
    fscanf(pf, "%[^,]s", aux1);
    
    fscanf(pf, "%c  ", &aux2);
    for(i=0; i<=23; i++)
    {
    fscanf(pf, "%f", &prueba[i]);
    if(i!= 23)
    fscanf(pf, "%c", &aux2);
	}
    prueba[m]= valor;
	
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena13);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena14);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena15);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena16);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena17);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena18);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena19);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena20);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena21);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena22);
    
    int fclose (FILE *pf);
    
    FILE *pg;
    pg = fopen("generacion.csv", "w");
    
    if (pg == NULL)
  {
    printf("Error al abrir el fichero.\n");
    
  }
    else
	{
		fprintf(pg,"%s", cadena1);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena2);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena3);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena4);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena5);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena6);
		fprintf(pg,"\n");		
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena7);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena8);
		fprintf(pg,"\n");
	
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena9);
		fprintf(pg,"\n");
	
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena10);
		fprintf(pg,"\n");
	
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena11);
		fprintf(pg,"\n");
		
		
		fprintf(pg,"%s", aux1);
		fprintf(pg,",");
		for (i=0; i<=23; i++)
		{
		   fprintf(pg, "%f", prueba[i]);
		   if(i!= 23)
	       fprintf(pg,",");
		}
		fprintf(pg,"\n");
		
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena13);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena14);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena15);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena16);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena17);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena18);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena19);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena20);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena21);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena22);
		fprintf(pg,"\n");
			
        fclose(pg);	
	}
  }	
}

void cambiar_numero_8 (float valor, int m) {
	char cadena1[400], cadena2[400], cadena3[400], cadena4[400], cadena5[400], cadena6[400], cadena7[400]; 
	char cadena8[400], cadena9[400], cadena10[400], cadena11[400], cadena12[400], cadena14[400], cadena15[400];  
	char cadena16[400], cadena17[400], cadena18[400], cadena19[400], cadena20[400], cadena21[400], cadena22[400];
	int i; 
	float prueba[23];
    FILE *pf;
  // Atención a los separadores en la ruta del fichero, 
  //y a las comillas dobles
  pf = fopen("generacion.csv", "r");

  if (pf == NULL)
  {
    printf("Error al abrir el fichero.\n");

  }
  else
  {  
    fseek(pf, 0,  1);
    fscanf(pf, "%[^\n]", cadena1);
    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena2);
        
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena3);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena4);
    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena5);
    
	fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena6);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena7);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena8);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena9);
        
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena10);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena11);

    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena12);
	    
	    
	char aux1[30], aux2;
    fseek(pf, 1, 1);
    fscanf(pf, "%[^,]s", aux1);
    
    fscanf(pf, "%c  ", &aux2);
    for(i=0; i<=23; i++)
    {
    fscanf(pf, "%f", &prueba[i]);
    if(i!= 23)
    fscanf(pf, "%c", &aux2);
	}
    prueba[m]= valor;
	    
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena14);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena15);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena16);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena17);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena18);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena19);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena20);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena21);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena22);
    
    int fclose (FILE *pf);
    
    FILE *pg;
    pg = fopen("generacion.csv", "w");
    
    if (pg == NULL)
  {
    printf("Error al abrir el fichero.\n");
    
  }
    else
	{
		fprintf(pg,"%s", cadena1);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena2);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena3);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena4);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena5);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena6);
		fprintf(pg,"\n");		
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena7);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena8);
		fprintf(pg,"\n");
	
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena9);
		fprintf(pg,"\n");
	
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena10);
		fprintf(pg,"\n");
	
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena11);
		fprintf(pg,"\n");
	
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena12);
		fprintf(pg,"\n");
		
		
		fprintf(pg,"%s", aux1);
		fprintf(pg,",");
		for (i=0; i<=23; i++)
		{
		   fprintf(pg, "%f", prueba[i]);
		   if(i!= 23)
	       fprintf(pg,",");
		}
		fprintf(pg,"\n");
		
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena14);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena15);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena16);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena17);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena18);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena19);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena20);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena21);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena22);
		fprintf(pg,"\n");
			
        fclose(pg);	
	}
  }	
}

void cambiar_numero_9 (float valor, int m) {
	char cadena1[400], cadena2[400], cadena3[400], cadena4[400], cadena5[400], cadena6[400], cadena7[400]; 
	char cadena8[400], cadena9[400], cadena10[400], cadena11[400], cadena12[400], cadena13[400], cadena15[400];  
	char cadena16[400], cadena17[400], cadena18[400], cadena19[400], cadena20[400], cadena21[400], cadena22[400];
	int i; 
	float prueba[23];
    FILE *pf;
  // Atención a los separadores en la ruta del fichero, 
  //y a las comillas dobles
  pf = fopen("generacion.csv", "r");

  if (pf == NULL)
  {
    printf("Error al abrir el fichero.\n");

  }
  else
  {  
    fseek(pf, 0,  1);
    fscanf(pf, "%[^\n]", cadena1);
    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena2);
        
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena3);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena4);
    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena5);
    
	fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena6);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena7);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena8);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena9);
        
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena10);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena11);

    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena12);
	    	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena13);
    
    char aux1[30], aux2;
    fseek(pf, 1, 1);
    fscanf(pf, "%[^,]s", aux1);
    
    fscanf(pf, "%c  ", &aux2);
    for(i=0; i<=23; i++)
    {
    fscanf(pf, "%f", &prueba[i]);
    if(i!= 23)
    fscanf(pf, "%c", &aux2);
	}
    prueba[m]= valor;
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena15);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena16);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena17);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena18);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena19);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena20);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena21);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena22);
    
    int fclose (FILE *pf);
    
    FILE *pg;
    pg = fopen("generacion.csv", "w");
    
    if (pg == NULL)
  {
    printf("Error al abrir el fichero.\n");
    
  }
    else
	{
		fprintf(pg,"%s", cadena1);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena2);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena3);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena4);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena5);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena6);
		fprintf(pg,"\n");		
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena7);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena8);
		fprintf(pg,"\n");
	
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena9);
		fprintf(pg,"\n");
	
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena10);
		fprintf(pg,"\n");
	
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena11);
		fprintf(pg,"\n");
	
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena12);
		fprintf(pg,"\n");
			
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena13);
		fprintf(pg,"\n");
		
		
		fprintf(pg,"%s", aux1);
		fprintf(pg,",");
		for (i=0; i<=23; i++)
		{
		   fprintf(pg, "%f", prueba[i]);
		   if(i!= 23)
	       fprintf(pg,",");
		}
		fprintf(pg,"\n");
		
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena15);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena16);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena17);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena18);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena19);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena20);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena21);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena22);
		fprintf(pg,"\n");
			
        fclose(pg);	
	}
  }	
}

void cambiar_numero_10(float valor, int m) {
	char cadena1[400], cadena2[400], cadena3[400], cadena4[400], cadena5[400], cadena6[400], cadena7[400]; 
	char cadena8[400], cadena9[400], cadena10[400], cadena11[400], cadena12[400], cadena13[400], cadena14[400];  
	char cadena16[400], cadena17[400], cadena18[400], cadena19[400], cadena20[400], cadena21[400], cadena22[400];
	int i; 
	float prueba[23];
    FILE *pf;
  // Atención a los separadores en la ruta del fichero, 
  //y a las comillas dobles
  pf = fopen("generacion.csv", "r");

  if (pf == NULL)
  {
    printf("Error al abrir el fichero.\n");

  }
  else
  {  
    fseek(pf, 0,  1);
    fscanf(pf, "%[^\n]", cadena1);
    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena2);
        
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena3);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena4);
    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena5);
    
	fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena6);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena7);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena8);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena9);
        
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena10);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena11);

    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena12);
	    	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena13);

    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena14);
	    
	        
    char aux1[30], aux2;
    fseek(pf, 1, 1);
    fscanf(pf, "%[^,]s", aux1);
    
    fscanf(pf, "%c  ", &aux2);
    for(i=0; i<=23; i++)
    {
    fscanf(pf, "%f", &prueba[i]);
    if(i!= 23)
    fscanf(pf, "%c", &aux2);
	}
    prueba[m]= valor;
    
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena16);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena17);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena18);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena19);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena20);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena21);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena22);
    
    int fclose (FILE *pf);
    
    FILE *pg;
    pg = fopen("generacion.csv", "w");
    
    if (pg == NULL)
  {
    printf("Error al abrir el fichero.\n");
    
  }
    else
	{
		fprintf(pg,"%s", cadena1);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena2);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena3);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena4);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena5);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena6);
		fprintf(pg,"\n");		
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena7);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena8);
		fprintf(pg,"\n");
	
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena9);
		fprintf(pg,"\n");
	
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena10);
		fprintf(pg,"\n");
	
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena11);
		fprintf(pg,"\n");
	
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena12);
		fprintf(pg,"\n");
			
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena13);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena14);
		fprintf(pg,"\n");
		
		
		fprintf(pg,"%s", aux1);
		fprintf(pg,",");
		for (i=0; i<=23; i++)
		{
		   fprintf(pg, "%f", prueba[i]);
		   if(i!= 23)
	       fprintf(pg,",");
		}
		fprintf(pg,"\n");
		
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena16);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena17);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena18);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena19);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena20);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena21);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena22);
		fprintf(pg,"\n");
			
        fclose(pg);	
	}
  }	
}

void cambiar_numero_11(float valor, int m) {
	char cadena1[400], cadena2[400], cadena3[400], cadena4[400], cadena5[400], cadena6[400], cadena7[400]; 
	char cadena8[400], cadena9[400], cadena10[400], cadena11[400], cadena12[400], cadena13[400], cadena14[400];  
	char cadena15[400], cadena17[400], cadena18[400], cadena19[400], cadena20[400], cadena21[400], cadena22[400];
	int i; 
	float prueba[23];
    FILE *pf;
  // Atención a los separadores en la ruta del fichero, 
  //y a las comillas dobles
  pf = fopen("generacion.csv", "r");

  if (pf == NULL)
  {
    printf("Error al abrir el fichero.\n");

  }
  else
  {  
    fseek(pf, 0,  1);
    fscanf(pf, "%[^\n]", cadena1);
    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena2);
        
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena3);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena4);
    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena5);
    
	fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena6);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena7);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena8);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena9);
        
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena10);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena11);

    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena12);
	    	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena13);

    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena14);
    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena15);
	    
	char aux1[30], aux2;
    fseek(pf, 1, 1);
    fscanf(pf, "%[^,]s", aux1);
    
    fscanf(pf, "%c  ", &aux2);
    for(i=0; i<=23; i++)
    {
    fscanf(pf, "%f", &prueba[i]);
    if(i!= 23)
    fscanf(pf, "%c", &aux2);
	}
    prueba[m]= valor;
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena17);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena18);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena19);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena20);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena21);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena22);
    
    int fclose (FILE *pf);
    
    FILE *pg;
    pg = fopen("generacion.csv", "w");
    
    if (pg == NULL)
  {
    printf("Error al abrir el fichero.\n");
    
  }
    else
	{
		fprintf(pg,"%s", cadena1);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena2);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena3);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena4);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena5);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena6);
		fprintf(pg,"\n");		
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena7);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena8);
		fprintf(pg,"\n");
	
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena9);
		fprintf(pg,"\n");
	
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena10);
		fprintf(pg,"\n");
	
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena11);
		fprintf(pg,"\n");
	
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena12);
		fprintf(pg,"\n");
			
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena13);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena14);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena15);
		fprintf(pg,"\n");
		
				
		fprintf(pg,"%s", aux1);
		fprintf(pg,",");
		for (i=0; i<=23; i++)
		{
		   fprintf(pg, "%f", prueba[i]);
		   if(i!= 23)
	       fprintf(pg,",");
		}
		fprintf(pg,"\n");
		
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena17);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena18);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena19);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena20);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena21);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena22);
		fprintf(pg,"\n");
			
        fclose(pg);	
	}
  }	
}

void cambiar_numero_12(float valor, int m) {
	char cadena1[400], cadena2[400], cadena3[400], cadena4[400], cadena5[400], cadena6[400], cadena7[400]; 
	char cadena8[400], cadena9[400], cadena10[400], cadena11[400], cadena12[400], cadena13[400], cadena14[400];  
	char cadena15[400], cadena16[400], cadena18[400], cadena19[400], cadena20[400], cadena21[400], cadena22[400];
	int i; 
	float prueba[23];
    FILE *pf;
  // Atención a los separadores en la ruta del fichero, 
  //y a las comillas dobles
  pf = fopen("generacion.csv", "r");

  if (pf == NULL)
  {
    printf("Error al abrir el fichero.\n");

  }
  else
  {  
    fseek(pf, 0,  1);
    fscanf(pf, "%[^\n]", cadena1);
    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena2);
        
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena3);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena4);
    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena5);
    
	fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena6);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena7);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena8);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena9);
        
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena10);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena11);

    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena12);
	    	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena13);

    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena14);
    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena15);
	
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena16);
    
    char aux1[30], aux2;
    fseek(pf, 1, 1);
    fscanf(pf, "%[^,]s", aux1);
    
    fscanf(pf, "%c  ", &aux2);
    for(i=0; i<=23; i++)
    {
    fscanf(pf, "%f", &prueba[i]);
    if(i!= 23)
    fscanf(pf, "%c", &aux2);
	}
    prueba[m]= valor;
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena18);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena19);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena20);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena21);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena22);
    
    int fclose (FILE *pf);
    
    FILE *pg;
    pg = fopen("generacion.csv", "w");
    
    if (pg == NULL)
  {
    printf("Error al abrir el fichero.\n");
    
  }
    else
	{
		fprintf(pg,"%s", cadena1);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena2);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena3);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena4);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena5);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena6);
		fprintf(pg,"\n");		
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena7);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena8);
		fprintf(pg,"\n");
	
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena9);
		fprintf(pg,"\n");
	
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena10);
		fprintf(pg,"\n");
	
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena11);
		fprintf(pg,"\n");
	
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena12);
		fprintf(pg,"\n");
			
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena13);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena14);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena15);
		fprintf(pg,"\n");
	
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena16);
		fprintf(pg,"\n");
		
		fprintf(pg,"%s", aux1);
		fprintf(pg,",");
		for (i=0; i<=23; i++)
		{
		   fprintf(pg, "%f", prueba[i]);
		   if(i!= 23)
	       fprintf(pg,",");
		}
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena18);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena19);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena20);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena21);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena22);
		fprintf(pg,"\n");
			
        fclose(pg);	
	}
  }	
}

void cambiar_numero_13(float valor, int m) {
	char cadena1[400], cadena2[400], cadena3[400], cadena4[400], cadena5[400], cadena6[400], cadena7[400]; 
	char cadena8[400], cadena9[400], cadena10[400], cadena11[400], cadena12[400], cadena13[400], cadena14[400];  
	char cadena15[400], cadena16[400], cadena17[400], cadena19[400], cadena20[400], cadena21[400], cadena22[400];
	int i; 
	float prueba[23];
    FILE *pf;
  // Atención a los separadores en la ruta del fichero, 
  //y a las comillas dobles
  pf = fopen("generacion.csv", "r");

  if (pf == NULL)
  {
    printf("Error al abrir el fichero.\n");

  }
  else
  {  
    fseek(pf, 0,  1);
    fscanf(pf, "%[^\n]", cadena1);
    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena2);
        
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena3);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena4);
    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena5);
    
	fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena6);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena7);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena8);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena9);
        
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena10);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena11);

    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena12);
	    	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena13);

    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena14);
    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena15);
	
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena16);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena17);
	    
    char aux1[30], aux2;
    fseek(pf, 1, 1);
    fscanf(pf, "%[^,]s", aux1);
    
    fscanf(pf, "%c  ", &aux2);
    for(i=0; i<=23; i++)
    {
    fscanf(pf, "%f", &prueba[i]);
    if(i!= 23)
    fscanf(pf, "%c", &aux2);
	}
    prueba[m]= valor;
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena19);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena20);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena21);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena22);
    
    int fclose (FILE *pf);
    
    FILE *pg;
    pg = fopen("generacion.csv", "w");
    
    if (pg == NULL)
  {
    printf("Error al abrir el fichero.\n");
    
  }
    else
	{
		fprintf(pg,"%s", cadena1);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena2);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena3);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena4);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena5);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena6);
		fprintf(pg,"\n");		
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena7);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena8);
		fprintf(pg,"\n");
	
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena9);
		fprintf(pg,"\n");
	
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena10);
		fprintf(pg,"\n");
	
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena11);
		fprintf(pg,"\n");
	
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena12);
		fprintf(pg,"\n");
			
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena13);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena14);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena15);
		fprintf(pg,"\n");
	
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena16);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena17);
		fprintf(pg,"\n");
		
		fprintf(pg,"%s", aux1);
		fprintf(pg,",");
		for (i=0; i<=23; i++)
		{
		   fprintf(pg, "%f", prueba[i]);
		   if(i!= 23)
	       fprintf(pg,",");
		}
		fprintf(pg,"\n");		
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena19);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena20);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena21);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena22);
		fprintf(pg,"\n");
			
        fclose(pg);	
	}
  }	
}

void cambiar_numero_14(float valor, int m) {
	char cadena1[400], cadena2[400], cadena3[400], cadena4[400], cadena5[400], cadena6[400], cadena7[400]; 
	char cadena8[400], cadena9[400], cadena10[400], cadena11[400], cadena12[400], cadena13[400], cadena14[400];  
	char cadena15[400], cadena16[400], cadena17[400], cadena18[400], cadena20[400], cadena21[400], cadena22[400];
	int i; 
	float prueba[23];
    FILE *pf;
  // Atención a los separadores en la ruta del fichero, 
  //y a las comillas dobles
  pf = fopen("generacion.csv", "r");

  if (pf == NULL)
  {
    printf("Error al abrir el fichero.\n");

  }
  else
  {  
    fseek(pf, 0,  1);
    fscanf(pf, "%[^\n]", cadena1);
    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena2);
        
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena3);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena4);
    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena5);
    
	fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena6);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena7);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena8);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena9);
        
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena10);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena11);

    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena12);
	    	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena13);

    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena14);
    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena15);
	
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena16);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena17);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena18);
	    
    char aux1[30], aux2;
    fseek(pf, 1, 1);
    fscanf(pf, "%[^,]s", aux1);
    
    fscanf(pf, "%c  ", &aux2);
    for(i=0; i<=23; i++)
    {
    fscanf(pf, "%f", &prueba[i]);
    if(i!= 23)
    fscanf(pf, "%c", &aux2);
	}
    prueba[m]= valor;
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena20);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena21);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena22);
    
    int fclose (FILE *pf);
    
    FILE *pg;
    pg = fopen("generacion.csv", "w");
    
    if (pg == NULL)
  {
    printf("Error al abrir el fichero.\n");
    
  }
    else
	{
		fprintf(pg,"%s", cadena1);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena2);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena3);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena4);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena5);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena6);
		fprintf(pg,"\n");		
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena7);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena8);
		fprintf(pg,"\n");
	
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena9);
		fprintf(pg,"\n");
	
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena10);
		fprintf(pg,"\n");
	
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena11);
		fprintf(pg,"\n");
	
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena12);
		fprintf(pg,"\n");
			
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena13);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena14);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena15);
		fprintf(pg,"\n");
	
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena16);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena17);
		fprintf(pg,"\n");		
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena18);
		fprintf(pg,"\n");
		
		
		fprintf(pg,"%s", aux1);
		fprintf(pg,",");
		for (i=0; i<=23; i++)
		{
		   fprintf(pg, "%f", prueba[i]);
		   if(i!= 23)
	       fprintf(pg,",");
		}
		fprintf(pg,"\n");
		
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena20);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena21);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena22);
		fprintf(pg,"\n");
			
        fclose(pg);	
	}
  }	
}

void cambiar_numero_15(float valor, int m) {
	char cadena1[400], cadena2[400], cadena3[400], cadena4[400], cadena5[400], cadena6[400], cadena7[400]; 
	char cadena8[400], cadena9[400], cadena10[400], cadena11[400], cadena12[400], cadena13[400], cadena14[400];  
	char cadena15[400], cadena16[400], cadena17[400], cadena18[400], cadena19[400], cadena21[400], cadena22[400];
	int i; 
	float prueba[23];
    FILE *pf;
  // Atención a los separadores en la ruta del fichero, 
  //y a las comillas dobles
  pf = fopen("generacion.csv", "r");

  if (pf == NULL)
  {
    printf("Error al abrir el fichero.\n");

  }
  else
  {  
    fseek(pf, 0,  1);
    fscanf(pf, "%[^\n]", cadena1);
    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena2);
        
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena3);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena4);
    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena5);
    
	fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena6);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena7);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena8);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena9);
        
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena10);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena11);

    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena12);
	    	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena13);

    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena14);
    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena15);
	
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena16);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena17);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena18);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena19);
    
    
    char aux1[30], aux2;
    fseek(pf, 1, 1);
    fscanf(pf, "%[^,]s", aux1);
    
    fscanf(pf, "%c  ", &aux2);
    for(i=0; i<=23; i++)
    {
    fscanf(pf, "%f", &prueba[i]);
    if(i!= 23)
    fscanf(pf, "%c", &aux2);
	}
    prueba[m]= valor;
	    
	    
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena21);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena22);
    
    int fclose (FILE *pf);
    
    FILE *pg;
    pg = fopen("generacion.csv", "w");
    
    if (pg == NULL)
  {
    printf("Error al abrir el fichero.\n");
    
  }
    else
	{
		fprintf(pg,"%s", cadena1);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena2);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena3);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena4);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena5);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena6);
		fprintf(pg,"\n");		
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena7);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena8);
		fprintf(pg,"\n");
	
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena9);
		fprintf(pg,"\n");
	
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena10);
		fprintf(pg,"\n");
	
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena11);
		fprintf(pg,"\n");
	
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena12);
		fprintf(pg,"\n");
			
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena13);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena14);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena15);
		fprintf(pg,"\n");
	
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena16);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena17);
		fprintf(pg,"\n");		
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena18);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena19);
		fprintf(pg,"\n");
		
	    fprintf(pg,"%s", aux1);
		fprintf(pg,",");
		for (i=0; i<=23; i++)
		{
		   fprintf(pg, "%f", prueba[i]);
		   if(i!= 23)
	       fprintf(pg,",");
		}
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena21);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena22);
		fprintf(pg,"\n");
			
        fclose(pg);	
	}
  }	
}

void cambiar_numero_16(float valor, int m) {
	char cadena1[400], cadena2[400], cadena3[400], cadena4[400], cadena5[400], cadena6[400], cadena7[400]; 
	char cadena8[400], cadena9[400], cadena10[400], cadena11[400], cadena12[400], cadena13[400], cadena14[400];  
	char cadena15[400], cadena16[400], cadena17[400], cadena18[400], cadena19[400], cadena20[400], cadena22[400];
	int i; 
	float prueba[23];
    FILE *pf;
  // Atención a los separadores en la ruta del fichero, 
  //y a las comillas dobles
  pf = fopen("generacion.csv", "r");

  if (pf == NULL)
  {
    printf("Error al abrir el fichero.\n");

  }
  else
  {  
    fseek(pf, 0,  1);
    fscanf(pf, "%[^\n]", cadena1);
    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena2);
        
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena3);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena4);
    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena5);
    
	fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena6);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena7);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena8);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena9);
        
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena10);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena11);

    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena12);
	    	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena13);

    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena14);
    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena15);
	
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena16);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena17);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena18);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena19);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena20);
	    
	char aux1[30], aux2;
    fseek(pf, 1, 1);
    fscanf(pf, "%[^,]s", aux1);
    
    fscanf(pf, "%c  ", &aux2);
    for(i=0; i<=23; i++)
    {
    fscanf(pf, "%f", &prueba[i]);
    if(i!= 23)
    fscanf(pf, "%c", &aux2);
	}
    prueba[m]= valor;
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena22);
    
    int fclose (FILE *pf);
    
    FILE *pg;
    pg = fopen("generacion.csv", "w");
    
    if (pg == NULL)
  {
    printf("Error al abrir el fichero.\n");
    
  }
    else
	{
		fprintf(pg,"%s", cadena1);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena2);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena3);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena4);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena5);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena6);
		fprintf(pg,"\n");		
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena7);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena8);
		fprintf(pg,"\n");
	
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena9);
		fprintf(pg,"\n");
	
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena10);
		fprintf(pg,"\n");
	
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena11);
		fprintf(pg,"\n");
	
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena12);
		fprintf(pg,"\n");
			
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena13);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena14);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena15);
		fprintf(pg,"\n");
	
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena16);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena17);
		fprintf(pg,"\n");		
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena18);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena19);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena20);
		fprintf(pg,"\n");
		
	    fprintf(pg,"%s", aux1);
		fprintf(pg,",");
		for (i=0; i<=23; i++)
		{
		   fprintf(pg, "%f", prueba[i]);
		   if(i!= 23)
	       fprintf(pg,",");
		}
		fprintf(pg,"\n");		
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena22);
		fprintf(pg,"\n");
			
        fclose(pg);	
	}
  }	
}

void cambiar_numero_17(float valor, int m) {
	char cadena1[400], cadena2[400], cadena3[400], cadena4[400], cadena5[400], cadena6[400], cadena7[400]; 
	char cadena8[400], cadena9[400], cadena10[400], cadena11[400], cadena12[400], cadena13[400], cadena14[400];  
	char cadena15[400], cadena16[400], cadena17[400], cadena18[400], cadena19[400], cadena20[400], cadena21[400];
	int i; 
	float prueba[23];
    FILE *pf;
  // Atención a los separadores en la ruta del fichero, 
  //y a las comillas dobles
  pf = fopen("generacion.csv", "r");

  if (pf == NULL)
  {
    printf("Error al abrir el fichero.\n");

  }
  else
  {  
    fseek(pf, 0,  1);
    fscanf(pf, "%[^\n]", cadena1);
    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena2);
        
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena3);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena4);
    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena5);
    
	fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena6);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena7);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena8);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena9);
        
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena10);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena11);

    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena12);
	    	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena13);

    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena14);
    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena15);
	
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena16);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena17);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena18);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena19);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena20);
	    
    fseek(pf, 1,  1);
    fscanf(pf, "%[^\n]", cadena21);
    
    char aux1[30], aux2;
    fseek(pf, 1, 1);
    fscanf(pf, "%[^,]s", aux1);
    
    fscanf(pf, "%c  ", &aux2);
    for(i=0; i<=23; i++)
    {
    fscanf(pf, "%f", &prueba[i]);
    if(i!= 23)
    fscanf(pf, "%c", &aux2);
	}
    prueba[m]= valor;
    
    
    int fclose (FILE *pf);
    
    FILE *pg;
    pg = fopen("generacion.csv", "w");
    
    if (pg == NULL)
  {
    printf("Error al abrir el fichero.\n");
    
  }
    else
	{
		fprintf(pg,"%s", cadena1);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena2);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena3);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena4);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena5);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena6);
		fprintf(pg,"\n");		
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena7);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena8);
		fprintf(pg,"\n");
	
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena9);
		fprintf(pg,"\n");
	
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena10);
		fprintf(pg,"\n");
	
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena11);
		fprintf(pg,"\n");
	
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena12);
		fprintf(pg,"\n");
			
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena13);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena14);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena15);
		fprintf(pg,"\n");
	
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena16);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena17);
		fprintf(pg,"\n");		
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena18);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena19);
		fprintf(pg,"\n");
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena20);
		fprintf(pg,"\n");		
		
		fseek(pg, 0,  2);
		fprintf(pg,"%s", cadena21);
		fprintf(pg,"\n");
			
	    fprintf(pg,"%s", aux1);
		fprintf(pg,",");
		for (i=0; i<=23; i++)
		{
		   fprintf(pg, "%f", prueba[i]);
		   if(i!= 23)
	       fprintf(pg,",");
		}
		fprintf(pg,"\n");	
			
        fclose(pg);	
	}
  }	
}

