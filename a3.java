class puppy{
int puppyage;
public void putname(String name)
{
System.out.println("The puppy's name is"+name);
}
public void setage(int age)
{
puppyage=age;
}
public int getage()
{
System.out.println("The puppy's age is:"+puppyage);
return puppyage;
}
}
public class a3{
public static void main(String args[])
{
puppy p=new puppy();
p.putname("ghost");
p.setage(2);
p.getage();
}
}