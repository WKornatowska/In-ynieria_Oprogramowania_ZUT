#ifndef WSPOLPRACOWNIK_H
#define WSPOLPRACOWNIK_H

class Wspolpracownik : Osoba {

private:
	int IDWspolpracownika;
	int IDGrupy;
	int stanObserwatora;

public:
	void przegladajzawartoscGrupy();

	void update();
};

#endif
