#include <iostream>
#include <math.h>
using namespace std;

class diem{
	protected:
		float x, y;
};

class hinhtron : public diem{
	protected:
		float xa, xb, ya, yb;
	public:
		void nhap(){
			cout << "Moi nhap toa do cua Xa: "; cin >> xa;
			cout << "Moi nhap toa do cua Ya: "; cin >> ya;
			cout << "Moi nhap toa do cua Xb: "; cin >> xb;
			cout << "Moi nhap toa do cua Yb: "; cin >> yb;
		}
		void dientich(){
			float d;
			d = sqrt((xa - xb)*(xa - xb)+(ya-yb)*(ya-yb));
			cout << "Dien tich hinh tron la: " << (d/2)*(d/2)*3.14;
		}
		void chuvi(){
			float d;
			d = sqrt((xa - xb)*(xa - xb)+(ya-yb)*(ya-yb));
			cout << "\nChu vi hinh tron la: " << d*3.14;
		}
};

int main(){
	hinhtron a;
	a.nhap();
	a.chuvi();
	a.dientich();
	return 0;
}
