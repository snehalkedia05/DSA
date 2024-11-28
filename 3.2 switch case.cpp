/*#include<iostream>
using namespace std;
int main(){
	char button;
	cout<<"input a character ";
	cin>>button;
	
	switch(button)
	{
	case'a':
		cout<<"hello"<<endl;
		break;
	case'b':
		cout<<"hola"<<endl;
		break;
	case'c':
		cout<<"namaste"<<endl;
		break;
	case'd':
		cout<<"vadakam"<<endl;
		break;
	case'e':
		cout<<"gm"<<endl;
		break;
	
	default:
	    cout<<"i am still learning mode";
	    break;
		
	}
	return 0;
}*/


//basic calculator
#include<iostream>
using namespace std;
int main(){
	int n1,n2;
	cout<<"input 2 numbers";
	cin>>n1>>n2;
	
	char op;
	cout<<"int an operator";
	cin>>op;
	
	switch(op)
	{
		case'+':
			cout<<n1+n2<<endl;
			break;
		case'-':
			cout<<n1+n2<<endl;
			break;
		case'*':
			cout<<n1+n2<<endl;
			break;
		case'/':
			cout<<n1+n2<<endl;
			break;
		default :
			cout<<"enter another operator";
			break;
	}
	return 0;
}
