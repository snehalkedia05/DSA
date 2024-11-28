//1 print all prime no between 2 given numbers


//2 fibonacci sequence means next term is sum of two previous terms
/*#include<iostream>
using namespace std;

void fib(int n){
	int t1=0;
	int t2=1;
	int nextTerm;
	
	for(int i=1;i<=n;i++){
		cout<<t1<<endl;
		nextTerm=t1+t2;
		t1=t2;
		t2=nextTerm;
	}
	return;
}
int main(){
	int n;
	cin>>n;
	
	fib(n);
	return 0;
}*/


//3 factorial of n terms
/*#include<iostream>
using namespace std;
int fact(int n){
	int factorial =1;
	for(int i=2;i<=n;i++){
		factorial*=i;
	}
	return factorial;
}

int main(){
	int n;
	cin>>n;
	
	int ans =fact(n);
	cout<<ans<<endl;
	return 0;
}*/

//4 to calculate ncr
/*#include<iostream>
using namespace std;
int fact(int n){
	int factorial =1;
	for(int i=2;i<=n;i++){
		factorial*=i;
	}
	return factorial;
}

int main(){
	
	int n,r;
	cin>>n>>r;
	
	int ans=fact(n)/(fact(r)*fact(n-r));
	cout<<ans<<endl;
	
	
	return 0;
}*/

//pascal trainagle
/*


