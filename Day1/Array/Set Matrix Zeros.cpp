#include <bits/stdc++.h> 
#include <bits/stdc++.h> 
#include<vector>
//https://www.codingninjas.com/codestudio/problems/set-matrix-zeros_3846774?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website

void setZeros(vector<vector<int>> &matrix)
{
	// Write your code here.
	int r = matrix.size();
	int c = matrix[0].size();
	int row[r],col[c];
	for(int i=0;i<r;i++){
		row[i] = -1;
	}
	for(int i=0;i<c;i++){
		col[i] = -1;
	}
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			if(matrix[i][j] == 0){
				row[i] = 0;
				col[j] = 0;
			}
		}
	}
	for(int i=0;i<r;i++){
		for(int j=0;j<c; j++){
			if(row[i] == 0 || col[j] == 0){
				matrix[i][j] = 0;
			}
		}
	}
}
