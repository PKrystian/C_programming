#include <stdio.h>

int main() {
	// Zadniem jest znalezienie indeksa szukanej wartosci, a jak wpisze sie zla wartosc, dac deafult -1 tablicy

	float szukana_wartosc;
	float tablica_wartosci[] = { 2.1, 9.0, 4.2, 1.9, 6.4, 5.3, 8.5, 7.9 };
	unsigned liczba_elementow = sizeof(tablica_wartosci)/sizeof(*tablica_wartosci);
	unsigned indeks_szukanej;
	float a;
	int i;

	// Zmiana z laptopa

	// zmiana z pc

	printf("Podaj szukana wartosc: \n");
	scanf_s("%f", &szukana_wartosc);

	for (i=0; i < liczba_elementow; i++) {
		a = tablica_wartosci[i];
		if (a == szukana_wartosc) {
			break;
		}
	}

	indeks_szukanej = i+1;
	if (a == szukana_wartosc) {
		printf("Indeks podanej wartosci to: %d\n", indeks_szukanej);
	}
	else {
		printf("Default (tablica[-1]): %f\n", tablica_wartosci[-1]);
	}

	return 0;
}