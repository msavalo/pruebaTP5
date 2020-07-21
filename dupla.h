#ifndef DUPLA_H
#define DUPLA_H

#include <string>
#include "aeropuerto.h"

class Dupla {
  private:
	string clave;
	Aeropuerto* valor;
  public:
  	Dupla();
  	~Dupla();
	void setClave(string clave);
	void setValor(Aeropuerto* valor);

	string getClave();
	Aeropuerto* getValor();
};

#endif //DUPLA_H