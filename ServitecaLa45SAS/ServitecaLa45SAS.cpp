#include <iostream>
#include <string>

using namespace std;



//Declaración de constantes con scope GLOBAL
const string nombre_empresa = "Serviteca la 45 S.A.S";

//Declaración de variables con scope GLOBAL
int numero;
float iva = 0.16f;

//Declaración de arrays con scope GLOBAL

    //Maestro Marcas
string marcas[15];
string codigo_marcas[15];
string descripcion_marcas[15];

//marcas[numero] = "nueva marca";
//Los maestros deben ser dinámicos

    //Maestro Mantenimientos
string tipo_mantenimiento[25];
string codigo_mantenimiento[25];
string descripcion_mantenimiento[25];
string codigo_repuesto[25];
float valor_mantenimiento[25];


    //Maestro Repuestos
string repuestos[3][25]; //Fila 0 ->Repuesto, Fila 1 -> codigo repuesto, Fila 2 -> Descripción del repuesto
/*string codigo_repuesto[];
string descripcion_repuesto[];*/


//Declaración de funciones
//void mostrarMarcas();
void ingresarDatosMarcas();
void ingresarDatosMantenimiento();
void ingresarDatosRepuestos();

int main()
{
 //   ingresarDatosMarcas();
    ingresarDatosMantenimiento();
    ingresarDatosRepuestos();
    //mostrarMarcas();
}

/*void mostrarMarcas() {
    for (int i = 0; i < 15; i++) {
        cout << i<<endl;
        cout << marcas[i] << "\t" << codigo_marcas[i] << "\t" << descripcion_marcas[i]<<"\n";
    }
}*/

void ingresarDatosMarcas() {
    cout << "Hola, al ser esta la primera vez interactuando con el programa, necesitaremos que rellenes informacion acerca las marcas de los autos, no tardara nada." << endl;
    for (int i = 0; i < 15; i++) {
        cout << "Ingrese el nombre de una marca de autos lujosa: "<<endl; getline(cin,marcas[i]);
        for (int j = 0; j < i; j++) {
            if (marcas[i] == marcas[j]) {
                cout << "Se ha encontrado ya un auto con esa marca, por favor ingrese una marca distinta: " << endl; getline(cin, marcas[i]);
            }
        }
        cout << "Ingrese el código de la marca del auto " << marcas[i] << ": " << endl; getline(cin, codigo_marcas[i]);
        for (int j = 0; j < i; j++) {
            if (codigo_marcas[i] == codigo_marcas[j]) {
                cout << "Se ha encontrado ya un auto con ese código de marca, por favor ingrese un código distinto: " << endl; getline(cin, codigo_marcas[i]);
            }
        }
        cout << "Ingrese una descripción del auto " << marcas[i]<<" con código "<<codigo_marcas[i] << ": " << endl; getline(cin, descripcion_marcas[i]);

    }
}

void ingresarDatosMantenimiento() {
    cout << "Hola, necesitamos que rellenes informacion acerca el mantenimiento: " << endl;
    for (int i = 0; i < 25; i++) {
        cout << "Ingrese el tipo de mantenimiento: " << endl; getline(cin, tipo_mantenimiento[i]);
        cout << "Ingrese el codigo de mantenimiento: " << endl; getline(cin, codigo_mantenimiento[i]);
        cout << "Ingrese una descripcion del mantenimiento: " << endl; getline(cin, descripcion_mantenimiento[i]);
        cout << "Ingrese el codigo del repuesto que se necesita para el mantenimiento: " << endl; getline(cin, codigo_repuesto[i]);
        cout << "Ingrese el valor del mantenimiento: " << endl; cin >> valor_mantenimiento[i];
    }
}

void ingresarDatosRepuestos() {
    cout << "Presta mucha atencion, para que todo este bien. Deberas de relacionar correctamente los repuestos con los tipos de mantenimientos que hayan."<<endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 25; j++) {
            cout << "Del mantenimiento " << tipo_mantenimiento[j] << " con codigo " << codigo_mantenimiento[j] << ",que tipo de repuesto hay disponible: " << endl; getline(cin, repuestos[i][j]);
            cout << "Del repuesto " << repuestos[i][j] << " cual es el identificador de este: ";
        }
        
    }

}