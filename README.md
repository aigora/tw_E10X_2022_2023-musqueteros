# Base de datos de generacíon de energía 2021-22

Hemos diseñado 3 funcionalidades para estudiar la generación energética de los últimos dos años. Además, hemos hecho otra funcionalidad con el objetivo de modificar los datos ya existentes.


## Integrantes del equipo

Eduardo Carral Corujo || 
Usuario: Edu-chas

Diego Frutos Roldán ||
Usuario: DiegoFR3084

Ainara García García ||
Usuario: ainaragarc

Jaime Sanchez Polo ||
Usuario: Jaimeeeeeeee04


## Objetivos del trabajo
Hemos elaborado cuatro funcionalidades diferentes relacionadas con la generación de energía en los años 2021-2022. 

La funcionalidad número 1 en el menú se encarga de hacer un análisis estadístico de un tipo de energía que escojas aportando los máximos en periodos de seis meses, una gráfica de ambos años de como progresa la generación de ese tipo de energía, y finalmente los porcentajes anuales que representan ese tipo de generación energética respecto al total de energías dicho año.

La funcionalidad número 2 en el menú se encarga de ordenar la generación de energía en un rango temporal seleccionado dejando las energías mas significantes y con mayor aportación energética al total en primer lugar y en último lugar las menos significantes.

La funcionalidad número 3 en el menú tiene el propósito de que escojas 2 o 3 tipos de energía para elaborarte una tabla incluyendo todos los meses de los años 2021-2022 en la que se puedan cambiar los valores de energía aportados por parte de cada tipo de extracción.

La funcionalidad numero 4 en el menú es para poder modificar los datos del fichero y también para poder mostrarlos por pantalla si lo necesitaras antes o después de cambiarlos.

Además todas están funcionalidades estan en un menú el cual después de preguntarte a que funcionalidad desea acceder esta gestionado con un sistema de contraseñas, las tres primeras funcionalidades en las que tan solo se accede a los datos para distintos calculos tablas y ordenaciones sin posibilidad de cambiar datos se puede acceder con una contraseña (acelgas) las cual corresponderia a un rango inferior, y para acceder a la funcionalidad en la cual se pueden modificar los datos del fichero se necesita otas contraseña (elNANO33), que correspondería a un rango superior.



## Aclaraciones

En lo referente al código de la modificaciones de datos: 
Hay 17 opciones con diferencias mínimas(cada uno tiene un variable 'k' distinta para el funcionamiento de las funciones)  y una 18 para cerrar el programa. Dentro de cada opción se repite 24 veces la elección y el cambio de los datos(cada una con una variable 'm' distinta para elegir una fecha en las funciones).

En lo referente a las funciones 'vector_coluna'  y  'dar_un_numero' son diferentes las cambiar_numero(del 1 al 17) son idénticas con la diferencia de cual es la energía que te permite cambiar los datos.

Existen dos ficheros distintos (generacion.csv, generacion2.csv y generacion_por_tecnologias_21_22_puntos_simplificado.txt), son el mismo fichero, pero generacion2.csv tiene una modificación para quitar las tildes y que pueda funcionar la funcion: datos_tabla. generacion_por_tecnologias_21_22_puntos_simplificado.txt sirve para la funcion imprimirColumna
