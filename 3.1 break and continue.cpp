//continue statement is used to skip to the next iteration of the loops 
// break statement is used to terminate the loops

/*jo 3 se divisible h vo print nahi hogi
#include<iostream>
using namespace std;
int main(){
	for(int i = 0;i<100;i++){
		if(i%3==0){
			continue;
		}
		cout<<i<<endl;
	}
    return 0;
}*/

//prime or not
#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int i;
	for(i=2;i<n;i++){
			if(n%i==0){
		       cout<<"not prime"<<endl;
		       break;  
		
	        }
	}
	if(i==n){
		cout<<" prime"<<endl;
		
	}
	
	return 0;

}
