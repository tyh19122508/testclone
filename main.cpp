#include <iostream>
using namespace std;
class TamGiac{
	float a,b,c;
	public:
		TamGiac(){
			this->a=2;
			this->b=4;
			this->c=5;
		}
		~TamGiac(){
			this->a=0;
			this->b=0;
			this->c=0;
		}
		Tamgiac(float a, float b, float c){
			this->a=a;
			this->b=b;
			this->c=c;			
		}
	public:
		friend bool ktraTamgiac(TamGiac s){
		   if((s.a+s.b)<s.c||(s.a+s.c)<s.b||(s.c+s.b)<s.a){
		   	return false;
		   }
		   return false;
		}
		friend void Nhaptamgiac(TamGiac s){
			do{
			cout<<"Nhap gia tri cua 3 canh: "<<"/n";
			cin>>s.a>>s.b>>s.c;
			}while(ktraTamgiac(s));
		}
		
};
int main(int argc, char** argv) {
	TamGiac a;
	Nhaptamgiac(a);
	return 0;
}
