// C++ program to rotate a matrix 
// by 90 degrees 
#include <bits/stdc++.h> 
#define N 4 
using namespace std; 

void displayMatrix( 
	int mat[N][N]); 

// An Inplace function to 
// rotate a N x N matrix 
// by 90 degrees in 
// anti-clockwise direction 
void rotateMatrix(int mat[][N]) 
{ 
	for(int i=0;i<N/2;i++){
        for(int j=i;j<N-i-1;j++){
            int temp = mat[i][j];
            mat[i][j] = mat[j][N-1-i];
            mat[j][N-1-i] = mat[N-1-i][N-1-j];
            mat[N-1-i][N-1-j] = mat[N-1-j][i];
            mat[N-1-j][i]=temp;
        }
    }
} 

// Function to print the matrix 
void displayMatrix(int mat[N][N]) 
{ 
	for (int i = 0; i < N; i++) { 
		for (int j = 0; j < N; j++) 
			printf("%2d ", mat[i][j]); 

		printf("\n"); 
	} 
	printf("\n"); 
} 

/* Driver program to test above functions */
int main() 
{ 
	// Test Case 1 
	int mat[N][N] = { 
		{ 1, 2, 3, 4 }, 
		{ 5, 6, 7, 8 }, 
		{ 9, 10, 11, 12 }, 
		{ 13, 14, 15, 16 } 
	}; 

	// Tese Case 2 
	/* int mat[N][N] = { 
						{1, 2, 3}, 
						{4, 5, 6}, 
						{7, 8, 9} 
					}; 
	*/

	// Tese Case 3 
	/*int mat[N][N] = { 
					{1, 2}, 
					{4, 5} 
				};*/

	// displayMatrix(mat); 

	rotateMatrix(mat); 

	// Print rotated matrix 
	displayMatrix(mat); 

	return 0; 
} 
