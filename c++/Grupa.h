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

	void pobierzGrupe(int Grupa);

	void utworzGrupe();

	void dodajUzytkownika(int Grupa, int Uzytkownik);

	void pobierzKanaly(int Grupa);

	void zapiszKanaky(int Kanal);

	void zapiszUzytkownikow(int Kanal, int Uzytkownicy);

	void wyslijPowiadomienieODodaniu(int Kanal, int Uzytkownik);

	void pobierzZadania();

	void pobierzZadania(int status);

	void zapros(int Zebranie, int Uzytkownik);

	void listaUczestnikow(int zebranie);

	void zapiszUczestnikow(int zebranie, int listaUczestnikow);

	void utworzWydarzenie(int kalendarz, int Uzytkownik);
};

#endif
