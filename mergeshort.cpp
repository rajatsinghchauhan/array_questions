#include<iostream>

using namespace std;

void merge(int arr[],int const l,int const mid, int const r){

    int arr1[r+1];
    int i=0;
    int start1=l;
    int end1=mid;
    int start2=mid+1;
    int end2=r;
    while(start1<=end1&&start2<=end2){

        if(arr[start1]>arr[start2]){
            arr1[i]=arr[start2];
            start2++;
            i++;
        }
        else{
            arr1[i]=arr[start1];
            start1++;
            i++;
        }

    }
    while(start1<=end1){
        arr1[i]=arr[start1];
        start1++;
        i++;

    }
    while(start2<=end2){
        arr1[i]=arr[start2];
        start2++;
        i++;

    }

    for(int j=l,k=0;j<=r&&k<=r;j++,k++){
        
        
        arr[j]=arr1[k];
    }



}
void mergeshort(int arr[], int const l, int const r){
    int mid =(l+r)/2;
    if (l >= r)
        return;

    if(l<r-1){
        mergeshort(arr,l,mid);
        mergeshort(arr,mid+1,r);
    }

    merge(arr,l,mid,r);
}

int main(){
  int arr[]={6,3,9,5,2,8,7,1,0};

  mergeshort(arr,0,8);

  cout<<"\n arrrray"<<endl;

  for(int i=0; i<=8;i++){
      cout<<arr[i]<<endl;
  }





    return 0;
}