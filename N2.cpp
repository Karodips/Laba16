
#include <iostream>
#include <cmath>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int i, n, j, Schitaet;
	cin >> n;
	int* arr = new int[n];
	for (i = 0; i < n; i++) cin >> arr[i];
	for (i = 0; i < n; i++) cout << arr[i];
	cout << endl;
	for (i = 0; i < n-1; i++) {
		for (j = i + 1; j < n; j++) {
			if (arr[i] == arr[j]) Schitaet++;
		}
		if (Schitaet == 2)
	}
	for (i = 0; i < n; i++) cout << arr[i];
	cout << endl;
	system("pause");
	return 0;
}
