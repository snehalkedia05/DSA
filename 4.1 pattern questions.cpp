//rows are given by user to print the patterns
/*#include<iostream>
using namespace std;
int main(){
	int rows;
	cin>>rows;
	
	for(int i=1;i<=rows;i++){
		cout<<"*";
		cout<<"*";
		cout<<"*";
		cout<<"*";
		cout<<endl;
		
	}
	return 0;
}*/

//rows and column both  are given by user to print the patterns
/*#include<iostream>
using namespace std;
int main(){
	int rows,columns;
	cin>>rows>>columns;
	
	for(int i=1;i<=rows;i++){
		for(int j=1;j<=columns;j++){
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}*/

//hollow rectangle
/*#include<iostream>
using namespace std;
int main(){
      int row,col;
      cin>>row>>col;
      
      for(int i=1;i<=row;i++){
      	  for(int j=1;j<=col;j++){
      		  if(i==1 || i==row || j==1 || j==col){
      			cout<<"*";
			  }
			else{
				cout<<" ";
			}
		  }
		  cout<<endl;
	  }
	  return 0;
}*/

//pyramid
/*#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	
	for(int i=n;i>=1;i--){
		for(int j=1;j<=i;j++){
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}*/

//half pyaramid after 180 degree rotation
/*#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(j<=n-i){
				cout<<" ";
			}
			else{
				cout<<"*";
			}
		}
		cout<<endl;
	}
}*/

//no. pattern question
/*#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			cout<<i<<" ";
			
		}cout<<endl;
	}
	return 0;
}*/

//floyd triangle
#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	
	int count=1;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			cout<<count<<" ";
			count++;
		}
		cout<<endl;
	}
	return 0;
}
