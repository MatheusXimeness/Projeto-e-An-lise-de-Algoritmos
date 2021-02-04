#include<iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	for(int i=0;i<n-2;i++)
		for(int j=i+1;j<n-1;j++)
			cout << "**" << endl;
	return 0;
}
