

struct Nodo4{
	
	int dato;
	Nodo4 *siguiente;// unir nodos

};

Nodo4 *primero=NULL;
Nodo4 *ultimo=NULL;

void insertar_lista_circular();
void mostrarlista();
void eliminar_nodo();
char op4;
float numero;
int col=10,posicion;
circular(){

	
	do{
	
	
	panta1();
	gt(31,11); cout<<"MENU PRINCIPAL - LISTAS CIRCULARES";
	gt(36,13); cout<<"1. INSERTAR NODOS";
	gt(36,14); cout<<"2. MOSTAR LISTA";
	gt(36,15); cout<<"3. ELIMINAR NODO POR EL FRENTE";
	gt(36,16); cout<<"4. ELIMINAR NODO POR EL FINAL";
	gt(36,17); cout<<"5. ELIMINAR EN CUALQUIER POSICION";
	gt(36,18); cout<<"6. VOLVER AL MENU PRINCIPAL";
	gt(36,21); cout<<"ESCOJA LA OPCION:";op4=getche();
	
	switch(op4){
		case '1': 
		   	panta2();
		   	insertar_lista_circular();break;
		case '2': 
		   	panta2();
		   	mostrarlista();break;
		case '3': 
		   	panta2();
		   	eliminar_nodo();break;
		case '4': 
		   	panta2();
		   	eliminar_nodo();break;
		case '5': 
		   	panta2();
		   	eliminar_nodo();break;
		case '6': break;
		default:gt(40,20); cout<<"Digite de 1 a 6";system("pause");
	}
}while(op4 !='6');
}

void insertar_lista_circular(){
	Nodo4 *nuevo_nodo = new Nodo4();
	gt(20,10);cout<<"ingrese el dato "; cin>>nuevo_nodo->dato;
	
	if(primero==NULL){
		primero = nuevo_nodo;
		primero->siguiente=primero;
		ultimo = primero;
	}else{
		ultimo->siguiente=nuevo_nodo;
		nuevo_nodo->siguiente = primero;
		ultimo = nuevo_nodo;
	}
    gt(20,12);cout<<"Nodo Ingresado";
    gt(30,25);system("pause");
}

void mostrarlista(){
	int fil=8;
	Nodo4 *actual = new Nodo4();
	actual = primero;
	if(primero!=NULL){
	   do{
	   	gt(15,fil);cout<<actual->dato;
	   	actual = actual->siguiente;
	   	fil++;
	   	}while(actual!=primero);	
	}else{
		cout<<"\n La lista se encuentra vacia\n\n";
	}
	gt(30,25);system("pause");
}

void eliminar_nodo(){
	Nodo4 *actual = new Nodo4();
	actual = primero;
	Nodo4 *anterior = new Nodo4();
	anterior = NULL;
	bool encontrado = false;
	int nodobuscado = 0;
	gt(20,10);cout<<"ingrese el dato del nodo a eliminar: ";
	cin>>nodobuscado;
	if(primero!=NULL){
	   do{
	   	    if(actual->dato==nodobuscado){
	   		    if(actual==primero){
	   		       	primero = primero->siguiente;
	   		       	ultimo->siguiente= primero;
				}
				else if(actual==ultimo){
				   	anterior->siguiente = primero;
				   	ultimo = anterior;
				}
				else{
				   	anterior->siguiente= actual->siguiente;
				}
				gt(20,14);cout<<"El nodo ha sido eliminado";
	   		    encontrado = true;
			}
		anterior = actual;        
	   	actual = actual->siguiente;
	   }while(actual!=primero  && encontrado != true);	
	   if(!encontrado){
	   		gt(20,12);cout<<"El nodo no encontrado";
	    }
	}
	else{
		gt(20,12);cout<<"\n La lista se encuentra vacia\n\n";
	}
	gt(30,25);system("pause");
}
