#include "ThuVien.h"

void NhapTVien(ThanhVien& tv)
{
	cout << "Nhap so CMND (Gom 12 so) : ";
	cin >> tv.cmnd;
	cout << "Nhap ten thanh vien: ";
	cin.ignore();
	cin.getline (tv.TenHo, 30);
	cout << "Nhap tuoi: ";
	cin >> tv.Tuoi;
	cout << "Nhap gioi tinh: ";
	cin >> tv.GioiTinh;
}
void XuatTVien(ThanhVien& tv)
{
	cout << "So CMND: " << tv.cmnd << endl;
	cout << "Ten thanh vien: "<< tv.TenHo << endl;
	cout << "Tuoi: "<< tv.Tuoi << endl;
	cout << "Gioi tinh: "<< tv.GioiTinh << endl;
}
void NhapHoKhau(HoKhau& HKhau)
{
	cout << "Nhap ma ho khau (Gom 8 so) :";
	cin >> HKhau.id;
	cout << "Nhap ten chu ho: ";
	cin.ignore();
	cin.getline(HKhau.ChuHo, 30);
	cout << "Nhap tuoi chu ho: ";
	cin >> HKhau.TuoiChuHo;
	cout << "Nhap gioi tinh chu ho: ";
	cin >> HKhau.GioiTinhChuHo;
	cout << "Nhap so luong thanh vien: ";
	cin >> HKhau.SLTVien;
	for (int i = 0; i < HKhau.SLTVien; i++)
	{
		cout << "- Thanh vien " << i+1 << " : " << endl;
		NhapTVien(HKhau.DSTVien[i]);
	}
	
}
void xuatHoKhau(HoKhau& HKhau)
{
	cout << "Ma ho khau: " << HKhau.id << endl;
	cout << "Chu ho: " << HKhau.ChuHo << endl;
	cout << "Tuoi chu ho: " << HKhau.TuoiChuHo << endl;
	cout << "Gioi tinh chu ho: " << HKhau.GioiTinhChuHo << endl;
	for (int i = 0; i < HKhau.SLTVien; i++)
	{
		cout << "- Thanh vien " << i + 1 << " : " << endl ;
		XuatTVien(HKhau.DSTVien[i]);
	}
}
void NhapDSHoKhau(Phuong& DSHKhau)
{
	cout << "Nhap so luong ho khau muon nhap: ";
	cin >> DSHKhau.SLHoKhau;
	for (int i = 0; i < DSHKhau.SLHoKhau; i++)
	{
		cout << "- Nhap Ho Khau thu " << i + 1 << " : " << endl;
		NhapHoKhau(DSHKhau.DSHoKhau[i]);
	}
}
void XuatDSHoKhau(Phuong& DSHKhau)
{
	for (int i = 0; i < DSHKhau.SLHoKhau; i++)
	{
		cout << "- Ho Khau thu " << i + 1 << " : " << endl;
		xuatHoKhau(DSHKhau.DSHoKhau[i]);
	}
}
void themTVien(Phuong& DSHKhau)
{
	int ID;
	cout << "- Nhap ID ho khau ma ban muon them nguoi vao: ";
	cin >> ID;
	int index = -1;
	for (int i = 0; i < DSHKhau.SLHoKhau; i++)
	{
		if (ID == DSHKhau.DSHoKhau[i].id)
		{
			index = i;
			break;

		}
	}
	if (index == -1)
	{
		cout << "Khong tim thay ho khau co ID tuong ung." << endl;
	}
	else
	{
		NhapTVien(DSHKhau.DSHoKhau[index].DSTVien[DSHKhau.DSHoKhau[index].SLTVien]);
		DSHKhau.DSHoKhau[index].SLTVien++;
	}
}
void themHKhau(Phuong& DSHKhau)
{

	HoKhau hoKhauMoi;
	cout << "- Nhap them ho khau: " << endl;
	NhapHoKhau(hoKhauMoi);
	DSHKhau.DSHoKhau[DSHKhau.SLHoKhau] = hoKhauMoi;
	DSHKhau.SLHoKhau++;
}

void XoaTVien(Phuong& DSHKhau)
{
	int IDHK;
	int CMND;
	cout << "Nhap ma ho khau muon xoa thanh vien: ";
	cin >> IDHK;
	cout << "Nhap ma CMND cua thanh vien:";
	cin >> CMND;
	int indexHoKhau = -1;
	int indexTVien = -1;
	for (int i = 0; i < DSHKhau.SLHoKhau; i++)
	{
		if (DSHKhau.DSHoKhau[i].id == IDHK)
		{
			indexHoKhau = i;
			break;
		}
	}

	if (indexHoKhau == -1)
	{
		cout << "Khong tim thay ho khau co ID chu ho tuong ung trong phuong." << endl;
	}
	else
	{
		HoKhau& hoKhau = DSHKhau.DSHoKhau[indexHoKhau];
		for (int i = 0; i < hoKhau.SLTVien; i++)
		{
			if (hoKhau.DSTVien[i].cmnd == CMND)
			{
				indexTVien = i;
				break;
			}
		}

		if (indexTVien == -1)
		{
			cout << "Khong tim thay thanh vien co ID tuong ung trong ho khau." << endl;
		}
		else
		{
			for (int i = indexTVien; i < hoKhau.SLTVien - 1; i++)
			{
				hoKhau.DSTVien[i] = hoKhau.DSTVien[i + 1];
			}

			hoKhau.SLTVien--;
		}
	}
}

void XoaHoKhau(Phuong& DSHKhau)
{
	int IDHK;
	cout << "NHap ma ho khau muon xoa: ";
	cin >> IDHK;
	int indexIDHK = -1;
	for (int i = 0; i < DSHKhau.SLHoKhau; i++)
	{
		if (DSHKhau.DSHoKhau[i].id == IDHK)
		{
			indexIDHK = i;
			break;
		}
	}

	if (indexIDHK == -1)
	{
		cout << "Khong tim thay ho khau co ID chu ho tuong ung trong phuong." << endl;
	}
	else
	{
		for (int i = indexIDHK; i < DSHKhau.SLHoKhau - 1; i++)
		{
			DSHKhau.DSHoKhau[i] = DSHKhau.DSHoKhau[i + 1];
		}
		DSHKhau.SLHoKhau--;
	}
}
