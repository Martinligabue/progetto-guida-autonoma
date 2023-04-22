#include <stdio.h>

int main(int argc, char *argv[]){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int l=0;
    int r=n-1;
    while(l<r){
        int mid=(l+r)/2;
        if(a[mid]>mid){
            l=mid+1;
        }
        else{
            r=mid-1;
        }
    }
    printf("%d\n",l);
    return 0;
}
