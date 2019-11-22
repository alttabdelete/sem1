#include <iostream>
#include <iomanip>

// Kod w C zakomentowany
// #include <stdlib.h>
// #include <stdio.h>

using namespace std; 

bool is_prime(int n);

int main()
{
	/* Przesunięcie bitowe (1<<16 = 2 do potęgi 16) */
	int m, z[1<<16];

	cout << "Enter m (m > 0): ";
	// printf("Enter m (m > 0): ");

	cin >> m;
	// scanf("%d", &m);

	int idx = 0;

	for (int a = m; a > 0; a--)
	{
		for (int b = m; b > 0; b--)
		{
			if (a * b == m) {
				z[idx++] = a;
				z[idx++] = b;
			}
		}
	}
	
	cout << "Found primes:" << endl;
	// printf("Found primes:\n");

	for (int i = 0; i < idx - 1; i += 2)
	{
		if (is_prime(z[i]) && is_prime(z[i + 1])) {
			cout << "a: " << setw(4) << z[i] << ", b: " << setw(4) << z[i + 1] << endl;
			// printf("a: %04.d, b: %04.d\n", z[i], z[i + 1]);
		}
	}
}

bool is_prime(int n)
{
	if (n == 1) {
		return 1;
	}

	double loopEndConditional = n / 2;

	for (int i = 2; i <= loopEndConditional; i++) {
		if (n % i == 0) {
			return false;
		}
	}

	return true;
}

