#include <iostream>
#include <locale.h>
#include <math.h>


using namespace std;

int imc();
int categoriaNadador();
int salario();
int reajusteSalario();
int condicaoDePagamento();
int quadradosDosNumeros();
int multiplosDeCinco();
int eleicao();
int conjunto();
int cinema();

int main()
{
    int codigo;
    setlocale(LC_ALL, "Portuguese");

    cout<<" 1- Exercicio 1 IMC \n 2- Exercicio 2 NADADOR \n 3- Exercicio 3 SALARIO \n 4- Exercicio 4 REAJUSTE SALARO \n 5- Exercicio 5 CONDICAO DE PAGAMENTO \n 6- Exercicio 6 QUADRADOS DOS NUMEROS \n 7- Exercicio 7 MULTIPLOS DE 5 \n 8- Exercicio 8 ELEICAO \n 9- Exercicio 9 CONJUNTO \n 10- Exercicio 10 CINEMA"<<endl;
    cout<<"Escolha o exercicio: ";
    cin>>codigo;

    switch(codigo){

        case 1:
            imc();
        break;
        case 2:
            categoriaNadador();
        break;
        case 3:
            salario();
        break;
        case 4:
            reajusteSalario();
        break;
        case 5:
            condicaoDePagamento();
        break;
        case 6:
            quadradosDosNumeros();
        break;
        case 7:
            multiplosDeCinco();
        break;
        case 8:
            eleicao();
        break;
        case 9:
            conjunto();
        break;
        case 10:
            cinema();
        break;
    }
}

int imc(){

     int altura, peso, imc;

    cout << "peso em kg: ";
    cin >> peso;

    cout << "altura em metros: ";
    cin >> altura;

    imc = peso / (altura^2);
    cout<<"Seu IMC e: "<<imc<<endl;

    if(imc < 20){
        cout<<"Abaixo do peso";
    }else if(imc > 20 && imc < 25){
        cout<< "Peso Ideal";
    }else{
        cout<<"Acima do peso";
    }
}

int categoriaNadador(){

    int idade;

    cout<<"Digite sua idade: ";
    cin>> idade;

    if(idade <= 7){
        cout<<"Categoria Infantil A";
    }
    if(idade <= 10 && idade> 7){
        cout<<"Categoria Infantil B";
    }
    if(idade > 10 && idade <=13){
        cout<<"Categoria Juvenil A";
    }
    if(idade > 13 && idade <=17){
        cout<<"Categoria Juvenil B";
    }
    if(idade > 17){
        cout<<"Categoria Senior";
    }

}

int salario(){

    int horasTrabalhadas, salarioMinimo, salarioBruto, valorDaHora, salarioFinal, desconto;

    cout<<"Digite suas horas trabalhadas: ";
    cin>> horasTrabalhadas;

    cout<<"Digite o salario minimo: ";
    cin>> salarioMinimo;

    valorDaHora = salarioMinimo / horasTrabalhadas;
    cout<<"Valor da hora: "<<valorDaHora<<endl;

    salarioBruto = horasTrabalhadas * valorDaHora;
    cout<<"Salario Bruto: "<<salarioBruto<<endl;

    desconto = salarioBruto * 0,03;
    salarioFinal = salarioBruto - desconto;

    cout<<"O salario a receber e: "<<salarioFinal;
}

int reajusteSalario(){

    int salario, reajuste;

    cout<<"Digite seu salario: ";
    cin>>salario;

    if(salario < 1000){
        reajuste= salario * 0.15;
        salario = salario + reajuste;
        cout<<"O salario reajustado e: "<<salario;
    }
    if(salario > 1000 && salario <= 1500){
        reajuste= salario * 0.10;
        salario = salario + reajuste;
        cout<<"O salario reajustado e: "<<salario;
    }
    if(salario > 1500){
        reajuste= salario * 0.05;
        salario = salario + reajuste;
        cout<<"O salario reajustado e: "<<salario;
    }
}

int condicaoDePagamento(){

    int precoEtiqueta, codigoDePagamento, precoFinal;

    cout<<"Digite o preco da etiqueta: ";
    cin>> precoEtiqueta;

    cout<<" 1 - A vista dinheiro ou cheque 10% de desconto \n 2- A vista com cartao de cre0dito, com 5% de desconto \n 3- Em 2 vezes, preco normal de etiqueta sem juros \n 4- Em 3 vezes, preço de etiqueta com acrescimo de 10% \n Escolha o metodo de pagamento: ";
    cin>> codigoDePagamento;

    switch(codigoDePagamento){

        case 1:
            precoFinal = precoEtiqueta - (precoEtiqueta * 0.10);
            cout<<"O preco a ser pago e: "<<precoFinal;
        break;
        case 2:
            precoFinal = precoEtiqueta - (precoEtiqueta * 0.05);
            cout<<"O preco a ser pago e: "<<precoFinal;
        break;
        case 3:
            precoFinal = precoEtiqueta / 2;
            cout<<"O preco a ser pago e 2x de: "<<precoFinal;
        break;
        case 4:
            precoFinal = precoEtiqueta * 1.10;
            cout<<"O preco a ser pago e 3x de: "<<precoFinal/3;
            cout<<"O preco total e: "<<precoFinal;
        break;
        default:
            cout<<"Nenhuma opcao valida selecionada";
        break;
    }
}

