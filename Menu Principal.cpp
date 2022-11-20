#include"panta.h" 
#include"pilas.h"
#include"colitas.h"
#include"listasimples.h"
#include"circular.h"
#include"arbol.h"
int opcion;

main(){
		do{
		panta1();
		gt(33 ,9); co "	MEN"<<char(233)<<" PRINCIPAL";
		gt(35,11); co "1.	PILAS";
		gt(35,12); co "2.	COLAS";
		gt(35,13); co "3.	LISTAS";
		gt(35,14); co "4.	LISTAS CIRCULARES";
		gt(35,15); co "5.	ARBOLES";
		gt(35,16); co "6.	SALIR";
		gt(35,18); co "OPCI"<<char(224)<<"N:";ci opcion;
		switch (opcion){
			case 1 :  pilas();break;
			case 2 :  colas();break;
			case 3 :  listas();break;
			case 4 :  circular();break;
			case 5 :  arboles();break;
			case 6 : gt(34,20)co "HASTA LUEGO ;)";gt(1,24)exit(0);	
			default :gt(5,23)co "DIGITE DE 1 A 6 POR FAVOR:";gt(1,25)system("pause");		
  		}		
	}while(opcion!=6);
}	
	
	
	
	
	
	
	
	
	

