#ifndef KALENDARZ_H
#define KALENDARZ_H

class Kalendarz {

private:
	int IDWydarzenia;
	int IDUzytkownika;
	int IDKalendarza;

public:
	void pobierzWydarzenia(int Uzytkownik);

	void operation();
};

#endif
