package app;

import java.io.IOException;
import java.sql.SQLException;
import services.ContaCorrenteService;
import view.TabelaContas;

public class Exercicio01 {
    public static void main(String[] args) throws IOException, SQLException {
        ContaCorrenteService service = new ContaCorrenteService();
        
        service.carregarDados();
        
        TabelaContas menu = new TabelaContas(service);
        menu.setVisible(true);
    }     
}