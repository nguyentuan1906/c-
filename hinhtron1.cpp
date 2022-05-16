#include <iostream>
#include <math.h>
using namespace std;

class diem{
	public:
		float x, y;
};

class hinhtron : public diem{
	public:
		void nhap(){
			cout << "Moi nhap toa do cua X: "; cin >> x;
			cout << "Moi nhap toa do cua Y: "; cin >> y;
		}
};

void dientich(hinhtron a, hinhtron b){
	float d;
	d = sqrt((a.x - b.x)*(a.x - b.x)+(a.y - b.y)*(a.y - b.y));
	cout << "\nDien tich hinh tron duoc tao boi 2 diem A va B la: " << (d/2)*(d/2)*3.14;
}
		
void chuvi(hinhtron a, hinhtron b){
	float d;
	d = sqrt((a.x - b.x)*(a.x - b.x)+(a.y - b.y)*(a.y - b.y));
	cout << "\n\nChu vi hinh tron duoc tao boi 2 diem A va B la: " << d*3.14;
}

int main(){
	hinhtron a, b;
	cout << "Diem A:\n";
	a.nhap();
	cout << "Diem B:\n";
	b.nhap();
	dientich(a,b);
	chuvi(a,b);
	return 0;
}
