#include <iostream>
using namespace std;

class ayah{
      public:
             void rambut(){
                  cout<<">Rambutnya Keriting"<<endl;
                  }             
};

class ibu{
      public:
             void kulit(){
                  cout<<">Kulitnya Putih"<<endl;
                  }
      };

class anak : public ayah, public ibu{
      public:
             void hidung(){
                  cout<<">Hidung anak itu mancung"<<endl;
                  } 
      };

class cucu : public ayah, public ibu{
      public:
             void pandai(){
                  cout<<">Cucu dari Kakek dan Nenek itu pandai berhitung"<<endl;
                  }             
};

int main(){
	anak ank;
	ank.hidung();
	cucu cc;
	cc.pandai();
	return 0;
} 
