#include <iostream>
using namespace std;
class Persona{
	// Atributos:nombres, apellidos, direccion, telefono, fecha_nacimiento
	protected : string nombres,apellidos,direccion,fecha_nacimiento;
	int telefono;
	
	//constructor
	protected : 
	Persona (){
	}
	
	Persona(string nom,string ape, string dir,string fn,int tel ){
		nombres = nom;
		apellidos = ape;
		direccion = dir;
		fecha_nacimiento = fn;
		telefono = tel;
	}
	// Metodos crud = Crear, leer, actualizar, borrar
	void crear();
	void leer();
	void actualizar();
	void borrar();
	
};