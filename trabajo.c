#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void desglosa(int gasto,char comunidad);
int verificarcontrasena(const char *contrasena);


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
        printf("\nPorfavor escoja el tipo de energia.\n");
        
        
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

int verificarcontrasena(const char *contrasena) //intento funcion contraseña
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

