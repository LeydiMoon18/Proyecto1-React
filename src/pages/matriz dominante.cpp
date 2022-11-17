#include <stdio.h> 
#include <string.h> 

#include <math.h> 

int main(){ 
 
    * Declaramos las variables que vamos a utilizar 
    * FILE fichero es para utilizar ficheros (incluye la libreria iostream) 
    * char nombre para guardar el nombre del fichero 
    * En matriz guardamos una de tamaño 10x10 aunque usemos una de menor tamaño 
    * col y fil las usamos para guardar el tamaño de cada matriz 
    
     FILE* fichero = NULL; 
     char nombre[20] = "matrices.dat"; // nombre del fichero 
     int matriz[10][10]; // matriz de 10x10 
     int col, fil = 0; // nÃºmero de filas y columnas 
     int sum = 0; 
     int dominante = 1; 
    
*Abrimos el fichero en formato lectura y comprobamos que exista 

   // ------------------------------------------------------------------------ 
   // Incluir codigo para abrir fichero y comprobar que exista 
   // ------------------------------------------------------------------------ 
    
    * Como el fichero tiene varias matrices, utilizamos el while not end of file 
    * para leerlo hasta el final. 

    
    while(!feof(fichero)){ 
        
         fscanf(fichero, "%1d %1d", &col, &fil); 
         printf("\n---------------------------"); 
         printf("\nTamano: %dx%d", col, fil); 
        
       // Lectura del fichero y guardado en matriz 
       for(int i = 0; i < col; i++){ 
             printf("\n"); 
             for(int j = 0; j < fil; j++){ 
               // ------------------------------------------------------------ 
               // Incluir codigo para leer un numero del fichero y guardarlo 
               // en la posicion i,j de la matriz. Despues, imprimir el valor 
               // ------------------------------------------------------------ 
           } 
       } 
        
       /* Comprobacion de la condicion; Para ello hacemos uso de la funcion  fabs (valor absoluto, incluida en la libreria maths) y calculamos la suma de la fila sin incluir los elementos de la diagonal, es decir,  cuando el valor de i es igual al de j.    */ 
      
       for(int i = 0; i < col; i++){ 
            for(int j = 0; j < fil; j++){ 
               // ------------------------------------------------------------ 
               // Incluir codigo para hacer la suma, con la variable sum, de 
               // los elementos de la fila que no pertenezcan a la diagonal 
               // (recuerda usar la funcion fabs de valor absoluto). 
               // ------------------------------------------------------------ 
            } 
            
           if(fabs(matriz[i][i]) >= sum){ 
                printf("\nLa fila %d cumple el criterio (%d >= %d)", i, matriz[i][i], sum); 
           }else{ 
                printf("\nLa fila %d no cumple el criterio (%d < %d)", i, matriz[i][i], sum); 
                dominante = 0; 
           } 
           sum = 0; 
       } 
        
       // -------------------------------------------------------------------- 
       // Incluir codigo para imprimir si la matriz es dominante o no y 
       // cambiar el estado de la variable dominante en caso de que sea 
       // necesario. 
       // -------------------------------------------------------------------- 

        
   } // while not eof 
    
   return 0; 
}