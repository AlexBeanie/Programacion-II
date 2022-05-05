#include "TareaProgramada1\include\Tarea1\Analizador.h"
#include "TareaProgramada1\include\Tarea1\StringUtils.h"

using namespace std;

int main()
{
  string* texto = new string();
  cout<<"ingrese el texto a revisar:\n";
  cin>>*texto;
  
  string* nuevoTexto = new string();
  //*nuevoTexto = "hola";
  *nuevoTexto = Analizador::aMinuscula(texto);
  cout<<"en minuscula sería: "<<endl<<*nuevoTexto;
  /*
    fstring texto; 
    string analizado;
    analzado = texto.analizar;


    arrchivo.out(analizado)
    


  */


}