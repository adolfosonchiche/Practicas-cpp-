/* Programa para probar funciones Inline
* Las funciones Inline no se compilan como funciones aparte,
* lo que se hace al compilar es añadir el contenido de la funcion haya
* donde se se invoca. Con lo que es mucho mas rapido de ejecutar
* y ademas nos da la limpieza de separar el codigo.
* Compilado: g++ Inline.cpp -o Inline
*/

using namespace std;
#include <iostream>
// las funciones en CPP las debemos declarar antes de invocar
// aqui tenemos el prototipo. Si no se pone tendremos ERROR de compilador
// Declaramos la funcion como inline
inline double Calcula(double a, double b);
// Log : saca un mensaje por pantalla
void Log(const char *mensaje);
// Variables globales
long variable = 666;
/*debemos de utilizar const para poder asignar una cadena a un char
 ya que con esto aseguramos que la variable sera constante y no va a cambias*/
const char *PROGRAMA = "Globales";

int main()
{
    // Sacamos por salida standar un mensaje
    Log("Vamos a probar los operadores");
    unsigned int test = 0;
    double a = 23, b = 21, c = 34;
    // Tomamos el valor a
    Log("Dame valores. \na=");
    cin >> a;
    // Tomamos el valor b
    cout << "b=";
    cin >> b;
    cout << "Y ahora son estos: b=" << b << " a=" << a << " global:" << variable <<endl; // Probamos la funcion
        Log("Venga va vamos");
    return 0;
}
/**
* Calcula
* parametros: double a, double b
* devuelve double
* En la implementacion no hace falta volver a poner INLINE
*/

double Calcula(double a, double b)
{
    a *= 35462;
    b *= 32546 + a;
    return (a / b) * variable;
}
/**
* Log
* parametros: char *mensaje
* devuelve void
*/
void Log(const char *mensaje)
{
    cout << PROGRAMA << mensaje << endl;
}