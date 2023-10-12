#include <iostream>


using namespace std;


int main()
{
	float FørsteVærdi;
	char fortegn;
	float SidsteVærdi;
	float Resultat;

	cout << "Lommeregner v.1.0.0\n\n";

	cout << "indtast værdi. \n";
	cin >> FørsteVærdi; cout << "\n";

	cout << "Hvilket for tegn vil du at bruge? (+, -, *, /)\n";
	cin >> fortegn; cout << "\n";

	cout << "indtast den sidste værdi: ";
	cin >> SidsteVærdi;

	if (fortegn == '+')
	{
		cout << "=";
		Resultat = FørsteVærdi + SidsteVærdi;
		cout << Resultat;
	}
	else if (fortegn == '-') {
		cout << "=";
		Resultat = FørsteVærdi - SidsteVærdi;
		cout << Resultat;
	}
	else if (fortegn == '*') {
		cout << "=";
		Resultat = FørsteVærdi * SidsteVærdi;
		cout << Resultat;
	}
	else if (fortegn == '/') {
		cout << "=";
		Resultat = FørsteVærdi / SidsteVærdi;
		cout << Resultat;
	}
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

