import java.util.ArrayList;
import java.util.Arrays;
import java.util.Scanner;

public class Main { 
    Scanner scan = new Scanner(System.in);
    public static void main(String[] args) throws Exception {
        new Main();
    }

    Main(){
        ArrayList<String> listaDeNomes = new ArrayList<>();
        ArrayList<String> listaDePresenca = new ArrayList<>();
        ArrayList<Character> P = new ArrayList<>();
        ArrayList<Character> M = new ArrayList<>();
        ArrayList<Character> A = new ArrayList<>();
        String estudantes;
        String presencas; 
        int numCasos;
        int numEstudantesNaTurma;
        String[] aux;
    
        numCasos = scan.nextInt();

        for (int i = 0; i < numCasos; i++) {
            listaDeNomes.clear();
            listaDePresenca.clear();

            numEstudantesNaTurma = scan.nextInt();
            scan.nextLine();

            estudantes = scan.nextLine();
            presencas = scan.nextLine();

            aux = estudantes.split(" ");
            listaDeNomes = new ArrayList<>(Arrays.asList(aux)); 
            aux = presencas.split(" ");
            listaDePresenca = new ArrayList<>(Arrays.asList(aux));
            int nomesAchados = 0;
            for (int j = 0; j < numEstudantesNaTurma; j++) {
                P.clear();
                M.clear();
                A.clear();
                for (int k = 0; k< listaDePresenca.get(j).length(); k++) {
                    
                    if (listaDePresenca.get(j).charAt(k) == 'P') {
                        P.add(listaDePresenca.get(j).charAt(k));
                    }else if(listaDePresenca.get(j).charAt(k) == 'A'){
                        A.add(listaDePresenca.get(j).charAt(k));
                    }else if(listaDePresenca.get(j).charAt(k) == 'M'){
                        M.add(listaDePresenca.get(j).charAt(k));
                    }
                }
                
                if ((1/((double)P.size() + (double)A.size())) * A.size() > 0.25) {
                    if (nomesAchados > 0) {
                        System.out.print(" ");
                    }
                    nomesAchados++;
                    System.out.print(listaDeNomes.get(j));
                }
                
            }
            System.out.println();
            
        }

    }
}
