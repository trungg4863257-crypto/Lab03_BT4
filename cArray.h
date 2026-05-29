#pragma once
#ifndef CARRAY_H
#define CARRAY_H

class cArray {
private:
	int n;
	int* a;

public:
	cArray();
	~cArray();

	void NhapNgauNhien();
	void Xuat();

	int DemX();
	bool KiemTraTangDan();

	int SoLeNhoNhat();
	int SoNguyenToLonNhat();

	void SapXepTang();
	void SapXepGiam();
};

#endif
