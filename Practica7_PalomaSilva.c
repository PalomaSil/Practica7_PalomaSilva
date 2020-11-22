/* Práctica#7                   Silva Rodríguez Paloma Mariel
Fecha de entrega: 22 de Noviembre de 2020*/

//Sección de librerías que se usarán en el código
#include<stdio.h>

/*Este programa se utilizará como carrito de compras 
  en una tienda online de cubrebocas*/
/*Tres hermanas quieren comprar 2 cubrebocas cada una,
la tienda los vende por paquetes con 3 cubrebocas cada uno*/
  
//Declaración de variables globales
//Uso de variables- registrar artículos y sacar total
int articulos;
int paquetes;
float mod;
float descuento;
float precio;
double total=0;
char talla='M';
float M;

//Declaración de funciones
int main(){
	
	//Bloque de instrucciones
	/*Este bloque es para ingresar los precios de los
    artículos y calcular el total de la compra.*/ 
    
	printf("Ingrese el precio del paquete: $");
	scanf("%f",&precio);
	
	/*Para saber cuantos paquetes deben comprar las hermanas
	realizamos siguentes operaciones*/
	articulos= 3*2;
	paquetes=articulos/3;
	printf("Paquetes a comprar, %i \n", paquetes);
	
	//comprobación de que no sobrará ningún cubrebocas
	mod=6%3;
	
	printf("Ingrese la talla:");
	scanf("%f",&M);
	total=total+(precio*paquetes);
	
	/*Por el Buen Fin la tienda tiene oferta:
	El tamaño de la talla será el porciento de descuento
	en el total de la compra*/
	
	descuento=M/100;
	total=total-(total*descuento);
	printf("Su total a pagar es:\n $ %lf", total);
	
	return 0;
}
