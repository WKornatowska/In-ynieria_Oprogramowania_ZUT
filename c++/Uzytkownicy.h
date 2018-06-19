#ifndef UZYTKOWNICY_H
#define UZYTKOWNICY_H

class Uzytkownicy {

private:
	int ID;
	string Login;
	string Email;
	string ImieNazwisko;
	string Haslo;
	int NumerTelefonu;
	date DataUrodzenia;
	int PunktyZaufania;

public:
	void znajdzProfil(int nazwa);

	void wyslijProfil(int nazwa);

	void zmienDane(int nazwa, int dane);

	void pokazProfil(int nazwa);

	void wyswietlProfil(int nazwa);

	void pokazKalendarz(int Uzytkownik);
};

#endif
