#ifndef KONKRETNEZADANIE_H
#define KONKRETNEZADANIE_H

class KonkretneZadanie : Zadanie {

public:
	int stan_zadania;

	void ustal_stan();

	void sprawdz_Stan();

	void powiadom();
};

#endif
