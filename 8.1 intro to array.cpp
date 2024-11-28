//datatype arrayname[size];
/*#include<iostream>
using namespace std;
int main(){
	int array[4]={10,20,30,40};
	cout<<array[3]<<endl;
	
	return 0;
}*/

//if we want to take input from user
/*#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int array[n];
	for(int i =0;i<=n;i++){
		cin>>array[i];
	}
	for(int i =0;i<=n;i++){
		cout<<array[i]<<" ";
	}
	
	
	return 0;
}*/


//to print max nd min element from array
/*#include<iostream>
#include<climits>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;<i++){
		cin>>arr[i];
	}
	int maxNo=INT_MIN;
	int minNo=INT_MAX;
	for(int i=0;i<n;i++){
		maxNo=max(maxNo,arr[i]);
		minNo=min(minNo,arr[i]);
	}
	cout<<maxNo<<" "<<minNo<<endl;
	
	return 0;
}*/

