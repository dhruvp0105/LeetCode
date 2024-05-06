class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int types = set<int>(candyType.begin(),candyType.end()).size();
        if(types > candyType.size()/2){
            return candyType.size()/2;
        }
        else{
            return types;
        }
    }
};