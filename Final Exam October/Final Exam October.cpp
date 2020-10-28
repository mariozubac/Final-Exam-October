#include<iostream>
using namespace std;

const char* crt = "\n---------------------------------------------------------\n";

class Predavac
{
	char _ID[10];
	char _oblast[100];
	int _ocjena = 0;

public:
	//Predavac() {};



	Predavac(const char ID[], const char subject[])
	{
		strncpy_s(_ID, ID, 10);
		strncpy_s(_oblast, subject, 100);

	};
	
	const char* GetOblast() { return _oblast; }
	const char* GetID() { return _ID; }
	int GetScore() { return _ocjena; }
		
	//Implementirati funkcije potrebne za rad sa klasom

	void testprint() 
	{
		cout << "SUBJECT -> " << _oblast << '\n';
		cout << "ID -> " << _ID << '\n';
		cout << crt;
	};
};

/*class Seminar
{
	char* _naziv;
	Predavac* _predavaci; //Dinami?ki niz objekata
	int _maxPredavaca;
	int _trenutnoPredavaca;

public:

	bool DodajPredavaca(const char ID)
	{



	};

	void OcijeniPredavaca(const char ID, int NO)
	{



	};
	
	//Implementirati funkcije potrebne za rad sa klasom
	/Implementirati destruktor
};
*/

int main() {

	//Kreiranje nove instance klase Seminar sa proslijedenim nazivom i maksimalnim brojem predavaca
	//Seminar s("Startup projekti", 15);

	const char* ID1 = "AS001";
	const char* ID2 = "LD002";
	const char* ID3 = "DM003";
	const char* ID4 = "AD004";
	const char* ID5 = "IB005";

	Predavac p1(ID1, "Informacijske tehnologije");
	Predavac p2(ID2, "Informacijske tehnologije");
	Predavac p3(ID3, "Poslovno upravljanje");
	Predavac p4(ID4, "Poslovno upravljanje");
	Predavac p5(ID5, "Prakticna nastava");

	p1.testprint();
	p2.testprint();
	p3.testprint();
	p4.testprint();
	p5.testprint();

	/* Funkcija DodajPredavaca prijavljuje novog predavaca na seminar u odredenoj oblasti.
	Predavac sa istim ID brojem ne može biti prijavljen više puta na isti seminar.
	Voditi racuna i o ogranicenju dinamickog niza koje ne može biti prekoraceno (najviše _maxPredavaca).
	Funkcija, u zavisnosti od uspješnosti dodavanja predavaca, vraca logicku vrijednost true ili false.

	if (s.DodajPredavaca(p1))
		cout << "Predavac sa ID brojem " << p1.GetID() << " uspjesno prijavljen na seminar." << endl;
	if (s.DodajPredavaca(p2))
		cout << "Predavac sa ID brojem " << p2.GetID() << " uspjesno prijavljen na seminar." << endl;
	if (s.DodajPredavaca(p3))
		cout << "Predavac sa ID brojem " << p3.GetID() << " uspjesno prijavljen na seminar." << endl;

	if (!s.DodajPredavaca(p2))
		cout << "Predavac sa ID brojem " << p2.GetID() << " je vec prijavljen na seminar ili su popunjeni kapaciteti seminara." << endl;

	if (s.DodajPredavaca(p4))
		cout << "Predavac sa ID brojem " << p4.GetID() << " uspjesno prijavljen na seminar." << endl;
	if (s.DodajPredavaca(p5))
		cout << "Predavac sa ID brojem " << p5.GetID() << " uspjesno prijavljen na seminar." << endl;

	cout << crt;

	/* Funkcija OcijeniPredavaca služi za evidenciju ocjena predava?a seminara. Ocjene mogu biti u rasponu od 1 do 5.
	Ukoliko predava? sa proslije?enim ID brojem nije prona?en ili je definisana ocjena izvan datog raspona, funkcija
	treba da vrati logi?ku vrijednost false. U suprotnom vra?a true.
	if (s.OcijeniPredavaca(ID1, 5))
		cout << "Uspjesno ste ocijenili predavaca sa ID brojem " << ID1 << endl;
	if (s.OcijeniPredavaca(ID2, 4))
		cout << "Uspjesno ste ocijenili predavaca sa ID brojem " << ID2 << endl;
	if (s.OcijeniPredavaca(ID3, 3))
		cout << "Uspjesno ste ocijenili predavaca sa ID brojem " << ID3 << endl;
	if (s.OcijeniPredavaca(ID4, 5))
		cout << "Uspjesno ste ocijenili predavaca sa ID brojem " << ID4 << endl;

	if (!s.OcijeniPredavaca("ZH022", 2))
		cout << "Predavac sa ID brojem ZH022 nije pronadjen." << endl;
	if (!s.OcijeniPredavaca(ID5, 6))
		cout << "Ocjena je izvan validnog raspona (1-5)." << endl;

	if (s.OcijeniPredavaca(ID5, 2))
		cout << "Uspjesno ste ocijenili predavaca sa ID brojem " << ID5 << endl;

	cout << crt;

	//Funkcija Ispis vrši ispis svih podataka o seminaru, uklju?uju?i podatke o predava?ima i njihovim ocjenama.
	s.Ispis();

	//Funkcija GetProsjecnaOcjena vra?a prosje?nu ocjenu predava?a iz odre?ene oblasti proslije?ene kao parametar.
	cout << "Prosjecna ocjena predavaca iz oblasti Informacijske tehnologije je: " << s.GetProsjecnaOcjena("Informacijske tehnologije") << endl; */


	return 0;
};

