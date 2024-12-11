#include<stdio.h>

int recursiveSearch(int data[],int n,int item,int index){
    if(index>=n){
        return -1;
    }
    if(data[index]==item){
        return index+1;
    }
    else{
        return recursiveSearch(data,n,item,index+1);
    }
}

int main(){
    int i,n,item;
    printf("enter the number of element in array: ");
    scanf("%d",&n);

    int data[n];

    printf("enter the element in array: \n");
    for(i=0;i<n;i++){
        scanf("%d",&data[i]);
    }
    printf("enter the item to search : ");
    scanf("%d",&item);
    
    int loc=recursiveSearch(data,n,item,0);

    if(loc != -1){
        printf("item found at position %d\n",loc);
    }
    else{
        printf("not found");
    }
    return 0;


}