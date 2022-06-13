#include <iostream>
using namespace std;
void selection_Sort(int arr[] , int size){
    int temp , length = size;
    for(int i = 0; i < size ; i++){
        for(int j = i + 1; j < size ; j++){
            if(arr[i] > arr[j]){
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }   
        }
    }
}
int main(){
  int select[10]={0,2,5,6,4,3,3,1,2,4};
  selection_Sort(select,10);
  for(int i=0;i<10;i++)
  cout<<select[i]<<" ";
}