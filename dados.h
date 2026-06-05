#define MAX_DATA 7

struct Paciente{
    int id;
    char nome[50];
    int idade;
    char telefone[20];
};

struct Medico{
    int id;
    char nome[30];
    char especializacao[30];
};


typedef struct Consulta{
    int id;
    char previa[100];
    char data[20];
    char horario[10];

    struct Paciente paciente;
    struct Medico medico;

} Consulta;


typedef struct{
        char data[20];
        char horario[10];
        int disponivel; //1->dispinivel 0->não
} H
