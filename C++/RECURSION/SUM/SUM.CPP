#include<iostream>
using namespace std;
class sum{

    private:
       int n,sum;
    public:

    int functional_approach(int);
    void parameterised_approach(int,int);

};

int sum::functional_approach(int n){
    if(n == 0 )
     return 0;
    return n + functional_approach(n-1);
}

void sum::parameterised_approach(int n,int sum){
     if(n==0){
       cout<<"\nThe sum of N element through parameterised_approach of recursion is : "<<sum;
       return;
    }
     sum+=n;
     parameterised_approach(--n,sum);
}

int main(){
    sum obj;
    cout<<"The sum of N elements through functional approach of recursion is : "<<obj.functional_approach(5);
    obj.parameterised_approach(5,0);
    return 0;
}