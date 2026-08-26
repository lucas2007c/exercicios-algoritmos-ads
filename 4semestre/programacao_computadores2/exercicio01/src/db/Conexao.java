package db;

import java.sql.*;

public class Conexao {
    private static final String URL = "jdbc:mysql://localhost:3306/banco_digital?useSSL=false";
    private static final String USER = "root";
    private static final String PASS = "aluno";
    
    public Connection getConnection() throws SQLException {
        return DriverManager.getConnection(URL,USER,PASS);
    }
}
