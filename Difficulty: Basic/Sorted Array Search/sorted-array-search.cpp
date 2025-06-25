class Solution {
  public:
    // Function to find element in sorted array
    // arr: input array
    // k: element to be searched
    bool searchInSorted(vector<int>& arr, int k) {

        // Your code here
        for(i:arr){
            if(i==k) return true;
        }
        return false;
    }
};