#include <iostream>
using namespace std;
int* sort(int* matr, int n)
{
	int pp = n;
	int min;
	int ind = -1;
	int z = 0;
	n--;
	while (n >= 0) {
		min = matr[n];
		for (int i = n-1; i >-1; i--) {
			if ( min>matr[i]) {
				min = matr[i];
				ind = i;
			}
		}
		if (ind != -1 ) {
			z = min;
			matr[ind] = matr[n];
			matr[n] = z;
		}
		for (int i = 0; i < pp; i++) {
			cout << matr[i]<<" ";
		}
		cout << endl;
		n--;
		ind = -1;
		
	}
	return matr;
}
long int* sort(long int* matr, int n)
{
	int pp = n;
	long int min;
	int ind = -1;
	long int z = 0;
	n--;
	while (n >= 0) {
		min = matr[n];
		for (int i = n - 1; i > -1; i--) {
			if (min > matr[i]) {
				min = matr[i];
				ind = i;
			}
		}
		if (ind != -1) {
			z = min;
			matr[ind] = matr[n];
			matr[n] = z;
		}
		for (int i = 0; i < pp; i++) {
			cout << matr[i]<<" ";
		}
		cout << endl;
		n--;
		ind = -1;

	}
	return matr;
}
float* sort(float* matr, int n)
{
	int pp = n;
	float min;
	int ind = -1;
	float z = 0;
	n--;
	while (n >= 0) {
		min = matr[n];
		for (int i = n - 1; i > -1; i--) {
			if (min > matr[i]) {
				min = matr[i];
				ind = i;
			}
		}
		if (ind != -1) {
			z = min;
			matr[ind] = matr[n];
			matr[n] = z;
		}
		for (int i = 0; i < pp; i++) {
			cout << matr[i]<<" ";
		}
		cout << endl;
		n--;
		ind = -1;

	}
	return matr;
	
}
double* sort(double* matr, int n)
{
	int pp = n;
	double min;
	int ind = -1;
	double z = 0;
	n--;
	while (n >= 0) {
		min = matr[n];
		for (int i = n - 1; i > -1; i--) {
			if (min > matr[i]) {
				min = matr[i];
				ind = i;
			}
		}
		if (ind != -1) {
			z = min;
			matr[ind] = matr[n];
			matr[n] = z;
		}
		for (int i = 0; i < pp; i++) {
			cout << matr[i]<<" ";
		}
		cout << endl;
		n--;
		ind = -1;

	}
	return matr;

}

long double* sort(long double* matr, int n)
{
	int pp = n;
	long double min;
	int ind = -1;
	long double z = 0;
	n--;
	while (n >= 0) {
		min = matr[n];
		for (int i = n - 1; i > -1; i--) {
			if (min > matr[i]) {
				min = matr[i];
				ind = i;
			}
		}
		if (ind != -1) {
			z = min;
			matr[ind] = matr[n];
			matr[n] = z;
		}
		for (int i = 0; i < pp; i++) {
			cout << matr[i]<<" ";
		}
		cout << endl;
		n--;
		ind = -1;

	}
	return matr;

}
char* sort(char* matr, int n)
{
	int pp = n;
	char min;
	int ind = -1;
	char z = 0;
	n--;
	while (n >= 0) {
		min = matr[n];
		for (int i = n - 1; i > -1; i--) {
			if (min > matr[i]) {
				min = matr[i];
				ind = i;
			}
		}
		if (ind != -1) {
			z = min;
			matr[ind] = matr[n];
			matr[n] = z;
		}
		for (int i = 0; i < pp; i++) {
			cout << matr[i]<<" ";
		}
		cout << endl;
		n--;
		ind = -1;

	}
	return matr;

}