int quadradosDosNumeros(){
    for(int i = 0; i <= 20; i++){
        cout<<"O quadrado de "<<i<<" é: "<<pow(i,2)<<endl;
    }
}

int multiplosDeCinco() {
    cout<<"Os números multiplos de 5, entre 1 e 500 são: ";
    for(int i = 1; i <= 500; i++){

        if(i % 5 == 0){
            cout<<i<<" ";
        }
    }
}

int calculaPorcentagem(int numero, int totalDeVotos){
        int resposta;
        resposta = (numero * 100) / totalDeVotos;
        return resposta;
}

int eleicao(){

    int candidato1= 0, candidato2= 0, nulo= 0, branco= 0, codigo, totalDeVotos= 0, finalizador = 1, porcentagemCandidato1 = 0, porcentagemCandidato2 = 0, porcentagemNulo = 0, PorcentagemBranco= 0;

    while(finalizador > 0){

        cout<<" 1- Voto Candidato 1 \n 2- Voto Candidato 2 \n 3- Voto Nulo \n 4- Voto em Branco \n 0- Finalizar \n Seu Voto: ";
        cin>>codigo;

        switch(codigo){

        case 1:
            candidato1++;
        break;

        case 2:
            candidato2++;
        break;

        case 3:
            nulo++;
        break;

        case 4:
            branco++;
        break;

        case 0:
            finalizador = 0;
        break;

        default:
            cout<<"Nenhuma alternativa válida selecionada!";
        break;
    }

    }

    totalDeVotos = candidato1 + candidato2 + nulo + branco;

    porcentagemCandidato1 = calculaPorcentagem(candidato1, totalDeVotos);
    porcentagemCandidato2 = calculaPorcentagem(candidato2, totalDeVotos);
    porcentagemNulo= calculaPorcentagem(nulo, totalDeVotos);
    PorcentagemBranco= calculaPorcentagem(branco, totalDeVotos);

    cout<<"Total de votos: "<<totalDeVotos<<endl;
    cout<<"Candidato 1: "<<porcentagemCandidato1<<"%"<<endl;
    cout<<"Candidato 2: "<<porcentagemCandidato2<<"%"<<endl;
    cout<<"Nulo: "<<porcentagemNulo<<"%"<<endl;
    cout<<"Branco: "<<PorcentagemBranco<<"%"<<endl;

}

int conjunto(){

    int numeroDoAluno, tamanhoDoAluno = 0, menorAluno, alunoMaisAlto, maiorAltura = 0, menorAltura = 999999;

    for(int i = 1; i <= 10; i++){

            cout<<"Digite a altura em centimetros do "<<i<<"° aluno: ";
            cin>>tamanhoDoAluno;

            if (tamanhoDoAluno > maiorAltura){
                alunoMaisAlto = i;
                maiorAltura = tamanhoDoAluno;
            }
            else if(tamanhoDoAluno < menorAltura){
                menorAluno = i;
                menorAltura = tamanhoDoAluno;
            }
    }

    cout<<"O aluno mais alto é "<<alunoMaisAlto<<" e sua altura é: "<<maiorAltura<<endl;
    cout<<"O aluno mais baixo é "<<menorAluno<<" e sua altura é: "<<menorAltura<<endl;

}

int cinema(){

    int idade, opniao, otimo=0, bom=0, regular=0, ruim=0,totalPessoas=0,mediaIdade=0,totalIdade=0,porcentagemOtimo=0,porcentagemBom,porcentagemRegular,porcentagemRuim,finalizador = 1 ;

    while (finalizador >= 1){
        cout << "Qual sua idade: ";
        cin >> idade;

        totalIdade = totalIdade + idade;
        if(idade >= 1){
            cout << " 1- Otimo \n 2- Bom \n 3- Regular \n 4- Ruim" << endl;
            cout << "Qual sua opiniao sobre o filme: ";
            cin >> opniao;

            switch (opniao) {
                case 1:
                    otimo++;
                break;
                case 2:
                    bom++;
                break;
                case 3:
                    regular++;
                break;
                case 4:
                    ruim++;
                break;
                default:
                    cout << "Nenhuma opcao valida foi inserida!";
                break;
            }
        }else{
                totalPessoas = otimo + bom + regular + ruim;
                mediaIdade = totalIdade / totalPessoas;
                porcentagemOtimo = calculaPorcentagem(otimo, totalPessoas);
                porcentagemBom = calculaPorcentagem(bom, totalPessoas);
                porcentagemRegular = calculaPorcentagem(regular, totalPessoas);
                porcentagemRuim = calculaPorcentagem(ruim, totalPessoas);
                cout<<"Quantidade de pessoas que responderam a pesquisa: "<<totalPessoas<<endl;
                cout<<"Media de idade das pessoas que responderam a pesquisa: "<<mediaIdade<<endl;
                cout<<"Candidato 1: "<<porcentagemOtimo<<"%"<<endl;
                cout<<"Candidato 2: "<<porcentagemBom<<"%"<<endl;
                cout<<"Nulo: "<<porcentagemRegular<<"%"<<endl;
                cout<<"Branco: "<<porcentagemRuim<<"%"<<endl;
                finalizador = 0;
            }

    } ;

}



