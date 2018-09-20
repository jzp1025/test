#include<iostream>

using namespace std;

int a[1000005];

int main(){
    
    int n;
    while(cin>>n){
        for(int i=0;i<n;i++)
            cin>>a[i];
        
        if(n == 1)
            cout<<a[0]<<endl;
        else{
            for(int i=0;i<n;i++){
            
                if(i == 0 && a[i] < a[i+1]){
                    cout<<a[i]<<endl;
                    break;
                }
                
                if(i == n-1 && a[i] > a[i-1]){
                    cout<<a[i]<<endl;
                    break;
                }
                
                if(a[i] > a[i-1] && a[i] < a[i+1]){
                    cout<<a[i]<<endl;
                    break;
                }
            }
        }
    }
    
    return 0;
}

