#include <iostream>
using namespace std;

int main() {
cout <<"[0,0] [0,1] [0,2]" << endl;
cout <<"[1,0] [1,1] [1,2]" << endl;
cout <<"[2,0] [2,1] [2,2]" << endl;
int i,j;
int M [3] [3];
int M1 [3] [3];
int M2 [3] [3];

cout << "\nMasukan nilai M1 " << endl;
for (int i=0; i<3; i++){
	for (int j=0; j<3; j++)
	{
	cout << "Matriks " << (i) << "," << (j) << ": ";
	cin >> M1 [i] [j];
	M [i] [j] = M1 [i] [j] + M2 [i] [j];
	}
}
cout <<"\nMatriks M1 : " << endl;
for (int i=0; i<3; i++){
	for (int j=0; j<3; j++)
	{
		cout <<" ";
		cout << M1 [i] [j] <<" ";
	} cout << endl;
} cout << endl;

cout <<"\nMasukan nilai M2 " << endl;
	for (int i=0; i<3; i++){
		for (int j=0; j<3; j++)
	{
	cout <<"Matriks " << (i)<< "," <<(j)<< ": ";
	cin >> M2 [i] [j];
	}
}
cout <<"\nMatriks M2 : " << endl;
for (int i=0; i<3; i++){
	for (int j=0; j<3; j++)
	{
		cout <<" ";
		cout << M1 [i] [j] <<" ";
	} cout << endl;
} cout << endl;

cout<<"Hasil Jumlah Matriks: " << endl;
for (int i=0; i<3; i++){
	for (int j=0; j<3; j++)
	{
		M [i] [j] = M1 [i] [j] + M2 [i] [j];
		cout <<" ";
		cout << M [0][0];
	} cout <<endl;
} cout <<endl;
return 0;
}
