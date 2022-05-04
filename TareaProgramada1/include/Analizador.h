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
#include <TareaProgramada1\include\StringUtils.h>

using namespace std;

void toLowerCase(string* str){
  for(int index = 0; index < str->length(); index++){
  /*  if(str->[index] >= 65 || str->[index] <= 90)
    char lower = tolower(str[index]);
    str->replace(str[index], str[index + 1], lower)*/ //sin str
  }
}













/*

  int contador = 0;

  /*Se va a revisar caracter por caracter lo que se necesite cambiar.
    en este caso se quiere pasar de mayusculas a minusculas
  while(contador <= archivoRevisar.size()){
    char caracter = archivoRevisar[contador];
    
    switch(caracter){

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
*/