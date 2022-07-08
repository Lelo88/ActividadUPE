#include "lagrange.h"


int Lagrange::setValores(){


    for( int i = 0 ; i<3 ; i++ ){

	
        for( int j= 0; j<2 ; j++ ){

        
			cout<<"\nIngrese la coordenada: "<<endl;
            cin>>Matriz[i][j]; // 0,0 = 0 . 0,1 = 1  .. 1,0 = 1 . 1,1 = 3  2,0= 2  2,1=0
        	
        }
    	if(i<2){
	    	if(Matriz[i][0] == Matriz[2][0]){
	    	printf("Coordenadas inconsistentes vuelva a ingresar");
	    	//Matriz[2][0] = 3124.4;
	    	while(!kbhit());
	    	return 1;
			}
		}
	    if(i>0){
	    	if(Matriz[i][0] == Matriz[0][0]){
	    	printf("Coordenadas inconsistentes vuelva a ingresar");
	    	//Matriz[0][0] = 1234.4;
	    	while(!kbhit());
	    	return 1;
			}
		}	
		
			
    }
    return 0;
}

int Lagrange::setContadores (){

    I = N -1;
    J = N -1 ;
}

int Lagrange::calcularPolinomio (){

 float Px =( Matriz [0][1] * Li[0] ) + ( Matriz [1][1] * Li[1] ) + ( Matriz [2][1] * Li[2] );
        cout<<"\n\nEl resultado del polinomio es: "<<Px<<endl;
}

void Lagrange::calcularLx (){

    int valorX;

    cout<<"\nIngrese el valor de X: \n";
    cin>>valorX;

    Li[0] = (( valorX - Matriz[1][0] )  * ( valorX - Matriz[2][0])) / (( Matriz [0][0] - Matriz[1][0]) * ( Matriz[0][0] - Matriz[2][0] ));
	cout<<"\nEl resultado es: Li(1)="<<Li[0]<<endl;
    
	Li[1] = (( valorX - Matriz[0][0] ) * ( valorX - Matriz[2][0] )) / (( Matriz [1][0] - Matriz [0][0] ) * ( Matriz [1][0] - Matriz [2][0] ));
    cout<<"\nEl resultado es: Li(2)="<<Li[1]<<endl;
	
	
    Li[2] = (( valorX - Matriz[0][0] ) * ( valorX - Matriz[1][0] )) / (( Matriz [2][0] - Matriz [0][0] ) * ( Matriz [2][0] - Matriz [1][0] ));
    cout<<"\nEl resultado es: Li(3)="<<Li[2]<<endl;
}

