 

/*Es una estructura de datos de entradas ordenadas que solo se pueden introducir
y eliminar por un extremo llamado cima*/

struct Nodo1{
	int Dato;
	Nodo1 *siguiente;
	
};

Nodo1 *Pila = NULL;  //variable puntero esta vacia

void insertar_nodo_pila();
void imprimir_nodo_pila();
void elim_nodo(Nodo1 *&Pila, int &id);
void elim_lista(Nodo1 *&Pila, int &id);
int op1,id;

pilas(){
		do{
		panta1();
		gt(33 ,9); co "	MEN"<<char(233)<<" PRINCIPAL PILAS-LIFO";
		gt(35,11); co "1.	APILAR";
		gt(35,12); co "2.	DESAPILAR";
		gt(35,13); co "3.	ELIMINAR UN NODO";
		gt(35,14); co "4.	DESTRUIR LA PILA";
		gt(35,15); co "5.	VOLVER AL MEN"<<char(233)<<" PRINCIPAL";
		gt(35,17); co "OPCI"<<char(224)<<"N: ";ci op1;
		switch (op1){
			case 1 :  insertar_nodo_pila(); break;
			case 2 :  imprimir_nodo_pila(); break;
			case 3 :  elim_nodo(Pila,id);break;
			case 4 :  elim_lista(Pila,id);break;
			case 5 :  break;	
			default :gt(5,23)co "DIGITE DE 1 A 5 POR FAVOR:";gt(1,25)system("pause");		
  		}		
	}while(op1!=5);
}

void insertar_nodo_pila(){
	
	system("cls");
	panta2();
	gt(24.5,7); co " INSERTAR NODOS A LA PILA";
	gt(24.5,9); co " Digite su ID universitario: "; ci id;
	
	Nodo1 *pila_nodo = new Nodo1(); //Crear un espacio en memoria
	pila_nodo->Dato = id;//asignar el numero que se capturo al nodo que se creo
	pila_nodo->siguiente = Pila;  //cargar el puntero pila dentro del nodo siguiente
	Pila = pila_nodo;     //asignar el nuevo nodo a pila
	gt(20,15); co " NODO INSERTADO CORRECTAMENTE EN LA PILA";
	gt(20,20)system("pause");
		
}

void imprimir_nodo_pila(){
	system("cls");
	panta2();
	 int fila=15;
	 
	 Nodo1 *mostrar = Pila;
	 gt(26.5,7); co " MOSTRAR NODOS DE LA PILA";
	 
	 if(mostrar != NULL){
	 	while(mostrar != NULL){
	 		gt(7,fila); co mostrar->Dato;
	 		mostrar = mostrar->siguiente;
	 		fila++;
		 }	
	 }else{
	 	gt(25,12); co " NO EXISTEN NODOS EN LA PILA";
	 }
	 gt(20,20)system("pause");
}

void elim_nodo(Nodo1 *&Pila, int &id){
	panta2();
	Nodo1 *aux=Pila;  //señalar a la cima
	id=aux->Dato;
	Pila=aux->siguiente;   //pila señala al nuevo nodo
	delete aux;
	gt(20,18); co "NODO "<<id<<" ELIMINADO CORRECTAMENTE";
	gt(20,20)system("pause");
}

void elim_lista(Nodo1 *&Pila, int &id){
	panta2();
	do{
		Nodo1 *aux=Pila;
		id=aux->Dato;
		Pila=aux->siguiente;
		delete aux;
   }while(Pila!=NULL);
   	gt(20,18); co "PILA ELIMINADA CORRECTAMENTE";
   	gt(20,20)system("pause");
}

