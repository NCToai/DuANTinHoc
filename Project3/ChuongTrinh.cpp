#include "ThuVien.h"

int main()
{
	ThanhVien TVien;
	HoKhau HKhau;
	Phuong DSHKhau;
	NhapDSHoKhau(DSHKhau);

	cout << "\nDanh sach ho khau: " << endl;
	XuatDSHoKhau(DSHKhau);
	themHKhau(DSHKhau);
	/*themTVien(DSHKhau);*/
	XuatDSHoKhau(DSHKhau);
	


	return 0;
	system("pause");
}