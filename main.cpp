#include<iostream>

using namespace std;

int main() {
	srand(time(0));
	int arr[5][5];
	int min, max, minI = 20, minJ = -1, maxI = -1, maxJ = -1;

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			arr[i][j] = rand() % minI - 1;
		}
	}

	min = arr[0][0];
	max = arr[0][0];

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (i == j) {
				cout << "&" << "\t";
			}
			else {
				cout << arr[i][j] << "\t";
			}

			if (arr[i][j] > max) {
				max = arr[i][j];
				maxI = i; maxJ = j;
			}

			if (arr[i][j] < min) {
				min = arr[i][j];
				minI = i; minJ = j;
			}
		}
		cout << endl;
	}

	cout << "min = " << min << ", arr[" << minI << "][" << minJ << "]" << endl;
	cout << "max = " << max << ", arr[" << maxI << "][" << maxJ << "]" << endl;
	return 0;
}
