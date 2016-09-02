
#include "escritura.h"

#include <fstream>

void escribirSecuencia(std::string rutaSalida) {

	/* abre un archivo de salida */
	std::ofstream salida;
	salida.open(rutaSalida.c_str());

	/* escribe el contenido del archivo */
	salida << "-- Secuencia de valores --" << std::endl;

	for (int i = 0; i < 10; i++) {

		salida << i << ": " << i * 2 << std::endl;
	}

	/* cierra el archivo, liberando el recurso */
	salida.close();
}

