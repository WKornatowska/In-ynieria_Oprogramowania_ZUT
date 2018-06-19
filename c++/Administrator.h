#ifndef ADMINISTRATOR_H
#define ADMINISTRATOR_H

class Administrator : Osoba {

private:
	int IDAdministratora;
	int IDGrupy;
	int stanObserwatora;

public:
	void zarzadzajGrupa(int nazwa);

	void update();

	void otworzKanaly(int Grupa);

	void utworzKanal();

	void przeslijDane(int Kanal, int Grupa);

	void dodajUzytkownikow(int Kanal, int Uzytkownicy);

	void otworzZadania();

	void pokazZadania(int status);

	void otworzKanalGlosowy(int Kanal);

	void zwolajZebranie(int Kanal, int Uzytkownicy, int Tytul, int Priorytet);
};

#endif
