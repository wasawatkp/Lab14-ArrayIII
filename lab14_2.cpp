#include<iostream>
using namespace std;

const int N = 5;

void inputMatrix(double [][N]);

void findLocalMax(const double [][N], bool [][N]);

void showMatrix(const bool [][N]);

int main(){
	double A[N][N]; 
	bool B[N][N]; 
	cout << "Input the matrix.....\n";
	inputMatrix(A);
	findLocalMax(A,B);
	cout << "Result is \n";
	showMatrix(B);
	return 0;
}

//Do not modify source code above this line 

void inputMatrix(double A[][N]){

	for (int i = 0; i < N; i++)
	{
		cout << "Row " << i+1 << ": ";
		for (int j = 0; j < N; j++)
		{
			cin >> A[i][j] ;
		}

	}
	



}

void findLocalMax(const double A[][N], bool B[][N]){
	

	for (int x = 0; x < N; x++)
	{
		for (int y = 0; y < N; y++)
		{
			 B[x][y] = false;
		}
	}

	for (int i = 1; i < N-1; i++)
	{
		for(int j = 1; j < N-1; j++){
			if(A[i][j] >= A[i][j-1] && A[i][j] >= A[i][j+1] && 
			A[i][j] >= A[i-1][j] && A[i][j] >= A[i+1][j])
			{
				B[i][j] = true;
			}
			else B[i][j] = false;
		}

		
		
	}


	

}

/*
	1,0,1,0,1
	5,8,3,0,2
	1,4,1,2,1
	1,0,4,4,1
	0,7,2,3,1

*/

void showMatrix(const bool B[][N]){

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cout << B[i][j] << " ";
		}
		cout << endl;
	}
	
}