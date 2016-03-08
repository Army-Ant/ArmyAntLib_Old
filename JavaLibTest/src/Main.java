import ArmyAnt.*;

class RR implements Java_AANeuron.INeuronActive{
    public double ActiveFunc(double input){
        return input*2;
    }
}
public class Main {

    public static void main(String[] args) {
        System.out.println(java.lang.System.getProperty("os.name"));
        System.out.println(java.lang.System.getProperty("user.dir"));
        Java_AAFile r = new Java_AAFile();
        String path = "./out/texttest.txt";
        System.out.println(r.Open(path));
        System.out.println(r.Close());
        Java_AANeuron s = new Java_AANeuron(new RR(), 0);
        System.out.println(s.JoinActive(1,5));
        System.out.println(s.GetAllActive());
        System.out.println(s.GetOutput());
    }
}
