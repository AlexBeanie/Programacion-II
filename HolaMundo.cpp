/*ALexander Sánchez Zamora
Práctica semana 1 de programación II
*/
#include <iostream>
using namespace std;

//Prototipo de función
//Para medio decir qué es lo que ocupa una función 
float tensionCuerda(float masa1, float masa2);
void eficienciaGasolina (float galon, float millas, float&, float&);
float conversionAltura(int pies, int pulgadas);
double conversionMonedas(double libras, double chelines, double peniques);
float myRandom();


int main(){
  int numMenu;
  //despliega el menu de selección
  while(numMenu != 7){
    cout<<"\n\nEjercicios de ejecucion de metodos:\n";
    cout<<"1. Maquina de Atwood.\n2.Eficiencia de Gasolina.\n3.Conversion de altura.\n4.Conversion monetaria britanica.\n5.Numeros aleatorios.\n6.Numeros primos.\n7.Salir";
    cout<< "\nIngrese el numero del ejercicio a ejecutar:\n";
    cin>>numMenu;
    //cout<<numMenu;
    switch (numMenu)
    {
      case 1:
        float masa1, masa2, tensionTotal;
        cout<<"El valor de la masa del primer objeto:";
        cin>>masa1;
        cout<<"El valor de la masa del segundo objeto:";
        cin>>masa2;
        tensionTotal = tensionCuerda(masa1, masa2);
        cout<<"La tension total de la cuerda es de: "<<tensionTotal;
        break;
    
      case 2:
        float galon, millas, eficienciaGM, eficienciaLK;
        cout<<"Ingrese el numero de galones utilizados:";
        cin>>galon;
        cout<<"Ingrese el numero de millas recorridas:";
        cin>>millas;
        eficienciaGM = 0;
        eficienciaLK = 0;
        eficienciaGasolina(galon, millas, eficienciaGM, eficienciaLK);
        cout<<"La eficiencia del carro es: "<< eficienciaGM <<" mi/gal.\n" ;
        cout<<"Equivalente a "<< eficienciaLK<<" l/km.";
        break;
      
      case 3:
        int pies, pulgadas;
        float alturaMetros;
        cout<<"Ingrese el numero de pies de altura:";
        cin>>pies;
        cout<<"Ingrese el numero de pulgadas de altura:";
        cin>>pulgadas;
        alturaMetros = conversionAltura(pies,pulgadas);
        cout<<"Altura: "<<pies<<" pies "<<pulgadas<<" pulgadas.";
        cout<<"La altura de la persona es: "<<alturaMetros<<" m";

        break;

      case 4:
        double libras, chelines, peniques, monedaActual;
        cout<<"Ingrese la cantidad de libras:";
        cin>>libras;
        cout<<"Ingrese la cantidad de chelines:";
        cin>>chelines;
        cout<<"Ingrese la cantidad de peniques:";
        cin>>peniques;
        monedaActual = conversionMonedas(libras, chelines, peniques);
        cout<<"libras: "<<libras<<"\nchelines: "<<chelines<<"\npeniques: "<<peniques;
        cout<<"\nEl valor en el sistema actual es: "<<monedaActual<<" gbp";
        break;

      case 5:
        int n, m;
        cout<<"Ingrese dos numeros:\n";
        cin>>n>>m;

        break;

      case 6:
        int cantidad;
        cout<<"Ingrese la cantidad de numeros primos que quiere encontrar";
        cin>>cantidad;

        break;
      default:
        break;
    }
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

void eficienciaGasolina(float galon, float millas, float& eficienciaGM, float& eficienciaLK)
{
  float kilometros, litros;
  kilometros = millas*1.609;
  litros= galon*3.785;
  eficienciaGM = galon/millas;
  eficienciaLK = litros/kilometros;
}

float conversionAltura(int pies, int pulgadas)
{
  float alturaMetros = (pies/3.281) + (pulgadas/39.37);
  return alturaMetros;
}

double conversionMonedas(double libras, double chelines, double peniques)
{
  double dineroActual = libras + (chelines/20) + (peniques/240);
  return dineroActual;
}

float myRandom()
{
  /*srand(time(0));
  return static_cast <float> (rand()) / static_cast <float> (RAND_MAX);*/
}
