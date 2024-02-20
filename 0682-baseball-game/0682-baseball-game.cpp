class Solution {
public:
    int calPoints(vector<string>& operations) {
        
        stack<int> st;
        int ans = 0;
        
        for(int i=0;i<operations.size();i++){
            if(operations[i] == "C"){
                st.pop();
            }
            
            else if(operations[i] == "D"){
                st.push(2*st.top());
            }
            
            else if(operations[i] == "+"){
                int topVal = st.top();
                int addVal = st.top();
                st.pop();
                addVal += st.top();
                st.push(topVal);
                st.push(addVal);
            }
            else{
                st.push(stoi(operations[i]));
            }
        }
        
        while(!st.empty()){
            ans += st.top();
            st.pop();
        }
        
        return ans;
    }
};