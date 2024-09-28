import javax.swing.*;

public class Custo {

    //creating atributes

    private double totalPercurso;

    //getters and setters

    public double getTotalPercurso() {
        return totalPercurso;
    }

    public void setTotalPercurso(double totalPercurso) {
        this.totalPercurso = totalPercurso;
    }

    public void calcularViagem(Percurso p){
        double kmPorLitro = Double.parseDouble(JOptionPane.showInputDialog(null, "Informe quantos km seu carro anda por litro: "));

        double quantidadeLitros = calculaQtdLitros(kmPorLitro, p.getKmPercorrido());

        double totalCombustivel = calculaTotalCombustivel(quantidadeLitros, p.getValorCombustivel());

        this.totalPercurso = totalCombustivel + p.getValorPedagio();

        JOptionPane.showMessageDialog(null, "Total gasto na viagem: "+this.totalPercurso);
    }

    private double calculaQtdLitros(double kmPorLitro, double km){
        return km/kmPorLitro;
    }

    private double calculaTotalCombustivel(double qtdLitros, double valorCombustivel){
        return qtdLitros * valorCombustivel;
    }
}
