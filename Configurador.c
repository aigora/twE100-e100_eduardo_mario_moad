/* Configurador de veh?ulos para concesionario*/
/* Realizado por Mario Garc? de Marina, Eduardo G?ez Godino, Moad Hilaly Cherif*/
#include <stdio.h>
#include <locale.h>
#include <string.h>

#define N 100
// Estructuras para datos del cliente y fecha
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

// Llamada a las funciones 
Sdatos DatosyFecha (void);
int Configuracionuno (Sdatos dato, int opcion);
int Configuraciondos (Sdatos dato, int opcion);
void factura1(Sdatos dato, int opcionmotor, int opcioncaja, int opciongama, int opcioncolor, int opcion);
void factura2(Sdatos dato, int opcionmotor, int opcioncaja, int opciongama, int opcioncolor, int opcion);
// Funcion Main
int main(){
	// Configuraci? para el uso de caracteres en castellano
	setlocale(LC_ALL, "spanish"); 
	
	// Variables
	int  opcion;
	Sdatos dato;
	
	// Inicio programa
	// se toman los datos del cliente y la fecha para la factura 
	printf("************ Bienvenido al configurador de Veh?ulos ************\n");
	dato = DatosyFecha ();	
	// Muestra de los datos tomados al cliente para el vendedor y la fecha
	printf("\nEl cliente se llama: %s %s %s", dato.nombre, dato.apellido1, dato.apellido2);
	printf("\nLa fecha de hoy es:  %d/%d/%d", dato.factura.dia, dato.factura.mes, dato.factura.anno);
	
	// Inicio de la configuraci?
	printf("\n\nInicio de la configuraci?:  ");
	printf("\nSeleccione el tipo de veh?ulo que desea configurar:\n  ");
    printf( "\n   1. Veh?ulo Utilitario Deportivo (S.U.V )");
    printf( "\n   2. Sed?");
    printf( "\n   3. Coup?/Deportivo");
    printf( "\n   4. Monovolumen" );
    printf( "\n\n   Introduzca opci? (1-4): " );
	scanf( "%d", &opcion );
	fflush(stdin);
    while ((opcion < 1)||(opcion > 4)){
   		printf("    ?rror!!!\n");
        printf("   Por favor introduzca una opci? v?ida (1-4): ");
	    scanf( "%d", &opcion );
	    fflush(stdin);
	}
	switch ( opcion ){
        case 1: printf( "\n   Ha seleccionado Veh?ulo Utilitario Deportivo (S.U.V)\n");
            Configuracionuno (dato, opcion);      				
            break;
        case 2: printf( "\n   Ha seleccionado Sed?\n");
		    Configuraciondos(dato, opcion);       
            break;
        case 3: printf( "\n   Ha seleccionado Coup?/Deportivo\n");
            Configuraciondos (dato, opcion); 	            
            break;
        case 4: printf( "\n   Ha Selecionado Monovolumen\n"); 
            Configuracionuno (dato, opcion); 
			break; 
    } 
	printf("\nHa finalizado la configuraci?, presione cualquier tecla para salir.\n");
	printf("La factura se ha generado en el escritorio con el nombre del cliente y su primer apellido.\n");
	return 0;
}

