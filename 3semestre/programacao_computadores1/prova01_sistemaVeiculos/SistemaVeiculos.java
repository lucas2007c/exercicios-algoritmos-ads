import java.util.ArrayList;
import java.util.Scanner;

public class SistemaVeiculos {
    private static int classID = 1;
    private ArrayList<Carro> carros = new ArrayList<>();
    private ArrayList<Moto> motos = new ArrayList<>();

    public void cadastrarCarro() {
        Carro novoCarro = this.obterInfoCarro();
        carros.add(novoCarro);
        classID++;
        System.out.println("Carro Cadastrado Com Sucesso!");
    }

    public void listarCarros() {
        System.out.println("\n----- Carros -----");
        for (int i = 0; i < carros.size(); i++) {
            carros.get(i).exibirInfo();
        }
    }

    public void atualizarCarro() {
        int id = obterId();

        boolean carExist = checkIfCarExist(id);

        if (carExist) {
            Carro novoCarro = obterInfoCarro();
            for (int i = 0; i < carros.size(); i++) {
                if (carros.get(i).getId() == id) {
                    novoCarro.setId(carros.get(i).getId());
                    carros.set(i, novoCarro);
                    System.out.println("\nCarro Atualizado Com Sucesso!\n");
                    break;
                }
            }
        }
    }

    public void removerCarro() {
        int id = obterId();

        boolean carExist = checkIfCarExist(id);

        if (carExist) {
            for (int i = 0; i < carros.size(); i++) {
                if (carros.get(i).getId() == id) {
                    carros.remove(i);
                    System.out.println("\nCarro Removido Com Sucesso!\n");
                    break;
                }
            }
        }
    }

    public void cadastrarMoto() {
        Moto novaMoto = this.obterInfoMoto();
        motos.add(novaMoto);
        classID++;
        System.out.println("Moto Cadastrada Com Sucesso!");
    }

    public void listarMotos() {
        System.out.println("\n----- Motos -----");
        for (int i = 0; i < motos.size(); i++) {
            motos.get(i).exibirInfo();
        }
    }
    
    public void atualizarMotos() {
        int id = obterId();

        boolean motoExist = checkIfMotoExist(id);

        if (motoExist) {
            Moto novaMoto = obterInfoMoto();
            for (int i = 0; i < motos.size(); i++) {
                if (motos.get(i).getId() == id) {
                    novaMoto.setId(motos.get(i).getId());
                    motos.set(i, novaMoto);
                    System.out.println("\nMoto Atualizada Com Sucesso!\n");
                    break;
                }
            }
        }
    }

    public void removerMoto() {
        int id = obterId();

        boolean motoExist = checkIfMotoExist(id);

        if (motoExist) {
            for (int i = 0; i < motos.size(); i++) {
                if (motos.get(i).getId() == id) {
                    motos.remove(i);
                    System.out.println("\nMoto Removida Com Sucesso!\n");
                    break;
                }
            }
        }
    }

    private int obterId() {
        Scanner sc = new Scanner(System.in);

        System.out.println("Insira o id do veiculo: ");
        int id = sc.nextInt();

        return id;
    }

    private Carro obterInfoCarro() {
        Scanner sc = new Scanner(System.in);

        sc.reset();

        System.out.println("Insira a marca do carro: ");
        String marca = sc.nextLine();

        System.out.println("Insira o modelo do carro: ");
        String modelo = sc.nextLine();

        System.out.println("Insira o ano do carro: ");
        int ano = sc.nextInt();

        System.out.println("Insira a quantidade de portas do carro: ");
        int portas = sc.nextInt();

        return new Carro(marca, modelo, ano, portas);
    }

    private boolean checkIfCarExist(int id) {
        for (int i = 0; i < carros.size(); i++) {
            if (carros.get(i).getId() == id) {
                return true;
            }
        }

        System.out.println("O carro com este id não existe.");
        return false;
    }

    private Moto obterInfoMoto() {
        Scanner sc = new Scanner(System.in);

        sc.reset();

        System.out.println("Insira a marca da moto: ");
        String marca = sc.nextLine();

        System.out.println("Insira o modelo da moto: ");
        String modelo = sc.nextLine();

        System.out.println("Insira o ano da moto: ");
        int ano = sc.nextInt();

        System.out.println("Insira quantas cilindradas tem a moto: ");
        int cilindradas = sc.nextInt();

        return new Moto(marca, modelo, ano, cilindradas);
    }

    private boolean checkIfMotoExist(int id) {
        for (int i = 0; i < motos.size(); i++) {
            if (motos.get(i).getId() == id) {
                return true;
            }
        }

        System.out.println("A moto com este id não existe.");
        return false;
    }

    public static int getClassID() {
        return classID;
    }
}
