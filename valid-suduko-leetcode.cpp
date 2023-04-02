//https://leetcode.com/problems/valid-sudoku/

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& b) {
        unordered_map<int, set<char>> rows,cols;
        map<pair<int,int>, set<char>> sq;

        for(int r=0;r<9;r++)
        {
            for(int c=0;c<9;c++)
            {
                if(b[r][c]=='.')
                continue;
                if(rows[r].find(b[r][c])!=rows[r].end() || cols[c].find(b[r][c])!=cols[c].end() || sq[{r/3,c/3}].find(b[r][c])!=sq[{r/3,c/3}].end())
                return false;
                rows[r].insert(b[r][c]);
                cols[c].insert(b[r][c]);
                sq[{r/3,c/3}].insert(b[r][c]);
            }
        }
        return true;
    }
};