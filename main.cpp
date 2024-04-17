#include <iostream>
#include<fstream>

#include "usuarios.h"
#include "peliculas.h"
#include "bitacora.h"
#include "aplicaciones.h"
using namespace std;
void creditosModulo();
void catalogos();
void reportes();
void menuGeneral();
usuarios usuarioRegistrado;
peliculas pelis;
int main()
{

    bool accesoUsuarios;
    //creditosModulo();

    accesoUsuarios=usuarioRegistrado.loginUsuarios();
    if (accesoUsuarios){
        menuGeneral();
    }
    system("cls");
    cout<<"** Hasta la proxima **";
    return 0;
}
void menuGeneral(){
    system("cls");
    int choice;
	//char x;
	do
    {
	system("cls");
	cout<<"\t\t\t\t\tUsuario: "<< usuarioRegistrado.getNombre() <<endl;
	cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"\t\t\t |   JOSUE VILLAGRAN - 17319  |"<<endl;
	cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"\t\t\t 1. Catalogos"<<endl;
	cout<<"\t\t\t 2. Informes"<<endl;
	cout<<"\t\t\t 3. Salir del Sistema"<<endl;
		cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"\t\t\tOpcion a escoger:[1/2/3]"<<endl;
	cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"\t\t\tIngresa tu Opcion: ";
    cin>>choice;

    switch(choice)
    {
    case 1:
    	/*do
    	{*/
    		catalogos();
    		/*cout<<"\n\t\t\t Agrega otra persona(Y,N): ";
    		cin>>x;
		}while(x=='y'||x=='Y');*/
		break;
	case 2:
		reportes();
		break;
	case 3:
		break;
	default:
		cout<<"\n\t\t\t Opcion invalida...Por favor prueba otra vez..";
		cin.get();
	}
    }while(choice!= 3);
}
void catalogos(){
    int choice;
    //int x;
    do {
	system("cls");
	cout<<"\t\t\t--------------------------------------------"<<endl;
	cout<<"\t\t\t |   SISTEMA CRUD - Catalogos              |"<<endl;
	cout<<"\t\t\t--------------------------------------------"<<endl;
	cout<<"\t\t\t 1. Peliculas"<<endl;
	cout<<"\t\t\t 2. Usuarios"<<endl;
	cout<<"\t\t\t 3. Retornar menu anterior"<<endl;
    cout<<"\t\t\t--------------------------------------------"<<endl;
	cout<<"\t\t\tOpcion a escoger:[1/2]"<<endl;
	cout<<"\t\t\t--------------------------------------------"<<endl;
	cout<<"\t\t\tIngresa tu Opcion: ";
    cin>>choice;

    switch(choice)
    {
    case 1:
        {
            pelis.menu();
		}
		break;
	case 2:
        {
           // usuario user;
            //user.menu();
		}
		break;
	case 3:
		break;
	default:
		cout<<"\n\t\t\t Opcion invalida...Por favor prueba otra vez..";
		cin.get();
	}
    }while(choice!= 3);
}
void reportes(){
    int choice;
    //int x;
    do {
	system("cls");
	cout<<"\t\t\t--------------------------------------------"<<endl;
	cout<<"\t\t\t |   SISTEMA CRUD - Informes               |"<<endl;
	cout<<"\t\t\t--------------------------------------------"<<endl;
	cout<<"\t\t\t 1. Peliculas"<<endl;
	cout<<"\t\t\t 2. Login"<<endl;
	cout<<"\t\t\t 3. Bitacora"<<endl;
	cout<<"\t\t\t 4. Retornar menu anterior"<<endl;
    cout<<"\t\t\t--------------------------------------------"<<endl;
	cout<<"\t\t\tOpcion a escoger:[1/2/3/4/5/6]"<<endl;
	cout<<"\t\t\t--------------------------------------------"<<endl;
	cout<<"\t\t\tIngresa tu Opcion: ";
    cin>>choice;

    switch(choice)
    {
    case 1:
    	{
    	    pelis.desplegar();
    	}
		break;
	case 2:
		//display();
		break;
	case 3:
		//modify();
		break;
	case 4:
		//search();
		break;
	default:
		cout<<"\n\t\t\t Opcion invalida...Por favor prueba otra vez..";
		cin.get();
	}
    }while(choice!= 4);
}

