#include <iostream>
#include <string>
using namespace std;

class Pessoa {
public:
    int id;
    string nome;
    long long int cpf;

    void CadastrarPessoa() {
        cout << "Digite o ID da pessoa: ";
        cin >> id;
        cout << "Digite o nome da pessoa: ";
        cin.ignore(); // Limpar buffer
        getline(cin, nome);
        cout << "Digite o CPF da pessoa: ";
        cin >> cpf;
    }

    void ExibirPessoa() {
        cout << "ID: " << id << endl;
        cout << "Nome: " << nome << endl;
        cout << "CPF: " << cpf << endl;
    }
};

class Aluno : public Pessoa {
public:
    string curso;
    float mensalidade;

    void CadastrarInformacoes() {
        CadastrarPessoa();
        cout << "Digite o curso do aluno: ";
        cin.ignore(); // Limpar buffer
        getline(cin, curso);
        cout << "Digite a mensalidade do aluno: ";
        cin >> mensalidade;
    }

};

class DisciplinaAluno : public Aluno{
public:
    string nomeDisciplina;
    float prova01, prova02, prova03;

    void InserirNotas() {
        cout << "Digite o nome da disciplina: ";
        cin.ignore(); // Limpar buffer
        getline(cin, nomeDisciplina);
        cout << "Digite a nota da Prova 01: ";
        cin >> prova01;
        cout << "Digite a nota da Prova 02: ";
        cin >> prova02;
        cout << "Digite a nota da Prova 03: ";
        cin >> prova03;
    }

    void ExibirInformacoes() {
        ExibirPessoa();
        cout << "Curso: " << curso << endl;
        cout << "Mensalidade: " << mensalidade << "\n" << endl;

        float media = (prova01 + prova02 + prova03)/3;
        cout << "Disciplina: " << nomeDisciplina << endl;
        cout << "Prova 01: " << prova01 << endl;
        cout << "Prova 02: " << prova02 << endl;
        cout << "Prova 03: " << prova03 << endl;
        cout << "Nota total: " << media << endl;
        if (media >= 60) {
            cout << "Status: Aprovado" << endl;
        } else {
            cout << "Status: Reprovado" << endl;
        }
    }
};

class Professor : public Pessoa {
public:
    string curso;

    void CadastrarInformacoes() {
        CadastrarPessoa();
        cout << "Digite o curso do professor: ";
        cin.ignore(); // Limpar buffer
        getline(cin, curso);
    }
    
};

class DisciplinasProfessor : public Professor{
public:
    string nomeDisciplina01, nomeDisciplina02, nomeDisciplina03;
    int cargaHorariaDisciplina01, cargaHorariaDisciplina02, cargaHorariaDisciplina03;

    void CadastrarDisciplinas() {
        cout << "Digite o nome da Disciplina 01: ";
        cin.ignore(); // Limpar buffer
        getline(cin, nomeDisciplina01);
        cout << "Digite a carga horária da Disciplina 01: ";
        cin >> cargaHorariaDisciplina01;
        cout << "Digite o nome da Disciplina 02: ";
        cin.ignore(); // Limpar buffer
        getline(cin, nomeDisciplina02);
        cout << "Digite a carga horária da Disciplina 02: ";
        cin >> cargaHorariaDisciplina02;
        cout << "Digite o nome da Disciplina 03: ";
        cin.ignore(); // Limpar buffer
        getline(cin, nomeDisciplina03);
        cout << "Digite a carga horária da Disciplina 03: ";
        cin >> cargaHorariaDisciplina03;
    }

    void ExibirInformacoes() {
        ExibirPessoa();
        cout << "Curso: " << curso << "\n" << endl;

        int cargaTotal = cargaHorariaDisciplina01 + cargaHorariaDisciplina02 + cargaHorariaDisciplina03;
        cout << "Disciplina 01: " << nomeDisciplina01 << " - Carga Horária: " << cargaHorariaDisciplina01 << endl;
        cout << "Disciplina 02: " << nomeDisciplina02 << " - Carga Horária: " << cargaHorariaDisciplina02 << endl;
        cout << "Disciplina 03: " << nomeDisciplina03 << " - Carga Horária: " << cargaHorariaDisciplina03 << endl;
        cout << "Carga Horária Total: " << cargaTotal << endl;
    }
};

class Administrativo : public Pessoa {
public:
    string setor;
    string periodoTrabalho;

    void CadastrarInformacoes() {
        CadastrarPessoa();
        cout << "Digite o setor do técnico administrativo: ";
        cin.ignore(); // Limpar buffer
        getline(cin, setor);
        cout << "Digite o período de trabalho: ";
        getline(cin, periodoTrabalho);
    }

    void ExibirInformacoes() {
        ExibirPessoa();
        cout << "Setor: " << setor << endl;
        cout << "Período de Trabalho: " << periodoTrabalho << endl;
    }
};

void exibirMenu() {
    cout << "Menu:\n";
    cout << "1. Cadastro de Aluno\n";
    cout << "2. Cadastro de Professor\n";
    cout << "3. Cadastro de Técnico Administrativo\n";
    cout << "0. Encerra o programa\n";
    cout << "Escolha uma opção: ";
}

int main() {
    int opcao;

    do {
        exibirMenu();
        cin >> opcao;

        if (opcao == 1){
            DisciplinaAluno aluno;
            aluno.CadastrarInformacoes();
            aluno.InserirNotas();
            aluno.ExibirInformacoes();
        }
        else if (opcao == 2){
            DisciplinasProfessor professor;
            professor.CadastrarInformacoes();
            professor.CadastrarDisciplinas();
            professor.ExibirInformacoes();
        }
        else if (opcao == 3){
            Administrativo administrativo;
            administrativo.CadastrarInformacoes();
            administrativo.ExibirInformacoes();
        }
        else {
            cout << "Opção inválida! Tente novamente.\n";
        }
    } while (opcao != 0);

    return 0;
}