#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	
	printf("(introduccion del trabajo, explicaciones y contraseñas)\n\n");
	
	int vueltaalmenu1;
	int comprobacion;
    	const char *contrasenadosejemplo = "acelgas"; //para demomento nos vale
	int vueltaalmenu;
	
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
      printf("\nparte de jaime:)");
      break;
      
    case '2':
	comprobacion = verificarcontrasena(contrasenadosejemplo);
      if (comprobacion==1) {
        printf("Contraseña correcta. Acceso concedido.\n");
    } else {
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

int verificarcontrasena(const char contrasena[8]) //intento funcion contraseña
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
