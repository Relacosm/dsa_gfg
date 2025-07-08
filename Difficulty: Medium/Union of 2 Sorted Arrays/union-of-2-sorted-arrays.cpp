class Solution {
  public:
    // a,b : the arrays
    // Function to return a list containing the union of the two arrays.
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        // Your code here
        set<int> s(a.begin(),a.end());
        s.insert(b.begin(),b.end());
        // return vector with correct order of elements
        return vector<int>(s.begin(),s.end());
    }
};