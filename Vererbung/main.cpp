

#include <iostream>
#include <string>

using namespace std;


// TODO Zur Vereinfachung werden alle Klassen etc in eine Datei geschrieben



// Deklaration und Definition der Klasse Punkt - Basisklasse
class Punkt
{
public:
	int x;
	int y;

	Punkt()			// Standard-Konstruktor 
	{
		x = 11;
		y = 22;
	};

	~Punkt() {};	// Destruktor

};


// Deklaration und Defintion einer abgeleiteten Klasse
class Punkt3D : public Punkt
{
public:
	int z;

	Punkt3D()			// Standard-Konstruktor 
	{
		//x = 33;
		//y = 44;
		z = 55;
	};
	
};


// Klassendefintion f�r ein Obstprodukt
class Obst
{
	// Attribute aller Obstprodukte - Verallgemeinuerung
public:
	double preis;
	double gewicht;
};


class Suedfrucht : public Obst
{
	// zus�tzliche Attribute - Spezialisierung
public:
	string herkunftsland;
};



class Vater
{
public:
	string nachname;
	string augenfarbe;
};


class Kind : public Vater
{
public:
	//zus�tzliche Attribute
	string vorname;
	string Haarfarbe;
};


// Ober oder Basisklasse
class Landfahrzeug
{
public:
	void fahren() { cout << "Fahrzeug wird bewegt" << endl; }
};

// Unter oder abgeleitete Klasse
class Auto : public Landfahrzeug
{
public:
	void tanken() { cout << "Fahrzeug wird getankt" << endl; }
};


//--------------------------------------------------------------------------//
//								Main Function								//
//--------------------------------------------------------------------------//
int main()
{
	cout  << "Programm zu Vererbung"  << endl << endl;

	//--------------------------------------------------------------------------//

	Punkt punkt1;

	punkt1.x = 4;
	punkt1.y = 8;

	cout << "punkt1.x: " << punkt1.x  << "\tpunkt1.y: " << punkt1.y << endl;


	Punkt3D punkt3d1;

	cout << punkt3d1.x << endl;
	cout << punkt3d1.y << endl;
	cout << punkt3d1.z << endl;

	//--------------------------------------------------------------------------//
	
	// ein Objekt der Basisklasse Obst erzeugen
	Obst apfel;
	apfel.gewicht = 0.3;
	apfel.gewicht = 0.4;


	// ein Objekt der abgeleiteten Klasse Suedfrucht erzeugen
	Suedfrucht banana;

	banana.gewicht = 0.6;
	banana.preis = 1.0;
	banana.herkunftsland = "Peru";

	//--------------------------------------------------------------------------//

	Vater heinz;

	heinz.nachname = "Mueller";
	heinz.augenfarbe = "gruen";


	Kind lisa;

	lisa.nachname = "Mueller";
	lisa.augenfarbe = "gruen";

	lisa.vorname = "Lisa";
	lisa.Haarfarbe = "blond";

	//--------------------------------------------------------------------------//


	Landfahrzeug fahrrad;

	fahrrad.fahren();


	Auto clio;

	clio.fahren();
	clio.tanken();

	//--------------------------------------------------------------------------//

	system("pause");
	return 0;
}