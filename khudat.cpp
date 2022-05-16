#include <iostream>
#include <string>
using namespace std;

class khudat
{	protected:
		string diadiem;
		int giaban;
		float s;
};

class nhasanvuon : public khudat
{	public:
		float sxaydung_sv;
	public:
		void nhap()
		{	cout << "Moi nhap dia diem: "; fflush(stdin); getline(cin,diadiem);
			cout << "Moi nhap gia ban: "; cin >> giaban;
			cout << "Moi nhap dien tich: "; cin >> s;
			cout << "Moi nhap dien tich xay dung: "; cin >> sxaydung_sv;
		}
		void xuat()
		{	cout << "Dia diem: " << diadiem;
			cout << "\nGia ban: " << giaban;
			cout << "\nDien tich: " << s;
			cout << "\nDien tich xay dung: " << sxaydung_sv;
		}
};

class nhapho : public khudat
{	public:
		float sxaydung_p;
		int sotang;
	public:
		void nhap()
		{	cout << "Moi nhap dia diem: "; fflush(stdin); getline(cin,diadiem);
			cout << "Moi nhap gia ban: "; cin >> giaban;
			cout << "Moi nhap dien tich: "; cin >> s;
			cout << "Moi nhap dien tich xay dung: "; cin >> sxaydung_p;
			cout << "Moi nhap so tang: "; cin >> sotang;
		}
		void xuat()
		{	cout << "Dia diem: " << diadiem;
			cout << "\nGia ban: " << giaban;
			cout << "\nDien tich: " << s;
			cout << "\nDien tich xay dung: " << sxaydung_p;
			cout << "\nSo tang: " << sotang;
		}
};

int main()
{	int n_sv, n_p, i, i_p, i_sv;
	float s_p, s_sv;
	do
	{	cout << "Moi nhap so nha san vuon: "; cin >> n_sv;
		cout << "Moi nhap so nha pho: "; cin >> n_p;
		if(n_sv < 0)
			cout << "So nha san vuon khong hop le!\n";
		if(n_p < 0)
			cout << "So nha pho khong hop le!\n";
		if((n_sv <0)||(n_p<0))
			cout << "Moi nhap lai!\n";
	}while((n_sv <0)||(n_p<0));
	nhapho p[n_p];
	nhasanvuon sv[n_sv];
	
	//Nhap du lieu nha pho
	for(i=0; i<n_p; i++)
	{	cout << "Nha pho " << i+1 << " : \n";
		p[i].nhap();
	}
	cout << "\n";
	
	//Nhap du lieu nha san vuon
	for(i=0; i<n_sv; i++)
	{	cout << "Nha san vuon " << i+1 << " : \n";
		sv[i].nhap();
	}
	
	//Tim nha pho co sxaydung lon nhat!
	if(n_p > 0)
	{	
		s_p = p[0].sxaydung_p;
		for(i=0; i<n_p; i++)
		{	if(s_p < p[i].sxaydung_p)
			{	s_p = p[i].sxaydung_p;
				i_p = i;
			}
		}
		cout << "\nNha pho co dien tich xay dung lon nhat la:\n";
		p[i_p].xuat();
	}
	
	//Tim nha san vuon co dien tich xay dung lon nhat
	if(n_sv > 0)
	{	s_sv = sv[0].sxaydung_sv;
		for(i=0; i<n_sv; i++)
		{	if(s_sv < sv[i].sxaydung_sv)
			{	s_sv = sv[i].sxaydung_sv;
				i_sv = i;
			}
		}
		cout << "\nNha san vuon co dien tich xay dung lon nhat la:\n";
		sv[i_sv].xuat();
	}
	return 0;
}
