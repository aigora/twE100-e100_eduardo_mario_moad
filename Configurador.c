#include <stdio.h>
#include<locale.h>

#define N 100
// Estructuras para datos del cliente
typedef struct{
     int dia;
     int mes;
     int anno;
} Sfecha;

typedef struct{
    char nombre [N];
    char apellido1 [N];
    char apellido2 [N];
    Sfecha factura;
} Sdatos;


Sdatos DatosyFecha (void);
int Configuracionuno (void);
int Configuraciondos (void);
// Funcion Main
int main(){
	// Configuración para el uso de caracteres en castellano
	setlocale(LC_ALL, "spanish"); 
	
	// Variables
	int  opcion;
	Sdatos dato;
	
	// Inicio programa
	// se toman los datos del cliente y la fecha para la factura 
	printf("************ Bienvenido al configurador de Vehículos ************\n");
	dato = DatosyFecha ();	
	// Prueba de la primra parte funcionamineto de las estructuas 
	printf("\nEl cliente se llama: %s %s %s", dato.nombre, dato.apellido1, dato.apellido2);
	printf("\nLa fecha de hoy es:  %d/%d/%d", dato.factura.dia, dato.factura.mes, dato.factura.anno);
	
	
	// Inicio de la configuración
	printf("\n\nInicio de la configuración:  ");
	printf("\nSeleccione el tipo de vehículo que desea configurar:\n  ");
        printf( "\n   1. Vehículo Utilitario Deportivo (S.U.V )");
        printf( "\n   2. Sedán");
        printf( "\n   3. Coupé/Deportivo");
        printf( "\n   4. Monovolumen" );
        printf( "\n\n   Introduzca opción (1-4): " );

        scanf( "%d", &opcion );
		switch ( opcion )
        {
            case 1: printf( "\n   Ha seleccionado Vehículo Utilitario Deportivo (S.U.V )\n ");
                            Configuracionuno ();     
                        				
                    break;
            case 2: printf( "\n   Ha seleccionado Sedán ");
			              Configuraciondos();       
                        
                    break;
            case 3: printf( "\n   Ha seleccionado Coupé/Deportivo ");
                           Configuracionuno (); 	            
                    break;
            case 4: printf( "\n   Ha Selecionado Monovolumen "); 
                          Configuracionuno (); 
			        break; 
         }
	
	return 0;
}




// Funciones

