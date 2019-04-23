/*
  @file main.c
  @brief Main program function implementation
*/ 
#include <stdio.h>

/** @brief structure which represent a person */
typedef struct _person {
    int age;
    char name_initial;
} person_t;

/**
 * @brief Main program function
 * 
 * @return EXIT_SUCCESS when programs executes correctly, EXIT_FAILURE otherwise
 */
int main(void) {

    int x = 1;
    person_t m = {90, 'M'};
    int a[] = {0, 1, 2, 3};

    /* Completar aquí:
       Al finalizar la ejecución las variables deben tener los siguientes valores
       x = 9
       m = (100, F)
       a[1] = 42

       Las restricciones son:
       - No usar las variables 'x', 'm' y 'a' en la parte izquierda de alguna asignación.
       - Se pueden agregar líneas de código, pero no modificar las que ya existen.
       - Se pueden declarar hasta 2 punteros.
       AYUDA: podes usar GDB para consultares valores de variables y la dirección de memoria donde estan alojadas. 
    */
    int *coso1=NULL;
    person_t *coso2=NULL;

    coso1 = &x;
    *coso1 = 9;

    /*Dereferenciación (*): obtiene el valor de lo apuntado por el puntero. Supongamos que
tenemos una variable de tipo int* llamemoslá p. *p retornará el valor entero que se aloja
en dirección de memoria p.*/

    coso1 = &a[1];
    *coso1 = 42;

    /*Referenciación (&): obtiene la dirección de memoria de una variable. Supongamos que
tenemos un entero ‘x’. int x; &x retornará la dirección de memoria que aloja a la variable
x.*/

    coso2 = &m;
    *coso2->age = 100;
    *coso2->name_initial = 'F';


    printf("x = %d\n", x);
    printf("m = (%d, %c)\n", m.age, m.name_initial);
    printf("a[1] = %d\n", a[1]);
}
