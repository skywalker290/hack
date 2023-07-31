#include <iostream>
using namespace std;

void merge(int A[], int l, int mid, int h){
    int i, j, k;
    int B[100];
    i=l;
    j=mid+1;
    k=l;
    while(i<=mid && j<=h){
        if(A[i]<A[j]){
            B[k++]=A[i++];
        }
        else{
            B[k++]=A[j++];
        }
    }
    for(;i<=mid;i++)
        B[k++]=A[i];
    for(;j<=h;j++)
        B[k++]=A[j];
    for(i=l;i<=h;i++)
        A[i]=B[i];

}
void mergesort(int A[], int n){
    int p,i, l, h,mid;
    for(p=2;p<=n;p=p*2)
    {
        for(i=0;i+p-1<n;i=i+p){
            l=i;
            h=i+p-1;
            mid=(l+h)/2;
            merge(A,l,mid,h);
        }
    }
    if(p/2<n){
        merge(A,0,p/2-1,n-1);
    }
}


int main(){
    cout<<"========="<<endl;
    int A[]={2,4,6,3,7,9,1,5,8};
    int n=9;
    mergesort(A,n);
    for(int i=0;i<n;i++){
    cout<<A[i]<<endl;
    }

    return 0;
    cout<<"========";
    return 0;
}
