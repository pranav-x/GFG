#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	priority_queue<int> maxheap;
	priority_queue<int,vector<int>,greater<int>> minheap;
	while(t--){
	    int a;
	    cin>>a;
	    if(maxheap.size()==0){
	        maxheap.push(a);
	    }
	    else if(a>maxheap.top()){
	        minheap.push(a);
	    }
	    else{
	        maxheap.push(a);
	    }
	    int mah=maxheap.size();
	    int mih=minheap.size();
	    if(mah-mih>1){
	        int x=maxheap.top();
	        maxheap.pop();
	        minheap.push(x);
	    }
	    else if((mih-mah)>1){
	        
	        int x=minheap.top();
	        minheap.pop();
	        maxheap.push(x);
	    }
	    mah=maxheap.size();
	    mih=minheap.size();
	    if(mah==mih){
	        cout<<(maxheap.top()+minheap.top())/2<<endl;
	    }
	    else if(maxheap.size()>minheap.size()){
	        cout<<maxheap.top()<<endl;
	    }
	    else{
	        cout<<minheap.top()<<endl;
	    }
	}
	return 0;
}
