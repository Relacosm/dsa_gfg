class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int a=arr[0];
        for(int i=1;i<arr.size();i++){
            if(arr[i]>a){
                a=arr[i];
            }
        }
        int b=INT_MIN;
        for(int i=0;i<arr.size();i++){
            if(arr[i]>b && arr[i]<a){
                b=arr[i];
            }
        }
        if(b==INT_MIN) return -1;
        return b;
    }
};