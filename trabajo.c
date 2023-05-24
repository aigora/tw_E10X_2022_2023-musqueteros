#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void desglosa(int gasto,char comunidad);
int verificarcontrasena(const char *contrasena);
void ranquin_absolutos(int mes);
float datos_tabla(const char* filausuario, int numuero_columna);

typedef struct {
    char nombre[40];
    float numero;
    float porcentaje;
} ranquin;


int main(){
	int gasto;
    	char comunidad;
	int vueltaalmenu1;
	int comprobacioncontrasena;
    	const char *contrasenadosejemploparaparte2 = "acelgas"; //para de momento nos vale
	printf("(introduccion del trabajo, explicaciones y contraseñas)\n\n");
	do {//bucle para volver al menu principal
	
	vueltaalmenu1=0;//en caso de volver necesitar volver al menu, se cambiara la variable por 1 y volvera al bucle
	
	
	printf("si quiere pasar a (parte de Jaime), pulse 1\n");
	printf("si quiere pasar a (parte de Aianra), pulse 2\n");
	printf("si quiere pasar a (parte de Diego), pulse 3\n");
	printf("si quiere pasar a (parte de edu), pulse 4\n");
	printf("si quiere cerrar el programa, pulse 5\n");
	
  char menu1;
  scanf("%c", &menu1);
  switch(menu1)
    {
    case '1':

printf("Ha accedido a DESGLOSE DE GASTOS ENERGETICOS PERSONAL\n");

printf("\n si su comunidad autonoma es Andalucia pulse a");
printf("\n si su comunidad autonoma es Aragon pulse b");
printf("\n si su comunidad autonoma es Asturias pulse c");
printf("\n si su comunidad autonoma es Cantabria pulse d");
printf("\n si su comunidad autonoma es CastillaLaMancha pulse e");
printf("\n si su comunidad autonoma es CastillaLeon pulse f");
printf("\n si su comunidad autonoma es Cataluna pulse g");
printf("\n si su comunidad autonoma es Madrid pulse h");
printf("\n si su comunidad autonoma es Valencia pulse i");
printf("\n si su comunidad autonoma es Extremadura pulse j");
printf("\n si su comunidad autonoma es Galicia pulse k");
printf("\n si su comunidad autonoma es IslasBaleares pulse l");
printf("\n si su comunidad autonoma es IslasCanarias pulse m");
printf("\n si su comunidad autonoma es Rioja pulse n");
printf("\n si su comunidad autonoma es Murcia pulse o");
printf("\n si su comunidad autonoma es Navarra pulse p");
printf("\n si su comunidad autonoma es PaisVasco pulse q \n");

scanf(" %c", &comunidad);

printf("introduzca el numero de KW/H gastados en su factura de este mes\n");

scanf(" %i", &gasto);

desglosa(gasto,comunidad);

break;
      
    case '2':
      comprobacioncontrasena = verificarcontrasena(contrasenadosejemploparaparte2);
      if (comprobacioncontrasena==1) {
        do 
		{
	        printf("Escoja el mes para realizar el ranquin de 2022:\n\n");
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
	        printf("\nEscriba el número indicado al lado del mes deseado: ");
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


void desglosa(int gasto,char comunidad)
{
	int total;
	FILE *pfl;
	switch(comunidad)
    {
    case 'a':
      pfl=fopen("C:\Users\jaime\Downloads\balanceandalucia.csv","r");
      break;
      
    case 'b':
      pfl=fopen("C:\Users\jaime\Downloads\balancearagon.csv","r");

      break;
      
    case 'c':
      pfl=fopen("C:\Users\jaime\Downloads\balanceasturias.csv","r");
      break;
      
    case 'd':
      pfl=fopen("C:\Users\jaime\Downloads\balancecantabria.csv","r");
      break;
      
    case 'e':
      pfl=fopen("C:\Users\jaime\Downloads\balancecastillamancha.csv","r");
      break;
      
    case 'f':
      pfl=fopen("C:\Users\jaime\Downloads\balancecastillaleon.csv","r");	
      break;
      
	case 'g':
	  pfl=fopen("C:\Users\jaime\Downloads\balancecataluna.csv","r");	
      break; 
	     
    case 'h':
      pfl=fopen("C:\Users\jaime\Downloads\balancemadrid.csv","r");	
      break;
      
	case 'i':
	  pfl=fopen("C:\Users\jaime\Downloads\balancevalencia.csv","r");	
      break;
      
	case 'j':
	  pfl=fopen("C:\Users\jaime\Downloads\balanceextremadura.csv","r");
      break;
      
	case 'k':
	  pfl=fopen("C:\Users\jaime\Downloads\balancegalicia.csv","r");	
      break;
      
	case 'l':
	  pfl=fopen("C:\Users\jaime\Downloads\balanceislasbaleares.csv","r");	
      break;
      
	case 'm':
	  pfl=fopen("C:\Users\jaime\Downloads\balanceislascanarias.csv","r");	
      break;
      
	case 'n':
	  pfl=fopen("C:\Users\jaime\Downloads\balancerioja.csv","r");	
      break;
      
	case 'o':
	  pfl=fopen("C:\Users\jaime\Downloads\balancemurcia.csv","r");	
      break;
      
	case 'p':
	  pfl=fopen("C:\Users\jaime\Downloads\balancenavarra.csv","r");	
      break;
      
	case 'q':
	  pfl=fopen("C:\Users\jaime\Downloads\balancepaisvasco.csv","r");	
      break;
      
                  
    default:
     
      break;
    }
if (pfl == NULL)
 printf("error al abrir");
   	
}

int verificarcontrasena(const char *contrasena) //funcion contraseña
{
	int i=0, j=0;
	char respuesta[10];
    for (i=0; i<=2; i++){
    	printf("porfavor introduzca la contraseña\nte quedan %i  intentos\n", 3-i);
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
            printf("No se encontró la fila especificada.\n");
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
    printf("Generación (GWh):\tPorcentaje:\tTipo de energía:\n");
    for (i = n - 1; i >= 0; i--) { 
        printf("%f\t\t %.2f \t\t%s\n", vector_ranquin[i].numero, vector_ranquin[i].porcentaje, vector_ranquin[i].nombre);
    }
    printf("\nLa generación total fue: %f\n", numTotal);
}




