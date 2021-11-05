#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <cstdlib>
#include <fstream>


using namespace std;

int abordaje, abordaje2, abordaje3, abordaje4;
int desabordaje, desabordaje2, desabordaje3, desabordaje4;
int x, y, z, c, n, m, d, a;
float tiempo, tiempo2, tiempo3, tiempo4;
float tiempo5, tiempo6, tiempo7, tiempo8; 
int sobrantes1, sobrantes2, sobrantes3, sobrantes4;
int *sob_1, *sob_2, *sob_3, *sob_4;
int opcion;
void archivo_tiempo();
void archivo_abordaje();

int main(){
	do{
	
	cout<<"\tOpciones \n\n 1- Iniciar Simulacion"; //Opción para acceder a iniciar la simulación de recorrido del metro
	cout<<"\n 2- Datos de Embarque y Desembarque"; //Opción para acceder a los datos del primer archivo, sobre el embarque y desembarque de pasajeros
	cout<<"\n 3- Tiempo del Tren";                 //Opción para acceder a los datos del segundo archivo, sobre el tiempo de espera del tren por estación
	cout<<"\n 4- Salir";                           //Salir del programa
	cout<<"\n\nOpcion: ";
	cin>>opcion;
	
	switch(opcion) {
		case 1: 
    {       	
        // Iniciando el sistema de metro con la primera estacion
		cout << "\nBienvenido al sistema de Metro en Caracas, Venezuela.\n";
		cout << "\nPRIMERA ESTACION\n";
		    
	{//------------------------------------------------------------------------------
		//Ingresar los numeros de pasajeros que embarcan
		cout << "\nIngresar el numero de pasajeros en abordar: ";
		cin >> abordaje;
		    x = abordaje;
                tiempo = x * 10 / 60;
        cout<<"\n"<<tiempo<<" minuto"<<" es el tiempo trascurrido en el embarque\n";
	}
			   
	{//------------------------------------------------------------------------------
		//Ingresar los numeros de pasajeros que desembarcan
		cout << "\nIngresar el numero de pasajeros en desabordar: ";
		cin >> desabordaje;
            y = desabordaje;
                tiempo2 = y * 5 / 60;
        cout<<"\n"<<tiempo2<<" minuto"<<" es el tiempo trascurrido en el desembarque\n";
        
        // -------------------------- VERIFICACION 1 -----------------------------------
        if(abordaje> desabordaje){				
 		cout<<"\nEl desembordaje es menor que el abordaje\n";
 			sobrantes1 = abordaje - desabordaje;
 				sob_1 = &sobrantes1;		
		cout<<"\nQuedan "<<*sob_1<<" personas en el metro\n";
		//------------------------------------------------------------------------------
		// Se coloco que no hay personas porque se asume que el metro vienen vacio
		}else { cout<<"\n Quedan 0 personas en el metro\n"<<endl;} 	
        cout << "\nGracias por preferir nuestro sistema de metro (^_^)\n "; 
        cout << "\n------------------------------------------------------\n";
    } 
	system("pause");
}
//-----------------------------------------------------------------------------------
{	                           //Segunda Estación
		cout << "\nBienvenido al sistema de Metro en Caracas, Venezuela.\n";
		cout << "\nSEGUNDA ESTACION\n";
		    
	{//------------------------------------------------------------------------------
		//Ingresar los numeros de pasajeros que embarcan
		cout << "\nIngresar el numero de pasajeros en abordar: ";
		cin >> abordaje2;
		    z = abordaje2;
                tiempo3 = z * 10 / 60;
        cout<<"\n"<<tiempo3<<" minuto"<<" es el tiempo trascurrido en el embarque\n";
	}
			   
	{//------------------------------------------------------------------------------
		//Ingresar los numeros de pasajeros que desembarcan
		cout << "\nPor favor ingresar el numero de pasajeros en desabordar: ";
		cin >> desabordaje2;
            c = desabordaje2;
                tiempo4 = c * 5 / 60;
        cout<<"\n"<<tiempo4<<" minuto"<<" es el tiempo trascurrido en el desembarque\n";
        
        // ----------------------------- VERIFICACION 2 -------------------------------
    	if(abordaje2 == desabordaje2){		
 			sobrantes2 = (abordaje2 + *sob_1) - desabordaje2;
 				sob_2 = &sobrantes2;
		cout<<"\nQuedan "<<*sob_2<<" personas en el metro\n";} else
		//-----------------------------------------------------------------------------
 		if (abordaje2 > desabordaje2 ){
 			sobrantes2 = (abordaje2 + *sob_1) - desabordaje2;
 				sob_2 = &sobrantes2;
 		cout<<"\nQuedan "<<*sob_2<<" personas en el metro\n";}		
 		//-----------------------------------------------------------------------------
		else{ sobrantes2 = (abordaje2 + *sob_1) - desabordaje2;
 				sob_2 = &sobrantes2;
		cout<<"\nQuedan "<<*sob_2<<" personas en el metro\n"<<endl;}	        
        cout << "\nGracias por preferir nuestro sistema de metro (^_^)\n ";
        cout << "\n------------------------------------------------------\n"; 
    } 
		system("pause");
}
//-----------------------------------------------------------------------------------
{	                           //Tercera Estación
		cout << "\nBienvenido al sistema de Metro en Caracas, Venezuela.\n";
		cout << "\nTERCERA ESTACION\n";
		    
	{//------------------------------------------------------------------------------
		//Ingresar los numeros de pasajeros que embarcan
		cout << "\nIngresar el numero de pasajeros en abordar: ";
		cin >> abordaje3;
		    n = abordaje3;
                tiempo5 = n * 10 / 60;
        cout<<"\n"<<tiempo5<<" minuto"<<" es el tiempo trascurrido en el embarque\n";
	}
			   
	{//------------------------------------------------------------------------------
		//Ingresar los numeros de pasajeros que desembarcan
		cout << "\nPor favor ingresar el numero de pasajeros en desabordar: ";
		cin >> desabordaje3;
            m = desabordaje3;
                tiempo6 = m * 5 / 60;
        cout<<"\n"<<tiempo6<<" minuto"<<" es el tiempo trascurrido en el desembarque\n";
        
        // ----------------------------- VERIFICACION 3 -------------------------------
    	if(abordaje3 == desabordaje3){				
 			sobrantes3 = (abordaje3 + *sob_2) - desabordaje3;
 			    sob_3 = &sobrantes3;
 		cout<<"\nQuedan "<<*sob_3<<" personas en el metro\n";} else    
 		//------------------------------------------------------------------------------
 		if (abordaje3 > desabordaje3 ){
 			sobrantes3 = (abordaje3 + *sob_2) - desabordaje3;
 				sob_3 = &sobrantes3;
 		cout<<"\nQuedan "<<*sob_3<<" personas en el metro\n";}
      	//------------------------------------------------------------------------------		
		else{ sobrantes3 = (abordaje3 + *sob_2) - desabordaje3;
 				sob_3 = &sobrantes3;
		cout<<"\nQuedan "<<*sob_3<<" personas en el metro\n"<<endl;}			        
        cout << "\nGracias por preferir nuestro sistema de metro (^_^)\n ";
        cout << "\n------------------------------------------------------\n"; 
    } 
		system("pause");
}
//-----------------------------------------------------------------------------------
{	                           //Cuarta Estación
		cout << "\nBienvenido al sistema de Metro en Caracas, Venezuela.\n";
		cout << "\nCUARTA ESTACION\n";
		    
	{//------------------------------------------------------------------------------
		//Ingresar los numeros de pasajeros que embarcan
		cout << "\nIngresar el numero de pasajeros en abordar: ";
		cin >> abordaje4;
		    d = abordaje4;
                tiempo7 = d * 10 / 60;
        cout<<"\n"<<tiempo7<<" minuto"<<" es el tiempo trascurrido en el embarque\n";
	}
			   
	{//------------------------------------------------------------------------------
		//Ingresar los numeros de pasajeros que desembarcan
		cout << "\nPor favor ingresar el numero de pasajeros en desabordar: ";
		cin >> desabordaje4;
            a = desabordaje4;
                tiempo8 = a * 5 / 60;
        cout<<"\n"<<tiempo8<<" minuto"<<" es el tiempo trascurrido en el desembarque\n";
        
        // ----------------------------- VERIFICACION 4 --------------------------------
    	if(abordaje4 == desabordaje4){			
 			sobrantes4 = (abordaje4 + *sob_3) - desabordaje4;
 			    sob_4 = &sobrantes4;			
		cout<<"\nQuedan "<<*sob_4<<" personas en el metro\n";} else
		
		//------------------------------------------------------------------------------
 		if (abordaje4 > desabordaje4 ){
 			sobrantes4 = (abordaje4 + *sob_3) - desabordaje4;
 				sob_4 = &sobrantes4;
		cout<<"\nQuedan "<<*sob_4<<" personas en el metro\n";}
		//------------------------------------------------------------------------------
		else{ sobrantes4 = (abordaje4 + *sob_3) - desabordaje4;
 			sob_4 = &sobrantes4;
		cout<<"\nQuedan "<<*sob_4<<" personas en el metro\n"<<endl;} 			        
        cout << "\nGracias por preferir nuestro sistema de metro (^_^)\n ";
        cout << "\n------------------------------------------------------\n"; 
    } 
		system("pause");
    archivo_abordaje();
	archivo_tiempo();
	}	break;
 
 	case 2: 
 	
 	 cout<<"\nPRIMERA ESTACION: \n";
	 cout<<"Su abordaje es de: "<<abordaje<<" personas.\n";
	 cout<<"Su desabordaje es de: "<<desabordaje<<" personas\n"<<endl;
	 
	 cout<<"SEGUNDA ESTACION: \n";
	 cout<<"Su abordaje es de: "<<abordaje2<<" personas.\n";
	 cout<<"Su desabordaje es de: "<<desabordaje2<<" personas\n"<<endl;
	 
	 cout<<"TERCERA ESTACION: \n";
	 cout<<"Su abordaje es de: "<<abordaje3<<" personas.\n";
	 cout<<"Su desabordaje es de: "<<desabordaje3<<" personas\n"<<endl;
	 
	 cout<<"CUARTA ESTACION: \n";
	 cout<<"Su abordaje es de: "<<abordaje4<<" personas.\n";
	 cout<<"Su desabordaje es de: "<<desabordaje4<<" personas\n"<<endl;
	 
	 
	break;	
	
	 case 3: 
	 
	  cout<<"\nPRIMERA ESTACION: \n";
	 cout<<"Su tiempo de abordaje fue de: "<<tiempo<<" minutos\n";
	 cout<<"Su tiempo de desabordaje fue de: "<<tiempo2<<" minutos\n"<<endl;
	 
	 cout<<"SEGUNDA ESTACION: \n";
   	 cout<<"Su tiempo de abordaje fue de: "<<tiempo3<<" minutos\n";
	 cout<<"Su tiempo de desabordaje fue de: "<<tiempo4<<" minutos\n"<<endl;
	 
	 cout<<"TERCERA ESTACION: \n";
	 cout<<"Su tiempo de abordaje fue de: "<<tiempo5<<" minutos\n";
	 cout<<"Su tiempo de desabordaje fue de: "<<tiempo6<<" minutos\n"<<endl;
	 
	 cout<<"CUARTA ESTACION: \n";
	 cout<<"Su tiempo de abordaje fue de: "<<tiempo7<<" minutos\n";
	 cout<<"Su tiempo de desabordaje fue de: "<<tiempo8<<" minutos\n"<<endl;
	 break;
	
	case 4: 
	
		cout <<"\nSimulacion Completada. Disfrute su viaje \n"<<endl;
		cout << "\nPropietarios del Programa.\n ";
		cout << "\nDANIEL CARRENO C.I; 28.492.649\n ";
		cout << "\nMARISELYS FUENTES C.I; 28.074.214\n ";
		cout << "\nKEVIN TORRES OYAGA C.I; 27.693.129\n ";
		cout << "\nJUNIOR RICO C.I; 28.166.844\n ";
	    cout<<"\n----------------(^_^)--------------------\n"<<endl;
		}
} while (opcion!=4);
	
 system("pause");
return 0;	
}


 void archivo_abordaje(){//-----ARCHIVO DE ABORDAJE Y DESABORDAJE----- 
	
    ofstream arch1;
 	
 	arch1.open("archivo1.txt",ios::out);//---abriendo el archivo---
 	if(arch1.fail()){
 		cout<<"No se pudo abrir el archivo";
 		exit(1);
	 }
	 arch1<<"PRIMERA ESTACION: \n";
	 arch1<<"Su abordaje es de: "<<abordaje<<" personas.\n";
	 arch1<<"Su desabordaje es de: "<<desabordaje<<" personas\n";
	 
	 arch1<<"SEGUNDA ESTACION: \n";
	 arch1<<"Su abordaje es de: "<<abordaje2<<" personas.\n";
	 arch1<<"Su desabordaje es de: "<<desabordaje2<<" personas\n";
	 
	 arch1<<"TERCERA ESTACION: \n";
	 arch1<<"Su abordaje es de: "<<abordaje3<<" personas.\n";
	 arch1<<"Su desabordaje es de: "<<desabordaje3<<" personas\n";
	 
	 arch1<<"CUARTA ESTACION: \n";
	 arch1<<"Su abordaje es de: "<<abordaje4<<" personas.\n";
	 arch1<<"Su desabordaje es de: "<<desabordaje4<<" personas\n";
	 
	 arch1.close();//---cerrar archivo---
	 
 }

 void archivo_tiempo(){//-----ARCHIVO DEL TIEMPO DE ABORDAJE Y DESABORDAJE----- 
   
	ofstream arch2;
 	
 	arch2.open("archivo2.txt",ios::out);//---abriendo el archivo---
 	if(arch2.fail()){
 		cout<<"No se pudo abrir el archivo";
 		exit(1);
	 }
	 arch2<<"PRIMERA ESTACION: \n";
	 arch2<<"Su tiempo de abordaje fue de: "<<tiempo<<" minutos\n";
	 arch2<<"Su tiempo de desabordaje fue de: "<<tiempo2<<" minutos\n";
	 
	 arch2<<"SEGUNDA ESTACION: \n";
   	 arch2<<"Su tiempo de abordaje fue de: "<<tiempo3<<" minutos\n";
	 arch2<<"Su tiempo de desabordaje fue de: "<<tiempo4<<" minutos\n";
	 
	 arch2<<"TERCERA ESTACION: \n";
	 arch2<<"Su tiempo de abordaje fue de: "<<tiempo5<<" minutos\n";
	 arch2<<"Su tiempo de desabordaje fue de: "<<tiempo6<<" minutos\n";
	 
	 arch2<<"CUARTA ESTACION: \n";
	 arch2<<"Su tiempo de abordaje fue de: "<<tiempo7<<" minutos\n";
	 arch2<<"Su tiempo de desabordaje fue de: "<<tiempo8<<" minutos\n";
	 
	 arch2.close();//---cerrar archivo---
	 
 }
