#include<iostream>
using namespace std;
class operatoroverload
{
    public:
    int real;
    int img;
    operatoroverload(int real=0,int img=0){
        this->real=real;
        this->img=img;
    }
    operatoroverload operator + (operatoroverload obj)
    {
    operatoroverload tempobj;
    tempobj.real=real+obj.real;
    tempobj.img=img+obj.img;
    return tempobj;
    }
};
int main()
{
    operatoroverload op1(3,4),op2(5,6);
    operatoroverload result(0,0);
    result=op1+op2;
    cout<<"result : "<<result.real<<"+"<<result.img<<"i"<<endl;}
