#include <iostream>

// #include <stdlib.h>
// #include <stdio.h>

using namespace std;

int main()
{
	int n, sum = 1;

	/* Użycie instrukcji skoku jest złe, ale nie chodzi o to by kod był zajebisty, tylko działał */
	info:

	cout << "Enter n (n > 2): ";
	// printf("Enter n (n > 2): ");
	cin >> n;
	// scanf("%d", &n);

	if (n < 2) {
		/* Instrukcja skoku - przechodzi do linijki w której użyta jest 
		 * etykieta (a.k.a 'info') i kontynuuje wykonywanie kodu od niej */
		goto info;
	}

	int max = (n % 2) == 0 ? n : n - 1;

	for (int i = 2; i <= max; i += 2) {
		sum *= i;
	}

	cout << "Result: " << sum << endl;
	// printf("Result: %f", sum);

	// system("pause");
}
