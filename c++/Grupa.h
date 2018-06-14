#ifndef GRUPA_H
#define GRUPA_H

class Grupa {

private:
	int IDZbioru;
	int IDKalendarza;
	int IDAdministratora;
	string Nazwa;
	int IDWspolpracownika;
	int IDGrupy;

public:
	void update(int stan_zadania);
};

#endif
