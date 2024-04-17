#include "peliculas.h"
#include "bitacora.h"
#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<cstdlib>
#include<conio.h>
#include<iomanip>
#include "usuarios.h"

using namespace std;


void peliculas::menu()
{
    int choice;
	char x;

	do
    {
	system("cls");

	cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"\t\t\t |   CATALOGOS - PELICULAS    |"<<endl;
	cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"\t\t\t 1. Crear"<<endl;
	cout<<"\t\t\t 2. Desplegar Pelicuas"<<endl;
	cout<<"\t\t\t 3. Modificar"<<endl;
	cout<<"\t\t\t 4. Buscar"<<endl;
	cout<<"\t\t\t 5. Borrar"<<endl;
	cout<<"\t\t\t 6. Exit"<<endl;

	cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"\t\t\tOpcion a escoger:[1/2/3/4/5/6]"<<endl;
	cout<<"\t\t\t-------------------------------"<<endl;
    cout<<"\t\t\tIngresa tu Opcion: ";
    cin>>choice;

    switch(choice)
    {
    case 1:
    	do
    	{
    		insertar();
    		cout<<"\n\t\t\t Agrega otro pelicula(Y,N): ";
    		cin>>x;
		}while(x=='y'||x=='Y');
		break;
	case 2:
		desplegar();
		break;
	case 3:
		modificar();
		break;
	case 4:
		buscar();
		break;
	case 5:
		borrar();
		break;
	case 6:
		break;
	default:
		cout<<"\n\t\t\t Opcion invalida...Por favor prueba otra vez..";
		cin.get();
	}
  }while(choice!= 6);
}
void peliculas::insertar()
{
	system("cls");
	fstream file;
	cout<<"\n------------------------------------------------------------------------------------------------------------------------";
	cout<<"\n-------------------------------------------------Agregar detalles Pelicula ---------------------------------------------"<<endl;
	cout<<"\t\t\tIngresa Id             : ";
	cin>>id;
	cout<<"\t\t\tIngresa Nombre         : ";
	cin>>nombre;
	cout<<"\t\t\tIngresa Clasificacion  : ";
	cin>>clasificacion;
    cout<<"\t\t\tIngresa Genero         : ";
	cin>>genero;
	cout<<"\t\t\t¿Esta Subtitulada?     : ";
	cin>>subtitulado;
	cout<<"\t\t\tIdioma de la pelicula  : ";
	cin>>idioma;
	cout<<"\t\t\tIngresa Precio         : ";
	cin>>precio;

	file.open("peliculas.txt", ios::app | ios::out);
	file<<std::left<<std::setw(15)<< id <<std::left<<std::setw(15)<< nombre <<std::left<<std::setw(15)<< clasificacion <<std::left<<std::setw(15)<< genero <<std::left<<std::setw(15)<< subtitulado <<std::left<<std::setw(15)<< idioma <<std::left<<std::setw(15)<< precio << "\n";
	file.close();
	//bitacora auditoria;
	//auditoria.insertar("usuario registrado", "701", "INS");
}
void peliculas::desplegar()
{
	system("cls");
	fstream file;
	int total=0;
	cout<<"\n-------------------------Tabla de Detalles de Peliculas -------------------------"<<endl;
	file.open("peliculas.txt",ios::in);
	if(!file)
	{
		cout<<"\n\t\t\tNo hay información...";
		file.close();
	}
	else
	{
		file >> id >> nombre >> clasificacion >> genero >> subtitulado >> idioma >> precio ;
		while(!file.eof())
		{
			total++;
			cout<<"\n\n\t\t\t Id Pelicula   : "<<id<<endl;
			cout<<"\t\t\t Nombre            : "<<nombre<<endl;
            cout<<"\t\t\t Clasificacion     : "<<clasificacion<<endl;
            cout<<"\t\t\t Genero            : "<<genero<<endl;
            cout<<"\t\t\t Subtitulado       : "<<subtitulado<<endl;
            cout<<"\t\t\t Idioma            : "<<idioma<<endl;
            cout<<"\t\t\t Precio            : "<<precio<<endl;



			file >> id >> nombre >> clasificacion >> genero >> subtitulado >> idioma >> precio ;
		}
		if(total==0)
		{
			cout<<"\n\t\t\tNo hay informacion...";
		}
		system("pause");
	}
	file.close();
   // bitacora auditoria;
    //auditoria.insertar("usuario registrado", "701", "SEL");
}
void peliculas::modificar()
{
	system("cls");
	fstream file,file1;
	string participant_id;
	int found=0;
	cout<<"\n-------------------------Modificacion Detalles Pelicula-------------------------"<<endl;
	file.open("peliculas.txt",ios::in);
	if(!file)
	{
		cout<<"\n\t\t\tNo hay informacion..,";
		file.close();
		system("pause");
	}
	else
	{
		cout<<"\n Ingrese Id de la pelicula que quiere modificar: ";
		cin>>participant_id;
		file1.open("temporal.txt",ios::app | ios::out);
		file >> id >> nombre >> clasificacion >> genero >> subtitulado >> idioma >> precio ;
		while(!file.eof())
		{
			if(participant_id!=id)
			{
			 file1<<std::left<<std::setw(15)<< id <<std::left<<std::setw(15)<< nombre <<std::left<<std::setw(15)<< clasificacion <<std::left<<std::setw(15)<< genero <<std::left<<std::setw(15)<< subtitulado <<std::left<<std::setw(15)<< idioma <<std::left<<std::setw(15)<< precio << "\n";
			}
			else
			{
					cout<<"\t\t\tIngresa Id             : ";
                    cin>>id;
                    cout<<"\t\t\tIngresa Nombre         : ";
                    cin>>nombre;
                    cout<<"\t\t\tIngresa Clasificacion  : ";
                    cin>>clasificacion;
                    cout<<"\t\t\tIngresa Genero         : ";
                    cin>>genero;
                    cout<<"\t\t\t¿Esta Subtitulada?     : ";
                    cin>>subtitulado;
                    cout<<"\t\t\tIdioma de la pelicula  : ";
                    cin>>idioma;
                    cout<<"\t\t\tIngresa Precio         : ";
                    cin>>precio;

				file1<<std::left<<std::setw(15)<< id <<std::left<<std::setw(15)<< nombre <<std::left<<std::setw(15)<< clasificacion <<std::left<<std::setw(15)<< genero <<std::left<<std::setw(15)<< subtitulado <<std::left<<std::setw(15)<< idioma <<std::left<<std::setw(15)<< precio << "\n";
				found++;
			}
			file >> id >> nombre >> clasificacion >> genero >> subtitulado >> idioma >> precio ;
			system("cls");
            if (found>0)
                cout << "Registro actualizado exitosamente!";
            else
                cout << "No se encontro el registro con el id ingresado!";
            cout << endl << endl;
            system("pause");
		}
		file1.close();
		file.close();
		remove("peliculas.txt");
		rename("temporal.txt","peliculas.txt");
        //bitacora auditoria;
        //auditoria.insertar("usuario registrado", "701", "UPD");
	}
}
void peliculas::buscar()
{
	system("cls");
	fstream file;
	int found=0;
	file.open("peliculas.txt",ios::in);
	if(!file)
	{
		cout<<"\n-------------------------Datos de la pelicula buscada------------------------"<<endl;
		cout<<"\n\t\t\tNo hay informacion..."<< endl;
		system("pause");
	}
	else
	{
		string participant_id;
		cout<<"\n-------------------------Datos del pelicula buscada------------------------"<<endl;
		cout<<"\nIngrese Id de la pelicula que quiere buscar: ";
		cin>>participant_id;
		file >> id >> nombre >> clasificacion >> genero >> subtitulado >> idioma >> precio ;
		while(!file.eof())
		{
			if(participant_id==id)
			{
					cout<<"\n\n\t\t\t Id Pelicula   : "<<id<<endl;
                    cout<<"\t\t\t Nombre            : "<<nombre<<endl;
                    cout<<"\t\t\t Clasificacion     : "<<clasificacion<<endl;
                    cout<<"\t\t\t Genero            : "<<genero<<endl;
                    cout<<"\t\t\t Subtitulado       : "<<subtitulado<<endl;
                    cout<<"\t\t\t Idioma            : "<<idioma<<endl;
                    cout<<"\t\t\t Precio            : "<<precio<<endl;
                    found++;
			}
        file >> id >> nombre >> clasificacion >> genero >> subtitulado >> idioma >> precio ;
		}
		if(found==0)
		{
			cout<<"\n\t\t\t Pelicula no encontrada..."<< endl  << endl ;
		}
		file.close();
		system("pause");

	}
}
void peliculas::borrar()
{
	system("cls");
	fstream file,file1;
	string participant_id;
	int found=0;
	cout<<"\n-------------------------Detalles Pelicula a Borrar-------------------------"<<endl;
	file.open("peliculas.txt",ios::in);
	if(!file)
	{
		cout<<"\n\t\t\tNo hay informacion..." << endl ;
		file.close();
		system("pause");
	}
	else
	{
		cout<<"\n Ingrese el Id de la pelicula que quiere borrar: ";
		cin>>participant_id;
		file1.open("temporal.txt",ios::app | ios::out);
		file >> id >> nombre >> clasificacion >> genero >> subtitulado >> idioma >> precio ;
		while(!file.eof())
		{
			if(participant_id!= id)
			{
				file1<<std::left<<std::setw(15)<< id <<std::left<<std::setw(15)<< nombre <<std::left<<std::setw(15)<< clasificacion <<std::left<<std::setw(15)<< genero <<std::left<<std::setw(15)<< subtitulado <<std::left<<std::setw(15)<< idioma <<std::left<<std::setw(15)<< precio << "\n";
			}
			else
			{
				found++;
				cout << "\n\t\t\tBorrado de informacion exitoso";

			}
			file >> id >> nombre >> clasificacion >> genero >> subtitulado >> idioma >> precio ;
		}
		if(found==0)
		{
			cout<<"\n\t\t\t Id no encontrado..." << endl << endl;

		}
		file1.close();
		file.close();
		remove("peliculas.txt");
		rename("temporal.txt","peliculas.txt");
		system("pause");
        //bitacora auditoria;
        //auditoria.insertar("usuario registrado", "701", "DEL");
	}
}
