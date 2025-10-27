import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.Locale;

public class Main {

    BufferedReader bfReader = new BufferedReader(new InputStreamReader(System.in));
    public static void main(String[] args) {
        new Main();
    }   
    
    Main(){
        String[] num;
        float numDiv;

        try {
            String nums = bfReader.readLine();

            num = nums.split(" ");
            

            numDiv = Float.parseFloat(num[0]) / Float.parseFloat(num[1]);
            System.out.printf(Locale.US, "%.2f",numDiv);

        } catch (Exception e) {
            System.out.println("Erro no Buffered Reader!");
        }
    }
}
