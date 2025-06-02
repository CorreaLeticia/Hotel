#include <stdio.h>
#include <locale.h>

void checkIn();
void servicoQuarto();
void fazerPedido();

int main() {
    setlocale(LC_ALL, "");

int opcao;
do {
    printf("\nMenu Principal\n");
    printf("1 - Fazer Check-in\n");
    printf("2 - Solicitar Serviço de Quarto\n");
    printf("3 - Fazer Pedido\n");
    printf("0 - Sair\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

        switch (opcao) {
        
        case 1:
       checkIn();
            break;
            
        case 2:
        servicoQuarto();
                break;
                
        case 3:
        fazerPedido();
                break;
                
        case 0:
        printf("Saindo do programa...\n");
                break;
            default:
                printf("Opção inválida! Tente novamente.\n");
        }
} while (opcao != 0);

    return 0;
}

void checkIn() {
    char nome[50], endereco[50], dnascimento[15], cpf[15], telefone[15], dcheckin[15], dcheckout[15], fpagamento[30];
    int nH, quarto;

    printf("\nOpção escolhida: Fazer Check-in\n");
    printf("Digite seu nome completo: ");
    scanf(" %[^\n]", nome);
    printf("Digite seu endereço: ");
    scanf(" %[^\n]", endereco);
    printf("Digite sua data de nascimento: ");
    scanf("%s", dnascimento);
    printf("Digite seu CPF: ");
    scanf("%s", cpf);
    printf("Digite seu telefone: ");
    scanf("%s", telefone);
    printf("Digite a data de seu check-in: ");
    scanf("%s", dcheckin);
    printf("Digite a data de seu check-out: ");
    scanf("%s", dcheckout);
    printf("Digite a forma de pagamento: ");
    scanf(" %[^\n]", fpagamento);
    printf("Digite o número de hóspedes: ");
    scanf("%d", &nH);

    printf("\nEscolha o modelo de quarto:\n");
    printf("1- Suíte casal (Até 2 pessoas) (R$200.00/dia)\n2- Quarto família (Até 4 pessoas) (R$350.00/dia)\n3- Quarto king (Até 6 pessoas) (R$500.00/dia)\n") ;
    scanf("%d", &quarto);

    printf("\nCheck-in realizado com sucesso!\n");
}

    void servicoQuarto() {
    int pedido, quarto;

    printf("\nOpções de serviço de quarto disponíveis:\n");
    printf("1- Roupas de cama e toalhas extras\n");
    printf("2- Serviço de lavanderia\n");
    printf("3- Itens de higiene pessoal\n");
    printf("4- Ajuda geral\n");
    printf("Informe o número do serviço desejado: ");
    scanf("%d", &pedido);

    if (pedido >= 1 && pedido <= 4) {
        printf("Informe o número do quarto: ");
        scanf("%d", &quarto);
        printf("O serviço será atendido em breve no quarto %d.\n", quarto);
    } else {
   printf("Opção inválida de serviço.\n");
    }
    }
  void fazerPedido() {
    int pedido, quarto;

    printf("\nCardápio disponível:\n");
    printf("1- Café da manhã\n");
    printf("2- Almoço\n");
    printf("3- Doces\n");
    printf("4- Bebidas\n");
    printf("Escolha uma opção: ");
    scanf("%d", &pedido);

    switch (pedido) {
        case 1:
            printf("\nOpções de Café da manhã:\n");
            printf("1 - Pão com manteiga e café\n2 - Frutas\n3 - Tapioca e suco de laranja\n4 - Bolo de Cenoura\n5- Panqueca\n6- Bolo de chocolate\n7- Omelete\n");
            break;
        case 2:
            printf("\nOpções de Almoço:\n");
            printf("1 - Frango Grelhado\n2 - Bife á parmegiana\n3 - Vegetariano\n4 - Strognoff de frango\n5- Macarrão com almondêgas\n6- Lasanha\n");
            break;
        case 3:
            printf("\nOpções de Doces:\n");
            printf("1 - Pudim\n2 - Brigadeiro\n3 - Mousse de maracuja\n4- Sorvete\n5-Torta de limão\n");
            break;
        case 4:
            printf("\nOpções de Bebidas:\n");
            printf("1 - Suco de Laranja\n2 - Guaraná\n3 - Água\n4 - Limonada suíça\n5- Coca-Cola\n6-Cerveja\n7-Vinho\n");
            break;
        default:
            printf("Escolha inválida. Reinicie!\n");
            return;
    }

    printf("Escolha uma opção: ");
    scanf("%d", &pedido);

    printf("Informe o número do quarto: ");
    scanf("%d", &quarto);
    printf("O pedido será entregue em breve no quarto %d.\n", quarto);
}
