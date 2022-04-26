#pragma once
#include "Dato.h"

class Agrupamiento
{
private:
	string funcion;
	vector<Dato*> f1;
	vector<Dato*> f2;
	vector<Dato*> f3;
	vector<Dato*> f4;
	vector<vector<Dato*>> f5;

public:
	//el constructor recive el valor, posisicion x y posicion y de cada elemento de la matriz (16*3 = 48 datos XDXDXD)
	Agrupamiento(int f11, int f11x, int f11y,/**/ int f12, int f12x, int f12y,/**/ int f13, int f13x, int f13y,/**/ int f14, int f14x, int f14y,
				 int f21, int f21x, int f21y,/**/ int f22, int f22x, int f22y,/**/ int f23, int f23x, int f23y,/**/ int f24, int f24x, int f24y,
				 int f31, int f31x, int f31y,/**/ int f32, int f32x, int f32y,/**/ int f33, int f33x, int f33y,/**/ int f34, int f34x, int f34y,
				 int f41, int f41x, int f41y,/**/ int f42, int f42x, int f42y,/**/ int f43, int f43x, int f43y,/**/ int f44, int f44x, int f44y) {
		f1 = { new Dato(f11,f11x,f11y,"X'","Y'","Z'","W'"),new Dato(f12,f12x,f12y,"X'","Y'","Z'","W"),new Dato(f13,f13x,f13y,"X'","Y'","Z","W"),new Dato(f14,f14x,f14y,"X'","Y'","Z","W'")};
		f2 = { new Dato(f21,f21x,f21y,"X'","Y","Z'","W'"),new Dato(f22,f22x,f22y,"X'","Y","Z'","W"),new Dato(f23,f23x,f23y,"X'","Y","Z","W"),new Dato(f24,f24x,f24y,"X'","Y","Z","W'") };
		f3 = { new Dato(f31,f31x,f31y,"X","Y","Z'","W'"),new Dato(f32,f32x,f32y,"X","Y","Z'","W"),new Dato(f33,f33x,f33y,"X","Y","Z","W"),new Dato(f34,f34x,f34y,"X","Y","Z","W'") };
		f4 = { new Dato(f41,f41x,f41y,"X","Y'","Z'","W'"),new Dato(f42,f42x,f42y,"X","Y'","Z'","W"),new Dato(f43,f43x,f43y,"X","Y'","Z","W"),new Dato(f44,f44x,f44y,"X","Y'","Z","W'") };
		f5 = { f1,f2,f3,f4 };
		funcion = "";

	};
	~Agrupamiento() {};

