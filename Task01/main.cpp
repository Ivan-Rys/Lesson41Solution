#include <iostream>
#define SIZE 10
using namespace std;

double avg(int* array, int size) {

	double sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum += array[i];
	}
	return sum / size;
}

int best_group(int a, int b, int c, int size) {

	return a > b && a > c ? a : b > c ? b : c;
}

int main() {
	int a[]{ 10, 8, 9, 6, 7 };
	int b[]{ 10, 5, 10, 8, 7 };
	int c[]{ 10, 8, 10, 5, 4 };

	


	return 0;
}