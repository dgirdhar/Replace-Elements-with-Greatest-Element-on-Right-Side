class Solution {
    public int[] replaceElements(int[] arr) {
        int previousMax = -1;
        
        for (int i = arr.length - 1; i >= 0; --i) {
            int currentElement = arr[i];
            
            arr[i] = previousMax;
            
            if (currentElement > previousMax) {
                previousMax = currentElement;
            }
        }
        return arr;
    }
}
