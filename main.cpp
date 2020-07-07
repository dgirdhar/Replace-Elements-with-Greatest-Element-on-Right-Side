class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        vector<int> ret(arr.size());
        
        for (int i = 0; i < arr.size(); ++i) {
            int max = -1;
            
            if (i + 1 < arr.size()) {
                max = arr[i + 1];
            }
            
            for (int j = i + 2; j < arr.size(); ++j) {
                if (arr[j] > max) {
                    max = arr[j];
                }
            }
            ret[i] = max;
        }
        return ret;
    }
};
