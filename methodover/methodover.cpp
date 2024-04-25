  #include<iostream>
using namespace std;
class methodover{
    public:
    //int a;
    //int b;
    void add(int a,int b){
        cout<<"a+b:"<<a+b<<endl;
    }
    void add(int a,int b,int c){
        cout<<"a+b+c:"<<a+b+c<<endl;
    }
};
int main(){
    methodover obj;
    obj.add(1,2);
    obj.add(1,2,3);
}

