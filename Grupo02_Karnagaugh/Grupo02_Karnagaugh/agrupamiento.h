#pragma once
#include <vector>
#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<string>
#include "Dato.h"
using namespace std;
using namespace System;
using namespace System::Drawing;

class Agrupamiento
{
private:

	vector<Dato*> f1;
	vector<Dato*> f2;
	vector<Dato*> f3;
	vector<Dato*> f4;
	vector<vector<Dato*>> f5;

public:
	//el constructor recive el valor, posisicion x y posicion y de cada elemento de la matriz (16*3 = 48 datos XDXDXD)
	Agrupamiento(int f11, int f11x, int f11y, int f12, int f12x, int f12y, int f13, int f13x, int f13y, int f14, int f14x, int f14y, int f21, int f21x, int f21y, int f22, int f22x, int f22y, int f23, int f23x, int f23y, int f24, int f24x, int f24y, int f31, int f31x, int f31y, int f32, int f32x, int f32y, int f33, int f33x, int f33y, int f34, int f34x, int f34y, int f41, int f41x, int f41y, int f42, int f42x, int f42y, int f43, int f43x, int f43y, int f44, int f44x, int f44y) {
		f1 = { new Dato(f11,f11x,f11y),new Dato(f12,f12x,f12y),new Dato(f13,f13x,f13y),new Dato(f14,f14x,f14y) };
		f2 = { new Dato(f21,f21x,f21y),new Dato(f22,f22x,f22y),new Dato(f23,f23x,f23y),new Dato(f24,f24x,f24y) };
		f3 = { new Dato(f31,f31x,f31y),new Dato(f32,f32x,f32y),new Dato(f33,f33x,f33y),new Dato(f34,f34x,f34y) };
		f4 = { new Dato(f41,f41x,f41y),new Dato(f42,f42x,f42y),new Dato(f43,f43x,f43y),new Dato(f44,f44x,f44y) };
		f5 = { f1,f2,f3,f4 };

	};
	~Agrupamiento() {};


