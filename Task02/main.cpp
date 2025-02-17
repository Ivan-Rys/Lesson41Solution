#include "logic.h"
#include <iostream>
using namespace std;


#define M 10

int main() {
	int matrix[N][M]{};

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			cout << "" << i << "{" << j << "}" << " ";
		}
	}

	/*for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}

	int sum = 0;

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}*/

	cout << "Sum (main): " << sum_element_of_main_diagonale(matrix) << endl;
	cout << "Sum (addition): " << sum_element_of_main_diagonale(matrix) << endl;

	int sum_element_of_main_diagonale(matrix[N][N]) {
		int sum = 0;
		for (int i = 0; i < N; i++)
		{
			sum += matrix[i][N - 1 - i];
		}

		return sum;
	}