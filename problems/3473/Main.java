import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main{

    BufferedReader bfReader = new BufferedReader(new InputStreamReader(System.in));
    public static void main(String[] args) throws NumberFormatException, IOException {
        new Main();
    }

    Main() throws NumberFormatException, IOException{
        int num;
        num = Integer.parseInt(bfReader.readLine());

        System.out.println(num+1);
    }
}