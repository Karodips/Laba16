#include <iostream>
#include <cmath>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int i, n, MinNum, MaxNum;
	cin >> n;
	int* arr = new int[n];
	for (i = 0; i < n; i++) cin >> arr[i];
	for (i = 0; i < n; i++) cout << arr[i] << " ";
	cout << endl;
	MinNum = 0;
	MaxNum = 0;
	for (i = 1; i < n; i++) {
		if (arr[i] > arr[MaxNum]) MaxNum = i;
		if (arr[i] < arr[MinNum]) MinNum = i;
	}
	for (i = 0; i < MinNum; i++) arr[i] = 0;
	for (i = MaxNum + 1; i < n; i++) arr[i] = 0;
	for (i = 0; i < n; i++) cout << arr[i] << " ";
	cout << endl;
	system("pause");
	return 0;
}