Sdatos DatosyFecha (void){
	Sdatos dato;
	// se toman los datos del cliente y la fecha para la factura 
	printf("\nAcontinuación introduzca la fecha");
	printf("\nIndique el día:  ");
	scanf("%d", &dato.factura.dia);
	fflush(stdin);
	printf("Indique el mes:  ");
	scanf("%d", &dato.factura.mes);
	fflush(stdin);
	printf("Indique el año:  ");
	scanf("%d", &dato.factura.anno);
	fflush(stdin);	
	printf("\nIndique el nombre del cliente:  ");
	gets(dato.nombre);
	printf("Indique el primer apellido del cliente:  ");
	gets(dato.apellido1);
	printf("Indique el segundo apellido del cliente:  ");
	gets(dato.apellido2);
	
	return dato;
}

 int Configuracionuno (void){
 	int  opcionmotor1, opcioncaja1, opciongama1, opcioncolorstandard1, opcioncolormedium1, opcioncolorluxury1;
                        // Selección del motor
                    	printf("\nSeleccione el tipo de motor para su vehículo:\n  ");
                        printf( "\n   1. Gasóleo(Diesel)");
                        printf( "\n   2. Gasolina");
                        printf( "\n   3. GNC(Gás)");
                        printf( "\n\n   Introduzca opción (1-3): " );
                        scanf( "%d", &opcionmotor1);
                        switch ( opcionmotor1 ){
                        	    case 1: printf( "\n   Ha seleccionado motor de Gasóleo(Diesel)\n ");
                                break;
                                case 2: printf( "\n   Ha seleccionado motor de Gasolina\n ");
                                break;
                                case 3: printf( "\n   Ha Selecionado motor de GNC(Gás)\n "); 
			                    break; 
								}
						// Selección de la caja de cambios 		
						printf("\nSeleccione el tipo de caja de cambios para su vehículo:\n  ");
                        printf( "\n   1. Automático");
                        printf( "\n   2. Manual");
                        printf( "\n\n   Introduzca opción (1-2): " );
                        scanf( "%d", &opcioncaja1);
                        switch ( opcioncaja1 ){
                        	    case 1: printf( "\n   Ha seleccionado caja de cambios automática\n ");
                                break;
                                case 2: printf( "\n   Ha seleccionado caja de cambios manual\n ");
                                break; 
								}
						// Selección de la gama 
						printf("\nSeleccione la gama de acabados:\n  ");
                        printf( "\n   1. Standard");
                        printf( "\n   2. Medium");
                        printf( "\n   3. Luxury");
                        printf( "\n\n   Introduzca opción (1-3): " );
                        scanf( "%d", &opciongama1);
                        switch ( opciongama1 ){
                        	    case 1: printf( "\n   Ha seleccionado gama Standard\n ");
                        	            // Selección del color 
                        	           	printf("\nSeleccione el color de su vehículo:\n  ");
                                        printf( "\n   1. Blanco");
                                        printf( "\n   2. Rojo");
                                        printf( "\n\n   Introduzca opción (1-2): " );
                                        scanf( "%d", &opcioncolorstandard1);
                                        switch ( opcioncolorstandard1 ){
                        	            case 1: printf( "\n   Ha seleccionado color blanco\n ");
                                        break;
                                        case 2: printf( "\n   Ha seleccionado color rojo\n ");
                                        break; 
								        }
                                break;
                                case 2: printf( "\n   Ha seleccionado gama Medium\n ");
                        	            // Selección del color 
                        	           	printf("\nSeleccione el color de su vehículo:\n  ");
                                        printf( "\n   1. Blanco");
                                        printf( "\n   2. Rojo");
                                        printf( "\n   3. Azul");
                                        printf( "\n\n   Introduzca opción (1-3): " );
                                        scanf( "%d", &opcioncolormedium1);
                                        switch ( opcioncolormedium1){
                        	            case 1: printf( "\n   Ha seleccionado color blanco\n ");
                                        break;
                                        case 2: printf( "\n   Ha seleccionado color rojo\n ");
                                        break; 
                                        case 3: printf( "\n   Ha seleccionado color Azul\n ");
                                        break;                                         
								        }                                        
                                break;
                                case 3: printf( "\n   Ha Selecionado gama Luxury\n "); 
                        	            // Selección del color 
                        	           	printf("\nSeleccione el color de su vehículo:\n  ");
                                        printf( "\n   1. Blanco");
                                        printf( "\n   2. Rojo");
                                        printf( "\n   3. Azul");
                                        printf( "\n   4. Gris");
                                        printf( "\n   5. Negro");
                                        printf( "\n\n   Introduzca opción (1-5): " );
                                        scanf( "%d", &opcioncolorluxury1);
                                        switch ( opcioncolorluxury1){
                        	            case 1: printf( "\n   Ha seleccionado color blanco\n ");
                                        break;
                                        case 2: printf( "\n   Ha seleccionado color rojo\n ");
                                        break; 
                                        case 3: printf( "\n   Ha seleccionado color Azul\n ");
                                        break;  
		                                case 4: printf( "\n   Ha seleccionado color Gris\n ");
                                        break; 
                                        case 5: printf( "\n   Ha seleccionado color Negro\n ");
                                        break;										                                      
								        }                                  
			                    break; 
								}	
	
	
	return 0;																														
}


