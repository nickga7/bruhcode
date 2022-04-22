#include<iostream>
using namespace std;

int reverse(int arr[], int num1){
	for(int i=(num1-1);i>=0;i--){
		cout<<arr[i]<<" ";
	}
}
int main(){
	int num1=3;
	int arr[]={1, 2, 3};
	reverse(arr,num1);
	return 0;
}
