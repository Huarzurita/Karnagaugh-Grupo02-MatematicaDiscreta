#pragma once
using namespace  System::Drawing;
class Karnaugh {
private:
	int a, b, c, d;
	int x, y;
	int ancho, alto;
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
		if (a == 1 & b==1&c==1&d==1) {
			g->DrawRectangle(p, 2, 2, 65, 65);
		}
		if (a == 1 & b == 1 ) {
			g->DrawRectangle(p, 2, 2, 65, 32);
		}
	}
};