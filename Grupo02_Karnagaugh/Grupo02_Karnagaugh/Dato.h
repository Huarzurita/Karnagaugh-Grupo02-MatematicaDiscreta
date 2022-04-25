#pragma once
class Dato
{
private:
	int v, x, y;
public:
	Dato(int v, int x, int y) {
		this->v = v;
		this->x = x;//distancia del contenedor de esta en ancho 
		this->y = y;//distancia del contenedor a esta  en alto
	};
	~Dato() {};

	int getX() { return x; }
	int getY() { return y; }
	int getValor() { return v; }
	void setValor(int v) { this->v = v; }

};

