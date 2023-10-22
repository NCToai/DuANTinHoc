#pragma once
#include <iostream>

const int MAX = 100;
using namespace std;
struct ThanhVien
{
	char TenHo[20];
	int Tuoi;
	char GioiTinh[20];
};

struct HoKhau
{
	int id;
	char ChuHo[20];
	int TuoiChuHo;
	char GioiTinhChuHo[20];
	ThanhVien DSTVien[MAX];
	int SLTVien;
};

struct Phuong
{
	int SLHoKhau;
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