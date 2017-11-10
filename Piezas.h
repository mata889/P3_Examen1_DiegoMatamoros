#ifndef PIEZAS_H
#define PIEZAS_H

class Piezas{
private:

	char figura;
	int x;
	int y;

public:

	Piezas(char, int, int);
	Piezas();

	char getFigura();
	int getX();
	int getY();

	void setFigura(char);
	void getX(int);
	void getY(int);

	~Piezas();

};
#endif
