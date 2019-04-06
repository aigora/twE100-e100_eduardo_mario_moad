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

// Main
int main(){
	// Configuraci�n para el uso de caracteres en castellano
	setlocale(LC_ALL, "spanish"); 
	
	// Variables
	int  opcion, opcionmotorsuv, opcioncajasuv, opciongamasuv, opcioncolorstandardsuv, opcioncolormediumsuv, opcioncolorluxurysuv;
	int  opcionmotorsedan, opcioncajasedan1, opcioncajasedan2, opciongamasedan, opcioncolorstandardsedan, opcioncolormediumsedan, opcioncolorluxurysedan; 
	int  opcionmotorcoupe, opcioncajacoupe, opciongamacoupe, opcioncolorstandardcoupe, opcioncolormediumcoupe, opcioncolorluxurycoupe;
	int  opcionmotormono, opcioncajamono, opciongamamono, opcioncolorstandardmono, opcioncolormediummono, opcioncolorluxurymono;
	Sdatos dato;
	
	// Inicio programa
	// se toman los datos del cliente y la fecha para la factura 
	printf("************ Bienvenido al configurador de Veh�culos ************\n");
	printf("\nAcontinuaci�n introduzca la fecha");
	printf("\nIndique el d�a:  ");
	scanf("%d", &dato.factura.dia);
	fflush(stdin);
	printf("Indique el mes:  ");
	scanf("%d", &dato.factura.mes);
	fflush(stdin);
	printf("Indique el a�o:  ");
	scanf("%d", &dato.factura.anno);
	fflush(stdin);	
	printf("\nIndique el nombre del cliente:  ");
	gets(dato.nombre);
	printf("Indique el primer apellido del cliente:  ");
	gets(dato.apellido1);
	printf("Indique el segundo apellido del cliente:  ");
	gets(dato.apellido2);	
	
	// Prueba de la primra parte funcionamineto de las estructuas 
	printf("\nEl cliente se llama: %s %s %s", dato.nombre, dato.apellido1, dato.apellido2);
	printf("\nLa fecha de hoy es:  %d/%d/%d", dato.factura.dia, dato.factura.mes, dato.factura.anno);
	
	
	// Inicio de la configuraci�n
	printf("\n\nInicio de la configuraci�n:  ");
	printf("\nSeleccione el tipo de veh�culo que desea configurar:\n  ");
        printf( "\n   1. Veh�culo Utilitario Deportivo (S.U.V )");
        printf( "\n   2. Sed�n");
        printf( "\n   3. Coup�/Deportivo");
        printf( "\n   4. Monovolumen" );
        printf( "\n\n   Introduzca opci�n (1-4): " );

        scanf( "%d", &opcion );
		switch ( opcion )
        {
            case 1: printf( "\n   Ha seleccionado Veh�culo Utilitario Deportivo (S.U.V )\n ");
                        // Selecci�n del motor
                    	printf("\nSeleccione el tipo de motor para su veh�culo:\n  ");
                        printf( "\n   1. Gas�leo(Diesel)");
                        printf( "\n   2. Gasolina");
                        printf( "\n   3. GNC(G�s)");
                        printf( "\n\n   Introduzca opci�n (1-3): " );
                        scanf( "%d", &opcionmotorsuv);
                        switch ( opcionmotorsuv ){
                        	    case 1: printf( "\n   Ha seleccionado motor de Gas�leo(Diesel)\n ");
                                break;
                                case 2: printf( "\n   Ha seleccionado motor de Gasolina\n ");
                                break;
                                case 3: printf( "\n   Ha Selecionado motor de GNC(G�s)\n "); 
			                    break; 
								}
						// Selecci�n de la caja de cambios 		
						printf("\nSeleccione el tipo de caja de cambios para su veh�culo:\n  ");
                        printf( "\n   1. Autom�tico");
                        printf( "\n   2. Manual");
                        printf( "\n\n   Introduzca opci�n (1-2): " );
                        scanf( "%d", &opcioncajasuv);
                        switch ( opcioncajasuv ){
                        	    case 1: printf( "\n   Ha seleccionado caja de cambios autom�tica\n ");
                                break;
                                case 2: printf( "\n   Ha seleccionado caja de cambios manual\n ");
                                break; 
								}
						// Selecci�n de la gama 
						printf("\nSeleccione la gama de acabados:\n  ");
                        printf( "\n   1. Standard");
                        printf( "\n   2. Medium");
                        printf( "\n   3. Luxury");
                        printf( "\n\n   Introduzca opci�n (1-3): " );
                        scanf( "%d", &opciongamasuv);
                        switch ( opciongamasuv ){
                        	    case 1: printf( "\n   Ha seleccionado gama Standard\n ");
                        	            // Selecci�n del color 
                        	           	printf("\nSeleccione el color de su veh�culo:\n  ");
                                        printf( "\n   1. Blanco");
                                        printf( "\n   2. Rojo");
                                        printf( "\n\n   Introduzca opci�n (1-2): " );
                                        scanf( "%d", &opcioncolorstandardsuv);
                                        switch ( opcioncolorstandardsuv ){
                        	            case 1: printf( "\n   Ha seleccionado color blanco\n ");
                                        break;
                                        case 2: printf( "\n   Ha seleccionado color rojo\n ");
                                        break; 
								        }
                                break;
                                case 2: printf( "\n   Ha seleccionado gama Medium\n ");
                        	            // Selecci�n del color 
                        	           	printf("\nSeleccione el color de su veh�culo:\n  ");
                                        printf( "\n   1. Blanco");
                                        printf( "\n   2. Rojo");
                                        printf( "\n   3. Azul");
                                        printf( "\n\n   Introduzca opci�n (1-3): " );
                                        scanf( "%d", &opcioncolormediumsuv);
                                        switch ( opcioncolormediumsuv ){
                        	            case 1: printf( "\n   Ha seleccionado color blanco\n ");
                                        break;
                                        case 2: printf( "\n   Ha seleccionado color rojo\n ");
                                        break; 
                                        case 3: printf( "\n   Ha seleccionado color Azul\n ");
                                        break;                                         
								        }                                        
                                break;
                                case 3: printf( "\n   Ha Selecionado gama Luxury\n "); 
                        	            // Selecci�n del color 
                        	           	printf("\nSeleccione el color de su veh�culo:\n  ");
                                        printf( "\n   1. Blanco");
                                        printf( "\n   2. Rojo");
                                        printf( "\n   3. Azul");
                                        printf( "\n   4. Gris");
                                        printf( "\n   5. Negro");
                                        printf( "\n\n   Introduzca opci�n (1-5): " );
                                        scanf( "%d", &opcioncolorluxurysuv);
                                        switch ( opcioncolorluxurysuv ){
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
                    break;
            case 2: printf( "\n   Ha seleccionado Sed�n ");
                        // Selecci�n del motor
                    	printf("\nSeleccione el tipo de motor para su veh�culo:\n  ");
                        printf( "\n   1. Gas�leo(Diesel)");
                        printf( "\n   2. Gasolina");
                        printf( "\n   3. El�ctrico");
                        printf( "\n\n   Introduzca opci�n (1-3): " );
                        scanf( "%d", &opcionmotorsedan);
                        switch ( opcionmotorsedan ){
                        	    case 1: printf( "\n   Ha seleccionado motor de Gas�leo(Diesel)\n ");
						                    // Selecci�n de la caja de cambios 		
					                    	printf("\nSeleccione el tipo de caja de cambios para su veh�culo:\n  ");
                                            printf( "\n   1. Autom�tico");
                                            printf( "\n   2. Manual");
                                            printf( "\n\n   Introduzca opci�n (1-2): " );
                                            scanf( "%d", &opcioncajasedan1);
                                            switch ( opcioncajasedan1 ){
                        	                case 1: printf( "\n   Ha seleccionado caja de cambios autom�tica\n ");
                                            break;
                                            case 2: printf( "\n   Ha seleccionado caja de cambios manual\n ");
                                            break; 
								            }                        	    
                                break;
                                case 2: printf( "\n   Ha seleccionado motor de Gasolina\n ");
						                    // Selecci�n de la caja de cambios 		
					                    	printf("\nSeleccione el tipo de caja de cambios para su veh�culo:\n  ");
                                            printf( "\n   1. Autom�tico");
                                            printf( "\n   2. Manual");
                                            printf( "\n\n   Introduzca opci�n (1-2): " );
                                            scanf( "%d", &opcioncajasedan2);
                                            switch ( opcioncajasedan2 ){
                        	                case 1: printf( "\n   Ha seleccionado caja de cambios autom�tica\n ");
                                            break;
                                            case 2: printf( "\n   Ha seleccionado caja de cambios manual\n ");
                                            break; 
								            }                                     
                                break;
                                case 3: printf( "\n   Ha Selecionado motor El�ctrico\n "); 
						                    // Selecci�n de la caja de cambios 		
					                    	printf("\nLos veh�culos el�ctricos solo est�n dispoinibles con caja autom�tica\n  ");                                
			                    break; 
								}
						// Selecci�n de la gama 
						printf("\nSeleccione la gama de acabados:\n  ");
                        printf( "\n   1. Standard");
                        printf( "\n   2. Medium");
                        printf( "\n   3. Luxury");
                        printf( "\n\n   Introduzca opci�n (1-3): " );
                        scanf( "%d", &opciongamasedan);
                        switch ( opciongamasedan ){
                        	    case 1: printf( "\n   Ha seleccionado gama Standard\n ");
                        	            // Selecci�n del color 
                        	           	printf("\nSeleccione el color de su veh�culo:\n  ");
                                        printf( "\n   1. Blanco");
                                        printf( "\n   2. Rojo");
                                        printf( "\n\n   Introduzca opci�n (1-2): " );
                                        scanf( "%d", &opcioncolorstandardsedan);
                                        switch ( opcioncolorstandardsedan ){
                        	            case 1: printf( "\n   Ha seleccionado color blanco\n ");
                                        break;
                                        case 2: printf( "\n   Ha seleccionado color rojo\n ");
                                        break; 
								        }
                                break;
                                case 2: printf( "\n   Ha seleccionado gama Medium\n ");
                        	            // Selecci�n del color 
                        	           	printf("\nSeleccione el color de su veh�culo:\n  ");
                                        printf( "\n   1. Blanco");
                                        printf( "\n   2. Rojo");
                                        printf( "\n   3. Azul");
                                        printf( "\n\n   Introduzca opci�n (1-3): " );
                                        scanf( "%d", &opcioncolormediumsedan);
                                        switch ( opcioncolormediumsedan ){
                        	            case 1: printf( "\n   Ha seleccionado color blanco\n ");
                                        break;
                                        case 2: printf( "\n   Ha seleccionado color rojo\n ");
                                        break; 
                                        case 3: printf( "\n   Ha seleccionado color Azul\n ");
                                        break;                                         
								        }                                        
                                break;
                                case 3: printf( "\n   Ha Selecionado gama Luxury\n "); 
                        	            // Selecci�n del color 
                        	           	printf("\nSeleccione el color de su veh�culo:\n  ");
                                        printf( "\n   1. Blanco");
                                        printf( "\n   2. Rojo");
                                        printf( "\n   3. Azul");
                                        printf( "\n   4. Gris");
                                        printf( "\n   5. Negro");
                                        printf( "\n\n   Introduzca opci�n (1-5): " );
                                        scanf( "%d", &opcioncolorluxurysedan);
                                        switch ( opcioncolorluxurysedan ){
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
                    break;
            case 3: printf( "\n   Ha seleccionado Coup�/Deportivo ");
                        // Selecci�n del motor
                    	printf("\nSeleccione el tipo de motor para su veh�culo:\n  ");
                        printf( "\n   1. Gas�leo(Diesel)");
                        printf( "\n   2. Gasolina");
                        printf( "\n   3. GNC(G�s)");
                        printf( "\n\n   Introduzca opci�n (1-3): " );
                        scanf( "%d", &opcionmotorcoupe);
                        switch ( opcionmotorcoupe ){
                        	    case 1: printf( "\n   Ha seleccionado motor de Gas�leo(Diesel)\n ");
                                break;
                                case 2: printf( "\n   Ha seleccionado motor de Gasolina\n ");
                                break;
                                case 3: printf( "\n   Ha Selecionado motor de GNC(G�s)\n "); 
			                    break; 
								}
						// Selecci�n de la caja de cambios 		
						printf("\nSeleccione el tipo de caja de cambios para su veh�culo:\n  ");
                        printf( "\n   1. Autom�tico");
                        printf( "\n   2. Manual");
                        printf( "\n\n   Introduzca opci�n (1-2): " );
                        scanf( "%d", &opcioncajacoupe);
                        switch ( opcioncajacoupe ){
                        	    case 1: printf( "\n   Ha seleccionado caja de cambios autom�tica\n ");
                                break;
                                case 2: printf( "\n   Ha seleccionado caja de cambios manual\n ");
                                break; 
								}
						// Selecci�n de la gama 
						printf("\nSeleccione la gama de acabados:\n  ");
                        printf( "\n   1. Standard");
                        printf( "\n   2. Medium");
                        printf( "\n   3. Luxury");
                        printf( "\n\n   Introduzca opci�n (1-3): " );
                        scanf( "%d", &opciongamacoupe);
                        switch ( opciongamacoupe ){
                        	    case 1: printf( "\n   Ha seleccionado gama Standard\n ");
                        	            // Selecci�n del color 
                        	           	printf("\nSeleccione el color de su veh�culo:\n  ");
                                        printf( "\n   1. Blanco");
                                        printf( "\n   2. Rojo");
                                        printf( "\n\n   Introduzca opci�n (1-2): " );
                                        scanf( "%d", &opcioncolorstandardcoupe);
                                        switch ( opcioncolorstandardcoupe ){
                        	            case 1: printf( "\n   Ha seleccionado color blanco\n ");
                                        break;
                                        case 2: printf( "\n   Ha seleccionado color rojo\n ");
                                        break; 
								        }
                                break;
                                case 2: printf( "\n   Ha seleccionado gama Medium\n ");
                        	            // Selecci�n del color 
                        	           	printf("\nSeleccione el color de su veh�culo:\n  ");
                                        printf( "\n   1. Blanco");
                                        printf( "\n   2. Rojo");
                                        printf( "\n   3. Azul");
                                        printf( "\n\n   Introduzca opci�n (1-3): " );
                                        scanf( "%d", &opcioncolormediumcoupe);
                                        switch ( opcioncolormediumcoupe ){
                        	            case 1: printf( "\n   Ha seleccionado color blanco\n ");
                                        break;
                                        case 2: printf( "\n   Ha seleccionado color rojo\n ");
                                        break; 
                                        case 3: printf( "\n   Ha seleccionado color Azul\n ");
                                        break;                                         
								        }                                        
                                break;
                                case 3: printf( "\n   Ha Selecionado gama Luxury\n "); 
                        	            // Selecci�n del color 
                        	           	printf("\nSeleccione el color de su veh�culo:\n  ");
                                        printf( "\n   1. Blanco");
                                        printf( "\n   2. Rojo");
                                        printf( "\n   3. Azul");
                                        printf( "\n   4. Gris");
                                        printf( "\n   5. Negro");
                                        printf( "\n\n   Introduzca opci�n (1-5): " );
                                        scanf( "%d", &opcioncolorluxurycoupe);
                                        switch ( opcioncolorluxurycoupe ){
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
                    break;
            case 4: printf( "\n   Ha Selecionado Monovolumen "); 
                        // Selecci�n del motor
                    	printf("\nSeleccione el tipo de motor para su veh�culo:\n  ");
                        printf( "\n   1. Gas�leo(Diesel)");
                        printf( "\n   2. Gasolina");
                        printf( "\n   3. GNC(G�s)");
                        printf( "\n\n   Introduzca opci�n (1-3): " );
                        scanf( "%d", &opcionmotormono);
                        switch ( opcionmotormono ){
                        	    case 1: printf( "\n   Ha seleccionado motor de Gas�leo(Diesel)\n ");
                                break;
                                case 2: printf( "\n   Ha seleccionado motor de Gasolina\n ");
                                break;
                                case 3: printf( "\n   Ha Selecionado motor de GNC(G�s)\n "); 
			                    break; 
								}
						// Selecci�n de la caja de cambios 		
						printf("\nSeleccione el tipo de caja de cambios para su veh�culo:\n  ");
                        printf( "\n   1. Autom�tico");
                        printf( "\n   2. Manual");
                        printf( "\n\n   Introduzca opci�n (1-2): " );
                        scanf( "%d", &opcioncajamono);
                        switch ( opcioncajamono ){
                        	    case 1: printf( "\n   Ha seleccionado caja de cambios autom�tica\n ");
                                break;
                                case 2: printf( "\n   Ha seleccionado caja de cambios manual\n ");
                                break; 
								}
						// Selecci�n de la gama 
						printf("\nSeleccione la gama de acabados:\n  ");
                        printf( "\n   1. Standard");
                        printf( "\n   2. Medium");
                        printf( "\n   3. Luxury");
                        printf( "\n\n   Introduzca opci�n (1-3): " );
                        scanf( "%d", &opciongamamono);
                        switch ( opciongamasuv ){
                        	    case 1: printf( "\n   Ha seleccionado gama Standard\n ");
                        	            // Selecci�n del color 
                        	           	printf("\nSeleccione el color de su veh�culo:\n  ");
                                        printf( "\n   1. Blanco");
                                        printf( "\n   2. Rojo");
                                        printf( "\n\n   Introduzca opci�n (1-2): " );
                                        scanf( "%d", &opcioncolorstandardmono);
                                        switch ( opcioncolorstandardmono ){
                        	            case 1: printf( "\n   Ha seleccionado color blanco\n ");
                                        break;
                                        case 2: printf( "\n   Ha seleccionado color rojo\n ");
                                        break; 
								        }
                                break;
                                case 2: printf( "\n   Ha seleccionado gama Medium\n ");
                        	            // Selecci�n del color 
                        	           	printf("\nSeleccione el color de su veh�culo:\n  ");
                                        printf( "\n   1. Blanco");
                                        printf( "\n   2. Rojo");
                                        printf( "\n   3. Azul");
                                        printf( "\n\n   Introduzca opci�n (1-3): " );
                                        scanf( "%d", &opcioncolormediummono);
                                        switch ( opcioncolormediummono ){
                        	            case 1: printf( "\n   Ha seleccionado color blanco\n ");
                                        break;
                                        case 2: printf( "\n   Ha seleccionado color rojo\n ");
                                        break; 
                                        case 3: printf( "\n   Ha seleccionado color Azul\n ");
                                        break;                                         
								        }                                        
                                break;
                                case 3: printf( "\n   Ha Selecionado gama Luxury\n "); 
                        	            // Selecci�n del color 
                        	           	printf("\nSeleccione el color de su veh�culo:\n  ");
                                        printf( "\n   1. Blanco");
                                        printf( "\n   2. Rojo");
                                        printf( "\n   3. Azul");
                                        printf( "\n   4. Gris");
                                        printf( "\n   5. Negro");
                                        printf( "\n\n   Introduzca opci�n (1-5): " );
                                        scanf( "%d", &opcioncolorluxurymono);
                                        switch ( opcioncolorluxurymono){
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
			        break; 
         }
		
	

	
	return 0;


}

