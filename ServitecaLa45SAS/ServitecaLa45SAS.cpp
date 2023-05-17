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


    //Maestro Mantenimientos
string tipo_mantenimiento[25];
string codigo_mantenimiento[25];
string descripcion_mantenimiento[25];
float valor_mantenimiento[25];


    //Maestro Repuestos
string repuestos[3][25]; //Fila 0 ->Repuesto, Fila 1 -> codigo repuesto, Fila 2 -> Descripción del repuesto



//Declaración de funciones
    //Funciones de marcas
void mostrarMarcas();
void editarMarcas();
void eliminarMarcas();

    //Funciones de mantenimientos
void mostrarMantenimientos();
void editarMantenimientos();
void eliminarMantenimiento();

    //Funciones de repuestos
void mostrarRepuestos();
void editarRepuestos();
void eliminarRepuestos();


    //Funciones de ingreso datos maestros
void ingresarDatosMarcas();
void ingresarDatosMantenimiento();
void ingresarDatosRepuestos();

int main()
{
    //ingresarDatosMarcas();
    ingresarDatosMantenimiento();
    //ingresarDatosRepuestos();
    cout << "FELICITACIONES, HAS LLENADO CORRECTAMENTE LOS DATOS. BIENVENIDO AL PROGRAMA" << endl << endl;

    int opcion, numero;
    cout << "BIENVENIDO AL SISTEMA DE SERVITECA LA 45 S.A.S\n\n";
    cout << "1. Maestros\n";
    cout << "2. Movimientos\n";
    cin >> numero;
    cin.ignore();
    system("cls");

    //MENU DE LOS MAESTROS
    if (numero == 1) {
        cout << "INDICA EL MAESTRO AL QUE QUIERES ACCEDER\n";
        cout << "1. Maestro de las marcas de vehiculos que manejamos\n";
        cout << "2. Maestro de los mantenimientos que ofrecemos\n";
        cout << "3. Maestro de los repuestos que comercializamos\n";
        cout << "4. Salir de este menu\n";
        cout << "OPCION:";
        cin >> opcion;
        cin.ignore();
        system("cls");

        do {
            switch (opcion)
            {
                    //MANEJO DEL MAESTRO DE MARCAS
                case 1:
                    int maestro_opc;
                    cout << "BIENVENIDO A NUESTRO MAESTRO DE MARCAS\n";
                    cout << "Aqui guardamos un registro de las marcas que manejamos junto a su descripcion\n";
                    cout << "1. Mostrar en pantalla el maestro de marcas\n";
                    cout << "2. Desea editar alguna marca al maestro\n";
                    cout << "3. Desea eliminar alguna marca\n";
                    cin >> maestro_opc;
                    cin.ignore();
                    system("cls");

                    if (maestro_opc == 1) {
                        int contador;
                        contador = 0;
                        cout << "AQUI TE MOSTRAMOS LAS MARCAS QUE MANEJAMOS EN SERVITECA LA 45\n\n";
                        mostrarMarcas();
                    }
                    if (maestro_opc == 2) {
                        editarMarcas();
                    }
                    if (maestro_opc == 3) {
                        eliminarMarcas();
                    }
                    break;

                case 2:

                    cout << "BIENVENIDO A NUESTRO MAESTRO DE MANTENIMIENTOS\n";
                    cout << "Aqui guardamos un registro de los mantenimientos que ofrecemos junto a su informacion\n";
                    cout << "1. Mostrar en pantalla el maestro de mantenimientos\n";
                    cout << "2. Desea editar algun mantenimiento del maestro\n";
                    cout << "3. Desea eliminar algun mantenimiento\n";
                    // cout << "4. Desea retroceder\n";
                    cin >> maestro_opc;
                    cin.ignore();
                    system("cls");

                    if (maestro_opc == 1) {
                        cout << "AQUI TE MOSTRAMOS LOS MANTENIMIENTOS QUE MANEJAMOS EN SERVITECA LA 45\n\n";
                        mostrarMantenimientos();
                    }
                    if (maestro_opc == 2) {
                        cout << "MANTENIMIENTOS DISPONIBLES: \n";
                        editarMantenimientos();
                    }
                    if (maestro_opc == 3) {
                        eliminarMantenimiento();
                    }
                    break;

                case 3:

                    cout << "BIENVENIDO A NUESTRO MAESTRO DE REPUESTOS\n";
                    cout << "Aqui guardamos un registro de los repuestos que ofrecemos junto a su informacion\n";
                    cout << "1. Mostrar en pantalla el maestro de repuestos\n";
                    cout << "2. Desea editar algun repuesto del maestro\n";
                    cout << "3. Desea eliminar algun repuesto\n";
                    // cout << "4. Desea retroceder\n";
                    cin >> maestro_opc;
                    cin.ignore();
                    system("cls");

                    if (maestro_opc == 1) {
                        cout << "AQUI TE MOSTRAMOS LOS REPUESTOS QUE MANEJAMOS EN SERVITECA LA 45\n\n";
                        mostrarRepuestos();
                    }
                    if (maestro_opc == 2) {
                        cout << "REPUESTOS DISPONIBLES: \n";
                        editarRepuesto();
                    }
                    if (maestro_opc == 3) {
                        eliminarRepuestos();
                    }
                    break;
            }
        } while (opcion != 4);


        //MENU DE MOVIMIENTOS
        if (numero == 2) {
            int movi;
            cout << "MENÚ DE MOVIMIENTOS\n\n";
            cout << "Bienvenido a nuestro menu de movimientos, aquí podrás generar la factura correspondiente al servicio prestado al cliente\n";
            cout << "Cuentanos que deseas realizar el día de hoy\n";
            cout << "1. Generar factura de venta\n";
            cout << "2. Consultar costos de mantenimientos\n";
            cin >> movi;
            system("cls");

            if (movi == 1) {
                int mant, conf_mant, cod_mant;
                cout << "GENERADOR DE FACTURAS (SERVITECA LA 45 S.A.S)\n\n";
                cout << "A continuacion procederás a darnos un resumen de los articulos o procedimientos vendidos\n";
                cout << "Se realizo algun tipo de mantenimiento\n";
                cout << "1.Si\n";
                cout << "2.No\n";
                cin >> conf_mant;
                if (conf_mant == 1) {
                    cout << "indique el codigo del mantenimiento realizado";
                    cin >> cod_mant;
                }
            }
        }
    }
}


