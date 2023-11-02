#include "ThuVien.h"

int main()
{
	HoKhau hoKhau;
	Phuong DSHKhau;
	bool tieptuc = true;
	while (tieptuc)
	{
		int choice;
	
		cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
		cout << "1. Nhap ho khau." << endl;
		cout << "2. Xuat ho khau." << endl;
		cout << "3. Them 1 nguoi vao ho khau." << endl;
		cout << "4. Them 1 ho khau vào phuong." << endl;
		cout << "5. Xoa 1 nguoi cua ho khau." << endl;
		cout << "6. Xoa 1 ho khau cua phuong." << endl;
		cout << "7. Tim 1 thanh vien." << endl;
		cout << "8. Tim 1 ho khau cua phuong." << endl;
		cout << "Nhap lua chon cua ban: ";
		cin >> choice;
		cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

		switch (choice)
		{
		case 1:
		{
			NhapDSHoKhau(DSHKhau);
			break;
		}
		case 2:
		{
			XuatDSHoKhau(DSHKhau);
			break;
		}
		case 3:
		{
			themTVien(DSHKhau);
			break;
		}
		case 4:
		{
			themHKhau(DSHKhau);
			break;
		}
		case 5:
		{
			XoaTVien(DSHKhau);
			cout << "Danh sach ho khau moi cap nhat" << endl;
			XuatDSHoKhau(DSHKhau);
			break;
		}
		case 6:
		{
			XoaHoKhau(DSHKhau);
			cout << "Danh sach ho khau moi cap nhat" << endl;
			XuatDSHoKhau(DSHKhau);
			break;
		}
		case 7:
		{
			thongTinTVTiemKiem(DSHKhau);
			break;
		}
		case 8:
		{
			thongtinHKTiemKiem(DSHKhau);
			break;
		}
		case 0:
			tieptuc = false;
			
			break;
		default:
			cout << "Chuc nang khong hop le." << endl;
			break;
		}
	}
	
	return 0;
	system("pause");
}