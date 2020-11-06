#include<bits/stdc++.h>
using namespace std;

class MinStack {
    public:
        vector<int> st;
        int minNum;

        MinStack() {
            this->minNum=INT_MAX;
        }
        
        void push(int x) {
            this->st.push_back(x);
            this->minNum = this->minNum > x ? x : this->minNum;
        }
        
        void pop() {
            int num = this->st[this->st.size()-1];
            this->st.pop_back();
            if(num == this->minNum)
                this->minNum = this->findMin();
        }
        
        int top() { return this->st[this->st.size()-1]; }
        
        int getMin() { return this->minNum; }

        int findMin(){
            this->minNum = INT_MAX;
            for(auto num: this->st)
                if(this->minNum > num) this->minNum = num;
            return this->minNum;
        }
};

int main(int argc, char const *argv[])
{
    MinStack* obj = new MinStack();
    obj->push(1);
    cout<<obj->top()<<endl;
    obj->push(0);
    cout<<obj->getMin()<<endl;
    obj->pop();
    cout<<obj->top();
    return 0;
}
