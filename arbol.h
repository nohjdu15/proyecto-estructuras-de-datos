

struct Nodo{
	int Dato;
	Nodo *derecha;
	Nodo *izquierda;
	Nodo *padre;	
};
Nodo *arbol=NULL;// puntero de referencia para insertar nodos
Nodo *crear_nodo(int n,Nodo *padre);

void insertar_nodoa(Nodo *&arbol, int,Nodo *padre);
void impr_arbol(Nodo *arbol, int);
bool buscar(Nodo *arbol,int );
void preord(Nodo *arbol);
void inord(Nodo*arbol);
void postord(Nodo *arbol);

void elim(Nodo *,int);
void elimnod(Nodo *);
void remplazar(Nodo*arbol,Nodo*);//se necesita remplazar un nodo por otro
void destrunodo(Nodo *);

Nodo *min(Nodo *);

int op5,n,cont=0,Dato;

arboles(){
	do{
		panta2();
		gt(33,9);co "MEN"<<char(233)<<" - ARBOLES";
		gt(35,11);co "1.	INSERTAR NODOS ";
		gt(35,12);co "2.	MOSTRAR "<<char(181)<<"RBOL";
		gt(35,13);co "3.	BUSCAR UN NODO EN EL "<<char(181)<<"RBOL";
		gt(35,14);co "4.	ELIMINAR UN NODO";
		gt(35,15);co "5.	RECORRIDO DE UN "<<char(181)<<"RBOL PREORDEN";
		gt(35,16);co "6.	RECORRIDO DE UN "<<char(181)<<"RBOL INORDEN";
		gt(35,17);co "7.	RECORRIDO DE UN "<<char(181)<<"RBOL POSTORDEN";
		gt(35,18);co "8. VOLVER AL MEN"<<char(233)<<" PRINCIPAL";
		gt(35,20); co "OPCI"<<char(224)<<"N: ";ci op5;
		
		switch(op5){
			case 1:panta2();
				gt(5,5); co "DIGITE UN NUMERO:  "; ci n;
				insertar_nodoa(arbol,n,NULL);
				gt(20,20)system("pause");break;
			case 2:panta2();
				gt(15,4)cout<<"\n\n\n\n\n\n EL ARBOL ES ASI \n\n\n\n";
                impr_arbol(arbol,cont);
				gt(20,20)system("pause");break;
			case 3:panta2();
				gt(5,5);co "DIGITE EL ELEMENTO QUE QUIERE BUSCAR: ";ci Dato;
				if(buscar(arbol,Dato)==true){
				gt(5,7);co "ELEMENTO "<<Dato<<" ENCONTRADO";
				}else{
					gt(5,7);co "ELEMENTO NO ENCONTRADO";
				}
				gt(20,20);system("pause");break;
			case 4:
				panta2();
				gt(5,5);co " DIGITE UN NUMERO A ELIMINAR: ";ci Dato;
				elim(arbol,Dato);
				cout<<"\n";
				gt(20,20);system("pause");break;
			case 5:panta2();
				gt(15,10);co "RECORRIDO EN PRE-ORDEN: \n";
				preord(arbol);
				gt(20,20);system("pause");break;
			case 6:panta2();
				gt(15,10);co "RECORRIDO EN IN-ORDEN: \n";
				inord(arbol);
				gt(20,20);system("pause");break;
			case 7:panta2();
				gt(15,10);co "RECORRIDO EN POST-ORDEN: \n";
				postord(arbol);
				gt(20,20);system("pause");break;
			case 8: break;
			default :gt(5,23)co "DIGITE DE 1 A 8 POR FAVOR:";gt(1,25)system("pause");
		}
	}while(op5 != 8);
}

Nodo *crear_nodo(int n,Nodo *padre){
	Nodo *nodo_arbol=new Nodo();
	
	nodo_arbol->Dato=n;
	nodo_arbol->derecha=NULL;
	nodo_arbol->izquierda=NULL;
	nodo_arbol->padre=padre;
	
	return nodo_arbol;
}

void insertar_nodoa(Nodo *&arbol, int n,Nodo *padre){
	if(arbol==NULL){//sirve para el primer nodo del arbol
		Nodo *nuevo_nodo=crear_nodo(n,padre);
		arbol=nuevo_nodo;
	}
	else{//sirve para los demas nodos del arbol
		int valorpa=arbol->Dato;
		if(n > valorpa){
			insertar_nodoa(arbol->derecha,n,arbol);
		}else{
			insertar_nodoa(arbol->izquierda,n,arbol);
		}
	}
	gt(15,18);co" NODO INSERTADO CORRECTAMENTE AL ARBOL......";
}
 
