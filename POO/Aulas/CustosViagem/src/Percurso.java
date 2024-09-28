import javax.swing.*;

public class Percurso {

    //creating atributes

    private double kmPercorrido;
    private double valorCombustivel;
    private double valorPedagio;

    //getters and setters

    public double getKmPercorrido() {
        return kmPercorrido;
    }

    public void setKmPercorrido(double kmPercorrido) {
        this.kmPercorrido = kmPercorrido;
    }

    public double getValorCombustivel() {
        return valorCombustivel;
    }

    public void setValorCombustivel(double valorCombustivel) {
        this.valorCombustivel = valorCombustivel;
    }

    public double getValorPedagio() {
        return valorPedagio;
    }

    public void setValorPedagio(double valorPedagio) {
        this.valorPedagio = valorPedagio;
    }

    public void cadastrarPercurso(){
        this.kmPercorrido = Double.parseDouble(JOptionPane.showInputDialog(null, "Informe a quantidade de km percorrido: "));
        this.valorPedagio = Double.parseDouble(JOptionPane.showInputDialog(null, "Informe os gastos do pedagio: "));
        this.valorCombustivel = Double.parseDouble(JOptionPane.showInputDialog(null, "Informe o valor do combustivel: "));
    }

    public void listarPercursos(){
        JOptionPane.showMessageDialog(null,
                "Kms Percorrido: "+this.kmPercorrido+
                        "\nValor do combustivel: "+this.valorCombustivel+
                        "\nValor dos gastos de pedagio: "+this.valorPedagio);
    }
}
