#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
	char nombre[20];
	float vector[24];
}energia;
void analiza(int w);
int verificarcontrasena(const char *contrasena);
void ranquin_absolutos(int mes);
float datos_tabla(const char* filausuario, int numuero_columna);

typedef struct {
    char nombre[40];
    float numero;
    float porcentaje;
} ranquin;


int main(){
	
    	char comunidad;
	int vueltaalmenu1;
	int comprobacioncontrasena;
    	const char *contrasenadosejemploparaparte2 = "acelgas"; //para de momento nos vale
	printf("(introduccion del trabajo, explicaciones y contraseñas)\n\n");
	do {//bucle para volver al menu principal
	
	vueltaalmenu1=0;//en caso de volver necesitar volver al menu, se cambiara la variable por 1 y volvera al bucle
	
	
	printf("si quiere pasar a Analisis detallado de 1 Energia(jaime), pulse 1\n");
	printf("si quiere pasar a el ranquin mensual de la generación de los distintos tipos de energías, pulse 2\n");
	printf("si quiere pasar a (parte de Diego), pulse 3\n");
	printf("si quiere pasar a (parte de edu), pulse 4\n");
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
      printf("\nparte de diego:)");
      break;
      
    case '4':
      printf("\nparte de edu:)");
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
    FILE* archivo = fopen("generacion.csv", "r");
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
    const char* hidraulica = "Hidráulica";
    const char* turbinacion = "Turbinación bombeo";
    const char* nucelar = "Nuclear";
    const char* carbon = "Carbón";
    const char* diesel = "Motores diésel";
    const char* tgas = "Turbina de gas";
    const char* tvapor = "Turbina de vapor";
    const char* cicloc = "Ciclo combinado";
    const char* hidroeolica = "Hidroeólica";
    const char* eolica = "Eólica";
    const char* fotovoltaica = "Solar fotovoltaica";
    const char* stermico = "Solar térmica";
    const char* otrasr = "Otras renovables";
    const char* congeneracion = "Cogeneración";
    const char* rnr = "Residuos no renovables";
    const char* rr = "Residuos renovables";
    const char* total = "Generación total";
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

pfl=fopen("C:/Users/jaime/Downloads/generacionenergia.csv","r");

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

  
pfl=fopen("C:/Users/jaime/Downloads/generacionenergia.csv","r");
 
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

