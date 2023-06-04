#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
	int Opcion, Menu_1, Menu_2, Final, Cedula, Telefono, Adicion;
	char Nombre[20];
	char Apellido[20];
	char Direccion[20];

	cout << "\t---Bienvenido a la farmacia sana que sana colita de rana---\t" << endl;
	cout << "En que ciudad se encuentra: " << endl;
	cout << "\n1. Bogotá \n2. Medellín \n3. Barranquilla\n4. Salir" << endl;
	cin >> Menu_1;
	system("cls");

	do
	{
		switch (Menu_1) {
		case 1:
			system("cls");
			cout << "Usted esta en la ciudad de Bogotá." << endl;
			system("cls");
			cout << "Que tipo de medicamentos desea llevar: " << endl;
			cout << "\n1. Acetaminofen. \n2. Ibuprofeno. \n3. Paracetamol. \n4. Omeprazol. \n5. Metformina." << endl;
			cout << "\n6. Amoxicilina. \n7. Diclofenaco. \n8. Loratadina. \n9. Pantoprazol. \n10. Clonazepam." << endl;
		break;

		case 2:
			system("cls");
			cout << "Usted esta en la ciudad de Medellín." << endl;
			system("cls");
			cout << "Que tipo de medicamentos desea llevar: " << endl;
			cout << "\n1. Acetaminofen. \n2. Ibuprofeno. \n3. Paracetamol. \n4. Omeprazol. \n5. Metformina." << endl;
			cout << "\n6. Amoxicilina. \n7. Diclofenaco. \n8. Loratadina. \n9. Pantoprazol. \n10. Clonazepam." << endl;
		break;

		case 3:
			system("cls");
			cout << "Usted esta en la ciudad de Barranquilla." << endl;
			system("cls");
			cout << "Que tipo de medicamentos desea llevar: " << endl;
			cout << "\n1. Acetaminofen. \n2. Ibuprofeno. \n3. Paracetamol. \n4. Omeprazol. \n5. Metformina." << endl;
			cout << "\n6. Amoxicilina. \n7. Diclofenaco. \n8. Loratadina. \n9. Pantoprazol. \n10. Clonazepam." << endl;
		break;

		case 4:
		break;

		default:
			cout << "Digite una opcion invalida." << endl;
		break;

		}
	} while (Menu_1 != 4);
}