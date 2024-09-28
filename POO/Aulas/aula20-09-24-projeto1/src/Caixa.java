import javax.swing.*;

public class Caixa {

    //declarando atributo
    private double saldo;

    //métodos de acessos
    //get e set


    public double getSaldo() {
        return saldo;
    }

    public void setSaldo(double saldo) {
        this.saldo = saldo;
    }

    public void depositar(){
        //variavel de escopo local
        double valor;
        valor = Double.parseDouble(JOptionPane.showInputDialog(null, "Informe o valor para deposito", "Deposito", JOptionPane.QUESTION_MESSAGE));
        this.saldo += valor;
        JOptionPane.showMessageDialog(null, "Deposito realizado com sucesso", "Mensagem", JOptionPane.INFORMATION_MESSAGE);
    }

    public void sacar(){
        //variavel de escopo local
        double valor;

        valor = Double.parseDouble(JOptionPane.showInputDialog(null, "Informe o valor para ser sacado", "Saque", JOptionPane.QUESTION_MESSAGE));

        if(valor > this.saldo){
            JOptionPane.showMessageDialog(null ,"Saldo insuficiente", "Erro", JOptionPane.WARNING_MESSAGE);
        }else{
            this.saldo -= valor;
            JOptionPane.showMessageDialog(null, "Deposito realizado com sucesso", "Mensagem", JOptionPane.INFORMATION_MESSAGE);
        }


    }
}
