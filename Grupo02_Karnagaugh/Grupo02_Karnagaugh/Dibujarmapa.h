#pragma once
using namespace  System::Drawing;
class Karnaugh {
private:
	int a, b, c, d;
public:
	Karnaugh(int a, int b, int c, int d) {
		this->a = a;
		this->b = b;
		this->c = c;
		this->d = d;
	}
	/*Karnaugh(int x, int y, int ancho, int alto) {
		this->x = x;
		this->y = y;
		this->ancho = ancho;
		this->alto = alto;
	}*/
	~Karnaugh() {}

	void dibujarcuadrado(Graphics^ g) {
		Pen^ p = gcnew Pen(Color::Blue, 3);
		Pen^ r = gcnew Pen(Color::Red, 3);
		if (a == 1 && b==1 && c==1 && d==1) { //Agrupacion de 4
			g->DrawRectangle(p, 2, 2, 65, 65);
		}
		else if (a == 1 && b == 1 ) { //Agrupaciones de 2
			g->DrawRectangle(p, 2, 2, 65, 32);
			if (c==1) g->DrawRectangle(r, 2, 2, 32, 65);
			else if (d == 1) g->DrawRectangle(r, 32, 2, 35, 65);
		}
		else if (c == 1 && d == 1) {
			g->DrawRectangle(p, 2, 32, 65, 35);
			if (a == 1) g->DrawRectangle(r, 2, 2, 32, 65);
			else if (b == 1) g->DrawRectangle(r, 32, 2, 35, 65);
		}
		else if (a == 1 && c == 1) {
			g->DrawRectangle(p, 2, 2, 32, 65);
		}
		else if (b == 1 && d == 1) {
			g->DrawRectangle(p, 32, 2, 33, 65);
		}
		else if (a == 1 || d == 1 || b == 1 || c == 1) { //Agrupaciones de 1
			if (a == 1) g->DrawRectangle(p, 2, 2, 32, 32);
			if (d == 1) g->DrawRectangle(r, 32, 32, 32, 32);
			if (b == 1) g->DrawRectangle(p, 32, 2, 32, 32);
			if (c == 1) g->DrawRectangle(r, 2, 32, 32, 32);
		}
	}
};