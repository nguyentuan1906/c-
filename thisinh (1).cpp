#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;

class nguoi
{	public:
		int cmt;
		string ten;
		string ngaysinh;
};

class thisinh : public nguoi
{	public:	
		float diemtoan;
		float diemly;
		float diemhoa;
		float diemanh;
		float diemtb;
	public:	
		float tinhdiem()
		{	diemtb = diemtoan + diemly + diemhoa + diemanh;
			return diemtb;
		}
		
		void nhap()
		{	cout << "Nhap ho va ten:"; fflush(stdin); getline(cin,ten);
			cout << "Nhap chung minh thu:"; cin >> cmt;
			cout << "Nhap ngay sinh:"; fflush(stdin); getline(cin,ngaysinh);
			cout << "Nhap diem toan:"; cin >> diemtoan;
			cout << "Nhap diem ly:"; cin >> diemly;
			cout << "Nhap diem hoa:"; cin >> diemhoa;
			cout << "Nhap diem anh:"; cin >> diemanh;
		}
		
		void xuat()
		{	cout << "Ho va ten thi sinh:" << ten << endl;
			cout << "Chung minh thu thi sinh:" << cmt << endl;
			cout << "Ngay sinh thi sinh:" << ngaysinh << endl;
			cout << "Diem trung binh thi sinh:" << diemtb << endl;
		}
};

int main()
{	int n, i=0, x=0;
	do
	{	cout << "Moi nhap so luong thi sinh: ";
		cin >> n;
		if(n<=0)
			cout << "So luong thi sinh khong hop le! \nMoi nhap lai! \n";
	}while(n<=0);
	thisinh ts[n];
	for(i=0; i<n; i++)
	{	cout << "Moi nhap thi sinh thu " << i+1 << ": \n";
		ts[i].nhap();
	}
	cout << "Thi sinh co diem trung binh lon hon 20 la: ";
	for(i=0; i<n; i++)
	{	if(ts[i].tinhdiem() > 20)
		{
			cout << x+1 << ".\n";
			ts[i].xuat();
		}
	}
}
