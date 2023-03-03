#include <iostream>

using namespace std;
class heap{
public:
    int arr[100];
    int sizei =0;
    heap(){
        arr[0]=-1;
    }
    void inserti(int val){
        sizei = sizei +1;
        int index = sizei;
        arr[index]= val;
        while(index>1){
            int parent = index/2;
            if(arr[parent]<arr[index]){
                swap(arr[parent],arr[index]);
                index = parent;
            }
           else{
                    return;
                }

        }
    }
    void deletei(){
        if (sizei == 0){
            cout<<"noting to delete";
        }
        arr[1] = arr[sizei]; // last value is placed in first index
        sizei--;  // last node is removed
            int i =1; // all traversal using i variable
            while(i<sizei){ // unless i is equal to size
                int leftindex = 2*i;
                int rightindex = 2*i+1;  // rightinex can be 5 but size is 4 so, in loops size is important
// leftindex is bigger than selected value in i'th node and rightindex
                if (leftindex<sizei && arr[i]<arr[leftindex]&& arr[leftindex]>arr[rightindex]){
                    swap(arr[i],arr[leftindex]);
                    i = leftindex;
                }
    // rightindex is bigger than selected value in i'th node and leftindex
                else if (rightindex<sizei && arr[i]<arr[rightindex] && arr[rightindex]>arr[leftindex]){
                    swap(arr[i],arr[rightindex]);
                    i = rightindex;
                }
                else{
                    return;
                }
            }

    }

    void print(){
        for(int i=1;i<=sizei;i++){
            cout<<arr[i]<<endl;
        }

    }
};
 void heapify(int arr[],int n,int i){
        int largest=i;
        int left = 2*i;
        int right = 2*i+1;
        if (left<=n && arr[largest]<arr[left]){
            largest= left;
        }
        if (right<=n && arr[largest]<arr[right]){
            largest=right;
        }
        if (largest!= i){
            swap(arr[largest],arr[i]);
            heapify(arr,n,largest);
        }
 }
 /**
  void heapSort(int arr[],int n){
     int siz=n;
     while(siz>1){

        swap(arr[siz],arr[1]);
         siz--;
        heapify(arr,siz,1);
     }
 } **/
/**
 void heapSort(int arr[],int n){

     for(int siz=n;siz>1;siz--){
        swap(arr[siz],arr[1]);
        heapify(arr,siz,1);
     }
 }
 **/

 void heapSort(int arr[], int n)
{
    // Build heap (rearrange array)
    for (int i = n / 2 ; i >= 1; i--)
       {
          heapify(arr, n, i);
       }

    // One by one extract an element from heap
    int i = n;
    while ( i >= 1) {
        // Move current root to end
        swap(arr[1], arr[i]);
            i--;
        // call max heapify on the reduced heap
        heapify(arr, i, 1);
    }
}

int main()
{
    heap h;
    h.inserti(50);
    h.inserti(55);
    h.inserti(53);
     h.inserti(52);
    h.inserti(54);
    h.print();
    h.deletei();
    cout<<"next"<<endl;
    h.print();
    int arr[6]={-1,54,53,55,52,50};
    int n=5;
    for(int i=n/2;i>0;i--){
        heapify(arr,n,i);

    }
    cout<<"heapify implement"<<endl;
    for(int i=1;i<=n;i++){

        cout<<arr[i]<<endl;
    }
    heapSort(arr,n);
  cout<<"array print"<<endl;
    for(int i=1;i<=n;i++){

        cout<<arr[i]<<endl;
    }

    return 0;
}
