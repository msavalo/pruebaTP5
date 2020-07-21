#ifndef AEROPUERTO_H
#define AEROPUERTO_H
#include <string>

using namespace std;

class Aeropuerto {
   private:
   	  string codIata;
   	  string nombre;
   	  string ciudad;
   	  string pais;
   	  double superficie;
   	  int cantTerminales;
   	  int cantDestinosNacionales;
   	  int cantDestinosInternacionales;

   public:

   	  Aeropuerto();
   	  ~Aeropuerto();
   	  void setCodIata (string codIata);
   	  void setNombre (string nombre);
   	  void setCiudad (string ciudad);
   	  void setPais (string pais);
   	  void setSuperficie (double superficie);
   	  void setCantTerminales (int cantTerminales);
   	  void setCantDestinosNacionales (int cantDestinosNacionales);
   	  void setCantDestinosInternacionales (int cantDestinosInternacionales);

   	  string getCodIata();
   	  string getNombre();
   	  string getCiudad ();
   	  string getPais();
   	  double getSuperficie();
   	  int getCantTerminales();
   	  int getCantDestinosNacionales();
   	  int getCantDestinosInternacionales();
};

#endif //AEROPUERTO_H