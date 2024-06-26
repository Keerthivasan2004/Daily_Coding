/*You are given an integer k and matrix mat. Rotate the elements of the given matrix to the left k times and return the resulting matrix.

Examples:

Input: k=1, mat=[[1,2,3],[4,5,6],[7,8,9]]
Output:
2 3 1
5 6 4
8 9 7
Explanation: Rotate the matrix by one
1 2 3       2 3 1
4 5 6  =>  5 6 4
7 8 9       8 9 7
Input: k=2, mat=[[1,2,3],[4,5,6],[7,8,9]]
Output:
3 1 2
6 4 5
9 7 8
Explanation: After rotating the matrix looks like
1 2 3       2 3 1       3 1 2
4 5 6  =>  5 6 4  =>   6 4 5
7 8 9       8 9 7       9 7 8
Expected Time Complexity: O(n*m)
Expected Auxillary Space: O(n*m)

Constraints:
1<= mat.size, mat[0].size, mat[i][j] <=1000
1<=k<=10000*/

Solution:

class Solution {
  public:
    vector<vector<int>> rotateMatrix(int k, vector<vector<int>> mat) {
        int n=mat.size(), m=mat[0].size();
        vector<vector<int>>ans(n, vector<int>(m,0));
        k%=m;
        if(k==0) return mat;
        for(int i=0;i<n;i++){
            int x=0;
            for(int j=k;j<m;j++,x++){
                ans[i][x]=mat[i][j];
            }
            for(int j=0;j<k;j++,x++){
                ans[i][x]=mat[i][j];
            }
        }
        return ans;
    }
};