#include<iostream>
#include<string.h>
#include<vector>
using namespace std;

class Solution {

public:
    void reverseString(vector<char>& s,int i=0) {
        if(i >= s.size()/2)
          return;
        swap(s[i],s[s.size()-i-1]);
        reverseString(s,i+1);
    }

    void printString(vector<char>& s){
        
          for(auto i: s)
            cout<<i<<" ";
        cout<<endl;
    }
};

int main(){
    Solution obj;
    vector<char> s ={'H','E','L','L','O'};
    cout<<"The original string is : ";
    obj.printString(s);
    obj.reverseString(s);
    cout<<"The reverse string is : ";
    obj.printString(s);
    
    return 0;
}