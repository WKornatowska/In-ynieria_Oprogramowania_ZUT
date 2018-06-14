#ifndef ZADANIE_H
#define ZADANIE_H

class Zadanie {

private:
	Prototyp_Zadanie2 prototype;
	int IDZbioru;
	int IDGrupy;
	int IDAdminstratora;
	int IDZadania;
	int IDWspolpracownika;
	string Cel;
	string Zakres;

public:
	void powiadom();
};

#endif
