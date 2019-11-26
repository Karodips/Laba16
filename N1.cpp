
#include <iostream>
#include <cmath>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int i, n, PhantomNuber;
	cin >> n;
	int* arr = new int[n];
	for (i = 0; i < n; i++) cin >> arr[i];
	for (i = 0; i < n; i++) cout << arr[i];
	PhantomNuber = arr[i];
	cout << endl;
	for (i = 0; i < n; i++) {
		if (arr[i] == arr[i - 1] || PhantomNuber == arr[i]) {
			PhantomNuber = arr[i];
			arr[i] = 0;

		}
	}
	for (i = 0; i < n; i++) cout << arr[i];
	cout << endl;
	system("pause");
	return 0;
}
