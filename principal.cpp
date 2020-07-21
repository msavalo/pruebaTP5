#include <iostream>
#include <fstream>
#include "aeropuerto.h"
#include "dupla.h"
#include "BST.h"

using namespace std;

int main (){
     
    ifstream archivo ("aeropuertos.txt");
	Aeropuerto aeropuerto;
	Dupla dupla;
	string dato;
	double sup;
	BST<Dupla> diccionario;
	int cantTerminales, destNacionales, destInternacionales;

	if (!archivo.fail()){

		
			archivo >> dato;
			aeropuerto.setCodIata(dato);
			archivo >> dato;
			aeropuerto.setNombre(dato);
			archivo >> dato;
			aeropuerto.setCiudad(dato);
			archivo >> dato;
			aeropuerto.setPais(dato);
			archivo >> sup;
			aeropuerto.setSuperficie(sup);
			archivo >> cantTerminales;
			aeropuerto.setCantTerminales(cantTerminales);
			archivo >> destNacionales;
			aeropuerto.setCantDestinosNacionales(destNacionales);
			archivo >> destInternacionales;
			aeropuerto.setCantDestinosInternacionales(destInternacionales); 
            
            dupla.setClave(aeropuerto.getCodIata());
            dupla.setValor(&aeropuerto);

            // ACA HABRIA QUE CARGAR EL NODO EN EL ARBOL
            //diccionario.insert(dupla);
            // ESTO MISMO HABRIA QUE HACERLO CON TODAS LAS LINEAS DEL ARCHIVO.

	}


    cout <<"El codigo Iata es: "<< dupla.getClave()<<endl;//<< aeropuerto.getCodIata()<<endl;
    cout << " El nombre del aeropuerto es: "<< dupla.getValor()->getNombre()<<endl;//aeropuerto.getNombre()<<endl;
    cout << "La cantidad de destinos internacionales es: "<< aeropuerto.getCantDestinosInternacionales()<<endl;


   return 0;
}