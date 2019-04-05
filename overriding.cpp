#include <iostream>
#include <conio.h>
using namespace std;
class balok {
	double p,l,t;
	public : double Luaspermukaan() {
		return(2*p*l)+(2*p*t)+(2*l*t);
	}
	public : double volume() {
		return(p*l*t);
	}
	public : double volume(double t) {
		return(p*l*t);
	}
	public : double volume(double t, double l) {
		return(p*l*t);
	}
	public : double volume(double t, double l, double p) {
		return(p*l*t);
	}
	void setpanjang(double pan){
		p = pan;
	}
	void setlebar(double leb){
		l = leb;
	}
	void settinggi(double tin){
		t = tin;
	}
};
int main(){
	int p,l,t,pb,lb,tb;
	balok blk;
	cout<<"Overriding Balok"<<endl;
	cout<<"Input Panjang : "; cin>>p;
	cout<<"Input Lebar : "; cin>>l;
	cout<<"Input Tinggi : "; cin>>t;
	blk.setpanjang(p);
	blk.setlebar(l);
	blk.settinggi(t);
	cout<<"Luas Permukaan Balok = "<<blk.Luaspermukaan()<<endl;
	cout<<"Volume Balok = "<<blk.volume()<<endl<<endl;
	cout<<"Tinggi baru = "; cin>>tb;
	cout<<"Volume Balok 1 parameter = "<<blk.volume(tb)<<endl;
	cout<<"Lebar baru = "; cin>>lb;
	cout<<"Volume Balok 2 parameter = "<<blk.volume(tb, lb)<<endl;
	cout<<"Panjang baru = "; cin>>pb;
	cout<<"Volume Balok 3 parameter = "<<blk.volume(tb, lb, pb)<<endl;
	return 0;
}
