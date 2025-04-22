import javax.swing.*;

public class Principal {
    public static void main(String[] args) {
        //Instanciar o objeto da classe Caixa

        Caixa caixa = new Caixa();

        String opcoes[] =  {"Sacar", "Depositar", "Consultar saldo", "Sair"};
        int selecionado = JOptionPane.showOptionDialog(null,"Escolha uma opção", "Enquete",0, JOptionPane.QUESTION_MESSAGE, null, opcoes, opcoes[0]);

        switch (selecionado){
            case 0:
                caixa.sacar();
            break;
            case 1:
                caixa.depositar();
                break;
            case 2:
                JOptionPane.showMessageDialog(null, "Saldo da conta: "+caixa.getSaldo(), "Mensagem", JOptionPane.INFORMATION_MESSAGE);
                break;
            case 3:
                int resultado = JOptionPane.showConfirmDialog(null, "Deseja realmente sair ?", "Fechar", JOptionPane.YES_NO_OPTION);
                if(resultado == 0 ){
                    System.exit(0);
                }
                break;
        }
    }
}