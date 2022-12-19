#include<iostream>
using namespace std;
class sum{

    private:
       int n,sum=0;
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

}