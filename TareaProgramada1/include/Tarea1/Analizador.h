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
#include <fstream> //libreria para manipular archivos

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

void Analizador::escribirArchivo(){
  ofstream archivoRevisado;  //nombre de la variable en la que se va a escribir 

  archivoRevisado.open("C:\\Users\\fasaz\\Documents\\GitHub\\ProgramacionII\\TareaProgramada1\\test\\Pruebas.txt",ios::out);
  //archivo revisado será un archivo de texto seleccionado, si no existe entonces se crea.
  if(archivoRevisado.fail()){  //revisa si hubo errores al crear el archivo
    cout<<"Hubo un error";
    exit(1);
  }

  int contador = 0;

  /*Se va a revisar caracter por caracter lo que se necesite cambiar.
    en este caso se quiere pasar de mayusculas a minusculas*/
  while(contador <= archivoRevisar.size()){
    char caracter = archivoRevisar[contador];
    
    switch(caracter){
      case 'A':
        caracter = 'a';
        break;

      case 'B':
        caracter = 'b';
        break;
      
      case 'C':
        caracter = 'c';
        break;
      
      case 'D':
        caracter = 'd';
        break;
      
      case 'E':
        caracter = 'e';
        break;

      case 'F':
        caracter = 'f';
        break;

      case 'G':
        caracter = 'g';
        break;

      case 'H':
        caracter = 'h';
        break;

      case 'I':
        caracter = 'i';
        break;

      case 'J':
        caracter = 'j';
        break;

      case 'K':
        caracter = 'k';
        break;

      case 'L':
        caracter = 'l';
        break;

      case 'M':
        caracter = 'm';
        break;

      case 'N':
        caracter = 'n';
        break;

      case 'O':
        caracter = 'o';
        break;

      case 'P':
        caracter = 'p';
        break;

      case 'Q':
        caracter = 'q';
        break;

      case 'R':
        caracter = 'r';
        break;

      case 'S':
        caracter = 's';
        break;

      case 'T':
        caracter = 't';
        break;

      case 'U':
        caracter = 'u';
        break;

      case 'V':
        caracter = 'v';
        break;

      case 'W':
        caracter = 'w';
        break;

      case 'X':
        caracter = 'x';
        break;

      case 'Y':
        caracter = 'y';
        break;

      case 'Z':
        caracter = 'z';
        break;

      case '1':
        caracter = ' ';
        break;

      case '2':
        caracter = ' ';
        break;

      case '3':
        caracter = ' ';
        break;

      case '4':
        caracter = ' ';
        break;

      case '5':
        caracter = ' ';
        break;

      case '6':
        caracter = ' ';
        break;

      case '7':
        caracter = ' ';
        break;

      case '8':
        caracter = ' ';
        break;

      case '9':
        caracter = ' ';
        break;

      case '0':
        caracter = ' ';
        break;

      default:

        break;
    }
    contador ++;
    archivoRevisado<<caracter;
  }
}
