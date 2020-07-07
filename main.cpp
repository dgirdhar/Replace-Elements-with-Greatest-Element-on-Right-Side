class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        vector<int> ret(arr.size());
        int lastMaxIndex = -1;
        
        for (int i = 0; i < arr.size(); ++i) {
            int max = -1;
            
            if (lastMaxIndex > i) {
                max = arr[lastMaxIndex];
            }
            else {
                if (i + 1 < arr.size()) {
                    max = arr[i + 1];
                }
            
                for (int j = i + 2; j < arr.size(); ++j) {
                    if (arr[j] > max) {
                        max = arr[j];
                        lastMaxIndex = j;
                    }
                }
            }
            ret[i] = max;
        }
        return ret;
    }
};
