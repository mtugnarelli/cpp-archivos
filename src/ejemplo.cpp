
#include <string>
#include "lectura.h"
#include "escritura.h"

int main() {

	std::string archivoConNotas = "datos/entrada.txt";
	std::string archivoConSecuencia = "datos/salida.txt";

	leerNotas(archivoConNotas);

	escribirSecuencia(archivoConSecuencia);

	return 0;
}