	void buscar4(Graphics^ g) {
		//horizontal
		for (int i = 0; i < f5.size(); i++)
			if (f5[i][0]->getValor() != 0 && f5[i][1]->getValor() != 0 && f5[i][2]->getValor() != 0 && f5[i][3]->getValor() != 0) {// si encuentra una fila de 4 cambia el valor de ese grupo a 2
				f5[i][0]->setValor(2); f5[i][1]->setValor(2); f5[i][2]->setValor(2); f5[i][3]->setValor(2);
				
				funcion += "( ";
				if (f5[i][0]->getx() == f5[i][1]->getx() && f5[i][1]->getx() == f5[i][2]->getx() && f5[i][2]->getx() == f5[i][3]->getx())//comparando si tienen el mismo x (X o X')
					funcion = funcion + f5[i][0]->getx() + " ^ ";
				if (f5[i][0]->gety() == f5[i][1]->gety() && f5[i][1]->gety() == f5[i][2]->gety() && f5[i][2]->gety() == f5[i][3]->gety())//comparando si tienen el mismo y (Y o Y')
					funcion = funcion + f5[i][0]->gety() + " ^ ";
				if (f5[i][0]->getz() == f5[i][1]->getz() && f5[i][1]->getz() == f5[i][2]->getz() && f5[i][2]->getz() == f5[i][3]->getz())//comparando si tienen el mismo z (Z o Z')
					funcion = funcion + f5[i][0]->getz() + " ^ ";
				if (f5[i][0]->getw() == f5[i][1]->getw() && f5[i][1]->getw() == f5[i][2]->getw() && f5[i][2]->getw() == f5[i][3]->getw())//comparando si tienen el mismo w (W o W')
					funcion = funcion + f5[i][0]->getw() + " ^ ";
				funcion[funcion.length() - 2] = ' ';
				funcion += ") V ";

				g->DrawRectangle(Pens::Blue, f5[i][0]->getX() - 10, f5[i][0]->getY() - 10, (47 * 4) + 10, (26 * 1) + 5);
			}
		//vertical
		for (int i = 0; i < f5.size(); i++)
			if (f5[0][i]->getValor() != 0 && f5[1][i]->getValor() != 0 && f5[2][i]->getValor() != 0 && f5[3][i]->getValor() != 0) {// recorreindo columna por columnna de la matriz
				f5[0][i]->setValor(2); f5[1][i]->setValor(2); f5[2][i]->setValor(2); f5[3][i]->setValor(2);

				funcion += "( ";
				if (f5[0][i]->getx() == f5[1][i]->getx() && f5[1][i]->getx() == f5[2][i]->getx() && f5[2][i]->getx() == f5[3][i]->getx())//comparando si tienen el mismo x (X o X')
					funcion = funcion + f5[0][i]->getx() + " ^ ";
				if (f5[0][i]->gety() == f5[1][i]->gety() && f5[1][i]->gety() == f5[2][i]->gety() && f5[2][i]->gety() == f5[3][i]->gety())//comparando si tienen el mismo y (Y o Y')
					funcion = funcion + f5[0][i]->gety() + " ^ ";
				if (f5[0][i]->getz() == f5[1][i]->getz() && f5[1][i]->getz() == f5[2][i]->getz() && f5[2][i]->getz() == f5[3][i]->getz())//comparando si tienen el mismo z (Z o Z')
					funcion = funcion + f5[0][i]->getz() + " ^ ";
				if (f5[0][i]->getw() == f5[1][i]->getw() && f5[1][i]->getw() == f5[2][i]->getw() && f5[2][i]->getw() == f5[3][i]->getw())//comparando si tienen el mismo w (W o W')
					funcion = funcion + f5[0][i]->getw() + " ^ ";
				funcion[funcion.length() - 2] = ' ';
				funcion += ") V ";

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

						funcion += "( ";
						if (f5[i][j]->getx() == f5[i][j+1]->getx() && f5[i][j+1]->getx() == f5[i][j+2]->getx())//comparando si tienen el mismo x (X o X')
							funcion = funcion + f5[i][j]->getx() + " ^ ";
						if (f5[i][j]->gety() == f5[i][j + 1]->gety() && f5[i][j + 1]->gety() == f5[i][j + 2]->gety())//comparando si tienen el mismo y (Y o Y')
							funcion = funcion + f5[i][j]->gety() + " ^ ";
						if (f5[i][j]->getz() == f5[i][j + 1]->getz() && f5[i][j + 1]->getz() == f5[i][j + 2]->getz())//comparando si tienen el mismo z (Z o Z')
							funcion = funcion + f5[i][j]->getz() + " ^ ";
						if (f5[i][j]->getw() == f5[i][j + 1]->getw() && f5[i][j + 1]->getw() == f5[i][j + 2]->getw())//comparando si tienen el mismo w (W o W')
							funcion = funcion + f5[i][j]->getw() + " ^ ";
						funcion[funcion.length() - 2] = ' ';
						funcion += ") V ";

						g->DrawRectangle(Pens::Violet, f5[i][j]->getX() - 10, f5[i][j]->getY() - 10, (47 * 3) + 10, (26 * 1) + 5);
					}


		//vertical
		for (int i = 0; i < f5.size(); i++)
			for (int j = 0; j < 2; j++)
				if (f5[j][i]->getValor() != 0 && f5[j + 1][i]->getValor() != 0 && f5[j + 2][i]->getValor() != 0)//verificacion que hay un grupo de 3 vertical !=0
					if (f5[j][i]->getValor() == 1 || f5[j + 1][i]->getValor() == 0 || f5[j + 2][i]->getValor() == 1) {//verificacmos que almenos 1 de los valores del grupo es igual a 1
						f5[j][i]->setValor(2); f5[j + 1][i]->setValor(2); f5[j + 2][i]->setValor(2);

						funcion += "( ";
						if (f5[j][i]->getx() == f5[j+1][i]->getx() && f5[j+1][i]->getx() == f5[j+2][i]->getx())//comparando si tienen el mismo x (X o X')
							funcion = funcion + f5[j][i]->getx() + " ^ ";
						if (f5[j][i]->gety() == f5[j + 1][i]->gety() && f5[j + 1][i]->gety() == f5[j + 2][i]->gety())//comparando si tienen el mismo y (Y o Y')
							funcion = funcion + f5[j][i]->gety() + " ^ ";
						if (f5[j][i]->getz() == f5[j + 1][i]->getz() && f5[j + 1][i]->getz() == f5[j + 2][i]->getz())//comparando si tienen el mismo z (Z o Z')
							funcion = funcion + f5[j][i]->getz() + " ^ ";
						if (f5[j][i]->getw() == f5[j + 1][i]->getw() && f5[j + 1][i]->getw() == f5[j + 2][i]->getw())//comparando si tienen el mismo w (W o W')
							funcion = funcion + f5[j][i]->getw() + " ^ ";
						funcion[funcion.length() - 2] = ' ';
						funcion += ") V ";

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

						funcion += "( ";
						if (f5[i][j]->getx() == f5[i][j + 1]->getx())//comparando si tienen el mismo x (X o X')
							funcion = funcion + f5[i][j]->getx() + " ^ ";
						if (f5[i][j]->gety() == f5[i][j + 1]->gety())//comparando si tienen el mismo y (Y o Y')
							funcion = funcion + f5[i][j]->gety() + " ^ ";
						if (f5[i][j]->getz() == f5[i][j + 1]->getz())//comparando si tienen el mismo z (Z o Z')
							funcion = funcion + f5[i][j]->getz() + " ^ ";
						if (f5[i][j]->getw() == f5[i][j + 1]->getw())//comparando si tienen el mismo w (W o W')
							funcion = funcion + f5[i][j]->getw() + " ^ ";
						funcion[funcion.length() - 2] = ' ';
						funcion += ") V ";

						g->DrawRectangle(Pens::Green, f5[i][j]->getX() - 10, f5[i][j]->getY() - 10, (47 * 2) + 10, (26 * 1) + 5);
					}


		//vertical
		for (int i = 0; i < f5.size(); i++)
			for (int j = 0; j < 3; j++)
				if (f5[j][i]->getValor() != 0 && f5[j + 1][i]->getValor() != 0)
					if (f5[j][i]->getValor() == 1 || f5[j + 1][i]->getValor() == 1) {
						f5[j][i]->setValor(2); f5[j + 1][i]->setValor(2);

						funcion += "( ";
						if (f5[j][i]->getx() == f5[j+1][i]->getx())//comparando si tienen el mismo x (X o X')
							funcion = funcion + f5[j][i]->getx() + " ^ ";
						if (f5[j][i]->gety() == f5[j+1][i]->gety())//comparando si tienen el mismo y (Y o Y')
							funcion = funcion + f5[j][i]->gety() + " ^ ";
						if (f5[j][i]->getz() == f5[j+1][i]->getz())//comparando si tienen el mismo z (Z o Z')
							funcion = funcion + f5[j][i]->getz() + " ^ ";
						if (f5[j][i]->getw() == f5[j+1][i]->getw())//comparando si tienen el mismo w (W o W')
							funcion = funcion + f5[j][i]->getw() + " ^ ";
						funcion[funcion.length() - 2] = ' ';
						funcion += ") V ";

						g->DrawRectangle(Pens::Green, f5[j][i]->getX() - 10, f5[j][i]->getY() - 10, (47 * 1) + 10, (26 * 2) + 5);
					}

	}
	void buscarEx(Graphics^ g) {
		//horizontal
		for (int i = 0; i < f5.size(); i++)
			if (f5[i][0]->getValor() != 0 && f5[i][3]->getValor() != 0)
				if (f5[i][0]->getValor() == 1 || f5[i][3]->getValor() == 1) {
					f5[i][0]->setValor(2); f5[i][3]->setValor(2);

					funcion += "( ";
					if (f5[i][0]->getx() == f5[i][3]->getx())//comparando si tienen el mismo x (X o X')
						funcion = funcion + f5[i][0]->getx() + " ^ ";
					if (f5[i][0]->gety() == f5[i][3]->gety())//comparando si tienen el mismo y (Y o Y')
						funcion = funcion + f5[i][0]->gety() + " ^ ";
					if (f5[i][0]->getz() == f5[i][3]->getz())//comparando si tienen el mismo z (Z o Z')
						funcion = funcion + f5[i][0]->getz() + " ^ ";
					if (f5[i][0]->getw() == f5[i][3]->getw())//comparando si tienen el mismo w (W o W')
						funcion = funcion + f5[i][0]->getw() + " ^ ";
					funcion[funcion.length() - 2] = ' ';
					funcion += " ) V ";

					g->DrawRectangle(Pens::Red, f5[i][0]->getX() - 10, f5[i][0]->getY() - 10, (47 * 1) + 10, (26 * 1) + 5);
					g->DrawRectangle(Pens::Red, f5[i][3]->getX() - 10, f5[i][3]->getY() - 10, (47 * 1) + 10, (26 * 1) + 5);
				}


		//vertical
		for (int i = 0; i < f5.size(); i++)
			if (f5[0][i]->getValor() != 0 && f5[3][i]->getValor() != 0)
				if (f5[0][i]->getValor() == 1 || f5[3][i]->getValor() == 1) {
					f5[0][i]->setValor(2); f5[3][i]->setValor(2);

					funcion += "( ";
					if (f5[0][i]->getx() == f5[3][i]->getx())//comparando si tienen el mismo x (X o X')
						funcion = funcion + f5[0][i]->getx() + " ^ ";
					if (f5[0][i]->gety() == f5[3][i]->gety())//comparando si tienen el mismo y (Y o Y')
						funcion = funcion + f5[0][i]->gety() + " ^ ";
					if (f5[0][i]->getz() == f5[3][i]->getz())//comparando si tienen el mismo z (Z o Z')
						funcion = funcion + f5[0][i]->getz() + " ^ ";
					if (f5[0][i]->getw() == f5[3][i]->getw())//comparando si tienen el mismo w (W o W')
						funcion = funcion + f5[0][i]->getw() + " ^ ";
					funcion[funcion.length() - 2] = ' ';
					funcion += " ) V ";

					g->DrawRectangle(Pens::Red, f5[0][i]->getX() - 10, f5[0][i]->getY() - 10, (47 * 1) + 10, (26 * 1) + 5);
					g->DrawRectangle(Pens::Red, f5[3][i]->getX() - 10, f5[3][i]->getY() - 10, (47 * 1) + 10, (26 * 1) + 5);
				}

	}
	void buscarNo() {
		for (int i = 0; i < f5.size(); i++)
			for (int j = 0; j < f1.size(); j++)
				if (f5[i][j]->getValor() == 1)
					funcion = funcion + "( " + f5[i][j]->getx() + " ^ " + f5[i][j]->gety() + " ^ " + f5[i][j]->getz() + " ^ " + f5[i][j]->getw() + ") V ";

	}

	string getFuncion() {
		if (funcion != "")
		{
			funcion[funcion.length() - 2] = ' '; // elimino la "V" que queda despues de la busqueda de grupos y no agrupados 
		}
		
		return funcion;
	}
};

