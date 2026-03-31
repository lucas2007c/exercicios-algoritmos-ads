package prova01_sistemaVeiculos;

import java.util.ArrayList;
import java.util.Scanner;

public class SistemaVeiculos {
    private static int classID = 1;
    private ArrayList<Carro> carros = new ArrayList<>();
    private ArrayList<Moto> motos = new ArrayList<>();
    private Scanner input;

    public SistemaVeiculos(Scanner input) {
        this.input = input;
    }

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
        System.out.println("Insira o id do veiculo: ");
        int id = input.nextInt();
        input.nextLine();
        return id;
    }

    private Carro obterInfoCarro() {
        System.out.println("Insira a marca do carro: ");
        String marca = input.nextLine();

        System.out.println("Insira o modelo do carro: ");
        String modelo = input.nextLine();

        System.out.println("Insira o ano do carro: ");
        int ano = input.nextInt();
        input.nextLine();

        System.out.println("Insira a quantidade de portas do carro: ");
        int portas = input.nextInt();
        input.nextLine();

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
        System.out.println("Insira a marca da moto: ");
        String marca = input.nextLine();

        System.out.println("Insira o modelo da moto: ");
        String modelo = input.nextLine();

        System.out.println("Insira o ano da moto: ");
        int ano = input.nextInt();
        input.nextLine();
        
        System.out.println("Insira quantas cilindradas tem a moto: ");
        int cilindradas = input.nextInt();
        input.nextLine();

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
