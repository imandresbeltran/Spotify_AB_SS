#include <iostream>
#include "CDManager.h"

using namespace std;

int main() {
    CDManager cdManager;
    string rutaCarpeta;

    // Solicitar al usuario la ruta de la carpeta de respaldos
    cout << "Ingrese la ruta de la carpeta de respaldos: ";
    if (!(cin >> rutaCarpeta)) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');//Esto limita y limpia el buffer de entrada
        cout << "\nEentrada inválida. Intente de nuevo." << endl;
    }
    
    // Cargar los respaldos desde la carpeta especificada
    cdManager.cargarRespaldos(rutaCarpeta);

    // Bucle principal del programa
    int opcion = 0;
    do {
        cout << "\nMenú de Reproductor de Canciones:" << endl;
        cout << "1. Agregar Canción" << endl;
        cout << "2. Ver Cola de Reproducción" << endl;
        cout << "3. Reproducción Actual" << endl;
        cout << "4. Reproducir Siguiente" << endl;
        cout << "5. Ordenar Cola" << endl;
        cout << "6. Salir" << endl;
        cout << "Seleccione una opción: ";
        
        if (!(cin >> opcion)) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');//Esto limita y limpia el buffer de entrada
            cout << "\nEentrada inválida. Intente de nuevo." << endl;
            continue;//Esto lo regresa al principio del bucle
        }

        switch (opcion) {
        case 1:
            cdManager.agregarCancion();
            break;
        case 2:
            cdManager.verColaReproduccion();
            break;
        case 3:
            cdManager.reproduccionActual();
            break;
        case 4:
            cdManager.reproducirSiguiente();
            break;
        case 5:
            cdManager.ordenarCola();
            break;
        case 6:
            cout << "Saliendo del programa." << endl;
            break;
        default:
            cout << "Opción inválida. Intente nuevamente." << endl;
            break;
        }
    } while (opcion != 6);

    return 0;
}