	void buscar4(Graphics^ g) {
		//horizontal
		for (int i = 0; i < f5.size(); i++)
			if (f5[i][0]->getValor() != 0 && f5[i][1]->getValor() != 0 && f5[i][2]->getValor() != 0 && f5[i][3]->getValor() != 0) {// si encuentra una fila de 4 cambia el valor de ese grupo a 2
				f5[i][0]->setValor(2); f5[i][1]->setValor(2); f5[i][2]->setValor(2); f5[i][3]->setValor(2);
				g->DrawRectangle(Pens::Blue, f5[i][0]->getX() - 10, f5[i][0]->getY() - 10, (47 * 4) + 10, (26 * 1) + 5);
			}
		//vertical
		for (int i = 0; i < f5.size(); i++)
			if (f5[0][i]->getValor() != 0 && f5[1][i]->getValor() != 0 && f5[2][i]->getValor() != 0 && f5[3][i]->getValor() != 0) {// recorreindo columna por columnna de la matriz
				f5[0][i]->setValor(2); f5[1][i]->setValor(2); f5[2][i]->setValor(2); f5[3][i]->setValor(2);
				g->DrawRectangle(Pens::Blue, f5[0][i]->getX() - 10, f5[0][i]->getY() - 10, (47 * 1) + 10, (26 * 4) + 5);
			}

	}
	void buscar3(Graphics^ g) {
		//horizontal
		for (int i = 0; i < f5.size(); i++)// para cara fila
			for (int j = 0; j < 2; j++)//iterara 2 veces pues si no saldria delvector
				if (f5[i][j]->getValor() != 0 && f5[i][j + 1]->getValor() != 0 && f5[i][j + 2]->getValor() != 0)//veriifcamos que hay un grupo de 3 diferente de 0
					if (f5[i][j]->getValor() == 1 || f5[i][j + 1]->getValor() == 1 || f5[i][j + 2]->getValor() == 1) { //verificamos que almeons 1 del grupo sea igual a 1
						f5[i][j]->setValor(2); f5[i][j + 1]->setValor(2); f5[i][j + 2]->setValor(2);
						g->DrawRectangle(Pens::Violet, f5[i][j]->getX() - 10, f5[i][j]->getY() - 10, (47 * 3) + 10, (26 * 1) + 5);
					}


		//vertical
		for (int i = 0; i < f5.size(); i++)
			for (int j = 0; j < 2; j++)
				if (f5[j][i]->getValor() != 0 && f5[j + 1][i]->getValor() != 0 && f5[j + 2][i]->getValor() != 0)//verificacion que hay un grupo de 3 vertical !=0
					if (f5[j][i]->getValor() == 1 || f5[j + 1][i]->getValor() == 0 || f5[j + 2][i]->getValor() == 1) {//verificacmos que almenos 1 de los valores del grupo es igual a 1
						f5[j][i]->setValor(2); f5[j + 1][i]->setValor(2); f5[j + 2][i]->setValor(2);
						g->DrawRectangle(Pens::Violet, f5[j][i]->getX() - 10, f5[j][i]->getY() - 10, (47 * 1) + 10, (26 * 3) + 5);
					}

	}
	void buscar2(Graphics^ g) {
		//horizontal
		for (int i = 0; i < f5.size(); i++)
			for (int j = 0; j < 3; j++)
				if (f5[i][j]->getValor() != 0 && f5[i][j + 1]->getValor() != 0) // verificamos que hay un grupo de 2 diferentes de 0
					if (f5[i][j]->getValor() == 1 || f5[i][j + 1]->getValor() == 1) {
						f5[i][j]->setValor(2); f5[i][j + 1]->setValor(2);
						g->DrawRectangle(Pens::Green, f5[i][j]->getX() - 10, f5[i][j]->getY() - 10, (47 * 2) + 10, (26 * 1) + 5);
					}


		//vertical
		for (int i = 0; i < f5.size(); i++)
			for (int j = 0; j < 3; j++)
				if (f5[j][i]->getValor() != 0 && f5[j + 1][i]->getValor() != 0)
					if (f5[j][i]->getValor() == 1 || f5[j + 1][i]->getValor() == 1) {
						f5[j][i]->setValor(2); f5[j + 1][i]->setValor(2);
						g->DrawRectangle(Pens::Green, f5[j][i]->getX() - 10, f5[j][i]->getY() - 10, (47 * 1) + 10, (26 * 2) + 5);
					}

	}
	void buscarEx(Graphics^ g) {
		//horizontal
		for (int i = 0; i < f5.size(); i++)
			if (f5[i][0]->getValor() != 0 && f5[i][3]->getValor() != 0)
				if (f5[i][0]->getValor() == 1 || f5[i][3]->getValor() == 1) {
					f5[i][0]->setValor(2); f5[i][3]->setValor(2);
					g->DrawRectangle(Pens::Red, f5[i][0]->getX() - 10, f5[i][0]->getY() - 10, (47 * 1) + 10, (26 * 1) + 5);
					g->DrawRectangle(Pens::Red, f5[i][3]->getX() - 10, f5[i][3]->getY() - 10, (47 * 1) + 10, (26 * 1) + 5);
				}


		//vertical
		for (int i = 0; i < f5.size(); i++)
			if (f5[0][i]->getValor() != 0 && f5[3][i]->getValor() != 0)
				if (f5[0][i]->getValor() == 1 || f5[3][i]->getValor() == 1) {
					f5[0][i]->setValor(2); f5[3][i]->setValor(2);
					g->DrawRectangle(Pens::Red, f5[0][i]->getX() - 10, f5[0][i]->getY() - 10, (47 * 1) + 10, (26 * 1) + 5);
					g->DrawRectangle(Pens::Red, f5[3][i]->getX() - 10, f5[3][i]->getY() - 10, (47 * 1) + 10, (26 * 1) + 5);
				}

	}


	//IDEAs:
	//ver si la funcion simplificada requiere ver los grupos o se puede hacer ocn solo saber donde esta los "2"

};

