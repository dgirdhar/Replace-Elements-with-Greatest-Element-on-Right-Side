class Solution {
    public int[] replaceElements(int[] arr) {
         int lastMaxIndex = -1;
        
        for (int i = 0; i < arr.length; ++i) {
            int max = -1;
            
            if (lastMaxIndex > i) {
                max = arr[lastMaxIndex];
            }
            else {
                if (i + 1 < arr.length) {
                    max = arr[i + 1];
                }
            
                for (int j = i + 2; j < arr.length; ++j) {
                    if (arr[j] > max) {
                        max = arr[j];
                        lastMaxIndex = j;
                    }
                }
            }
            arr[i] = max;
        }
        return arr;
       
    }
}
