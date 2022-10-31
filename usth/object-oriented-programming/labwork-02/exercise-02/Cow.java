import java.util.*;
import java.io.*;

public class Cow {
    private String name;
    private String breed;
    private int age;

    public String getName() {
        return name;
    }

    public String getBreed() {
        return breed;
    }

    public int getAge() {
        return age;
    }

    public void setName(String name) {
        this.name = name;
    }

    public void setBreed(String breed) {
        this.breed = breed;
    }

    public void setAge(int age) {
        this.age = age;
    }

    public void moo() {
        System.out.println("Moo...!");
    }
}
