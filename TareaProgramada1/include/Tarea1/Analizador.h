/**
 * @file Analizador.h
 * @author Alexander Sánchez Zamora (alexander.sanchezzamora@ucr.ac.cr)
 * @brief Clase que se encargará de analizar el texto y rehacerlo
 * @version 0.1
 * @date 2022-04-23
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
#include <fstream>

using namespace std;

class Analizador
{
private:
  string archivoRevisar;
  //fstream archivo;
  
public:
  Analizador(string narchivoRevisar){
    archivoRevisar = narchivoRevisar;
    //archivo.open("C:\\Users\\fasaz\\Documents\\GitHub\\ProgramacionII\\TareaProgramada1\\test\\Green_Day.txt",ios::in);
  
  };

  ~Analizador();

  void escribirArchivo();
};

void escribirArchivo(){
  ofstream archivoRevisado;

  archivoRevisado.open("C:\\Users\\fasaz\\Documents\\GitHub\\ProgramacionII\\TareaProgramada1\\test\\Pruebas.txt",ios::out);

  if(archivoRevisado.fail()){
    cout<<"Hubo un error";
    exit(1);
  }

  
}
