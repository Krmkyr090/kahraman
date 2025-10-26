/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string>
using namespace std;
class Karakter{
    public:
        int can;
        string adi;
        int hiz;
        int guc;
        void vur(){
            cout<<adi<<"  vuruyor"<<endl;
        }
        void ol(){
            cout<<adi<<"  öldü"<<endl;
        }
        void ag(){
            cout<<adi<<"  ağ attı"<<endl;
        }
        void hasaraldı(){
            cout<<adi<<"  hasar aldı"<<endl;
        }
        
};
int main()
{
	Karakter karakter1;
	karakter1.adi = "spiderman";
	karakter1.can = 12000;
	karakter1.hiz = 890;
	karakter1.guc = 5000;
    
	Karakter karakter2;
	karakter2.adi = "batman";
	karakter2.can = 10000;
	karakter2.hiz = 1600;
	karakter2.guc = 1000;
	
	for(int i=0;i<1;i++){
	karakter1.vur();
	karakter2.hasaraldı();
	cout<<"batmanin canı"<<" "<<karakter2.can - karakter1.guc <<" "<<"kaldı"<<endl;
	karakter2.vur();
	karakter1.hasaraldı();
	cout<<"spiderman canı"<<" "<<karakter1.can - karakter2.guc<<" " <<"kaldı"<<endl;
	};
	
	karakter1.ag();
	karakter2.ol();
    
    return 0;
}