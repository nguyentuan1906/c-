#include <iostream>
using namespace std;

class hcn{
	public:
		float cdai, crong;
	public:
		void nhap(){
			cout << "Moi nhap chieu dai: "; cin >> cdai;
			cout << "Moi nhap chieu rong: "; cin >> crong;
		}
		void dientich(){
			cout << "\nDien tich hinh chu nhat vua nhap la: " << cdai*crong << endl;
		}
		void chuvi(){
			cout << "\nChu vi hinh chu nhat vua nhap la: " << 2*(cdai+crong) << endl;
		}
};

class hinhvuong : public hcn{
	public:
		void dientichhv(){
			cout << "\nDien tich hinh vuong vua nhap la: " << cdai*crong << endl;
		}
		void chuvihv(){
			cout << "\nChu vi hinh vuong vua nhap la: " << 2*(cdai+crong) << endl;
		}
};

int main(){
	hinhvuong a;
	a.nhap();
	if(a.cdai == a.crong){
		a.chuvihv();
		a.dientichhv();
	}
	else{
		a.chuvi();
		a.dientich();
	}
	return 0;
}

