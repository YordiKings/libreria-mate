#pragma once
#include "tareamath.h"
using namespace std;
class matrix {
private:
	int row;
	int column;
	int** matrixarr;
public:
	matrix();
	matrix(int row, int column) {
		this->row = row;
		this->column = column;
		matrixarr = new int*[column];
		for (int i = 0; i <= column; i++) {
			matrixarr[i] = new int[row];
		}
		
	}
	int getRow() {
		return this->row;
	}
	int getColumn() {
		return this->column;
	}
	void ingresarMatriz() {
		for (int i = 0; i < row; i++) {
			for (int j = 0; j < column; j++) {
				cout << "Ingresa el valor F" << i << " C" << j << endl;
				cin >> matrixarr[i][j];
			}
		}
	}
	void productomatriz(matrix matrix1, matrix matrix2) {
		for (int i = 0; i < row; i++) {
			for (int j = 0; j < column; j++) {
				matrixarr[i][j] = 0;
			}
		}

		for (int i = 0; i < matrix1.row; i++) {
			for (int j = 0; j < matrix2.column; j++) {
				for (int k = 0; k < matrix1.column; k++) {
					matrixarr[i][j] += matrix1.matrixarr[i][k] * matrix2.matrixarr[k][j];
				}
			}
		}
	}
	void imprimirmatriz() {
		cout << "Matriz resultante: " << endl;
		for (int i = 0; i < row; i++) {
			for (int j = 0; j < column; j++) {
				cout << " " << matrixarr[i][j] << " ";
				if (j == column-1) cout << endl;
			}
		}
	}
};


double potencia(double base, double exponente) {
	double resultado = 1;
	while (exponente != 0) {
		resultado *= base;
		--exponente;
	}
	return resultado;
}


int factorial(int numero) {
	if (numero == 0) return 1;
	for (int i = numero-1; i > 0; i--) {
		numero *= i;
	}
	
	return numero;
}

double seno(double radian) {
	double result = 0;
	for (int n = 0; n < 4; n++) {
		double a, b, c;
		a = potencia(-1, n);
		b = factorial(2 * n + 1);
		c = potencia(radian, 2 * n + 1);
		result += (a / b) * c;
	}
	return result;
}
double coseno(double radian) {
	double result = 0;
	for (int n = 0; n < 10; n++) {
		result += potencia(-1,n) / factorial(2*n) * potencia(radian,2*n);
	}
	return result;
}
double tangente(double radian) {
	/*double nbernoulli[10] = {1,0.5,1/6,0,-1/30,0,1/42,0,-1/30,0};*/
	double result = 0;
	/*for (int n = 1; n < 10; n++) {
		result += (nbernoulli[2*(n-1)] * potencia(-4,n)) * (1- potencia(4,n) ) / factorial(2*n) * potencia(radian,2*n-1);
	}*/
	result = seno(radian) / coseno(radian);

	return result;

}


//tarea para hoy: matrices y funciones trigonometricas sin math.h
//tarea para el lunes: convertidor de numeros romanos a normales
//tarea para el martes: convertidor de sistemas hexadecimal, decimal y binario. elegir de cual a cual
// todos los programas tienen que poder repetirse solos, que el usuario diga cuando salir 
//temas de hoy: sistema binario y hexadecimal
	//expresiones lambda, capitulo 22 del libro
	