#include<iostream>
#include<vector>
using namespace std;

class Quicksort{
    public:
    int partition(vector<int> &arr,int start,int end){
       int pivot = arr[end];
       int i = start -1;
       for(int j = start ;j<= end-1 ; j++)
        if(arr[j] < pivot)
           swap(arr[++i],arr[j]);
       
        swap(arr[i+1],arr[end]);
       return i+1;
    }

    void quicksort(vector<int> &arr,int start,int end){
        if(start<end){
            int pivot_index = partition(arr,start,end);
            quicksort(arr,start,pivot_index-1);
            quicksort(arr,pivot_index+1,end);
        }
        return;
    }
    
    void print_arr(vector<int> arr){
        for(auto i:arr)
         cout<<i<<" ";
        cout<<endl;
    }
};
int main(){
    
    Quicksort obj;
    vector<int> arr = {4,2,6,2,7,9,4,6,3,8,3};
    cout<<"The original array is : ";
    obj.print_arr(arr);
    obj.quicksort(arr,0,arr.size()-1);
    cout<<"The sorted array is : ";
    obj.print_arr(arr);
    
    
return 0;
}