int Configuraciondos (void){
	int  opcionmotor2, opcioncaja12, opcioncaja22, opciongama2, opcioncolorstandard2, opcioncolormedium2, opcioncolorluxury2; 
                        // Selección del motor
                    	printf("\nSeleccione el tipo de motor para su vehículo:\n  ");
                        printf( "\n   1. Gasóleo(Diesel)");
                        printf( "\n   2. Gasolina");
                        printf( "\n   3. Eléctrico");
                        printf( "\n\n   Introduzca opción (1-3): " );
                        scanf( "%d", &opcionmotor2);
                        switch ( opcionmotor2){
                        	    case 1: printf( "\n   Ha seleccionado motor de Gasóleo(Diesel)\n ");
						                    // Selección de la caja de cambios 		
					                    	printf("\nSeleccione el tipo de caja de cambios para su vehículo:\n  ");
                                            printf( "\n   1. Automático");
                                            printf( "\n   2. Manual");
                                            printf( "\n\n   Introduzca opción (1-2): " );
                                            scanf( "%d", &opcioncaja12);
                                            switch ( opcioncaja12){
                        	                case 1: printf( "\n   Ha seleccionado caja de cambios automática\n ");
                                            break;
                                            case 2: printf( "\n   Ha seleccionado caja de cambios manual\n ");
                                            break; 
								            }                        	    
                                break;
                                case 2: printf( "\n   Ha seleccionado motor de Gasolina\n ");
						                    // Selección de la caja de cambios 		
					                    	printf("\nSeleccione el tipo de caja de cambios para su vehículo:\n  ");
                                            printf( "\n   1. Automático");
                                            printf( "\n   2. Manual");
                                            printf( "\n\n   Introduzca opción (1-2): " );
                                            scanf( "%d", &opcioncaja22);
                                            switch ( opcioncaja22){
                        	                case 1: printf( "\n   Ha seleccionado caja de cambios automática\n ");
                                            break;
                                            case 2: printf( "\n   Ha seleccionado caja de cambios manual\n ");
                                            break; 
								            }                                     
                                break;
                                case 3: printf( "\n   Ha Selecionado motor Eléctrico\n "); 
						                    // Selección de la caja de cambios 		
					                    	printf("\nLos vehículos eléctricos solo están dispoinibles con caja automática\n  ");                                
			                    break; 
								}
						// Selección de la gama 
						printf("\nSeleccione la gama de acabados:\n  ");
                        printf( "\n   1. Standard");
                        printf( "\n   2. Medium");
                        printf( "\n   3. Luxury");
                        printf( "\n\n   Introduzca opción (1-3): " );
                        scanf( "%d", &opciongama2);
                        switch ( opciongama2 ){
                        	    case 1: printf( "\n   Ha seleccionado gama Standard\n ");
                        	            // Selección del color 
                        	           	printf("\nSeleccione el color de su vehículo:\n  ");
                                        printf( "\n   1. Blanco");
                                        printf( "\n   2. Rojo");
                                        printf( "\n\n   Introduzca opción (1-2): " );
                                        scanf( "%d", &opcioncolorstandard2);
                                        switch ( opcioncolorstandard2 ){
                        	            case 1: printf( "\n   Ha seleccionado color blanco\n ");
                                        break;
                                        case 2: printf( "\n   Ha seleccionado color rojo\n ");
                                        break; 
								        }
                                break;
                                case 2: printf( "\n   Ha seleccionado gama Medium\n ");
                        	            // Selección del color 
                        	           	printf("\nSeleccione el color de su vehículo:\n  ");
                                        printf( "\n   1. Blanco");
                                        printf( "\n   2. Rojo");
                                        printf( "\n   3. Azul");
                                        printf( "\n\n   Introduzca opción (1-3): " );
                                        scanf( "%d", &opcioncolormedium2);
                                        switch ( opcioncolormedium2){
                        	            case 1: printf( "\n   Ha seleccionado color blanco\n ");
                                        break;
                                        case 2: printf( "\n   Ha seleccionado color rojo\n ");
                                        break; 
                                        case 3: printf( "\n   Ha seleccionado color Azul\n ");
                                        break;                                         
								        }                                        
                                break;
                                case 3: printf( "\n   Ha Selecionado gama Luxury\n "); 
                        	            // Selección del color 
                        	           	printf("\nSeleccione el color de su vehículo:\n  ");
                                        printf( "\n   1. Blanco");
                                        printf( "\n   2. Rojo");
                                        printf( "\n   3. Azul");
                                        printf( "\n   4. Gris");
                                        printf( "\n   5. Negro");
                                        printf( "\n\n   Introduzca opción (1-5): " );
                                        scanf( "%d", &opcioncolorluxury2);
                                        switch ( opcioncolorluxury2){
                        	            case 1: printf( "\n   Ha seleccionado color blanco\n ");
                                        break;
                                        case 2: printf( "\n   Ha seleccionado color rojo\n ");
                                        break; 
                                        case 3: printf( "\n   Ha seleccionado color Azul\n ");
                                        break;  
		                                case 4: printf( "\n   Ha seleccionado color Gris\n ");
                                        break; 
                                        case 5: printf( "\n   Ha seleccionado color Negro\n ");
                                        break;										                                      
								        }                                  
			                    break; 
								} 
								
	return 0;														     							    	
}
