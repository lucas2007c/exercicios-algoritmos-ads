package abstracao;

abstract class Pessoa {
    String nome;
    int idade;

    public Pessoa(String nome, int idade) {
        this.nome = nome;
        this.idade = idade;
    }
    
    public void apresentar() {
        System.out.println("Ola, meu nome eh " + nome + " e tenho " + idade + " anos.");
    }

    abstract void deslocar(); //obriga as subclasses a implementarem esse método
}