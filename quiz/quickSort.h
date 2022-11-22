#include <vector>
using namespace std;

class quickSort{
private:
    int partition(vector<int>& A,int l,int r){
        auto pivot=A[r];
        auto i=l-1;
        for(int j=l;j<r;++j){
            if(A[j]<=pivot){
                i++;
                int temp=A[j];
                A[j]=A[i];
                A[i]=temp;
            }
        }
        int temp=A[i+1];
        A[i+1]=A[r];
        A[r]=temp;
        return i+1;
    }

    void QS_iter(vector<int>& a, int l, int r){
        if(l<r){
            int p= partition(a,l,r);
            QS_iter(a,l,p-1);
            QS_iter(a,p+1,r);
        }
        return;
    }

    void QuickSort(vector<int>& a){
        int l=0;
        int r=a.size()-1;
        QS_iter(a,l,r);
        return;
    }


public:
    void operator()(vector<int>& a){
        QuickSort(a);
        return;
    }

};