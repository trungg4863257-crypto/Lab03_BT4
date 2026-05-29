#include <iostream>
#include "cArray.h"

using namespace std;

int main() {
	cArray arr;

	arr.NhapNgauNhien();
	arr.Xuat();

	arr.DemX();

	if (arr.KiemTraTangDan())
		cout << "Mang tang dan\n";
	else
		cout << "Mang khong tang dan\n";

	cout << "So le nho nhat: " << arr.SoLeNhoNhat() << endl;
	cout << "So nguyen to lon nhat: " << arr.SoNguyenToLonNhat() << endl;

	arr.SapXepTang();
	cout << "Tang dan: ";
	arr.Xuat();

	arr.SapXepGiam();
	cout << "Giam dan: ";
	arr.Xuat();

	return 0;
}
