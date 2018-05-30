#include <iostream>
#include <stdlib.h>
using namespace std;
struct nodo{
	int num;
	nodo *next, *after;
};
nodo *start, *aux1, *end;

void insertar(){
	if(start==NULL){
		nodo *lista = new(nodo);
		cout<<"Inserte el dato"<<endl;
		cin>>lista->num;
		lista->after=NULL;
		lista->next=NULL;
		aux1=lista;
		start=lista;
		end=lista;
	}else{
		nodo *lista = new(nodo);
		cout<<"Inserte el dato"<<endl;
		cin>>lista->num;
		lista->after=aux1;
		aux1->next=lista;
		end=lista;
		aux1=lista;
		lista->next=NULL;
	
	}
}
void eliminarUltimo(){
	end->after->next=NULL;
	aux1=end->after;
	end=end->after;
}
void mostrar(){
	nodo *aux2=start;
	while(aux2 != NULL){
		cout<<"Numero: "<<aux2->num<<endl;
		aux2=aux2->next;
	}
}
int main(){
	system("cls");
	int opcion=0;
	do{
		cout<<"\n \n		1.- Insertar \n 		2.- Eliminar Ultimo \n 		3.- Mostrar"<<endl;
		cin>>opcion;
		system("cls");
		switch(opcion){
			case 1:
				insertar();
				break;
			case 2:
				eliminarUltimo();
				break;
			case 3:
				mostrar();
				break;
			default:
				cout<<"Incorrecto..."<<endl;
		}
		
	}while(opcion !=0);
	return 0;
}
