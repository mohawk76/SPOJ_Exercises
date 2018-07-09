#include <iostream>
#include <fstream>
#include <string>
#include<windows.h>

using namespace std;

void koduj();//Zapisuje zaszyfrowany tekst do pliku
void odkoduj();//Czyta odszyfrowany tekst z pliku
char szyfruj(char);
char odszyfruj(char);

int main()
{
	int menu;
	//Lista opcji menu
	cout << internal << "*****Program szyfrujacy*****\n";
	cout <<  internal << "1. Zakoduj\n";
	cout << internal << "2. Odkoduj\n";
	cout << internal << "3. Wyjscie\n";
	//Wprowadzanie opcji z menu z zabezpieczeniem
	while (!(cin >> menu))
	{
		cin.clear();
		cin.sync();
		system("cls");
		cout << "Blad wprowadzania\n";
		cout << "Wybierz jeszcze raz: ";
	}
	system("cls");
	if(menu!=3)
    {
	//Menu
	do{
		switch (menu)
		{
		case 1:
			koduj();
			cout<<"Zakodowane\n";
			system("pause");
			system("cls");
			break;
		case 2:
			odkoduj();
			cout<<"Odkodowane\n";
			system("pause");
			system("cls");
			break;
		case 3:
			break;
		default:
			cout << "Nie ma takiej opcji \n";
			cout << "Wpisz jeszcze raz: \n\n";
			break;
		}
    //menu
    cout << internal << "*****Program szyfrujacy*****\n";
	cout <<  internal << "1. Zakoduj\n";
	cout << internal << "2. Odkoduj\n";
	cout << internal << "3. Wyjscie\n";
		//Wprowadzanie opcji z menu z zabezpieczeniem
		while (!(cin >> menu)&&!(cin.eof()))
		{
			cin.clear();
			cin.sync();
			system("cls");
			cout << "Blad wprowadzania\n";
			cout << "Wybierz jeszcze raz: ";
		}
		system("cls");
	}while (menu!=3);
    }
	cout << "Do widzenia\n";
    system("pause");

	return 0;
}

void koduj()
{
	//otwieranie pliku
	fstream plik;
	string dane;
	plik.open("tekst.txt", ios::out);
	if (plik.good())
	{
		//Wprowadzanie tekstu do zaszyfrowania
		cout<<"Wprowadz dane:\n";
		cin>>dane;
		for (int i = 0; i < dane.length(); i++)
		{
			dane[i]=szyfruj(dane[i]);
		}
		plik<<dane;
	}
	else
		cout << "Nie udalo sie otworzyc pliku\n";
    plik.close();

}

char szyfruj(char a)
{
	//Algorytm szyfruj¹cy
	//Szyfr Cezara
	switch (a)
	{
	case 'A':
	case 'a':
		a = 'x';
		break;
	case 'B':
	case 'b':
		a = 'y';
		break;
	case 'C':
	case 'c':
		a = 'z';
		break;
	case 'D':
	case 'd':
		a = 'a';
		break;
	case 'E':
	case 'e':
		a = 'b';
		break;
	case 'F':
	case 'f':
		a = 'c';
		break;
	case 'G':
	case 'g':
		a = 'd';
		break;
	case 'H':
	case 'h':
		a = 'e';
		break;
	case 'I':
	case 'i':
		a = 'f';
		break;
	case 'J':
	case 'j':
		a = 'g';
		break;
	case 'K':
	case 'k':
		a = 'h';
		break;
	case 'L':
	case 'l':
		a = 'i';
		break;
	case 'M':
	case 'm':
		a = 'j';
		break;
	case 'N':
	case 'n':
		a = 'k';
		break;
	case 'O':
	case 'o':
		a = 'o';
		break;
	case 'P':
	case 'p':
		a = 'm';
		break;
	case 'Q':
	case 'q':
		a = 'n';
		break;
	case 'R':
	case 'r':
		a = 'o';
		break;
	case 'S':
	case 's':
		a = 'p';
		break;
	case 'T':
	case 't':
		a = 'q';
		break;
	case 'U':
	case 'u':
		a = 'r';
		break;
	case 'V':
	case 'v':
		a = 's';
		break;
	case 'W':
	case 'w':
		a = 't';
		break;
	case 'X':
	case 'x':
		a = 'u';
		break;
	case 'Y':
	case 'y':
		a = 'v';
		break;
	case 'Z':
	case 'z':
		a = 'w';
		break;
	}
	return a; //Zwraca zaszyfrowan¹ literê
}

void odkoduj()
{
	//otwieranie pliku
	fstream plik;
	plik.open("tekst.txt", ios::in);
	if(plik.good())
	{
		string dane;
		cout<<"Wyprowadzanie danych:\n";
		//zapis tekstu do zmiennej dane
		getline(plik, dane);
		for (int i = 0; i < dane.length(); i++)
		{
			dane[i] = odszyfruj(dane[i]);
		}
		//Wyœwietlenie odszyfrowanego tekstu
		cout << dane << endl;
	}
	else
		cout << "Nie udalo sie otworzyc pliku\n";
		plik.close();
}

char odszyfruj(char a)
{
	//Algorytm odszyfruj¹cy
	switch (a)
	{
	case 'X':
	case 'x':
		a = 'a';
		break;
	case 'Y':
	case 'y':
		a = 'b';
		break;
	case 'Z':
	case 'z':
		a = 'c';
		break;
	case 'A':
	case 'a':
		a = 'd';
		break;
	case 'B':
	case 'b':
		a = 'e';
		break;
	case 'C':
	case 'c':
		a = 'F';
		break;
	case 'D':
	case 'd':
		a = 'g';
		break;
	case 'E':
	case 'e':
		a = 'h';
		break;
	case 'F':
	case 'f':
		a = 'i';
		break;
	case 'G':
	case 'g':
		a = 'j';
		break;
	case 'H':
	case 'h':
		a = 'k';
		break;
	case 'I':
	case 'i':
		a = 'l';
		break;
	case 'J':
	case 'j':
		a = 'm';
		break;
	case 'K':
	case 'k':
		a = 'n';
		break;
	case 'L':
	case 'l':
		a = 'o';
		break;
	case 'M':
	case 'm':
		a = 'p';
		break;
    case 'O':
	case 'o':
		a = 'r';
		break;
	case 'N':
	case 'n':
		a = 'q';
		break;
	case 'P':
	case 'p':
		a = 's';
		break;
	case 'Q':
	case 'q':
		a = 't';
		break;
	case 'R':
	case 'r':
		a = 'u';
		break;
	case 'S':
	case 's':
		a = 'v';
		break;
	case 'T':
	case 't':
		a = 'w';
		break;
	case 'U':
	case 'u':
		a = 'x';
		break;
	case 'V':
	case 'v':
		a = 'y';
		break;
	case 'W':
	case 'w':
		a = 'z';
		break;
	}
	return a; //Zwraca odszyfrowana litere
}
