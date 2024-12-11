#include<iostream>
using namespace std;
// int main(){
//     int n;
//     cout<<"enter the number =";
//     cin>>n;
//     int i=1;
//     for(i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             cout<<j;
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// int main(){
//     int n;
//     cout<<"enter the number = ";
//     cin>>n;
//     int i=1;
//     while(i<=n){
//         int j=1;
//         while(j<=n){
//             cout<<j<<" ";
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
// }


// int main(){
//     int n;
//     cout<<"Enter the number = ";
//     cin>>n;
//     int i=1;
//     char ch;
//     for(i=1;i<=n;i++){
//         int j=1;
        
//         for(j=1;j<=n;j++){
//             ch=j+64;
//             cout<<ch<<" ";

//         }
//         cout<<endl;
//     }
// }


int main(){
    int n;
    cout<<"Enter the number :";
    cin>>n;
    int i=1;
    int count=1;
    for(i=1;i<=n;i++){
        int j=1;
        for(j=1;j<=n;j++){
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }

}
