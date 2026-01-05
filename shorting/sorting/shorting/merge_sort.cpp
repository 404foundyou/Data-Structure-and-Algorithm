#include <iostream>
#include <vector>
using namespace std;
class Solution{
public:
    void merge(vector<int> &arr , int low , int mid , int high){
        vector<int> temp;
        int l = low, r = mid + 1;
        while (l <= mid && r <= high)
        {
            if(arr[l] < arr[r]){
                temp.push_back(arr[l++]);
            } else {
                temp.push_back(arr[r++]);
            }
        }
        while(l <= mid){
            temp.push_back(arr[l]);
            l++;
        }
        while (r <= high){
            temp.push_back(arr[r]);
            r++;
        }
        for(int i = low ; i <= high ; i++){
            arr[i] = temp[i - low];
        }    
    }

    void merge_sort(vector<int> &arr , int low , int high){
        if(low >= high){
            return;
        }

        int mid = (high+low)/2;
        merge_sort(arr,low,mid);
        merge_sort(arr,mid+1,high);
        merge(arr,low,mid,high); 
    }
};
int main(){
    vector<int> arr = {4,2,6,1,8,5,3,9,7};
    int high = arr.size() - 1;
    int low = 0;
    Solution sol;
    sol.merge_sort(arr,low, high);
    for(int i = 0 ; i <= high; i++){
        cout<<arr[i]<<" ";
    }
}