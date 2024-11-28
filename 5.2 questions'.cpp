//reverse a no. 1234=4321
/*#include<iostream>
using namespace std;
int main(){
	
	int n;
	cin>>n;
	int reverse=0;;
	while(n>0){
		int lastdigit = n%10;
		reverse = reverse*10 + lastdigit;
		n=n/10;
	} 
	cout<<reverse<<endl;
	
	return 0;
}*/

//no is armstrong or not 
//armstrong no means jese ki sare no.ka cube nikale fir sbko add kr de toh ahi no. nikl ke aa jayega 153 cube  1+125+27=153
#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	  
	int sum=0;
	int originaln=n;
	while(n>0){
		int lastdigit=n%10;
		sum+=pow(lastdigit,3);
		n=n/10;
	}
	if(sum==originaln){
		cout<<"arm";
	}
	else{
		cout<<"not";
	}
	 return 0;
}
