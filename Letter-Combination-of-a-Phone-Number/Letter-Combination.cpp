class Solution {
private:
    void Keypad(vector<string>&ans, string output, string mapping[],int index, string digits){
        // base case
        if(index >= digits.length()){
            ans.push_back(output);
            return ;
        }
        
        int number = digits[index] - '0';
        string alpha = mapping[number];
        
        for(int i=0;i<alpha.length();i++){
            output.push_back(alpha[i]);
            Keypad(ans,output,mapping,index+1,digits);
            output.pop_back();
        }
    }
public:
    vector<string> letterCombinations(string digits) {
        vector<string>ans;
        string output;
        if(digits.length()==0){
            return ans;
        }
        string mapping[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        
        
        
        Keypad(ans,output,mapping,0,digits);
        return ans;
    }
};