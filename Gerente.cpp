#include "Gerente.h"

Gerente::Gerente() : Funcionario("Gerente"){
    codigo = "vazio";
    nome = "vazio";
    endereco = "vazio";
    telefone = "vazio";
    dataDeIngresso = "vazio";
    salario = 0;
    dataAniversario = "vazio";
}

void Gerente::setDesignacao(){
    designacao = "Gerente";
}

void Gerente::setAreaSupervisao(string str){
    areaDeSupervisao = str;
}

string Gerente::getAreaSupervisao(){
    return areaDeSupervisao;
}

void Gerente::getAtributos(string codigo){
    string CEP, numero;

    this->codigo = codigo;

    cout << "Qual o nome do funcionario?" << endl;
    getline(cin, nome);
    system("cls");

    cout << "Qual o CEP do funcionario?" << endl;
    
    while(1){
        getline(cin, CEP);

        if(CEP.size() < 8 || CEP.size() > 8){
            system("cls");
            cout << "CEP invalido. Tente novamente" << endl;
            continue;
        }

        endereco = CEPtoEndereco(CEP);

        if(endereco == "CEP nao encontrado. Tente novamente"){
            cout << endereco << endl;
            continue;
        }

        system("cls");

        cout << "Qual o numero da residencia do funcionario?" << endl;
        getline(cin, numero);
        endereco += numero;

        system("cls");
        
        break;
    }

    cout << "Qual o telefone do funcionario?" << endl;
    getline(cin, telefone);
    system("cls");

    cout << "Qual a data de ingresso do funcionario? __/__/__" << endl;
    getline(cin, dataDeIngresso);
    system("cls");

    cout << "Qual sera o seu salario inicial?" << endl;
    cin >> salario;
    getchar();
    system("cls");

    cout << "Qual a data de aniversario do funcionario? __/__" << endl;
    getline(cin, dataAniversario);
    system("cls");

    cout << "Qual sera sua area de supervisao?" << endl;
    getline(cin, areaDeSupervisao);
    system("cls");
}

string Gerente::atributosToString(){
    return codigo + " - " + nome + " - " + endereco + " - " + telefone + " - " + dataDeIngresso + " - " + designacao + " - " + to_string(salario).erase(to_string(salario).size()-4, 4) + " - " + dataAniversario + " - " + areaDeSupervisao;
}

void Gerente::imprimeRegistro(){
    cout << "Codigo: " << codigo << endl;
    cout << "Nome: " << nome << endl;
    cout << "Endereco: " << endereco << endl;
    cout << "Telefone: " << telefone << endl;
    cout << "Data de ingresso: " << dataDeIngresso << endl;
    cout << "Designacao: " << designacao << endl;
    cout << "Salario: " << salario << endl;
    cout << "Aniversario: " << dataAniversario << endl;
    cout << "Area de supervisao: " << areaDeSupervisao << endl;
}