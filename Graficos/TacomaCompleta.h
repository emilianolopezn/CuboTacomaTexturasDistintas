#pragma once
#include "Llantas.h"
#include "Chasis.h"
//incluir todas las librerias necesarias

class TacomaCompleta {
public:
	Llantas *llantas;
	Chasis *chasis;

	vec3 coordenadas;
	float angulo;

	void mover(int direccion);
	void dibujar();

};
