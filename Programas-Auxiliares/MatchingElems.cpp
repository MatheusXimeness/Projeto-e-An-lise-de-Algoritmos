#include<iostream>
using namespace std;

int match(int *vec1, int *vec2, int pos, int maior){
	for(int i=pos;i<maior;i++)
		if(vec1[pos]==vec2[i])
		       return i;	
	return 43;
}

int main(){
	int tamVec1, tamVec2;
	
	cin >> tamVec1 >> tamVec2;
	int *vec1 = new int[tamVec1];
	int *vec2 = new int[tamVec2];
	
	for(int i=0;i<tamVec1;i++)
		cin >> vec1[i];
	for(int i=0;i<tamVec2;i++)
		cin >>vec2[i];

	int maior, menor;
	int z;
	if(tamVec1 > tamVec2){
		maior = tamVec1;
		menor = tamVec2;
		z = 1;
	}
	else if (tamVec2 > tamVec1){
		maior = tamVec2;
		menor = tamVec1;
		z = 0;
	} else {
		maior = menor = tamVec1;
		z=1;
	}
	int menor2 = menor;

	int *vec3 = new int[menor];
	int j=0;
	while(menor!=0){
		vec3[j] = match(vec1, vec2, j, maior);	
		menor--;
		j++;
	}

	for(int i=0;i<j;i++){
		if(z==1)
			cout << vec1[vec3[i]] << " ";
		if(z==0)
			cout << vec2[vec3[i]] << " ";
	}
	cout << endl;
	return 0;
}
