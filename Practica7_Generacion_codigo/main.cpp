#include <cstdlib>
#include <iostream>
#include <string>
#include<stdlib.h>
#include <list>
#include "load_LR.h"
#include<sstream>
#include "Sintactico.h"
using namespace std;

int main(int argc, char *argv[]){
    load();///cargando datos del .LR
    Sintactico(); ///Analizando entrada
    return 0;
}
