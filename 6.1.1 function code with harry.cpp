//sum of two numbers
/*#include<iostream>
using namespace std; 

int sum(int a,int b){
	int c = a+b;
	return c;
}

int main(){
	int num1,num2;
	cin>>num1>>num2;
	cout<<"the sum of two numbers is"<<sum(num1, num2);	
	return 0;
    	
}*/

//function prototype
//type funcation-name(arguments);

#include<iostream>
using namespace std;

int sum(int a, int b);//ye bhi acceptable h but yaha nhi run ho r
int main(){
	int num1,num2;
	cin>>num1>>num2;
	cout<<"the sum of two no is"<<sum(num1, num2);
	return 0;
}



