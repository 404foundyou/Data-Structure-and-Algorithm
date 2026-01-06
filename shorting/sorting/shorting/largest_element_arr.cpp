#include <iostream>
#include <vector>
using namespace std;

class Solution{
    public:
        int getMaxEle(vector<int> arr){
            int n = arr.size();
            if(n == 0){
                return 0;
            }
            int max = arr[0];
            for(int i = 1; i < n; i++ ){
                if(arr[0] < arr[i]){
                    max = arr[i];
                }
            }
            return max;
        }
};
int main(){
    vector<int> arr = {3,5,7,2,56,74,2};
    Solution ans ;
    int sol = ans.getMaxEle(arr);
    cout<<sol;

}
