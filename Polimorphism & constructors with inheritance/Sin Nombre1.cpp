#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std; // means that in the scope it is present, make all the things under the std namespace available without having to prefix std:: before each of them


class Persona{
private:
	string nombre;
	int edad;
public:	
	explicit Persona(string nombre = "Sin nombre", int edad = 0) : nombre(nombre), edad(edad){}

	
	virtual void mostrar(); // i need "virtual" to use polimorphism. Check: https://www.youtube.com/watch?v=H8GkLKAKVmg https://www.geeksforgeeks.org/virtual-function-cpp/
	void setNombre(string nombre1);
	string getNombre();
	void setEdad(int edad1);
	int getEdad();
};

void Persona::mostrar(){
	cout <<"Nombre: " << this->nombre << endl;
	cout <<"Edad: " << this->edad << endl;
}

void Persona::setNombre(string valor){
	
	this->nombre = valor;
}

string Persona::getNombre(){
	
	return this->nombre;
	
}

void Persona::setEdad(int valor){
	
	this->edad = valor;
}

int Persona::getEdad(){
	
	return this->edad;
	
}

class Alumno : public Persona{
	
private:
	int idAlumno;
	float nota;
public:
	explicit Alumno(string nombre, int edad, int idAlumno = 0, float nota = 0.00) : Persona(nombre, edad), idAlumno(idAlumno), nota(nota){
	};
	void setIdAlumno(int valor);
	int getIdAlumno();
	void setNota(int valor);
	int getNota();
	void mostrar();	
};

void Alumno::setIdAlumno(int valor)
{
	this->idAlumno = valor;
}

int Alumno::getIdAlumno(){
	
	return this->idAlumno;
	
}
void Alumno::mostrar() {
	Persona::mostrar();
	cout << "id Alumno: " << this->idAlumno <<endl;
	cout << "Nota: " << this->nota <<endl;
}


/*class Camion : public vector<Persona>
{
public:

    Persona operator-(int num);

};
Persona Camion::operator-(int num){

    return this->at(this->size());


}*/


int main(){
	
	Alumno * vector[3];
	
	vector[0] = new Alumno("Francisco", 22, 123, 8.97);
	
	vector[0]->mostrar();
	
	return 0;
}



































