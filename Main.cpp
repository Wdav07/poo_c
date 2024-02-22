#include "Estudiante.cpp"
#include <iostream>
using namespace std; 
main(){
	string carnet,nombres,apellidos,direccion,fecha_nacimiento;
	int telefono;
	
	cout<<"Ingrese Nombres: " ;
	cin>>nombres;
	cout<<"Ingrese Apellidos: " ;
	cin>>apellidos;
	cout<<"Ingrese Direccion: " ;
	cin>>direccion;
	cout<<"Ingrese Fecha de Nacimiento: " ;
	cin>>fecha_nacimiento;
	cout<<"Ingrese Telefono: " ;
	cin>>telefono;
	cout<<"Ingrese Carnet: " ;
	cin>>carnet;
		//Instalar objeto
	Estudiante obj = Estudiante (nombres,apellidos,direccion,fecha_nacimiento,telefono,carnet);
	obj.leer();
	cout<<"Ingrese Carnet: " ;
	cin>>carnet;
	obj.setCarnet(carnet);
	obj.leer();
	
	system("pause");
}