// Funciones
// Funcion para recopilaci? de los datos del cliente
Sdatos DatosyFecha (void){
	Sdatos dato;
	// se toman los datos del cliente y la fecha para la factura 
	printf("\nAcontinuaci? introduzca la fecha");
	printf("\nIndique el d?:  ");
	scanf("%d", &dato.factura.dia);
	fflush(stdin);
	printf("Indique el mes:  ");
	scanf("%d", &dato.factura.mes);
	fflush(stdin);
	printf("Indique el a?:  ");
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
// Funcion para el primer tipo de configuraci?
 int Configuracionuno (Sdatos dato, int opcion){
 	// variables de la funci?
    int  opcionmotor1, opcioncaja1, opciongama1, opcioncolor1;
 	
    // Selecci? del motor
    printf("\nSeleccione el tipo de motor para su veh?ulo:\n  ");
    printf( "\n   1. Gas?eo(Diesel)");
    printf( "\n   2. Gasolina");
    printf( "\n   3. GNC(G?)");
    printf( "\n\n   Introduzca opci? (1-3): " );
    scanf( "%d", &opcionmotor1);
    fflush(stdin);
    while ((opcionmotor1 < 1)||(opcionmotor1 > 3)){
        printf("    ?rror!!!\n");
        printf("   Por favor introduzca una opci? v?ida (1-3): ");
	    scanf( "%d", &opcionmotor1 );
	    fflush(stdin);
	}
    switch ( opcionmotor1 ){
        case 1: printf( "\n   Ha seleccionado motor de Gas?eo(Diesel)\n ");
                break;
        case 2: printf( "\n   Ha seleccionado motor de Gasolina\n ");
                break;
        case 3: printf( "\n   Ha Selecionado motor de GNC(G?)\n "); 
	    		break; 
	}
	// Selecci? de la caja de cambios 		
	printf("\nSeleccione el tipo de caja de cambios para su veh?ulo:\n  ");
    printf( "\n   1. Autom?ico");
    printf( "\n   2. Manual");
    printf( "\n\n   Introduzca opci? (1-2): " );
    scanf( "%d", &opcioncaja1);
    fflush(stdin);
    while ((opcioncaja1 < 1)||(opcioncaja1 > 2)){
        printf("    ?rror!!!\n");
        printf("   Por favor introduzca una opci? v?ida (1-2): ");
	    scanf( "%d", &opcioncaja1 );
	    fflush(stdin);
	}                        
    switch ( opcioncaja1 ){
        case 1: printf( "\n   Ha seleccionado caja de cambios autom?ica\n ");
        		break;
        case 2: printf( "\n   Ha seleccionado caja de cambios manual\n ");
       			 break; 
	}
	// Selecci? de la gama de acabados
	printf("\nSeleccione la gama de acabados:\n  ");
    printf( "\n   1. Standard");
    printf( "\n   2. Medium");
    printf( "\n   3. Luxury");
    printf( "\n\n   Introduzca opci? (1-3): " );
    scanf( "%d", &opciongama1);
    fflush(stdin);
    while ((opciongama1 < 1)||(opciongama1 > 3)){
        printf("    ?rror!!!\n");
        printf("   Por favor introduzca una opci? v?ida (1-3): ");
	    scanf( "%d", &opciongama1 );
	    fflush(stdin);
	}  
	// Dentro de la gama se seleccionan unos colores detrminados                      
    switch ( opciongama1 ){
        case 1: printf( "\n   Ha seleccionado gama Standard\n ");
            	// Selecci? del color 
            	printf("\nSeleccione el color de su veh?ulo:\n  ");
            	printf( "\n   1. Blanco");
            	printf( "\n   2. Rojo");
            	printf( "\n\n   Introduzca opci? (1-2): " );
            	scanf( "%d", &opcioncolor1);
            	fflush(stdin);
                while ((opcioncolor1 < 1)||(opcioncolor1 > 2)){
                    printf("    ?rror!!!\n");
                    printf("   Por favor introduzca una opci? v?ida (1-2): ");
	                scanf( "%d", &opcioncolor1 );
	                fflush(stdin);
	            }                                        
           		switch ( opcioncolor1 ){
               		case 1: printf( "\n   Ha seleccionado color blanco\n");             		
            		    	break;
                	case 2: printf( "\n   Ha seleccionado color rojo\n");
         		        	break; 
		    	}
            	break;
        case 2: printf( "\n   Ha seleccionado gama Medium\n ");
            	// Selecci? del color para la gama media
            	printf("\nSeleccione el color de su veh?ulo:\n  ");
            	printf( "\n   1. Blanco");
           	 	printf( "\n   2. Rojo");
            	printf( "\n   3. Azul");
            	printf( "\n\n   Introduzca opci? (1-3): " );
            	scanf( "%d", &opcioncolor1);
            	fflush(stdin);
                while ((opcioncolor1 < 1)||(opcioncolor1 > 3)){
                    printf("    ?rror!!!\n");
                    printf("   Por favor introduzca una opci? v?ida (1-3): ");
	                scanf( "%d", &opcioncolor1 );
	                fflush(stdin);
	           	}                                        
            	switch ( opcioncolor1){
                	case 1: printf( "\n   Ha seleccionado color blanco\n");
                        	break;
                	case 2: printf( "\n   Ha seleccionado color rojo\n");
                       	 	break; 
                	case 3: printf( "\n   Ha seleccionado color Azul\n");
                        	break;                                         
				}                                        
           		break;
        case 3: printf( "\n   Ha Selecionado gama Luxury\n "); 
            	// Selecci? del color para la gama alta
           	 	printf("\nSeleccione el color de su veh?ulo:\n  ");
            	printf( "\n   1. Blanco");
            	printf( "\n   2. Rojo");
            	printf( "\n   3. Azul");
            	printf( "\n   4. Gris");
            	printf( "\n   5. Negro");
            	printf( "\n\n   Introduzca opci? (1-5): " );
            	scanf( "%d", &opcioncolor1);
            	fflush(stdin);
            	while ((opcioncolor1 < 1)||(opcioncolor1 > 5)){
                	printf("    ?rror!!!\n");
                	printf("   Por favor introduzca una opci? v?ida (1-5): ");
	            	scanf( "%d", &opcioncolor1 );
	            	fflush(stdin);
	        	}                                        
           		switch ( opcioncolor1){
                	case 1: printf( "\n   Ha seleccionado color blanco\n");
                       	 	break;
               		case 2: printf( "\n   Ha seleccionado color rojo\n");
                        	break; 
                	case 3: printf( "\n   Ha seleccionado color Azul\n");
                        	break;  
		        	case 4: printf( "\n   Ha seleccionado color Gris\n");
                        	break; 
                	case 5: printf( "\n   Ha seleccionado color Negro\n");
                        	break;										                                      
				}                               
		    	break; 
	}	
	// Paso de los datos tomados a la funci? que genera la factura
	factura1(dato, opcionmotor1, opcioncaja1, opciongama1, opcioncolor1, opcion);
	return 0;																														
}
// Funci? para el segundo tipo de configuraci?
int Configuraciondos (Sdatos dato, int opcion){
	// variables dentro de la segunda funci? de configuraci?
	int  opcionmotor2, opcioncaja2, opciongama2, opcioncolor2; 
	
    // Selecci? del motor
    printf("\nSeleccione el tipo de motor para su veh?ulo:\n  ");
    printf( "\n   1. Gas?eo(Diesel)");
    printf( "\n   2. Gasolina");
    printf( "\n   3. El?trico");
	printf( "\n\n   Introduzca opci? (1-3): " );
    scanf( "%d", &opcionmotor2);
    fflush(stdin);
    while ((opcionmotor2 < 1)||(opcionmotor2 > 3)){
        printf("    ?rror!!!\n");
        printf("   Por favor introduzca una opci? v?ida (1-3): ");
	    scanf( "%d", &opcionmotor2 );
	    fflush(stdin);
	}                        
    if ( opcionmotor2 == 1) printf( "\n   Ha seleccionado motor de Gas?eo(Diesel)\n ");                      	          
    else if (opcionmotor2 == 2) printf( "\n   Ha seleccionado motor de Gasolina\n ");                                   
    else printf( "\n   Ha Selecionado motor El?trico\n "); 
	// Selecci? de la caja de cambios seg? el motor seleccionado                             
	if ((opcionmotor2 == 1) || (opcionmotor2 == 2)){
		// Selecci? de la caja de cambios 	para motores de combusti?	
		printf("\nSeleccione el tipo de caja de cambios para su veh?ulo:\n  ");
        printf( "\n   1. Autom?ico");
        printf( "\n   2. Manual");
        printf( "\n\n   Introduzca opci? (1-2): " );
        scanf( "%d", &opcioncaja2);
        fflush(stdin);
        while ((opcioncaja2 < 1)||(opcioncaja2 > 2)){
            printf("    ?rror!!!\n");
            printf("   Por favor introduzca una opci? v?ida (1-2): ");
	        scanf( "%d", &opcioncaja2 );
	        fflush(stdin);
	    }                                            
        switch ( opcioncaja2){
            case 1: printf( "\n   Ha seleccionado caja de cambios autom?ica\n ");
                    break;
            case 2: printf( "\n   Ha seleccionado caja de cambios manual\n ");
                    break; 
		} 			                    	
	}
	else{
		// Selecci? de la caja de cambios 	para motor el?trico	
		printf("\nLos veh?ulos el?tricos solo est? dispoinibles con caja autom?ica\n  ");   									
	} 
	// Selecci? de la gama de acabados
	printf("\nSeleccione la gama de acabados:\n  ");
    printf( "\n   1. Standard");
    printf( "\n   2. Medium");
    printf( "\n   3. Luxury");
    printf( "\n\n   Introduzca opci? (1-3): " );
    scanf( "%d", &opciongama2);
    fflush(stdin);
    while ((opciongama2 < 1)||(opciongama2 > 3)){
        printf("    ?rror!!!\n");
        printf("   Por favor introduzca una opci? v?ida (1-3): ");
	    scanf( "%d", &opciongama2 );
	    fflush(stdin);
	}                        
    switch ( opciongama2 ){
        case 1: printf( "\n   Ha seleccionado gama Standard\n ");
                // Selecci? del color en la gama b?ica
                printf("\nSeleccione el color de su veh?ulo:\n  ");
                printf( "\n   1. Blanco");
                printf( "\n   2. Rojo");
                printf( "\n\n   Introduzca opci? (1-2): " );
                scanf( "%d", &opcioncolor2);
                fflush(stdin);
                while ((opcioncolor2 < 1)||(opcioncolor2 > 2)){
                    printf("    ?rror!!!\n");
                    printf("   Por favor introduzca una opci? v?ida (1-2): ");
	                scanf( "%d", &opcioncolor2 );
	                fflush(stdin);
	            }                                        
                switch ( opcioncolor2 ){
                    case 1: printf( "\n   Ha seleccionado color blanco\n");
                            break;
                    case 2: printf( "\n   Ha seleccionado color rojo\n");
                            break; 
				}
                break;
        case 2: printf( "\n   Ha seleccionado gama Medium\n ");
                // Selecci? del color en la gama media
                printf("\nSeleccione el color de su veh?ulo:\n  ");
                printf( "\n   1. Blanco");
                printf( "\n   2. Rojo");
                printf( "\n   3. Azul");
                printf( "\n\n   Introduzca opci? (1-3): " );
                scanf( "%d", &opcioncolor2);
                fflush(stdin);
                while ((opcioncolor2 < 1)||(opcioncolor2 > 3)){
                    printf("    ?rror!!!\n");
                    printf("   Por favor introduzca una opci? v?ida (1-3): ");
	                scanf( "%d", &opcioncolor2 );
	                fflush(stdin);
	            }                                        
                switch ( opcioncolor2){
                    case 1: printf( "\n   Ha seleccionado color blanco\n");
                            break;
                    case 2: printf( "\n   Ha seleccionado color rojo\n");
                            break; 
                    case 3: printf( "\n   Ha seleccionado color Azul\n");
                            break;                                         
				}                                        
                break;
    	case 3: printf( "\n   Ha Selecionado gama Luxury\n "); 
                // Selecci? del color en la gama alta
                printf("\nSeleccione el color de su veh?ulo:\n  ");
                printf( "\n   1. Blanco");
                printf( "\n   2. Rojo");
                printf( "\n   3. Azul");
                printf( "\n   4. Gris");
                printf( "\n   5. Negro");
                printf( "\n\n   Introduzca opci? (1-5): " );
                scanf( "%d", &opcioncolor2);
                fflush(stdin);
                while ((opcioncolor2 < 1)||(opcioncolor2 > 5)){
                    printf("    ?rror!!!\n");
                    printf("   Por favor introduzca una opci? v?ida (1-5): ");
	                scanf( "%d", &opcioncolor2 );
	                fflush(stdin);
	            }                                        
                switch ( opcioncolor2){
                    case 1: printf( "\n   Ha seleccionado color blanco\n");
                            break;
                    case 2: printf( "\n   Ha seleccionado color rojo\n");
                            break; 
                    case 3: printf( "\n   Ha seleccionado color Azul\n");
                            break;  
		            case 4: printf( "\n   Ha seleccionado color Gris\n");
                            break; 
                    case 5: printf( "\n   Ha seleccionado color Negro\n");
                            break;										                                      
				}                                  
			    break; 
	} 
	// Llamada a funci? de generaci? de factura 2 y transferencia de datos tomados 
	factura2(dato, opcionmotor2, opcioncaja2, opciongama2, opcioncolor2, opcion);							
	return 0;														     							    	
}
// Funci? para generar tipo de factura 1
void factura1(Sdatos dato, int opcionmotor, int opcioncaja, int opciongama, int opcioncolor, int opcion){
	// Variables de la funci?
	int preciomotor, preciocaja, preciogama, preciocolor, total;
	char fact[10] = "Factura_", txt[5]= ".txt", nombrearchivo[N];
	char flecha[8] = " ---->";
    // Asignaci? de precio para motor
    if (opcionmotor == 1) preciomotor = 2500;
    else if (opcionmotor == 2) preciomotor = 3000;
    else preciomotor = 3500;
    // Asignaci? precios caja de cambios
    if (opcioncaja == 1) preciocaja = 5000;
    else preciocaja = 3500;
    // Asignaci? precios gama
    if (opciongama == 1) preciogama = 7000;
    else if (opciongama == 2) preciogama = 10000;
    else preciogama = 20000;
    // Asignaci? precios colores
    if (opcioncolor == 1) preciocolor = 300;
    else if (opcioncolor == 2) preciocolor = 400;
    else if (opcioncolor == 3) preciocolor = 600;
    else if (opcioncolor == 4) preciocolor = 750;
    else preciocolor = 800;	
	// Creaci? de archivo		
	FILE *p_archivo;
	// Asignaci? de nombre al archivo
	strcpy(nombrearchivo, fact);
	strcat(nombrearchivo, dato.nombre);
	strcat(nombrearchivo, " ");
	strcat(nombrearchivo, dato.apellido1);
	strcat(nombrearchivo, txt);
	// Aperura del archivo
	p_archivo = fopen (nombrearchivo, "w+");
	// Primeros datos mostrados en la factura 
	fprintf(p_archivo,"Fecha:  %d/%d/%d", dato.factura.dia, dato.factura.mes, dato.factura.anno);
	fprintf(p_archivo,"\nNombre del cliente: %s %s %s\n\n", dato.nombre, dato.apellido1, dato.apellido2 );
	fprintf(p_archivo,"Desglose de la factura:\n");
	// Se printea el coche seleccionado 
	if (opcion == 1) fprintf(p_archivo, "Ha seleccionado Veh?ulo Utilitario Deportivo (S.U.V)\n");
    else fprintf(p_archivo, "Ha seleccionado Monovolumen\n");
	// Se printea el tipo de motor y su precio
    if (opcionmotor == 1) fprintf(p_archivo, "Motor de Gas?eo(Diesel)");
    else if (opcionmotor == 2) fprintf(p_archivo, "Motor de Gasolina");
    else fprintf(p_archivo, "Motor GNC(G? Natural Comprimido)");
    fprintf(p_archivo, "%s %d?\n", flecha, preciomotor);
   	// Se printea el tipo de caja de cambios y su precio
    if (opcioncaja == 1) fprintf(p_archivo, "Caja de cambios autom?ica de 7 velocidades");
    else fprintf(p_archivo, "Caja de cambios manual de 6 velocidades") ;
    fprintf(p_archivo, "%s %d?\n", flecha, preciocaja);
    // Se printea la gama, su precio y los datos que incluye 
    if (opciongama == 1) fprintf(p_archivo, "Gama Standard");
    else if (opciongama == 2) fprintf(p_archivo, "Gama Medium");
    else fprintf(p_archivo, "Gama Luxury");
    fprintf(p_archivo, "%s %d?\n", flecha, preciogama);
    if (opciongama == 1) fprintf(p_archivo, "-Radio Navegador\t-Llantas 16'\n-Iluminaci? LED\t-Climatizador\n");
    else if (opciongama == 2) fprintf(p_archivo, "-Radio Navegador\t-Llantas de aleaci? 17'\n-Iluminaci? LED\t-Climatizador\n-Asientos de Cuero\t-Volante Multifunci?\n");
    else fprintf(p_archivo, "-Radio Navegador\t-Llantas de aleaci? 19'\n-Iluminaci? LED\t-Climatizador\n-Asientos de Cuero\t-Volante Multifunci?\n-Asientos calefactados y ventilados\t-Televisi? por sat?ite\n");
    // Se printea el tipo de color y su precio
    if (opcioncolor == 1)fprintf(p_archivo, "Color Blanco Nieve");
    else if (opcioncolor == 2) fprintf(p_archivo, "Color Rojo Intenso");
    else if (opcioncolor == 3) fprintf(p_archivo, "Color Azul Perlado");
    else if (opcioncolor == 4) fprintf(p_archivo, "Color Gris Perlado");
    else fprintf(p_archivo, "Color Negro Tricapa");	    
    fprintf(p_archivo, "%s %d?\n", flecha, preciocolor);
    // C?culo del precio total
    total = preciomotor + preciocaja + preciogama + preciocolor;
    // Se printea el total
    fprintf (p_archivo, "Precio Total: %d?\n", total);
    // Fin de la funci?
}
// Funci? para el segundo tipo de factura
void factura2(Sdatos dato, int opcionmotor, int opcioncaja, int opciongama, int opcioncolor, int opcion){
	// Variables de la funci?
	int preciomotor, preciocaja, preciogama, preciocolor, total;
	char fact[10] = "Factura_", txt[5]= ".txt", nombrearchivo[N];
	char flecha[8] = " ---->";
    // Asignaci? de precio para motor
    if (opcionmotor == 1) preciomotor = 2500;
    else if (opcionmotor == 2) preciomotor = 3000;
    else preciomotor = 6500;
    // Asignaci? precios caja de cambios
    if ((opcionmotor == 1) || (opcionmotor == 2)){
    	if (opcioncaja == 1) preciocaja = 5000;
    	else preciocaja = 3500;
	}
	else preciocaja = 5000; 
    // Asignaci? precios gama
    if (opciongama == 1) preciogama = 7000;
    else if (opciongama == 2) preciogama = 10000;
    else preciogama = 20000;
    // Asignaci? precios colores
    if (opcioncolor == 1) preciocolor = 300;
    else if (opcioncolor == 2) preciocolor = 400;
    else if (opcioncolor == 3) preciocolor = 600;
    else if (opcioncolor == 4) preciocolor = 750;
    else preciocolor = 800;	
	// Creaci? de archivo		
	FILE *p_archivo;
	// Asignaci? de nombre al archivo
	strcpy(nombrearchivo, fact);
	strcat(nombrearchivo, dato.nombre);
	strcat(nombrearchivo, " ");
	strcat(nombrearchivo, dato.apellido1);
	strcat(nombrearchivo, txt);
	// Apertura del archivo
	p_archivo = fopen (nombrearchivo, "w+");
	// Printeo de los primeros datos en la factura
	fprintf(p_archivo,"Fecha:  %d/%d/%d", dato.factura.dia, dato.factura.mes, dato.factura.anno);
	fprintf(p_archivo,"\nNombre del cliente: %s %s %s\n\n", dato.nombre, dato.apellido1, dato.apellido2 );
	fprintf(p_archivo,"Desglose de la factura:\n");
	// Se printea el coche seleccionado 
	if (opcion == 2) fprintf(p_archivo, "Ha seleccionado Sed?\n");
    else fprintf(p_archivo, "Ha seleccionado Coup?/Deportivo\n");
	// Se printea el tipo de motor y su precio
    if (opcionmotor == 1) fprintf(p_archivo, "Motor de Gas?eo(Diesel)");
    else if (opcionmotor == 2) fprintf(p_archivo, "Motor de Gasolina");
    else fprintf(p_archivo, "Motor GNC(G? Natural Comprimido)");
    fprintf(p_archivo, "%s %d?\n", flecha, preciomotor);
   	// Se printea el tipo de caja de cambios y su precio
    if ((opcionmotor == 1) || (opcionmotor == 2)){
    	if (opcioncaja == 1) fprintf(p_archivo, "Caja de cambios autom?ica de 7 velocidades");
    	else fprintf(p_archivo, "Caja de cambios manual de 6 velocidades");
	}
	else fprintf(p_archivo, "Caja de cambios autom?ica de 7 velocidades");
    fprintf(p_archivo, "%s %d?\n", flecha, preciocaja);
    // Se printea la gama, su precio y lo que incluye 
    if (opciongama == 1) fprintf(p_archivo, "Gama Standard");
    else if (opciongama == 2) fprintf(p_archivo, "Gama Medium");
    else fprintf(p_archivo, "Gama Luxury");
    fprintf(p_archivo, "%s %d?\n", flecha, preciogama);
    if (opciongama == 1) fprintf(p_archivo, "-Radio Navegador\t-Llantas 16'\n-Iluminaci? LED\t-Climatizador\n");
    else if (opciongama == 2) fprintf(p_archivo, "-Radio Navegador\t-Llantas de aleaci? 17'\n-Iluminaci? LED\t-Climatizador\n-Asientos de Cuero\t-Volante Multifunci?\n");
    else fprintf(p_archivo, "-Radio Navegador\t-Llantas de aleaci? 19'\n-Iluminaci? LED\t-Climatizador\n-Asientos de Cuero\t-Volante Multifunci?\n-Asientos calefactados y ventilados\t-Televisi? por sat?ite\n");
    // Se printea el tipo de color y su precio
    if (opcioncolor == 1)fprintf(p_archivo, "Color Blanco Nieve");
    else if (opcioncolor == 2) fprintf(p_archivo, "Color Rojo Intenso");
    else if (opcioncolor == 3) fprintf(p_archivo, "Color Azul Perlado");
    else if (opcioncolor == 4) fprintf(p_archivo, "Color Gris Perlado");
    else fprintf(p_archivo, "Color Negro Tricapa");	    
    fprintf(p_archivo, "%s %d?\n", flecha, preciocolor);
    // C?culo del precio total
    total = preciomotor + preciocaja + preciogama + preciocolor;
    // Se printea el precio total
    fprintf (p_archivo, "Precio Total: %d?\n", total);
    // Fin de la funci?
}
