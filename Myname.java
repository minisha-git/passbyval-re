public class Myname{
    
    public static void main(String[] args){
        
        Myname obj1 = new Myname(); // first object
        Myname obj2 = obj1;      // no object create 
        Myname obj3=new Myname();// second object
        
        System.out.println("Hashcode of obj1 reference variable is: "+obj1.hashCode());
        System.out.println("Hashcode of obj2 reference variable is: "+obj2.hashCode());
        System.out.println("Hashcode of obj3 reference variable is: "+obj3.hashCode());
        
        obj1=new Myname(); // third objejct
        System.out.println("Hashcode of obj1 reference variable is: "+obj1.hashCode());
        System.out.println("Hashcode of obj2 reference variable is: "+obj2.hashCode());
        System.out.println("Hashcode of obj3 reference variable is: "+obj3.hashCode());
        
        
    }
}
