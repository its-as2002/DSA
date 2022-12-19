#include<iostream>
using namespace std;

class recursion{

    private:
      int data, n;

    public:

    void recur(int);
    void linear(int,int);
    void reverse(int);
    void linear_backtracking(int);
    void reverse_backtracking(int,int);

};
void recursion::recur(int data){
    
    if (data == 5)
      return;
    cout<<"HELLO WORLD\n";
    recur(++data);
}

void recursion::linear(int data,int n)
{
    if(data == n)
      return;
    cout<<data+1<<endl;
    linear(++data,n);
}

void recursion::reverse(int n){
    if(n==0)
     return;

    cout<<n<<endl;
    reverse(--n);
}

void recursion::linear_backtracking(int n){
    if(n == 0)
     return;
    linear_backtracking(n-1);
    cout<<n<<endl;
}

void recursion::reverse_backtracking(int data,int n){
    if(data == n)
      return;
    reverse_backtracking(++data,n);
    cout<<data<<endl;
}

int main(){
    recursion obj;
    cout<<"\nPrint name 5 times\n";
    obj.recur(0);
    cout<<"\nPrint 1 to N\n";
    obj.linear(0,5);
    cout<<"\nPrint N to 1\n";
    obj.reverse(5);
    cout<<"\nPrint 1 to N by backtracking\n";
    obj.linear_backtracking(5);
    cout<<"\nPrint N to 1 by backtracking\n";
    obj.reverse_backtracking(0,5);
    return 0;
}
