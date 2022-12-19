/*
Enunciado: Escriba un programa C++ que encuentre los primeros n términos de la Serie de Fibonacci.

Participantes:
1- John Luis Del Rosario Sánchez - ID 1106940
2- Ashly Marisell Paula Ynoa - ID 1108023
3- Elián Matos Díaz - ID 1106901
4- Juan Daniel Ubiera Méndez - ID 1107248
5- Kelvin Arístides García Espinal - ID 1107646

Fecha de entrega: 12/12/2022
*/


#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

//Funcion para validar entrada de un numero
string ValidarNumero(string str)
{
    bool notNum = false;
    int i = 0;
    while ((str[i] != '\0') && notNum != true) //'\0' es el character que marca el final del string
    {
        if (isdigit(str[i]) == false)
        {
            str = "";
            notNum = true;
            break;
        }
        i++;
    }
    return str; //devuelve un str igual si no se encontraron letras
}

int main()
{
    cout << "Bienvenido al generador de numeros de la sucesion de Fibonacci!" << endl;

    do
    {
        string cantidadE; //cantidad de elementos
        int primerE = 0, segundoE = 1; //primer y segundo numero de la secuencia de fibonacci

        cout << "Digite el numero de elementos: "; 
        cin >> cantidadE;
        if (cantidadE == "0") { //si se piden 0 elementos
            cout << "Inserte un numero mayor a 0" << endl;
            system("PAUSE");
            system("CLS");
            continue;
        }

        if (ValidarNumero(cantidadE) != cantidadE) { //si se inserta un tipo de dato diferente de un entero
            cout << "Tipo de dato incorrecto, solo se permiten numeros, intente de nuevo" << endl;
            system("PAUSE");
            system("CLS");

            continue;
        }

        for (int i = 0; i <= stoi(cantidadE) - 1; i++) //calcula cada numero de fibonacci pedido
        {
            if (i < 2) { //si i es menor que 2, despliega el valor de i
                cout << i << " ";
                continue;
            }
            segundoE += primerE; //segundo elemento es igual al segundo mas el primero
            cout << segundoE << " ";
            primerE = segundoE - primerE; //el primero se convierte en el segundo menos el primero
        }
        cout << endl;
        system("PAUSE");
        system("CLS");

    } while (true);
}