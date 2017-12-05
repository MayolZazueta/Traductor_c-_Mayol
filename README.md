# Traductor_c-_Mayol
Traductor implementado en Lenguaje C++

Probado en Windows 10, CodeBlocks Versión 12.11, Compiler flags "Have g++ follow the C++11 ISO C++ language standard".

Este traductor toma la entrada mostrada en la siguiente figura, tomada de un archivo .txt se le realiza una analisis de léxico para verificar si la entrada tiene alguna palabra no definida en la gramatica:
![alt text](https://github.com/MayolZazueta/Traductor_c-_Mayol/blob/master/SCREENS%20TRADUCTOR/1Screen_entrada.PNG)


Una vez realizado el análisis de léxico, se procede a realizar el análisis sintáctico, en el cual se analiza la sintáxis que debe de llevar la entrada de acuerdo a la gramatica definida, en el cual pasa por una tabla que contiene los desplazamientos y reducciones que nos llevan a la aceptación del código (Sintáxis correcta). Se realiza a su misma vez la creación de un árbol que se va creando con forme las reducciones y reemplazos de nombres en la pila: 
![alt text](https://github.com/MayolZazueta/Traductor_c-_Mayol/blob/master/SCREENS%20TRADUCTOR/2Screen_arbol_1.PNG)
![alt text](https://github.com/MayolZazueta/Traductor_c-_Mayol/blob/master/SCREENS%20TRADUCTOR/3Screen_arbol_2.PNG)


Ahora se realiza el análisis semántico, el cual al momento de ir guardando en el árbol las variables que se declaran, primero se revisa si la variable ya ha sido definida con anterioridad, esto en una tabla de simbolos que se va rellenando: 
![alt text](https://github.com/MayolZazueta/Traductor_c-_Mayol/blob/master/SCREENS%20TRADUCTOR/4Tabla_simbolos.png)


Si la variable ya ha sido creada, el retorno de la función no es del mismo tipo, el resultado no concuerda con el mismo tipo en la operación, los parametros no son suficientes como está declarado, son errores que se van llenando en una tabla dentro de lo que es el análisis semántico para posteriormente imprimir la tabla de errores que han sido encontrados durante su análisis; para esto, se modificó la entrada para poder mostrar un ejemplo: 
![alt text](https://github.com/MayolZazueta/Traductor_c-_Mayol/blob/master/SCREENS%20TRADUCTOR/6_Entrada2_ConErroresParaTablaErrores.PNG)


Regresando con el ejemplo de la primer entrada, ahora se procede a generar el código ensamblador, el cual por cuestiones de tiempo, ha como se ha solicitado por el maestro se ha generado el código aplicable a una funcion que realiza una suma de variables, siendo correcta la aceptación pasa a crearse un archivo (ensamblador.asm) que es el que se ejecutará desde Windows por medio de DosBox y MASM6.11:
![alt text](https://github.com/MayolZazueta/Traductor_c-_Mayol/blob/master/SCREENS%20TRADUCTOR/7Ensamblador_asm_Generado.PNG)
