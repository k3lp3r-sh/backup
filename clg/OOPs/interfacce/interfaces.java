import java.util.*;

interface Speaker {
    public void speak();
}

class Politician implements Speaker {
    public void speak() {
        System.out.println("Talk politics");
    }
}

class Priest implements Speaker {
    public void speak() {
        System.out.println("Religious Talks");
    }
}

class Lecturer implements Speaker {
    public void speak() {
        System.out.println("Talks Object Oriented Design and Programming!");
    }
}

public class interfaces {
    public static void main(String[] args) {
        Speaker g1 = new Politician();
        Speaker g2 = new Priest();
        Speaker g3 = new Lecturer();

        g1.speak();
        g2.speak();
        g3.speak();
    }
}
