

struct Nodo2{
	int Dato;
	Nodo2 *siguiente;
	
};
Nodo2 *frente=NULL; //ELIMINAR NODOS
Nodo2 *final=NULL; //INSERTAR NODOS

void agregar_nodos();
void imprimir_cola();
void suprimirnodo(Nodo2 *&,Nodo2*&, int &);
void recorrer();
int op2,num,colum=3,conta=0,nd;

colas(){
		do{
		panta1();
		gt(33 ,9); co "	MEN"<<char(233)<<" PRINCIPAL COLAS-FIFO";
		gt(35,11); co "1.	ENCOLAR";
		gt(35,12); co "2.	MOSTRAR";
		gt(35,13); co "3.	MODIFICAR LOS VALORES QUE ESTAN EN EL";
		gt(35,14); co "     RANGO DE 1 a 10 DE UNA COLA Y EN QUE";
		gt(35,15); co "     POSICIONES SE ENCUENTRA";
		gt(35,16); co "4.	ELIMINAR UN NODO DE LA COLA";
		gt(35,17); co "5.	VOLVER AL MEN"<<char(233)<<" PRINCIPAL";
		gt(35,18); co "OPCI"<<char(224)<<"N: ";ci op2;
		switch (op2){
			case 1 :  agregar_nodos();break;
			case 2 :  imprimir_cola();break;
			case 3 :  recorrer();break;
			case 4 :  suprimirnodo(frente,final,num);break;
			case 5 :  break;	
			default :gt(5,23)co "DIGITE DE 1 A 5 POR FAVOR:";gt(1,25)system("pause");		
  		}		
	}while(op2!=5);
}


void agregar_nodos(){
	panta2();
	gt(5,7); co "INSERTANDO NODOS A LA COLITA";
	gt(5,8); co "DIGITE UN NUMERO: "; ci num;
	
	Nodo2 *nuevo_nodo=new Nodo2(); //crear un espacio de memoria
	nuevo_nodo->Dato=num;  // asignamos al nuevo nodo el dato que queremos insertar
		if(frente==NULL){  //no hay nodos insertados
			frente=nuevo_nodo; //
			gt(5,9); co "NODO INSERTADO";
			final=nuevo_nodo;
		}
		else{
			final->siguiente=nuevo_nodo; 
			gt(5,9); co "NODO INSERTADO";
			final=nuevo_nodo;
		}
	gt(20,20)system("pause");
}

void imprimir_cola(){
	panta2();
	gt(5,5); co "imprimiendo la cola nueva";
	Nodo2 *ayudante=frente; //creamos un puntero aux ayudante
		if(ayudante	!= NULL){
			while(ayudante != NULL){
				gt(colum,6); co ayudante->Dato<<"->";
				ayudante=ayudante->siguiente;
				colum+=3;
				if(colum>75){
					colum=3;
				}
			}
			gt(20,20)system("pause");
		}
		else{
			gt(5,7); co "No hay nodos en la estructura cola";
			gt(20,20)system("pause");
		}
}

void suprimirnodo(Nodo2 *&frente,Nodo2*&final, int &num){
	panta2();
	num=frente->Dato;
	Nodo2 *ayudante=frente;
	if(frente == final){//solamente hay un solo nodo
		frente=NULL;
		final=NULL;
		gt(5,7);co "NO HAY NODOS EN LA ESTRUCTURA COLA";
		gt(20,20)system("pause");
	}else{//si hay mas de un nodo
		frente=frente->siguiente;//apunta al siguiente nodo
	}
	delete ayudante;
	gt(20,18); co "NODO "<<num<<" ELIMINADO CORRECTAMENTE";
	gt(20,20)system("pause");
}
void recorrer(){
	panta2();
	gt(5,5); co "imprimiendo la cola";
	Nodo2 *ayudante=frente;
	if(ayudante	!= NULL){
		while(ayudante != NULL){
			gt(colum,6); co ayudante->Dato<<"->";
			conta+=1;//cuenta los nodos
			gt(colum,7); co conta<<")"<<ayudante->Dato<<"  ";
				if(ayudante->Dato>1 && ayudante->Dato<=10){
					gt(3,10);co "NODO: "<<conta<<" SU DATO ES:->"<<ayudante->Dato<<" Y USTED QUIERE CAMBIARLO POR: ";ci nd;
					ayudante->Dato=nd;//aca se cambia el dato
				}
			ayudante=ayudante->siguiente;
			colum+=5;
		}
		gt(20,20)system("pause");
	}
	else{
		gt(5,7); co "No hay nodos en la estructura cola";
		gt(20,20)system("pause");
	}	
}
