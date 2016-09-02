
#include "lectura.h"

#include <fstream>
#include <iostream>

void leerNotas(std::string rutaEntrada) {

	/* crea el archivo y abre la ruta especificada */
	std::ifstream entrada;
	entrada.open(rutaEntrada.c_str());

	/* lee la primera línea completa */
	std::string titulo;
	std::getline(entrada, titulo);
	std::cout << "*** " << titulo << " ***" << std::endl;

	/* lee el resto del archivo */
	while (! entrada.eof()) {

		int padron;
		std::string nombre;
		double nota;

		/* intenta leer un número de padrón */
		entrada >> padron;

		/* verifica que no haya llegado al fin del archivo */
		if (! entrada.eof()) {

			/* lee el nombre y la nota */
			entrada >> nombre;
			entrada >> nota;

			std::cout << padron << " | " << nota << " | " << nombre << std::endl;
		}
	}

	/* cierra el archivo, liberando el recurso */
	entrada.close();
}


