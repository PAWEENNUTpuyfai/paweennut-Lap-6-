#include<iostream>
using namespace std;

int main(){
	int N=20;
	int I[N];
    int i=0;
    do { 
		cout << "Enter an integer: ";
		cin >> I[i];
	    i++;
	}
	while (I[i-1]!=0);
	int n= 0;
	int a=0;
	int b=0;
	while (n<i){
		if (I[n]%2==0 ){
			a=a+1;
		}else{
			b=b+1;
		}
		n++;
	}
    cout << "#Even numbers = ";
    cout << a-1<<"\n";
    cout << "#Odd numbers = ";
    cout << b;
    return 0;
    
}