#include <iostream>
#include "modules/Add_Person/Add_Person.h"
#include "modules/View_groups/View_groups.h"

using namespace std;

int main() {

	cout<<"****************Programa bonito****************";

	cout<<"\n\nQue accion desea realizar?   \n\nA"<<char(164)<<"adir persona (1)		Ver grupos(2)     salir del programa(3)"<<endl<<endl;

	int action;

	cin>>action;


	while(action !=3) {

		switch(action) {

			case 1:
				cout<<"\n\nFuncion para registrar usuario";
				cout<<"\n\nAccion termianda \n\nQue accion desea realizar?\n\n";
				cin>>action;
				break;

			case 2:
				cout<<"\n\nFuncion para ver grupos";
				cout<<"\n\nAccion termianda \n\nQue accion desea realizar?\n\n";
				cin>>action;
				break;

			case 3:
				cout<<"\n\nPrograma termiando";
				cout<<"\n\nAccion termianda \n\nQue accion desea realizar?\n\n";
				cin>>action;
				continue;
				break;

			default:
				cout<<"\n\nNo es una opcion valida";
				cin>>action;
		}

	}


	system("pause>null");
return 0;
}