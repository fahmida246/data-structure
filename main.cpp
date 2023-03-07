#include <iostream>
#include <vector>

using namespace std;
void pairdetails(){
    pair<int,int> p = {1,3};
    cout<<p.first <<" "<<p.second<<endl;
    pair<int, pair<int,int>> p1 = {1,{3,4}};
    cout<< p1.first<< " "<< p1.second.first<<" "<<p1.second.second<<endl;
    pair<int,int> arr[] ={{1,2},{2,5},{5,1}};
    cout<<arr[1].first<<endl;
}
void vectordetails(){
    vector<int>v;
    v.push_back(1);
    v.emplace_back(2);

    vector<pair<int,int>> vec;
    vec.push_back({1,2});
    vec.emplace_back(1,2);

    vector<int> v1(5,100);
    vector<int> v2(v1); // copy

    vector<int>:: iterator it = v.begin();
    it++;
    cout<<"result"<<*(it)<<endl;

    for(auto it=v.begin(); it!= v.end();it++){
        cout<<*(it)<<" ";
    }cout<<endl;
    v.erase(v.begin()+1);
    v.insert(v.begin(),300);
    cout<<v.size();
    v.pop_back();

}

int main()
{
    pairdetails();
    vectordetails();
    return 0;
}
