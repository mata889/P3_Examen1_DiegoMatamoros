#ifndef PIEZAS_H
#define PIEZAS_H

class Piezas{
private:

	char color;
	char tipo;

public:

	Piezas(char,char);
	Piezas();

	char getColor();
	char getTipo();

	void setColor(char);
	void setTipo(char);
	
	~Piezas();

};
#endif
