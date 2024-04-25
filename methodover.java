 import java.util.Scanner;
class overload{
    public int add(int a,int b){
        return a+b;
    }
    public int add(int a,int b,int c){
        return a+b+c;
    }
    public static void main(String args[]){
        overload obj=new overload();
        int res=obj.add(1,2);
        int res1=obj.add(2,4,5);
        System.out.println(res);
        System.out.println(res1);
    }
}
