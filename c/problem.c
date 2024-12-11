#include<stdio.h>
int binarysearch(int data[],int n,int item){
    int beg=0;
    int end=n-1;
    while(beg<=end){
        int mid=(beg+end)/2;
        if(data[mid]==item){
            return mid;
        }
        if(item<data[mid]){
            end=mid-1;
        }
        else{
            beg=mid+1;
        }
    }
    return -1;
}

int main(){
    int n,i,item;
    printf("enter the number of element in array:");
    scanf("%d",&n);

    int data[n];

    printf("enter the element in the array (sorted way)");
    for(i=0;i<n;i++){
        scanf("%d",&data[i]);
    }
    printf("enter the item to be found: ");
    scanf("%d",&item);
    int loc=binarysearch(data,n,item);
    if(loc!=0){
        printf("element found at index %d",loc);
    }
    else{
        printf("element not found at any index");
    }
}
