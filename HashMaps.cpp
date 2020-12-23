#include<bits/stdc++.h>

using namespace std;

int main(){
    unordered_map<string, int> umap;

    umap["Dan"] = 50;
    umap["Lan"] = 60;
    umap["Stan"] = 70;

    for(auto x: umap)
        cout<<x.first<<" "<<x.second<<endl;
}