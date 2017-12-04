# Traductor_c-_Mayol
Traductor implementado en Lenguaje C++

Probado en Windows 10, CodeBlocks Versión 12.11, Compiler flags "Have g++ follow the C++11 ISO C++ language standard".

Este traductor toma la entrada mostrada en la siguiente figura, tomada de un archivo .txt se le realiza una analisis de léxico para verificar si la entrada tiene alguna palabra no definida en la gramatica:
![alt text](https://github.com/MayolZazueta/Traductor_c-_Mayol/blob/master/SCREENS%20TRADUCTOR/1Screen_entrada.PNG)


Una vez realizado el análisis de léxico, se procede a realizar el análisis sintáctico, en el cual se analiza la sintáxis que debe de llevar la entrada de acuerdo a la gramatica definida, en el cual pasa por una tabla que contiene los desplazamientos y reducciones que nos llevan a la aceptación del código (Sintáxis correcta). Se realiza a su misma vez la creación de un árbol que se va creando con forme las reducciones y reemplazos de nombres en la pila: 
![alt text](https://github.com/MayolZazueta/Traductor_c-_Mayol/blob/master/SCREENS%20TRADUCTOR/2Screen_arbol_1.PNG)
![alt text](https://github.com/MayolZazueta/Traductor_c-_Mayol/blob/master/SCREENS%20TRADUCTOR/2Screen_arbol_2.PNG)
