#include <iostream>
#include <cmath>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int i, n, j, kopiya;
	cin >> n;
	kopiya = n * 2;
	int* arr = new int[kopiya];
	for (i = 0; i < kopiya; i++) arr[i] = 0;
	for (i = 0; i < n; i++) cin >> arr[i];
	for (i = 0; i < n; i++) cout << arr[i] << " ";
	cout << endl;
	for (i = 0; i < n; i++) {
		if (arr[i] < 0) {
			for (j = kopiya - 1; j > i+1; j--) arr[j] = arr[j - 1];

			arr[i+1] = 0;
			n++;
		}
	}
	for (i = 0; i < n; i++) cout << arr[i] << " ";
	cout << endl;
	system("pause");
	return 0;
}
