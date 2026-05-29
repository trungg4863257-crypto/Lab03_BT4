#include <iostream>
#include <cstdlib>
#include <ctime>
#include <climits>
#include <cmath>
#include "cArray.h"

using namespace std;

cArray::cArray() {
	n = 0;
	a = NULL;
}

cArray::~cArray() {
	delete[] a;
}

/* tạo mảng ngẫu nhiên */
void cArray::NhapNgauNhien() {
	cout << "Nhap n: ";
	cin >> n;

	a = new int[n];

	srand(time(0));

	for (int i = 0; i < n; i++) {
		a[i] = rand() % 100;
	}
}

/* xuất mảng */
void cArray::Xuat() {
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
}

/* đếm số lần xuất hiện */
int cArray::DemX() {
	int x = 0;
	cout << "Nhap x: ";
	cin >> x;
	int dem = 0;

	for (int i = 0; i < n; i++) {
		if (a[i] == x)
			dem++;
	}
	cout << "So lan xuat hien "<<x<< ": " << dem << endl;

	return dem;
}

/* kiểm tra tăng dần */
bool cArray::KiemTraTangDan() {
	for (int i = 0; i < n - 1; i++) {
		if (a[i] > a[i + 1])
			return false;
	}
	return true;
}

/* tìm số lẻ nhỏ nhất */
int cArray::SoLeNhoNhat() {
	int min = INT_MAX;
	bool found = false;

	for (int i = 0; i < n; i++) {
		if (a[i] % 2 != 0) {
			if (!found || a[i] < min) {
				min = a[i];
				found = true;
			}
		}
	}

	if (!found) return -1;
	return min;
}

/* kiểm tra số nguyên tố */
bool isPrime(int x) {
	if (x < 2) return false;

	for (int i = 2; i <= sqrt(x); i++) {
		if (x % i == 0)
			return false;
	}
	return true;
}

/* tìm SNT lớn nhất */
int cArray::SoNguyenToLonNhat() {
	int max = -1;

	for (int i = 0; i < n; i++) {
		if (isPrime(a[i])) {
			if (a[i] > max)
				max = a[i];
		}
	}

	return max;
}

/* sắp xếp tăng */
void cArray::SapXepTang() {
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (a[i] > a[j]) {
				swap(a[i], a[j]);
			}
		}
	}
}

/* sắp xếp giảm */
void cArray::SapXepGiam() {
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (a[i] < a[j]) {
				swap(a[i], a[j]);
			}
		}
	}
}
