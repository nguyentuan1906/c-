#include<iostream>
using namespace std;

struct Node{
    int elem;
    Node *next;

};

struct Quene{
    Node *f;
    Node *b;
    int kichthuoc;

};

void khoitao(Quene &q){
    q.f = NULL;
    q.b = NULL;
    q.kichthuoc = 0;
}



bool kiemtra(Quene &q){
    if(q.kichthuoc == 0)
        return true;
    else
        return false;
}

int kichthuoc(Quene &q){
    return q.kichthuoc;
}

void chencuoi(Quene &q, int e){
    Node * v = new Node;      
	v->elem = e;              
	v->next = NULL;           
	
	if (q.kichthuoc == 0)        
		q.f = q.b = v; 
	else                      
	{
		q.b->next = v;     
		q.b = v;           
	}
	q.kichthuoc++;                 
}

int xoa(Quene &q){
    int e = q.f->elem;
    Node *v = q.f;
    if(q.kichthuoc == 1)
        q.f = q.b = NULL;
    else 
        q.f = q.f->next;
    delete v;
    q.kichthuoc--;
    return e;
}
void huy(Quene &q){
    while (!kiemtra(q))
		xoa(q);
}

void in(Quene &q){
    for(Node *k= q.f;k!=NULL;k = k->next){
        cout<< k->elem <<" ";
    }
}

bool kiemtrax(Quene &q, int x){
    for(Node *k= q.f;k!=NULL;k = k->next){
        if(x == k->elem)
            return true;       
    }return false;
}

int giatri(Quene &q){
    for(Node *k= q.f;k!=NULL;k = k->next)
    return k->elem;
}

int main(){
    Quene q;
    khoitao(q);
    if(kiemtra(q)== true)
        cout<<"Hang doi rong."<<endl;
    else
        cout<<"Hang doi khong rong."<<endl;
    int n, i, t, x;
    do{
        cout<<"Moi nhap kich thuoc cua quene: "; cin>>n;
    }while(n<0);
    for(i=0;i<n;i++){
        cout<<"Moi nhap phan tu "<<i+1<<" cua quene: "; cin>>t;
        chencuoi(q, t);
    }
    cout<<"Cac phan tu trong hang doi la: ";
    in(q);
    cout<<"\nMoi nhap x: "; cin>>x;
    if(kiemtrax(q,x)==true){
        cout<<x<<" co trong hang doi.";
    }else
        cout<<x<<" khong co trong hang doi.";
    for(i = 0; i < n; i++){ 
        t = giatri(q);
        cout << "\nPhan tu thu " << i+1 << " : " << t <<" da duoc rut khoi stack!";
        xoa(q);
    }
    cout<<"\n";
    if(kiemtra(q)== true)
        cout<<"Hang doi rong."<<endl;
    else
        cout<<"Hang doi khong rong."<<endl;
    huy(q);
    return 0;
}