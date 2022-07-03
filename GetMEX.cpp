/*
  MEX of an array is the smallest non-negative integer that does not belong to the array.
  For example, the MEX of [2,2,1] is 0 because 0 does not belong to the array, the MEX of [3,1,0,1] is 2 because 0 and 1 belong to the array, but 2 does not.
*/

int getMEX(vector<int> &nums){
    set<int> mySet(all(nums));
    int curr_val = 0;
    for(int val: mySet){
        if(val == curr_val){
            curr_val++;
        }
        else break;
    }

    return curr_val;
}
