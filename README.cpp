# problema7
#include <iostream>
using namespace std;
int main(){
	cout << endl;
	int matr[][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
	
	for(int i =0;i<3;i++)
	{	cout<<"\t ";
	for(int j =0;j<4;j++)
	{
		cout<<matr[i][j]<<"\t ";
	}
	cout << endl;
	}
	cout<<"\n\nSea la declaracion:  matr[][4] = {1,2,3,4,5,6,7,8,9,10,11,12}"
		<<"\n Cual afirmacion es falsa?"<<endl
		<<"\na.  **matr es igual a 1			-->	"<< **matr			
		<<"\nb.  *(*(matr+1)+2) es igual a 7		-->	"<<*(*(matr+1)+2)
		<<"\nc. *(matr[2]+3) es igual a 12		-->	"<< *(matr[2]+3)	
		<<"\nd.  (*(matr+2))[2] es igual a 11 	-->	"<<(*(matr+2))[2]	
		<<"\ne. *((*matr)+1) es igual a 5		-->	"<< *((*matr)+1);	
	
	
	
	
	return 0;
}
