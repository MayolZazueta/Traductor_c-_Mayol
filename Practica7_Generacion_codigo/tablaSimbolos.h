#ifndef TABLASIMBOLOS
#define TABLASIMBOLOS

#include <iostream>
#include "simbolo.h"

using namespace std;

 	vector<Simbolo*> vectorSimbolos;
class TablaSimbolos{

  	protected:
	public:
		TablaSimbolos();
		void insert(Simbolo*);
		void muestra();
		bool buscarTablaSim(string);
		bool buscarTablaSim(string,string);
		Simbolo* buscarSimbolo(string,string);
		char dameTipo(string,string);
		string dameVar(int);
		int getTablaSize();
};

TablaSimbolos::TablaSimbolos(){
}

void TablaSimbolos::insert(Simbolo *s){
	vectorSimbolos.push_back(s);
}

void TablaSimbolos::muestra(){
	cout << endl;
	cout << "**********************TABLA SIMBOLOS***************************" << endl;
	for (int i = 0; i < vectorSimbolos.size(); i++){
		vectorSimbolos[i]->muestra();
	}
	cout << endl;
}

bool TablaSimbolos::buscarTablaSim(string id){
	for (int i = 0; i < vectorSimbolos.size(); i++){
		if(vectorSimbolos[i]->getSimbolo() == id){
			return true;
		}
	}
	return false;
}

bool TablaSimbolos::buscarTablaSim(string id, string ambito){

	for (int i = 0; i < vectorSimbolos.size(); i++){
		if(vectorSimbolos[i]->getSimbolo() == id and vectorSimbolos[i]->getAmbito() == ambito){
			return true;
		}
	}
	return false;
}

Simbolo* TablaSimbolos::buscarSimbolo(string id,string ambito){

	for (int i = 0; i < vectorSimbolos.size(); i++){
		if(vectorSimbolos[i]->getSimbolo() == id){
			return vectorSimbolos[i];
		}
	}
	return NULL;
}

char TablaSimbolos::dameTipo(string id, string ambito){

	for (int i = 0; i < vectorSimbolos.size(); i++){
		if(vectorSimbolos[i]->getSimbolo() == id and vectorSimbolos[i]->getAmbito() == ambito){
			return vectorSimbolos[i]->getTipo();
		}
	}
	return '#';
}

int TablaSimbolos::getTablaSize(){
	return vectorSimbolos.size();
}

string TablaSimbolos::dameVar(int indice){
	return vectorSimbolos[indice]->getSimbolo();
}


class TablaErrores{
	protected:
		vector<string> vectorErrores;
	public:
		TablaErrores();
		void insert(int,string);
		void muestra();

};

TablaErrores::TablaErrores(){}

void TablaErrores::insert(int error, string id){
	string errorStr="";
	switch(error){
		case 1:
			errorStr = "\tERROR 1: \"" + id + "\""" Esta variable ya esta definida";
		break;
		case 2:
			errorStr = "\tERROR 2: \"" + id + "\""" Esta variable no se ha declarado anteriormente ";
		break;
		case 3:
			errorStr = "\tERROR 3: La expresion NO fue del mismo tipo ";
		break;
		case 4:
			errorStr = "\tERROR 4: La expresion NO fue del mismo tipo de dato que: " + id ;
		break;
		case 5:
			errorStr = "\tERROR 5: \"" + id + "\""" Esta funcion no se ha declarado anteriormente";
		break;
		case 6:
			errorStr = "\tERROR 6: \"" + id + "\"""  El Valor Regresa NO es del mismo tipo que la funcion";
		break;
		case 7:
			errorStr = "\tERROR 7: \"" + id + "\""" No hay suficientes argumentos para la definicion de la funcion";
		break;
		case 8:
			errorStr = "\tERROR 8: \"" + id + "\""" La llamada a funcion no concuerda en argumentos con la declaracion de la Funcion ";
		break;

	}
	vectorErrores.push_back(errorStr);
}


void TablaErrores::muestra(){
	cout << endl;
	//cout << "tamanio del vector: "  << vectorSimbolos.size() << endl;
	cout << "********************************Tabla de ERRORES**************************" << endl;
	for (int i = 0; i < vectorErrores.size(); i++){
		cout << vectorErrores[i] << endl;
	}
	cout << endl;
}

#endif
