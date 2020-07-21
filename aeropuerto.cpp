#include <iostream>
#include <string>
#include "aeropuerto.h"

using namespace std;

Aeropuerto::Aeropuerto(){
   this-> superficie = 0;
   this-> cantTerminales = 0;
   this-> cantDestinosNacionales = 0;
   this-> cantDestinosInternacionales = 0;
}

Aeropuerto::~Aeropuerto(){

}

void Aeropuerto::setCodIata (string codIata){
     this->codIata = codIata;
}

void Aeropuerto::setNombre (string nombre){
     this-> nombre = nombre;
}

void Aeropuerto::setCiudad (string ciudad){
     this->ciudad = ciudad;
}

void Aeropuerto::setPais (string pais){
     this-> pais = pais;
}

void Aeropuerto::setSuperficie (double superficie){
     this-> superficie = superficie;
}

void Aeropuerto::setCantTerminales (int cantTerminales){
     this-> cantTerminales = cantTerminales;
}

void Aeropuerto::setCantDestinosNacionales (int cantDestinosNacionales){
     this->cantDestinosNacionales = cantDestinosNacionales;
}

void Aeropuerto::setCantDestinosInternacionales (int cantDestinosInternacionales){
     this-> cantDestinosInternacionales = cantDestinosInternacionales;
}

string Aeropuerto::getCodIata(){
      return this-> codIata;
}

string Aeropuerto::getNombre(){
      return this-> nombre;
}

string Aeropuerto::getCiudad (){
      return this-> ciudad;
}

string Aeropuerto::getPais(){
      return this-> pais;
}

double Aeropuerto::getSuperficie(){
      return this-> superficie;
}

int Aeropuerto::getCantTerminales(){
     return this-> cantTerminales;
}

int Aeropuerto::getCantDestinosNacionales(){
    return this-> cantDestinosNacionales;
}

int Aeropuerto::getCantDestinosInternacionales(){
    return this-> cantDestinosInternacionales;
}
