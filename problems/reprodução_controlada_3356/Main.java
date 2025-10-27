import java.util.ArrayList;
import java.util.Arrays;
import java.util.Scanner;

public class Main {

    ArrayList<ArrayList<vertice>> listaAdjacencia;
    Scanner scan = new Scanner(System.in);

    public static void main(String[] args) throws Exception {
        new Main();
    }

    Main(){
        String[] elementos;
        String str;

        int numAnimais;
        int numRelParentesco;
        int numTestes;

        str = scan.nextLine();

        elementos = str.split(" ");

        numAnimais = Integer.parseInt(elementos[0]);
        numRelParentesco = Integer.parseInt(elementos[1]);
        numTestes = Integer.parseInt(elementos[2]);

        ArrayList<String> entrada = new ArrayList<>();
        ArrayList<ArrayList<String>> testes = new ArrayList<>();
        ArrayList<ArrayList<String>> relParentesco = new ArrayList<>();
        ArrayList<vertice> vertices = new ArrayList<>();
        listaAdjacencia = new ArrayList<>();

        for (int i = 0; i < numAnimais; i++) {
            listaAdjacencia.add(new ArrayList<>());
        }


        for (int i = 0; i < numRelParentesco + numTestes; i++) {
            entrada.add(scan.nextLine());
        }

        boolean contemElemento;
        for (int i = 0; i < numRelParentesco; i++) {
            relParentesco.add(new ArrayList<>(Arrays.asList(entrada.get(i).split(" "))));
            for (int j = 0; j < relParentesco.get(i).size(); j++) {
                contemElemento = false;
                for (int k = 0; k < vertices.size(); k++) {
                    if (relParentesco.get(i).get(j).equals(vertices.get(k).getNome())) {
                        contemElemento = true;
                    }
                }
                if (!contemElemento) {
                    vertices.add(new vertice(relParentesco.get(i).get(j)));
                }
            }
        }

        for (int i = numRelParentesco; i < numTestes + numRelParentesco; i++) {
            testes.add(new ArrayList<>(Arrays.asList(entrada.get(i).split(" "))));
        }

        for (int i = 0; i < numRelParentesco; i++) {
            for (int j = 0; j < vertices.size(); j++) {
                if (vertices.get(j).nome.equals(relParentesco.get(i).get(2))) {
                    listaAdjacencia.get(j).add(new vertice(relParentesco.get(i).get(0)));
                    listaAdjacencia.get(j).add(new vertice(relParentesco.get(i).get(1)));
                }
            }
        }

        // for (int i = 0; i < listaAdjacencia.size(); i++) {
        //     System.out.print(vertices.get(i).getNome()+" > ");
        //     for (int j = 0; j < listaAdjacencia.get(i).size(); j++) {
        //         System.out.print(listaAdjacencia.get(i).get(j).getNome() + " ");
        //     }
        //     System.out.println();
        // }

        ArrayList<String> arvore1 = new ArrayList<>();
        ArrayList<String> arvore2 = new ArrayList<>();
        boolean verificacao;
        for (int i = 0; i < numTestes; i++) {
            arvore1.clear();
            arvore2.clear();
            
            verificacao = false;

            recursao(testes.get(i).get(0), vertices, arvore1);
            recursao(testes.get(i).get(1), vertices, arvore2);
            for (int j = 0; j < arvore1.size(); j++) {
                for (int k = 0; k < arvore2.size(); k++) {
                    if (arvore1.get(j).equals(arvore2.get(k))) {
                        verificacao = true;
                    }
                }
            }

            if (verificacao) {
                System.out.println("verdadeiro");
            }else{
                System.out.println("falso");
            }
            
        }


    }

    void recursao(String verticeInicial, ArrayList<vertice> vertices, ArrayList<String> listaAux){

        int point = -1;
        for (int i = 0; i < vertices.size(); i++) {
            if (verticeInicial.equals(vertices.get(i).nome)) {
                listaAux.add(verticeInicial);
                point = i;
            }
        }


        for (int i = 0; i < listaAdjacencia.get(point).size(); i++) {
    
            recursao(listaAdjacencia.get(point).get(i).nome, vertices, listaAux);
            
        }
        return;

    }
    

    public class vertice {

        private String nome;

        public vertice(String nome){
            this.nome = nome;
        }

        public String getNome() {
            return nome;
        }

    }
}
