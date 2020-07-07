class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int previousMax = -1;
        
        for (int i = arr.size() - 1; i >= 0; --i) {
            int currentElement = arr[i];
            
            arr[i] = previousMax;
            
            if (currentElement > previousMax) {
                previousMax = currentElement;
            }
        }
        return arr;
    }
};
