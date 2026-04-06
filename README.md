
### *RESPUESTAS DEL TO1 PUNTO 2*

_¿Por qué es conveniente incluirlo?_

-Evita archivos innecesarios en el repositorio, como archivos generados automáticamente, logs o configuraciones locales no deberían subirse a Git del proyecto.

-Mejora el rendimiento del repositorio excluyendo archivos grandes o innecesarios evitara que Git maneje contenido que no aporta al desarrollo.

-Protege información sensible como credenciales, tokens de API o configuraciones personales.

_¿Cuándo se debe hacer?_

Desde el inicio del proyecto, para evitar que archivos innecesarios se suban al repositorio. 
También se debe modificar si se agregan nuevas herramientas o configuraciones que generan archivos temporales.

_¿Cómo configuraría el archivo .gitignore?_

Para configurar un .gitignore, se crea un archivo llamado .gitignore en la raíz de tu proyecto y dentro escribes las reglas 
que le dicen a Git qué archivos o carpetas debe ignorar.

_Ejercicio 2 - 3_
Codigo misterioso: El codigo misterioso cambia de valor un numero, primero invierte sus cifras, lo divide en 2 y lo suma con la suma de sus cifras.

temp cambia a valor_inicial porque es el valor inicial que ingresa a las funciones
rev cambia a numero_invertido porque es el resultado de invertir el numero que entra a la funcion
p cambia a pNumero porque es un puntero a un numero arbitrario
f_alpha cambia a invertir porque dado un numero, la funcion invierte sus cifras
f_beta cambia a mitad porque dado un numero , la funcion divide en 2 al numero ingresado
f_gamma cambia a suma_digito_numero porque dado el numero, la funcion suma sus digitos con el numero inicial
procesar_enigma cambia a transforma_numero porque dado el numero, la funcion hace tres operaciones y cambia su valor inicial
dato_secreto cambia a tranformar porque el numero se va a transformar en otro numero

Codigo sin funcionar:

se esperaba en dos lineas el ; ,solucion: agregar el ; en las dos lineas
falto el pasaje por valor de la variable valor1, solucion: agregar el operador de direccion &
falto incluir la libreria stdio.h , solucion: incluir la libreria stdio al principio
la funcion no duplicaba el valor ingresado, solucion: hacer que la funcion tenga pasaje de parametro por referencia

_Ejercicio 2 - 4g_
Los apartados 2 y 3 da el mismo resultado porque el puntero almacena la direccion de memoria de la variable a la que apunta.
En el punto 4 se obtiene la direccion de memoria del puntero y no es igual a los anteriores porque el puntero es otra variable que tiene otra direccion de memoria.

_Ejercicio 2 - c_
En el repositorio de github se subio el archivo tp1_1.c con el contenido "Hola Mundo", pensaba que tenia que implementar desde el principio el .gitignore asi que no aparece en los commits el tp1_1.exe
