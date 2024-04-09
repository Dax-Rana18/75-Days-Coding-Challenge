class Solution {
public:
    void rows(vector<vector<int>>& matrix,int j){
        for(int i=0;i<matrix.size();i++)
            matrix[i][j]=0;
    }
    void columns(vector<vector<int>>& matrix,int i){
        for(int j=0;j<matrix[0].size();j++)
            matrix[i][j]=0;
    }
    void setZeroes(vector<vector<int>>& matrix) {
          //sabse phele traverse krke find 0 
          //then store its i and j
          //after that check if there is another 0 in the now or column so basically traverse in while loop 
          set<pair<int,int>> st;
          int n=matrix[0].size();//no. 0f columns 
          int m=matrix.size();//no of rows 

          for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]==0){
                    st.insert(make_pair(i,j));
                }
            }
          }
        for(auto i : st){
            rows(matrix,i.second);
            columns(matrix,i.first);
        }

    }
};