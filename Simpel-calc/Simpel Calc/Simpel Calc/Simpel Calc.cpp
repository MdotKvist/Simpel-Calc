#include <iostream>


using namespace std;


int main()
{
	float F�rsteV�rdi;
	char fortegn;
	float SidsteV�rdi;
	float Resultat;

	cout << "Lommeregner v.1.0.0\n\n";

	cout << "indtast v�rdi. \n";
	cin >> F�rsteV�rdi; cout << "\n";

	cout << "Hvilket for tegn vil du at bruge? (+, -, *, /)\n";
	cin >> fortegn; cout << "\n";

	cout << "indtast den sidste v�rdi: ";
	cin >> SidsteV�rdi;

	if (fortegn == '+')
	{
		cout << "=";
		Resultat = F�rsteV�rdi + SidsteV�rdi;
		cout << Resultat;
	}
	else if (fortegn == '-') {
		cout << "=";
		Resultat = F�rsteV�rdi - SidsteV�rdi;
		cout << Resultat;
	}
	else if (fortegn == '*') {
		cout << "=";
		Resultat = F�rsteV�rdi * SidsteV�rdi;
		cout << Resultat;
	}
	else if (fortegn == '/') {
		cout << "=";
		Resultat = F�rsteV�rdi / SidsteV�rdi;
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

