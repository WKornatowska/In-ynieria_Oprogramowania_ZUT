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
};

#endif
