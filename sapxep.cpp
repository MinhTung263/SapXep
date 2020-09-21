#include <iostream>
#include <string>
using namespace std;
int main(){
	int a[100];
	int n;
	int temp;
	cout<<"Nhap vao so phan tu trong mang: ";
	cin>>n;
	for(int i=0;i<n;i++){
		cout<<"Nhap phan tu a["<<i+1<<"]: ";
		cin>>a[i];
	}
	cout<<"Mang vua nhap la: "<<endl;
	for(int i=0;i<n;i++){
		cout<<"\t\t\a["<<i+1<<"]: "<<a[i]<<endl;
	}
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]>a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	cout<<"Mang sau khi sap xep tang dan la:";
	for(int i=0;i<n;i++){
		cout<<"\t"<<a[i];
	}
	
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]<a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	cout<<"\n\nMang sau khi sap xep giam dan la:";
	for(int i=0;i<n;i++){
		cout<<"\t"<<a[i];
	}
	
	cout<<"\n\nCac so chan trong mang la:";
	for(int i=0;i<n;i++){
		if(a[i]%2==0){
			cout<<"\t"<<a[i];
		}
	}
	cout<<"\n\nCac so le trong mang la:";
	for(int i=0;i<n;i++){
		if(a[i]%2!=0){
			cout<<"\t"<<a[i];
		}
	}	
}
