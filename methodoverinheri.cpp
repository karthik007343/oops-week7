 import java.util.Scanner;
class methodinhe{
    public void add(int a,int b,int c){
        System.out.println(a+b+c);
    }

}
class methodinher extends methodinhe{
    public void add(int a,int b){
        System.out.println(a+b);
    }
    public static void main(String args[]){
        methodinher obj=new methodinher();
        obj.add(1,2);
        obj.add(1,3);
    }
}
