#ifndef LOAD_LR_H_INCLUDED
#define LOAD_LR_H_INCLUDED
#include <iostream>
#include <fstream>
#include<sstream>
#include <stdio.h>
#include <string.h>
#include <vector>
#include "pila.h"
using namespace std;

int num_reglas; ///52
int aux;
int id_Regl, long_Regl;
vector<int> idReglas;
vector<int> lonReglas;
vector<string> noTerminales; ///nombreReglas

string line; ///line by line in file
int filas_matriz, columnas_matriz; /// 95 46

int matriz[95][46];

char delimi = '\t';

void load(){
  ifstream myfile ("compilador.lr");
  if (myfile.is_open())
  {
    getline (myfile,line,'\t');
    stringstream geek(line);
    geek >> num_reglas;
    ///cout <<"Num_Reglas: " << num_reglas << '\n'<<'\n';
    for(int i = 0; i < num_reglas; i++){
        for(int j = 0; j < 3; j++){
            getline (myfile,line,'\t');
            switch(j){
                case 0: {
                    stringstream geek2(line);
                    geek2 >> id_Regl;
                    idReglas.push_back(id_Regl);
                    break;
                }
                case 1: {
                    stringstream geek3(line);
                    geek3 >> long_Regl;
                    lonReglas.push_back(long_Regl);
                    break;
                }
                case 2: {
                    noTerminales.push_back(line);
                    break;
                }
            }
        }
    }
    getline (myfile,line,'\t');
    stringstream geek4(line);
    geek4 >> filas_matriz; ///cout<<"Filas: "<<filas_matriz<<endl;

    getline (myfile,line,'\t');
    stringstream geek5(line);
    geek5 >> columnas_matriz; ///cout<<"columnas: "<<columnas_matriz<<endl;

    /*for (int i = 0; i < 95; i++){
      for (int j = 0; j < 46; j++)
        matriz[i][j] = 0;
    }*/
    ///llenando matriz
    for(int i = 0; i<filas_matriz;i++){
        for(int j = 0; j < columnas_matriz; j++){
            getline (myfile,line,'\t');
            stringstream geek6(line);
            geek6 >> aux;
            matriz[i][j] = aux;
        }
    }
    myfile.close();

  }
  else cout << "Unable to open file";
/*
  ///mostrando reglas
    cout <<"Num_Reglas: " << num_reglas<<'\n';
    for (int i = 0; i <num_reglas;i++){
        cout<<"id_Regla: "<<idReglas[i]<<"\t";
        cout<<"lonReglas: "<<lonReglas[i]<<"\t";
        cout<<"NoTerminales: "<<noTerminales[i]<<"\n";
    }
    ///mostrar matriz:
    cout<<"Filas: "<<filas_matriz<<endl;
    cout<<"columnas: "<<columnas_matriz<<endl;
    for(int i = 0; i<filas_matriz;i++){
        for(int j = 0; j < columnas_matriz; j++){
            cout<<matriz[i][j]<<' ';
        }
        cout<<endl;
    }
*/
}///cierre void load
#endif // LOAD_LR_H_INCLUDED
