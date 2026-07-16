// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main() {
    // Write C++ code here
    // cout << "Start small. Ship something.";
    map<string, vector<string>> mappy;
    
    mappy["atul"] = {"momos", "dp"};
    mappy["ansh"] = {"pizza", "dsa"};
    mappy["kaushal"] = {"pizza"};
    mappy["atul"].push_back("dsa");
    
    map<string, vector<string>>::iterator p=mappy.begin();

    for(; p!=mappy.end(); p++)  {
        cout<<p->first<<" -> ";
        for(string str : p->second)  {
            cout<<str<<" ";
        }
        cout<<endl;
        }
/*set()
/set<pair<int ,int >>uspii;
("amir","juned")
("amir","ira")
("amir","azad")

unique (1,2,3,4,5)

HashMap()
map<string,string>

map["amir"] ="Reena"; //divorce

map["amir"]="kiran";


why hashamp ?
v[0]= 1;

search and insert

v[n] = o(n)
hasmap (1)
hash_function v[n]; 

v[1] = 5 - > 6-;
new value = 6;
good hahsmap 
Coliison kam hona
EK key always points to same address
hashamp(5) - > v[1];
size should automatalcaay increse or dec based on use 

*/
//unordered_map<int ,int>umii;
    
    // for(pair<const string, vector<string>> &p : mappy)  {
    //     cout<<p.first<<" -> ";
    //     for(string str : p.second)  {
    //         cout<<str<<" ";
    //     }
    //     cout<<endl;
    // }

    return 0;
}