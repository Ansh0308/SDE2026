#include <bits/stdc++.h>
using namespace std;
bool armstrongNumber(int n) {
        // code here
        int temp=n;
        int co=0;
       
        while(temp!=0){
            co++;
            temp/=10;

            
        }
        int ans=0;
        temp=n;
        while(temp!=0){
            ans+=pow(temp%10,co);
            temp/=10;
        }
        return ans==n;
    }
int main() {
    // Write C++ code here
    int n=1e8;
//   cin>>n;
int count=0;
for(int i=1;i<=n;i++){
    if(armstrongNumber(i)){
        count++;
        cout<<i<<endl;
    }
}
cout<<"Total Armstrong numbers: "<<count<<endl;
    return 0;
}