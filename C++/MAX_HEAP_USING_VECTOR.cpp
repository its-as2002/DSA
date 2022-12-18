#include<iostream>
#include<vector>
using namespace std;

class Heap{

private:
    vector<int> maxheap;
public:
  
  void insert(int);
  void print();
  void heapify(int);
  void deleteHeap();

};

// class method for inserting an element in maxheap
void Heap::insert(int data){
    maxheap.push_back(data);
    int child = maxheap.size()-1;
    int parent = (child-1)/2;

    while(child>0 and maxheap[parent]<maxheap[child]){
        swap(maxheap[child],maxheap[parent]);
        child=parent;
        parent=(child-1)/2;
    }
}

// class method for viewing all elements in maxheap
void Heap::print() {
       cout << "[";
       for(int i = 0; i < maxheap.size(); i++) {
           cout << maxheap[i];
           if(i != maxheap.size() - 1)
               cout << ", ";  
        }
           cout << "]" << endl;
    }

//class method to heapify
void Heap::heapify(int parent){
    int left = parent*2 +1;
    int right = parent*2 +2;
    int largest = parent;
    if(left<maxheap.size() and maxheap[left] > maxheap[largest])
       largest = left;
    if(right<maxheap.size() and maxheap[right] > maxheap[largest])
       largest = right;
    if(parent != largest){
        swap(maxheap[largest],maxheap[parent]);
        heapify(largest);
    } 
}

//this method deletes ans element from heap;
void Heap::deleteHeap(){
    
    cout<<"\n Element deleted : "<<maxheap[0]<<endl;
    maxheap[0] = maxheap[maxheap.size()-1];
    maxheap.pop_back();
    heapify(0);
}


int main(){

  Heap obj;
    obj.insert(98);
    obj.insert(87);
    obj.insert(86);
    obj.insert(44);
    obj.insert(40);
    obj.insert(32);
    obj.insert(33);
    obj.insert(20);
    obj.insert(21);
    obj.deleteHeap();
    obj.print();
    obj.insert(100);
    obj.print();
  return 0;  
}