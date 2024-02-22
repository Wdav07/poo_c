#include <iostream>
#include "Persona.cpp"
using namespace std;

class Estudiante : Persona {
	//Atributos: 
	private : string carnet ;
	//Constructor 
	public :
	Estudiante (){
	}
	
	Estudiante (string nom,string ape, string dir,string fn, int tel, string car) 
	: Persona (nom,ape,dir,fn,tel){
	
		carnet = car;
		
	}
	//Metodos 
	//set (modificar)
	void setNombres(string nom){nombres= nom;}
	void setApellidos(string ape){apellidos= ape;}
	void setDireccion(string dir){direccion= dir;}
	void setFecha_nacimiento(string fn){fecha_nacimiento= fn;}
	void setTelefono(int tel){telefono= tel;}
	void setCarnet(string car){carnet= car;}
	//get (mostrar)
	string getNombres(){return nombres;}
	string getApellidos(){return apellidos;}
	string getDireccion(){return direccion;}
	string getFecha_nacimiento(){return fecha_nacimiento;}
	int getTelefono(){return telefono;}
	string getCarnet(){return carnet;}
	//Metodos
	void leer(){
		
		cout<<nombres<<endl; 
		cout<<apellidos<<endl;
		cout<<direccion<<endl;
		cout<<fecha_nacimiento<<endl;
		cout<<telefono<<endl;
		cout<<carnet<<endl;
	}
};