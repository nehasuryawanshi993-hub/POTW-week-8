class Solution {
public:
    bool judgeCircle(string moves) {
        int k=0;
        int m=0;
        for(int i=0;i<moves.size();i++){
            if(moves[i]=='U'){
            k++;
            }
            else if(moves[i]=='D'){
                k--;
            }
            else if(moves[i]=='R'){
                m++;
            }
            else{
                m--;
            }
        }
        if(k==0 && m==0){
            return true;
        }
        return false;
    }
};
