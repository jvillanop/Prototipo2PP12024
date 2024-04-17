#ifndef PELICULAS_H
#define PELICULAS_H


#include<iostream>


using std::string;

class peliculas
{
    private:
		string id, nombre, clasificacion, genero,idioma,subtitulado;
		double precio;
	public:
		void menu();
		void insertar();
		void desplegar();
		void modificar();
		void buscar();
		void borrar();
};
#endif // PELICULAS_H
