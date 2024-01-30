#include <iostream>


using namespace std;


int main()
{
	float F�rsteV�rdi;
	char fortegn;
	float SidsteV�rdi;
	float Resultat;

	cout << "Lommeregner v.1.0.0\n\n";

	//indtast værdi før for-tegn

	cout << "indtast v�rdi. \n";
	cin >> F�rsteV�rdi; cout << "\n";

	//indstast fortegn

	cout << "Hvilket for tegn vil du at bruge? (+, -, *, /)\n";
	cin >> fortegn; cout << "\n";

	// indtast værdi efter fortegnet

	cout << "indtast den sidste v�rdi: ";
	cin >> SidsteV�rdi;

	//hvis fortegn er = plus skal det plusses

	if (fortegn == '+')
	{
		cout << "=";
		Resultat = F�rsteV�rdi + SidsteV�rdi;
		cout << Resultat;
	}

	//hvis fortegn = - skal det trækkes fra hinnanden

	else if (fortegn == '-') {
		cout << "=";
		Resultat = F�rsteV�rdi - SidsteV�rdi;
		cout << Resultat;
	}

	//hvis fortegn er = * skal det ganges

	else if (fortegn == '*') {
		cout << "=";
		Resultat = F�rsteV�rdi * SidsteV�rdi;
		cout << Resultat;
	}

	//hvis fortegn er / skal det divideres

	else if (fortegn == '/') {
		cout << "=";
		Resultat = F�rsteV�rdi / SidsteV�rdi;
		cout << Resultat;
	}

	//ellers skal der meldes fejl og spørge om man vil starte forfra ja starter forfra nej lukker programmet ned

	else {
		int JaEllerNej;
		cout << "Udregning ikke muligt i denne version.\n1) Start forfra\n2) Exit\n";
		cin >> JaEllerNej;

		switch (JaEllerNej)
		{
		case 1:
			main();
		case 2:
			break;
		}
	}
}

