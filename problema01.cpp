//Algoritmo_Consumo_de_Gasolina
#include<iostream>
using namespace std; 

int main(){
    float uk,ka,gu,ga,lgc,kr,gc;
    cout<<"Ingrese el kilometraje de la ultima vez que se abastecio de gasolina: ";
    cin>>uk;
    cout<<"Ingrese el kilometraje actual: ";
    cin>>ka;
    cout<<"Ingrese los litros de gasolina de la ultima vez que se abastecio: ";
    cin>>gu;
    cout<<"Ingrese la cantidad de gasolina actual: ";
    cin>>ga;
    kr=ka-uk;
    gc=gu-ga;
    lgc=100*(gc/kr);
    cout<<"Los kilometros recorridos fueron: "<<kr<<"km"<<endl;
    cout<<"La gasolina consumida fue de: "<<gc<<"l"<<endl;
    cout<<"Su coche en 100 km consume: "<<lgc<<"l"<<endl;
       return 0;
} 