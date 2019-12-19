#include<iostream>
using namespace std;
int main(){
	int a=1,b;
	int fmax=0,smax=0;
	cout<<endl<<endl;
	cout<<"you must enter each number once time"<<endl<<endl;
		cout<<"Enter Ten Numbers: ";
    while(a<=10){
    	
        	cin>>b;	
			
		if(fmax<b){
			smax=fmax;
			fmax=b;
		}else if(smax<b){
			smax=b;
		}
        a++;
    }
        cout<<"First Maximum Number is: "<<fmax<<endl;
         cout<<"Second Maximum Number is: "<<smax<<endl;
}

