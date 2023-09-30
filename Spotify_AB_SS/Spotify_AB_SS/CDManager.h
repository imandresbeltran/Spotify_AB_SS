#pragma once

#include <iostream>
#include <vector>
#include <string>

class CDManager
{
public:
	CDManager();

	void cargarRespaldos(const std::string& rutaCarpeta);
	void agregarCancion();
	void verColaReproduccion();
	void reproduccionActual();
	void reproducirSiguiente();
	void ordenarCola();
};

