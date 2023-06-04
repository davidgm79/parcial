#include <iostream> // Proporciona las librerias basicas.
#include <string> // libreria para guardar cadenas de texto.
#include <cctype>  // Libreria para poder usar el getline sin problemas (para que guarde los espacios, etc.).
using namespace std; // usar el nomoespaciado estandar.

int main() {
	const int Max_med = 20; // Constante con la cantidad de medicamentos en stock.
	int Opcion1; // <almacena las opcion es del menú 1.
	int Num_farmacias; // La cantidad de farmacias hay.
	
	struct Empleado; // se agrupo el nombre del empleado y el numero de cedula en una estructura que contenga las dos variables.
	{
		string Nombre_empleado; // Nombre del empleado.
		int Cedula; // La cedula del empleado.
	};

	struct Medicamento // Se agruparon las variables relacionadas con la informacion sobre el medicamento.
	{
		string Nombre_medicamento; // El nombre comercial o nombre con el que se conoce el medicamento.
		string Monodroga; // Es una droga que contiene un solo compponente activo.
		string Presentacion; // La presentacion en la que viene el medicamento (sobre,caja,botella,etc).
		string Laboratorio; // Que laboratorio desarrollo el medicamento.
		string Accion_terapeutica; //La accion que hace en el cuerpo.
		float Precio_medicamento; // El precio de cada medicamento para vender.
		int Existencias; // La cantidad de existencias que hay disponibles por farmacia.
	};

	struct Farmacia // Se agruparon todas las variables relacionadas a la farmacia.
	{
		string Nombre_farmacia; // El nombre de la farmacia.
		string Ciudad; // La ciudad en donde esta ubicada la farmacia.
		string Direccion; // La direecion de la farmacia.
		string Farmaceutico; // el nombre del farmaceutico (eso entendi).
		int Cantidad_medicamento; // La cantidad de medicamentos que se lleva el cleinte en cada orden.
		Medicamento stock[Max_med];
	};

	cout << "---Bienvenido al sistema de informacion de las farmacias la tapa roja---" << endl;
	cout << "1: Buscar el medicamento por monodroga." << endl;
	cout << "2: Buscar el medicamento por laboratorio." << endl;
	cout << "3: Buscar por presentacion de medicamento." << endl;
	cout << "4: Venta de medicamentos." << endl;
	cout << "5: Salir" << endl;

	for (int A = 0; A < Num_farmacias; A++) // Se hace la comprobacion de cuantas sedes hay y si estan dentro del limite
	{
		
	}
}