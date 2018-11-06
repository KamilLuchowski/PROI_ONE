// PROI_ONE.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include "pch.h"
#include "currency.h"
#include "investment.h"
#include "UI.h"
#include <iostream>
#include <string>
#include <vector>


using namespace std;

int main()
{
	const int curr = 3;

	currency CurrTab[curr] = {
		currency(1.00, "PLN"),
		currency(4.56, "USD"),
		currency(4.02, "EURO")
	};

	//for(int i=0;i<curr;i++)
	//	CurrTab[i].show();

	investment inv(150, 3.5, 12, CurrTab[1].getName(), CurrTab[1].getPrice());
	investment* invPtr = &inv;

	//inv.show();

	UI userInterface;
	userInterface.Menu();
	
}
















// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln
