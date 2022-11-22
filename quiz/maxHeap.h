#include <vector>
#include <iostream>

using namespace std;

class maxHeap{
private:
    vector<int> A;
    int size;


    //return the index of parent
    int PARENT(int i){
        return i/2;
    }

    //return the index of left child
    int LEFT_CHILD(int i){
        return 2*i;
    }

    //return the index of right child
    int RIGHT_CHILD(int i){
        return 2*i+1;
    }

    void heapify_down(int i){

        int l= LEFT_CHILD(i),r= RIGHT_CHILD(i);
        int largest;
        if(l<=size && A[l] > A[i])
            largest=l;
        else largest=i;
        if(r<=size && A[r] > A[largest])
            largest=r;

        if(largest!=i){
            int temp=A[i];
            A[i]=A[largest];
            A[largest]=temp;
            heapify_down(largest);
        }
        return;
    }

public:
    maxHeap(){
        size = 0;
    }

    void printHeap(){
        for(auto item:A){
            cout<<item<<",";
        }cout<<endl;
        return;
    }

    //Exercise 2
    //add an element to the max-heap
    void Add(int n){
        A.push_back(n);
        size+=1;
        int index=size-1;
        int p= PARENT(index);
        while(index!=0 && A[index] > A[p]){
            int temp=A[index];
            A[index]=A[p];
            A[p]=temp;
            index=p;
            p= PARENT(index);
        }
        return;
    }

    //Exercise 3
    //remove an element from the max-heap
    int Remove(int index=0){
        if(size==0 || index>=size){
            cout<<"Error!"<<endl;
            return 0;
        }
        int res=A[index];
        A[index]=A[size - 1];
        size-=1;
        A.pop_back();
        heapify_down(index);
        return res;
    }



};