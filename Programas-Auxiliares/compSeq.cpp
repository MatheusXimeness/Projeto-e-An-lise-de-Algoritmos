#include<iostream>
using namespace std;

int main(){
	int seqA[] = {5,3,5,6,8,2,7,9};
	int seqB[] = {5,6,8,2,7};
	int m = 5;
	int n = 8;
	
	int posInit = 0;
	int cont2 = 0;

	for(int j=0;j<n;j++){
		if(seqB[0] == seqA[j]){
			posInit = j;
			cont2++;
			break;
		}
	}
		
	for(int i=1;i<m;i++){
		
		if(seqB[i] == seqA[posInit+i]){
			cont2++;
		} else{ 
			cont2 = 0;
			i = 0;
			for(int j=posInit+1;j<n;j++)
				if(seqB[0] == seqA[j]){
					posInit = j;
					cont2++;
					break;
				}
		}
	}
	if(cont2 == m) cout << "ta contido e começa em " << posInit << endl;
	else cout << "nao esta contido" << endl;
	return 0;
}