void impr_arbol(Nodo *arbol,int cont){
	if(arbol== NULL){ // ESTA VACIO el arbol
     	return ;    
	}else{
      	impr_arbol(arbol->derecha,cont+1);
      	for(int i=0;i<cont;i++){
        cout<<"    ";  
    	} 
      	cout<<arbol->Dato<<endl; 
    }      
    impr_arbol(arbol->izquierda,cont+1);
	}

bool buscar(Nodo *arbol,int n){//buscar un nodo en el arbol
	if(arbol==NULL){//por si esta vacio el arbol
		return false;
	}else if(arbol->Dato == n){//si el nodo es igual al elemento retorne true
		return true;
	}else if(n< arbol->Dato){
		return buscar(arbol->izquierda,n);//si el elemento es menor, busca por izq
	}else{
		return buscar(arbol->derecha,n);//si el elemento es menor, busca por der
	}
}

void preord(Nodo *arbol){//recorrido preorden(raiz-sub arbolizq - sub arbolder)
	if(arbol==NULL){
	return;
	}else{
		cout<<arbol->Dato<<" - ";
		preord(arbol->izquierda); 
		preord(arbol->derecha);
	}
}

void inord(Nodo *arbol){//recorrido inorden(sub arbolizq - raiz - sub arbolder)
	if(arbol==NULL){
	return;
	}else{
		inord(arbol->izquierda); 
		cout<<arbol->Dato<<" - ";
		inord(arbol->derecha);
	}
}

void postord(Nodo *arbol){//recorrido postorden(sub arbolizq - sub arbolder - raiz)
	if(arbol==NULL){ 
	return;
	}else{
		postord(arbol->izquierda);
		postord(arbol->derecha);
		cout<<"  ";
		cout<<arbol->Dato<<"-";
	}
}

void elim(Nodo *arbol,int n){//eliminar un nodo del arbol
	if(arbol==NULL){//si el arbol esta vacio
		return;
	}
	else if(n < arbol->Dato){// si el valor es menor, buscar por izq
		elim(arbol->izquierda,n);
	}
	else if(n > arbol->Dato){// si el valor es mayor, buscar por der
		elim(arbol->derecha,n);
	}
	else{//si ya se encontro el valor a eliminar
		elimnod(arbol);
	}
}

Nodo *min(Nodo *arbol){//funcion para determinar el nodo mas izq posible
	if(arbol==NULL){//si el arbol esta vacio
		return NULL ;//retornar NULL
	}
	if(arbol->izquierda){//si hay hijo izq
		return min(arbol->izquierda);//buscar la parte mas izq posible
	}
	else{//si no tiene hijo izq 
		return arbol ;//retornamos al mismo nodo(arbol)
	}
}

void remplazar(Nodo*arbol,Nodo*nodonuevo){//remplazar un nodo por el otro
	if(arbol->padre){ 
	//arbol->padre--hay que asignarle su nuevo hijo
		if(arbol->Dato == arbol->padre->izquierda->Dato){//sirve para cuando tenga un hijo izq
			arbol->padre->izquierda=nodonuevo;
		}
		else if(arbol->Dato == arbol->padre->derecha->Dato){//sirve para cuando tenga un hijo der
			arbol->padre->derecha=nodonuevo;
		}
	}
	if(nodonuevo){
		//hay que asignarle su nuevo padre
		nodonuevo->padre = arbol->padre;
	}
}

void destrunodo(Nodo *nodo){//funcion para destruir nodo
	nodo->izquierda = NULL;
	nodo->derecha=NULL;
	
	delete nodo;
}

void elimnod(Nodo *nodelim){//funcion para eliminar nodo encontrado
	if(nodelim->izquierda && nodelim->derecha){//si el nodo tiene hijo izq y der
		Nodo *menor=min(nodelim->derecha);
		nodelim->Dato=menor->Dato;
		elimnod(menor);
	}
	else if(nodelim->izquierda){//si tiene hijo izq
		remplazar(nodelim,nodelim->izquierda);
		destrunodo(nodelim);
	}
	else if(nodelim->derecha){//si tiene hijo izq
		remplazar(nodelim,nodelim->derecha);
		destrunodo(nodelim);
	}
	else{//si el nodo no tiene hijos
		remplazar(nodelim,NULL);
		destrunodo(nodelim);
	}
}





