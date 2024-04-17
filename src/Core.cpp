#include "Core.h"

Core::menuPrincipal()
{
    system("cls");
    int choice;
	//char x;

	do
    {
	system("cls");
	cout<<"\t\t\t\t\tUsuario: "<< usuarioRegistrado.getNombre() <<endl;
	cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"\t\t\t|   SISTEMA DE GESTION UMG     |"<<endl;
	cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"\t\t\t 1. Catalogos"<<endl;
	cout<<"\t\t\t 2. Informe"<<endl;
	cout<<"\t\t\t 3. Salir del Sistema"<<endl;
    cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"\t\t\t|Opcion a escoger:[1/2/3/4/5/6]  |"<<endl;
	cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"\t\t\tIngresa tu Opcion: ";
    cin>>choice;

    switch(choice)
    {
    case 1:
        catalogos();
		break;
	case 2:
		procesos();
		break;
	case 3:
		reportes();
		break;
	case 4:{
		ayuda();
	}
		break;
	case 5:{
            gestionU();}
    	break;
    case 6:
    	break;
	default:
		cout<<"\n\t\t\t Opcion invalida...Por favor prueba otra vez..";
		cin.get();
	}
    }while(choice!= 6);
}

