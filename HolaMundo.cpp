/*ALexander Sánchez Zamora
Práctica semana 1 de programación II
*/
#include <iostream>
using namespace std;
int main(){
  int numMenu;
  cout<<"Ejercicios de ejecucion de metodos:\n";
  cout<<"1. Maquina de Atwood.\n2.Eficiencia de Gasolina.\n3.Conversion de altura.\n4.Conversion monetaria britanica.\n5.Numeros aleatorios.\n6.Numeros primos.";
  cout<< "\nIngrese el numero del ejercicio a ejecutar:\n";
  cin>>("%i",numMenu);
  //cout<<numMenu;
  switch (numMenu)
  {
    case 1:
      /*float masa1, masa2, tensionTotal;
      cout<<"El valor de la masa del primer objeto";
      cin>>("%i",masa1);
      cout<<"El valor de la masa del segundo objeto";
      cin>>("%i",masa2);
      tensionTotal = tensionCuerda(masa1, masa2);
      cout<<"La tension total de la cuerda es de: %i",tensionTotal;*/
      tensionCuerda;
      break;
  
    case 2:
      cout<<numMenu+1;
      break;
    
    case 3:
      cout<<numMenu+1;
      break;

    case 4:
      cout<<numMenu+1;
      break;

    case 5:
      cout<<numMenu+1;
      break;

    case 6:
      cout<<numMenu+1;
      break;
    default:
      break;
  }
  return 0;
}

float tensionCuerda(float masa1, float masa2)
{
  float gravedad = 9.8;
  float tension;
  tension= ((2*masa1*masa2)/(masa1+masa2))*gravedad;
  return tension; 
}

