import javax.swing.*;

public class Principal {
    public static void main(String[] args) {

        Percurso percurso = new Percurso();
        Custo custo = new Custo();

        boolean resposta=true;

        while (resposta) {
            int opcao = Integer.parseInt(
                    JOptionPane.showInputDialog(null,
                            "1-CADASTRAR PERCURSO \n" + "2-LISTAR PERCURSO \n" + "3-CALCULAR VIAGEM \n" +
                                    "4-SAIR"));

            switch (opcao) {
                case 1:
                    percurso.cadastrarPercurso();
                    JOptionPane.showMessageDialog(null, "Percurso cadastrado com sucesso");
                    break;

                case 2:
                   percurso.listarPercursos();
                    break;

                case 3:
                    custo.calcularViagem(percurso);
                    break;

                case 4:
                    System.exit(0);
                default:
                    JOptionPane.showMessageDialog(null,
                            "codigo invalido");
                    continue;
            }

        }

    }
}