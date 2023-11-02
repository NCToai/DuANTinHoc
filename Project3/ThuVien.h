#pragma once
#include <iostream>

const int MAX = 50;
using namespace std;
struct ThanhVien
{
	int cmnd;
	char TenHo[30];
	int Tuoi;
	bool GioiTinh;
};

struct HoKhau
{
	int id = 0;
	char ChuHo[30];
	int TuoiChuHo = 0;
	bool GioiTinhChuHo;
	char diaChi[60];
	ThanhVien DSTVien[MAX];
	int SLTVien = 0;
};

struct Phuong
{
	int SLHoKhau = 0;
	HoKhau DSHoKhau[MAX];
};

void NhapTVien(ThanhVien& tv);
void XuatTVien(ThanhVien& tv);

void NhapHoKhau(HoKhau& HKhau);
void xuatHoKhau(HoKhau& Hkhau);

void NhapDSHoKhau(Phuong& DSHKhau);
void XuatDSHoKhau(Phuong& DSHKhau);

void themTVien(Phuong& DSHKhau);
void themHKhau(Phuong& DSHKhau);

void XoaTVien(Phuong& DSHKhau);
void XoaHoKhau(Phuong& DSHKhau);

int timTVien_chiso(HoKhau& HKhau);
int timHK_chiso(Phuong& DSHKhau);

void thongTinTVTiemKiem(Phuong& DSHKhau);
void thongtinHKTiemKiem(Phuong& DSHKhau);