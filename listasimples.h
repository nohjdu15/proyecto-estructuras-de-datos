

struct Nodo3{
	
	int dato;
	Nodo3 *siguiente;// unir nodos

};

Nodo3 *inicial;

Nodo3 *final1;

void insertar_nodo();
void mostrar_lista();
void eliminar_nodo_lista();
char op3;
listas(){
	do{
	
	panta1();
	gt(31,11); cout<<"MENU PRINCIPAL - LISTAS";
	gt(36,13); cout<<"1. INSERTAR NODOS AL INICIO";
	gt(36,14); cout<<"2. MOSTRAR LISTA";
	gt(36,15); cout<<"3. ELIMINAR NODOS POR EL INICIO";
	gt(36,16); cout<<"4. ELIMINAR NODOS POR EL FINAL";
	gt(36,17); cout<<"5. ELIMINAR NODOS EN CUALQUIER POSICION";
	gt(36,18); cout<<"6. VOLVER AL MENU PRINCIPAL";
	gt(36,21); cout<<"ESCOJA LA OPCION:";op3=getche();
	
	switch(op3){
		case '1':
		    panta2();
		    insertar_nodo();break;
		case '2':
		    panta2();
			mostrar_lista();break;
		case '3':
			panta2();
			eliminar_nodo_lista();break;
		case '4':
			panta2();
			eliminar_nodo_lista();break;
		case '5':
			panta2();
			eliminar_nodo_lista();break;
		case '6': break;
		default:gt(40,20); cout<<"Digite de 1 a 6";system("pause");
	}
}while(op3 !='6');
}

void insertar_nodo(){
	Nodo3 *nuevo = new Nodo3();
	gt(10,12);cout<<"Ingre un dato"; cin>>nuevo->dato;
	
	 if(inicial == NULL){
	 	inicial = nuevo;
	 	inicial->siguiente = NULL;
	 	final1 = nuevo;
	 }else{
	 	final1->siguiente = nuevo;
	 	nuevo->siguiente = NULL;
	 	final1 = nuevo;
	 }
	gt(10,15);cout<<"Nodo ingresado";
	gt(10,17);system("pause");
}

void mostrar_lista(){
	int fil=8;
	Nodo3 *presente = new Nodo3();
	presente = inicial;
	if(inicial != NULL){
		while(presente != NULL){
			gt(10,fil);cout<<presente->dato;
			presente = presente->siguiente;
			fil++;
		}
	}else{
		gt(10,13);cout<"La lista esta vacia";
	}
	gt(10,17);system("pause");
}

void eliminar_nodo_lista(){
	int fil=8;
	Nodo3 *presente = new Nodo3();
	presente = inicial;
	Nodo3 *antes = new Nodo3();
	antes = NULL;
	bool encontrar = false;
	int nodo_buscar = 0;
	gt(10,13);cout<<"Ingrese el nodo a eliminar: "; cin>>nodo_buscar;
	if(inicial != NULL){
		while(presente != NULL && encontrar != true){
			
			if(presente->dato == nodo_buscar){
				gt(10,13);cout<<"Nodo con el dato "<<nodo_buscar<<" encontrado";
				
				if(presente == inicial){
					inicial = inicial->siguiente;
				}else if(presente == final1){
					final1->siguiente = NULL;
					final1= antes;
				}else{
					antes->siguiente = presente->siguiente;
				}
				
				gt(10,14);cout<<"Nodo eliminado";
				encontrar = true;
			}
			antes = presente;
			presente = presente->siguiente;
			
		}
		if(!encontrar){
			gt(10,13);cout<<"Nodo no encontrado";
		}
	}else{
		gt(10,13);cout<"La lista esta vacia";
	}
	gt(10,17);system("pause");
}
