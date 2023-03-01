#include <iostream>
#include <string>


using namespace std;


int main() {

	int anzahlgeraete;
	string name[100];
	float betriebszeit[100];
	float wattverbrauch[100];
	float strompreis;
	float gesamtkosten = 0;

	cout << "Anzahl der Geraete (max.100): ";
	cin >> anzahlgeraete;

	for (int i = 0; i < anzahlgeraete; i++) {

		cout << "Name des Geraets " << i + 1 << ": ";
		cin.ignore();
		getline(cin, name[i]);

		cout << "Betriebszeit des Geraets " << i + 1 << " in Stunden: ";
		cin >> betriebszeit[i];

		cout << "Wattverbrauch des Geraets " << i + 1 << ": ";
		cin >> wattverbrauch[i];


	}

	cout << "Strompreis in Cent pro kWh: ";
	cin >> strompreis;

	for (int i = 0; i < anzahlgeraete; i++) {

		float kosten = betriebszeit[i] * wattverbrauch[i] / 1000 * strompreis / 100;
		gesamtkosten += kosten;

		cout << "Das Geraet " << name[i] << " verbraucht " << betriebszeit[i] * wattverbrauch[i] / 1000 << " kWh und kostet " << kosten << " Euro." << endl;
	}


	cout << "Die Gesamtkosten fuer alle Geraete betragen " << gesamtkosten << " Euro.";

	return 0;
}
