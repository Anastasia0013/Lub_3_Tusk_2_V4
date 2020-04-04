#include <iostream>
#include <cstdlib>
#include "Sort.h"
using namespace std;
int main()
{
	int m1;
	cout << "array size(int): ";
	cin >> m1;
	cout << endl;
	if (m1 <= 0) {
		cout << "ERROR invalib array size" << endl;
	}
	else {
		int n1;
		cout << "n1=";
		cin >> n1;
		cout << endl;
		if (n1 <= 0 || n1 > m1) {
			cout << "ERROR n1" << endl;
		}
		else {
			int* matr1 = new int[m1];
			cout << "enter array elements: ";
			for (int i = 0; i < m1; i++) {
				cin >> matr1[i];
			}
			cout << endl;
			matr1=sort(matr1, n1);
			cout << "sorted erray:  ";
			for (int i = 0; i < n1; i++) {
				cout << matr1[i] << "  ";
			}
			cout << endl;
			delete[] matr1;
		}

	}

	int m2;
	cout << "array size(long int): ";
	cin >> m2;
	cout << endl;
	if (m2 <= 0) {
		cout << "ERROR invalib array size" << endl;
	}
	else {
		int n2;
		cout << "n2=";
		cin >> n2;
		cout << endl;
		if (n2 <= 0 || n2 > m2) {
			cout << "ERROR n2"  << endl;
		}
		else {
			long int* matr2 = new long int[m2];
			cout << "enter array elements: ";
			for (int i = 0; i < m2; i++) {
				cin >> matr2[i];
			}
			cout << endl;
			matr2 = sort(matr2, n2);
			cout << "sorted erray:  ";
			for (int i = 0; i < n2; i++) {
				cout << matr2[i] << "  ";
			}
			cout << endl;
			delete[] matr2;
		}

	}
	
	int m3;
	cout << "array size(float): ";
	cin >> m3;
	cout << endl;
	if (m3 <= 0) {
		cout << "ERROR invalib array size" << endl;
	}
	else {
		int n3;
		cout << "n3=";
		cin >> n3;
		cout << endl;
		if (n3 <= 0 || n3 > m3) {
			cout << "ERROR n3" << endl;
		}
		else {
			float* matr3 = new float[m3];
			cout << "enter array elements: ";
			for (int i = 0; i < m3; i++) {
				cin >> matr3[i];
			}
			cout << endl;
			matr3 = sort(matr3, n3);
			cout << "sorted erray:  ";
			for (int i = 0; i < n3; i++) {
				cout << matr3[i] << "  ";
			}
			cout << endl;
			delete[] matr3;
		}

	}

	int m4;
	cout << "array size(double): ";
	cin >> m4;
	cout << endl;
	if (m4 <= 0) {
		cout << "ERROR invalib array size" << endl;
	}
	else {
		int n4;
		cout << "n4=";
		cin >> n4;
		cout << endl;
		if (n4 <= 0 || n4 > m4) {
			cout << "ERROR n4" << endl;
		}
		else {
			double* matr4 = new double[m4];
			cout << "enter array elements: ";
			for (int i = 0; i < m4; i++) {
				cin >> matr4[i];
			}
			cout << endl;
			matr4 = sort(matr4, n4);
			cout << "sorted erray:  ";
			for (int i = 0; i < n4; i++) {
				cout << matr4[i] << "  ";
			}
			cout << endl;
			delete[] matr4;
		}

	}
	int m5;
	cout << "array size(long double): ";
	cin >> m5;
	cout << endl;
	if (m5 <= 0) {
		cout << "ERROR invalib array size" << endl;
	}
	else {
		int n5;
		cout << "n5=";
		cin >> n5;
		cout << endl;
		if (n5 <= 0 || n5 > m5) {
			cout << "ERROR n5" << endl;
		}
		else {
			long double* matr5 = new long double[m5];
			cout << "enter array elements: ";
			for (int i = 0; i < m5; i++) {
				cin >> matr5[i];
			}
			cout << endl;
			matr5 = sort(matr5, n5);
			cout << "sorted erray:  ";
			for (int i = 0; i < n5; i++) {
				cout << matr5[i] << "  ";
			}
			cout << endl;
			delete[] matr5;
		}

	}
	int m6;
	cout << "array size(char): ";
	cin >> m6;
	cout << endl;
	if (m6 <= 0) {
		cout << "ERROR invalib array size" << endl;
	}
	else {
		int n6;
		cout << "n6=";
		cin >> n6;
		cout << endl;
		if (n6 <= 0 || n6 > m6) {
			cout << "ERROR n6"<< endl;
		}
		else {
			char* matr6 = new char[m6];
			cout << "enter array elements: ";
			for (int i = 0; i < m6; i++) {
				cin >> matr6[i];
			}
			cout << endl;
			matr6 = sort(matr6, n6);
			cout << "sorted erray:  ";
			for (int i = 0; i < n6; i++) {
				cout << matr6[i] << "  ";
			}
			cout << endl;
			delete[] matr6;
		}

	}

	
		
	return 0;
}

