#include <iostream>
using namespace std;
class Persona{
	//atributos
	private : string nombres, apellidos, direccion,fecha;
				int telefono; 
	// constructor
	public :
	persona(){
	}
	Persona(string nom,string ape,string dir,int tel,string f) : Propietario(nit,cui){
	nombres = nom;
	apellidos = ape;
	direccion = dir; 
	telefono = tel;
	fecha = f;
	
	}
	//metodos
	//set (modificar)
	void setNit(string n){nit = n;}
	void setNombres(string nom){nombres = nom;}
	void setApellidos(string ape){apellidos = ape;}
	void setDireccion(string dir){direccion = dir;}
	void setTelefono(int tel){telefono = tel;}
	void setFecha(string f){fecha = f;}
	void setCui(double cui){cui = cui;}
	//get (mostrar)
	string getNit(){return nit;}
	string getNombres(){return nombres;}
	string getApellidos(){return apellidos;}
	string getDireccion(){return direccion;}
	int getTelefono(){return telefono;}
	string getFecha(){return fecha;}
	double getCui(){return cui;}
	//metodos
	void mostrar(){
		cout<<"__________________________"<<endl;
		cout<<nit<<","<<nombres<<","<<apellidos<<","<<direccion<<","<<telefono<<","<<fecha<<","<<cui<<","<<endl;
	}
};
