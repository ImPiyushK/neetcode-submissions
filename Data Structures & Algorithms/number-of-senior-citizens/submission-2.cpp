class Solution {
public:
    int countSeniors(vector<string>& details) {
        int c = 0;
        for(auto s : details){
            string st = "";
            for(int i = 0 ; i < s.size() ; ++i){
                if(s[i] > '9'){
                    st = s.substr(i+1, 2);
                    break;
                }
            }
            int age = stoi(st);
            if(age > 60)
                c++;
        }
        return c;
    }
};