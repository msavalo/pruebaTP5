#include <iostream>
#include <string>
#include "dupla.h"
#include "aeropuerto.h"

Dupla::Dupla(){
	this-> clave = "";
	this-> valor = NULL;
}

Dupla::~Dupla(){
}

void Dupla::setClave(string clave){
     this-> clave = clave;
}

void Dupla::setValor(Aeropuerto* valor){
     this-> valor = valor;
}

string Dupla::getClave(){
     return this-> clave;
}

Aeropuerto* Dupla::getValor(){
     return this-> valor;
}