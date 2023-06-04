#include <iostream> // Proporciona las librerias basicas.
#include <string> // libreria para guardar cadenas de texto.
#include <cctype>  // Libreria para poder usar el getline sin problemas (para que guarde los espacios, etc.).
using namespace std;

int main() {
	int Sector_ciudad = 0;
	int Ciudad = 0;

	struct Empleado
	{
		string Nombre_empleado; 
		int Cedula_empleado; 
	};

	struct Farmaceutico
	{
		string Nombre_farmaceutico;
	};

	struct Medicamento
	{
		string Nombre_medicamento;
		string Mono_droga;
		string Presentacion;
		string Laboratorio;
		string Accion_terapeutica;
		double Precio_medicamento;
		int Cantidad_a_llevar;
	};

	cout << "-- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- --" << endl;
	cout << "\nBienvenidos a la farmacia sana que sana colita de rana\n" << endl;
	cout << "-- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- --" << endl;

	cout << "-- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- --- -- --" << endl;
	cout << "\nLe atiende el farmaceutico Angel Contreras.\n" << endl;
	cout << "\n¿En que ciudad está? (INGRESE UNA OPCION DEPENDIENDO LA CIUDAD EN LA QUE SE ENCUENTRE)\n" << endl;
	cout << "\n1 Bogotá, 2 Medellín, 3 Barranquilla\n" << endl;
	cout << "-- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- --- -- --" << endl;
	cin >> Ciudad;
	
	switch (Ciudad)
	{
	case 1:
		cout << "Usted esta en la ciudad de Bogotá" << endl;
		cout << "Porfavor ingrese el sector de la ciudad en la que se encuentra: " << endl;
		cout << "1: Sur 2: Norte." << endl;
		cin >> Sector_ciudad;

		switch (Sector_ciudad)
		{
		case 1:
			cout << "Usted esta en la sede sur." << endl;
			cout << "---Seleccione el medicamento que desea llevar.---" << endl;
			cout << "1. acetaminofen. 2.Ibuprofeno. 3.Paracetamol. 4.Omepresasol. " << endl;
			cout << "--- --- --- --- --- --- --- --- --- --- --- --- ---" << endl;
		break;

		case 2:
			cout << "Usted esta en la sede norte." << endl;
			cout << "" << endl;
		break;
		default:
			cout << "ingreso una opcion invalida, porfavor ingrese un sector valido." << endl;
		break;
		}
	break;

	case 2:
		cout << "Usted esta en la ciudad de Medellín" << endl;

		switch (Sector_ciudad)
		{
		case 1:
			cout << "Usted esta en la sede sur." << endl;
			break;

		case 2:
			cout << "Usted esta en la sede norte." << endl;
			break;
		default:
			cout << "ingreso una opcion invalida, porfavor ingrese un sector valido." << endl;
			break;
		}
	break;

	case 3:
		cout << "Usted esta en la ciudad de Barranquilla" << endl;

		switch (Sector_ciudad)
		{
		case 1:
			cout << "Usted esta en la sede sur." << endl;
			break;

		case 2:
			cout << "Usted esta en la sede norte." << endl;
			break;
		default:
			cout << "ingreso una opcion invalida, porfavor ingrese un sector valido." << endl;
			break;
		}
	break;

	default:
		cout << "ingreso una opcion invalida, porfavor ingrese una opcion disponible." << endl;

		switch (Sector_ciudad)
		{
		case 1:
			cout << "Usted esta en la sede sur." << endl;
			break;

		case 2:
			cout << "Usted esta en la sede norte." << endl;
			break;
		default:
			cout << "ingreso una opcion invalida, porfavor ingrese un sector valido." << endl;
			break;
		}
	break;
	}
}