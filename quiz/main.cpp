#include <iostream>
#include "quickSort.h"
#include "maxHeap.h"

using namespace std;

int main(int argc, char **argv)
//int main()
{
    cout<<"Test quicksort for:"<<endl;
    vector<int> a={8,3,7,13,1,9};
    for(auto item:a){
        cout<<item<<",";
    }
    cout<<endl;
    quickSort qs;
    qs(a);
    for(auto item:a){
        cout<<item<<",";
    }
    cout<<endl;

    cout<<"Test max heap"<<endl;
    maxHeap heap;
    heap.Add(8);
    heap.Add(3);
    heap.Add(7);
    heap.Add(13);
    heap.Add(1);
    heap.Add(9);
    heap.printHeap();
    cout<<"remove"<<endl;
    heap.Remove();
    heap.printHeap();
    cout<<"remove"<<endl;
    heap.Remove();
    heap.printHeap();
    cout<<"remove index: 2"<<endl;
    heap.Remove(2);
    heap.printHeap();
    cout<<"remove index 1"<<endl;
    heap.Remove(1);
    heap.printHeap();

    return 0;
}