//Definiendo las funciones
void mostrarMarcas() {
    cout << "NOMBRE " << "\t" << "CODIGO" << "\t" << "DESCRIPCION" << endl;
    for (int i = 0; i < 2; i++) { //15
        cout << marcas[i] << "\t" << codigo_marcas[i] << "\t" << descripcion_marcas[i] << "\n" << "\n" << "\n";
    }
}

void editarMarcas() {
    string marcaAEditar = "";
    int posicionDeLaMarcaAEditar = 0;
    cout << "Ingrese el codigo de la marca que quieras editar: "; cin >> marcaAEditar;
    for (int i = 0; i < 15; i++) {
        if (codigo_marcas[i] == marcaAEditar) {
            posicionDeLaMarcaAEditar = i;
            cout << "Ingrese la marca nueva: ";
            getline(cin, marcas[i]);
            cout << "Ingrese el codigo nuevo: ";
            getline(cin, codigo_marcas[i]);
            cout << "Ingrese la descripcion de la marca nueva: ";
            getline(cin, descripcion_marcas[i]);
            break;
        }
    }
    mostrarMarcas();

}

void eliminarMarcas() {
    mostrarMarcas();
    string marcaAEliminar = "";
    int posicionDeLaMarcaAEliminar = 0;
    cout << "Ingrese el codigo de la marca que quieras eliminar: "; cin >> marcaAEliminar;
    for (int i = 0; i < 15; i++) {
        if (codigo_marcas[i] == marcaAEliminar) {
            marcas[i] = "";
            codigo_marcas[i] = "";
            descripcion_marcas[i] = "";
            system("cls");
            break;
        }
    }
    mostrarMarcas();
}

void ingresarDatosMarcas() {
    cout << "HOLA, AL SER LA PRIMERA VEZ INTERACTUANDO CON ESTE PROGRAMA, NECESITAMOS QUE RELLENES INFORMACION ACERCA DE LAS MARCAS DE LOS AUTOS, NO TARDARA NADA." << endl << endl;
    for (int i = 0; i < 2; i++) { //15
        cout << "Ingrese el nombre de una marca de autos lujosa " << 15 - i << " autos restantes:" << endl; getline(cin, marcas[i]);
        for (int j = 0; j < i; j++) {
            if (marcas[i] == marcas[j]) {
                cout << "Se ha encontrado ya un auto con esa marca, por favor ingrese una marca distinta: " << endl; getline(cin, marcas[i]);
            }
        }
        cout << "Ingrese el codigo de la marca del auto " << marcas[i] << ": " << endl; getline(cin, codigo_marcas[i]);
        for (int j = 0; j < i; j++) {
            if (codigo_marcas[i] == codigo_marcas[j]) {
                cout << "Se ha encontrado ya un auto con ese codigo de marca, por favor ingrese un codigo distinto: " << endl; getline(cin, codigo_marcas[i]);
            }
        }
        cout << "Ingrese una descripcion del auto " << marcas[i] << " con codigo " << codigo_marcas[i] << ": " << endl; getline(cin, descripcion_marcas[i]);
        system("cls");
    }
}

