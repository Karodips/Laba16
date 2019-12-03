#include <iostream>
#include <cmath>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int i, n, j, Schitaet, PerviyNaPlahu, VtoroyNaPlahu, Palach;
	cin >> n;
	int* arr = new int[n];
	Schitaet = 0;
	for (i = 0; i < n; i++) cin >> arr[i];
	for (i = 0; i < n; i++) cout << arr[i] << " ";
	cout << endl;
	for (i = 0; i < n - 1; i++) {
		for (j = i + 1; j < n; j++) {
			if (arr[i] == arr[j]) { 
				Schitaet++;
				PerviyNaPlahu = i;
				VtoroyNaPlahu = j;
			}
		}
		if (Schitaet == 1) {
			Palach = arr[n - 1];
			arr[n - 1] = 0;
			arr[PerviyNaPlahu] = Palach;
			Palach = arr[n - 2];
			arr[n-2] = 0;
			arr[VtoroyNaPlahu] = Palach;
			n = n - 2;
		}
		i = -1;
		Schitaet = 0;
	}
	cout << n << endl;
	for (i = 0; i < n; i++) cout << arr[i] << " ";
	cout << endl;
	system("pause");
	return 0;
}
