#include <iostream>

#define UINT unsigned int

using namespace std;

/**
 * Program do obliczania pozycji dla elementu wstawianego
 *
 * Wymagania:
 * - ciąg musi być posortowany (n-ty element nie może być większy niż n+1 => 1,2,3,4,5)
 */
int main()
{
	// Zdefiniowane makro w 3 linijce - rozszerzane do 'unsigned int'
	UINT len;

	int el;

	cout << "Podaj element: ";
	cin >> el;

	cout << "Podaj dlugosc ciagu (i > 0): ";
	cin >> len;

	// Dynamiczna deklaracja tablicy [len]-elementowej
	int* a = new int[len];

	UINT i;

	for (i = 0; i < len; i++)
	{
		cout << "Podaj #" << i + 1 << " element: ";
		cin >> a[i];
	}

	i = -1;

	while(a[++i] < el && i < len);

	cout << "Dany element nalezy wstawic na pozycji: " << i + 1 << endl; 		

	for (i = 0; i < len; i++)
	{
		cout << a[i] << '\t';
	}

	cout << endl;
	
	// Aby zapobiec wyciekom pamięci, 'zwalniamy' słowem kluczowym 'delete' dynamicznie zadeklarowaną tablicę a
	delete[] a;

	return 0;
}
