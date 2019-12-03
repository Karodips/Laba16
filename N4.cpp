#include <iostream>
#include <cmath>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int i, n;
	cin >> n;
	int* arr = new int[n];
	for (i = 0; i < n; i++) cin >> arr[i];
	for (i = 0; i < n; i++) cout << arr[i] << " ";
	cout << endl;
	for (i = 0; i < n - 1; i++) {
		if (arr[i] < 0) { 
			arr[i + 1] = 0;
			i++;
		}

	}
	for (i = 0; i < n; i++) cout << arr[i] << " ";
	cout << endl;
	system("pause");
	return 0;
}
