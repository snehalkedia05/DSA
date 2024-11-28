//maximum of 3 number
/*#include<iostream>
using namespace std;
int main(){
	int a,b,c;
	cin>>a>>b>>c;
	
	if(a>b){
		if(a>c){
			cout<<a<<endl;
		}
		else{
			cout<<c<<endl;
		}
	}
	
	else{
		if(b>c){
			cout<<b<<endl;
		}
		else{
		    cout<<c<<endl;
		
	}
	return 0;
}
}*/


//even or odd
#include<iostream>
using namespace std;
int main(){
	int a;
	cin>>a;
	
	if(a%2==0){
		cout<<"even";
	}
	else{
		cout<<"odd";
	}
	
   return 0;
}
