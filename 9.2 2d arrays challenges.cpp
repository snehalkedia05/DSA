//transpose of matrix
/*#include<iostream>
using namespace std;
int main(){
	int A[3][3] = {{1, 2, 3}, {4, 5, 6}, {7,8,9}};
    for(int i=0;i<3;i++){
    	for(int j=i;j<3;j++){
    		//swap
    		int temp=A[i][j];
    		A[i][j] =A[j][i];
    		A[j][i] = temp;
		}
	}
	//print
	for(int i=0;i<3;i++){
    	for(int j=0;j<3;j++){
    	cout<<A[i][j]<<" ";
		}
		cout<<endl;
	}
	
	return 0;
}*/

//matrix multiplication
//matrix search
#include<iostream>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	int target;
	cin>>target;
	int mat[n][m];
	for(int i=0; i<n;i++){
		for(int j=0;j<m;j++){
			cin>> mat[i][j];
		}
	}
	int r =0, c=m-1;
	bool found = false;
	while(r<n and c>=0){
		if(mat[r][c]==target){
			found == true;
		}
		if(mat[r][c] > target){
			c--;
		}
		else{
			r++;
		}
	}
	if(found){
		cout<<"element found";
	}
	else{
		cout<<"element does not exist";
	}
	
	return 0;
}
