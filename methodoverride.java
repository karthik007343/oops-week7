class Base {
    public void add(int a, int b) {
        System.out.println("Base Class: " + (a + b));
    }
    
    public void add(double a, double b) {
        System.out.println("Base Class: " + (a + b));
    }
}

class Override extends Base {
    public void add(int a, int b) {
        System.out.println("Override Class: " + (a + b));
    }
    
    public void add(double a, double b) {
        System.out.println("Override Class: " + (a + b));
    }
}

public class Main {
    public static void main(String[] args) {
        Base obj = new Base();
        obj.add(2, 4);
        obj.add(7.4, 67.5);

        Override obj2 = new Override();
        obj2.add(2, 4);
        obj2.add(7.4, 67.5);
    }
}