void ingresarDatosMantenimiento() {
    cout << "HOLA DE NUEVO, AHORA NECESITAMOS QUE RELLENES INFORMACION ACERCA DE LOS MANTENIMIENTOS: " << endl << endl;
    for (int i = 0; i < 3; i++) { //25
        cout << "Ingrese el tipo de mantenimiento: " << endl; getline(cin, tipo_mantenimiento[i]);
        cout << "Ingrese el codigo de mantenimiento: " << endl; getline(cin, codigo_mantenimiento[i]);
        cout << "Ingrese una descripcion del mantenimiento: " << endl; getline(cin, descripcion_mantenimiento[i]);
        //cout << "Ingrese el valor del mantenimiento: " << endl; cin >> valor_mantenimiento[i]; Al pedir dato corrompe el tipo_mantenimiento
        system("cls");
    }
}

void ingresarDatosRepuestos() {
    cout << "Presta mucha atencion, para que todo este bien. Deberas de relacionar correctamente los repuestos con los tipos de mantenimientos que hayan." << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 25; j++) {//25
            if (i == 0) {
                cout << "Del mantenimiento " << tipo_mantenimiento[j] << " con codigo " << codigo_mantenimiento[j] << ",que tipo de repuesto hay disponible: " << endl; getline(cin, repuestos[i][j]);
            }
            else if (i == 1) {
                cout << "Del repuesto " << repuestos[0][j] << " cual es el identificador de este: "; getline(cin, repuestos[i][j]);
            }
            else if (i == 2) {
                cout << "Del repuesto " << repuestos[0][j] << " ingrese una breve descripcion: "; getline(cin, repuestos[i][j]);
            }
        }
        system("cls");
    }
}



void mostrarMantenimientos() {
    cout << "MANTENIMIENTO " << "\t" << "CODIGO" << "\t" << "DESCRIPCION" << endl;
    for (int i = 0; i < 3; i++) {//25
        cout << tipo_mantenimiento[i] << "\t" << "\t"  << codigo_mantenimiento[i] << "\t"  << descripcion_mantenimiento[i] /*<< "\t" << valor_mantenimiento << "\n";*/ << endl;
    }
}

void editarMantenimientos() {
    mostrarMantenimientos();
    string mantenimientoAEditar = "";
    cout << "Ingrese el codigo del mantenimiento que quieres editar: "; getline(cin,mantenimientoAEditar);
    for (int i = 0; i < 25; i++) { //25
        if (codigo_mantenimiento[i] == mantenimientoAEditar) {
            
            cout << "Ingrese el mantenimiento nuevo: ";
            getline(cin, tipo_mantenimiento[i]);
            cout << "Ingrese el codigo nuevo: ";
            getline(cin, codigo_mantenimiento[i]);
            cout << "Ingrese la descripcion del mantenimiento nuevo: ";
            getline(cin, descripcion_mantenimiento[i]);
            system("cls");
            break;
        }
    }
    mostrarMantenimientos();

}

void eliminarMantenimiento() {
    mostrarMantenimientos();
    string mantenimientoAEditar = "";
    
    cout << "Ingrese el codigo del mantenimiento que quieras eliminar: "; getline(cin, mantenimientoAEditar);
    for (int i = 0; i < 25; i++) { //25
        if (codigo_mantenimiento[i] == mantenimientoAEditar) {
            tipo_mantenimiento[i] = "";
            codigo_mantenimiento[i] = "";
            descripcion_mantenimiento[i] = "";
            system("cls");
            break;
        }//Añadir un sistema que permita re ingresar un código en dado caso no se encuentre el ingresado
    }
    mostrarMantenimientos();
}



void mostrarRepuestos() {
    cout << "REPUESTO " << "\t" << "CODIGO" << "\t" << "DESCRIPCION" << endl;
    for (int i = 0; i < 25; i++) {
        cout << repuestos[0][i] <<"\t" << repuestos[1][i] << "\t" << repuestos[2][i] <<endl;
    }
}

void editarRepuesto() {
    mostrarRepuestos();
    string repuestoAEditar = "";
    cout << "Ingrese el codigo del repuesto que quieres editar: "; getline(cin, repuestoAEditar);
    for (int i = 0; i < 25; i++) { //25
        if (repuestos[1][i] == repuestoAEditar) {

            cout << "Ingrese el repuesto nuevo: ";
            getline(cin, repuestos[0][i]);
            cout << "Ingrese el codigo nuevo: ";
            getline(cin, repuestos[1][i]);
            cout << "Ingrese la descripcion del repuesto nuevo: ";
            getline(cin, repuestos[2][i]);
            system("cls");
            break;
        }
    }
    mostrarRepuestos();
}

void eliminarRepuestos() {
    mostrarRepuestos();
    string repuestoAEditar = "";
    cout << "Ingrese el codigo del repuesto que quieres eliminar: "; getline(cin, repuestoAEditar);
    for (int i = 0; i < 25; i++) { //25
        if (repuestos[1][i] == repuestoAEditar) {
            repuestos[0][i] = "";
            repuestos[1][i] = "";
            repuestos[2][i] = "";
            system("cls");
            break;
        }//Añadir un sistema que permita re ingresar un código en dado caso no se encuentre el ingresado
    }
    mostrarRepuestos();
}