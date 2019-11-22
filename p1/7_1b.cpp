#include <iostream>
#include <cmath>

// #include <stdlib.h>
// #include <stdio.h>
// #include <math.h>

using namespace std;

int main()
{
	int n, m;
	double sum = 0;

	cout << "Enter n: ";
	// printf("Enter n: ");
	cin >> n;
	// scanf("%d", &n);

	cout << "Enter m: ";
	// printf("Enter m: ");
	cin >> m;
	// scanf("%d", &m);

	for (int i = 1; i < n + 1; i++) {
		double subsum = 1;

		for (int j = 1; j < m + 1; j++) {
			subsum *= log(exp(i)) / sqrt((double)i * j);
		}

		sum += subsum;
	}

	cout << "Result: " << sum << endl;
	// printf("Result: %f", sum);

	// system("pause");
}
