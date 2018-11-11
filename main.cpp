#include "pch.h"
#include "currency.h"
#include "investment.h"
#include "UI.h"
#include "investmentManager.h"
#include <iostream>
#include <string>
#include <vector>

int main()
{
	//Investment inv(150, 3.5, 12, "PLN"); //to już nie  będzie potrzebne, investment alokowane dynamicznie
	//Investment* invPtr = &inv;

	UI userInterface(invPtr); //bez parametru invPtr, wskaznik pochodzic będzie z InvestmentManager
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
