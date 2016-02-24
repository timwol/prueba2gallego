// Funciones.cpp: archivo de proyecto principal.

#include "stdafx.h"

using namespace System;

void mifuncion()
{
	int var = 4;
	Console::WriteLine(L"El valor de mi primera variable es:" +var);

}
void miotrafuncion()
{
	int var = 3;
	Console::WriteLine(L"El valor de mi segunda variable es:" +var);

}

void calculararea ()
{
	int altura=5;
	int anchura=4;
	int area = altura*anchura;
	Console::WriteLine("El area encerrada es "+area+" metros");

}
void areacal (int altura2,int anchura2)
{
	
	int area2 = altura2*anchura2;
	Console::WriteLine("El area encerrada es "+area2+" metros");

}

int main(array<System::String ^> ^args)
{
    mifuncion();
    miotrafuncion();
    areacal(5,5);
    areacal(4,5);
    areacal(2,5);
    areacal(2,5);

    calculararea();
    Console::ReadLine();
}
