#ifndef WYDARZENIE_H
#define WYDARZENIE_H

class Wydarzenie {

private:
	Wydarzenie wydarzenie;
	Wydarzenie instancja;
	string IdWydarzenia;
	string Miejsce;
	time czas;
	string Typ;

public:
	void utworzWydarzenie();

	void pobierzWydarzenie();
};

#endif
