#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>
int main() {
	setlocale(LC_ALL, "Russian");
	std::cout << "Array:\n";
	srand(time(NULL));
	int N,sum = 0;
	const int size = 10;
	int arr[size][size];
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			arr[i][j] = rand() % 101;
			std::cout << arr[i][j] << "\t";
		}
		std::cout << "\n";
	}
	std::cout << "\n\n";

	for (int j = 0; j < size; j++) {
		for (int i = 0; i < size; i++) {
			sum += arr[j][i];
		}
		std::cout << "Sum of numbers from  " << j << " row =" << sum <<"\n\n";
		sum = 0;
	}
	std::cout << "Enter row's number to sort it (from 0 to 9) ->";
	std::cin >> N;
	std::cout << "Sorted row:\n";
	std::sort(arr[N], arr[N] + 10);
	for (int i = 0; i < size; i++)
		std::cout << arr[N][i]<<' ';


	return 0;
}