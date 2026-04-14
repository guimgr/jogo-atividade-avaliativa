#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    int escolha_menu = 0;

    while (escolha_menu != 4)
    {
        printf("1: Pergunta e Resposta\n");
        printf("2: Cobra na Caixa!\n");
        printf("3: Gousmas War\n");
        printf("4: Sair\n");
        printf("Escolha um minijogo: \n");
        scanf("%d", &escolha_menu);

        if (escolha_menu == 1)
        {
            int escolha_p_r_1, escolha_p_r_2, escolha_p_r_3, escolha_p_r_4, escolha_p_r_5, loop_resposta = 0, escolhasn;
            
            while(loop_resposta == 0){
            printf("É um jogo de perguntas com quatro alternativas, onde o usuário escolhe uma resposta e o sistema informa se está certa ou errada, mostrando a correta caso haja erro.\n");

            // Pergunta 1
            printf("Quanto eh a raiz quadrada de 144?\n");

            // Alternativas
            printf("1- A: 12\n");
            printf("2- B: 14\n");
            printf("3- C: 20\n");
            printf("4- D: 11\n");

            printf("Escolha uma alternativa: \n");
            scanf("%d", &escolha_p_r_1);

            if (escolha_p_r_1 == 1)
            {
                printf("A resposta esta certa, parabens :) !!!!\n");
            }
            else
            {
                printf("A resposta esta incorreta :(\n");
                printf("A resposta correta eh 1- A\n");
            }

            // Pergunta 2
            printf("Qual o nome do pai da computacao\n");

            // Alternativas
            printf("1- A: Albert Einstein\n");
            printf("2- B: Alanzoka\n");
            printf("3- C: Alan Turing\n");
            printf("4- D: Davy Jones\n");

            printf("Escolha uma alternativa: \n");
            scanf("%d", &escolha_p_r_2);

            if (escolha_p_r_2 == 3)
            {
                printf("A resposta esta certa, parabens :) !!!!\n");
            }
            else
            {
                printf("A resposta esta incorreta :(\n");
                printf("A resposta correta eh 3- C\n");
            }

            // Pergunta 3
            printf("Qual franquia de jogos em que o nome do protagonista eh link\n");

            // Alternativas
            printf("1- A: Assasins Creed\n");
            printf("2- B: Mario\n");
            printf("3- C: The legend of Zelda\n");
            printf("4- D: Donkey Kong\n");

            printf("Escolha uma alternativa: \n");
            scanf("%d", &escolha_p_r_3);

            if (escolha_p_r_3 == 3)
            {
                printf("A resposta esta certa, parabens :) !!!!\n");
            }
            else
            {
                printf("A resposta esta incorreta :(\n");
                printf("A resposta correta eh 3- C\n");
            }

            // Pergunta 4
            printf("Quem jogou todos os jogos (a diferenca de um fan pra um famboy)\n");

            // Alternativas
            printf("1- A: Um Dois Tres da Silva Quatro\n");
            printf("2- B: Loganlrd da Silva\n");
            printf("3- C: Arlan Sodre\n");
            printf("4- D: Davy Jones\n");

            printf("Escolha uma alternativa: \n");
            scanf("%d", &escolha_p_r_4);
            
            if (escolha_p_r_4 == 4)
            {
                printf("A resposta esta certa, parabens :) !!!!\n");
            }
            else
            {
                printf("A resposta esta incorreta :(\n");
                printf("A resposta correta eh 4- D\n");
            }

            // Pergunta 5
            printf("Qual o maior elo do jogo eletronico Valorant?\n");

            // Alternativas
            printf("1- A: Bronze\n");
            printf("2- B: Radiante\n");
            printf("3- C: Prata\n");
            printf("4- D: Imortal\n");

            printf("Escolha uma alternativa: \n");
            scanf("%d", &escolha_p_r_5);

            if (escolha_p_r_5 == 2)
            {
                printf("A resposta esta certa, parabens :) !!!!\n");
            }
            else
            {
                printf("A resposta esta incorreta :(\n");
                printf("A resposta correta eh 2- B\n");
            }
            printf("você desejar jogar novamente? (1) ou voltar para o menu principal? (2): \n");
            printf(" \n");
            scanf("%d", &escolhasn);
            if(escolhasn == 1) 
            {
                loop_resposta = 0;
                }
                else if (escolhasn == 2)
                {
                    loop_resposta = 1;
                    }
			}
        }

         if (escolha_menu == 2)
        {
            char nomes[7][30] = {
                "Indiana Jones", "Nathan Drake", "Lara Croft", "Rick O'Connell",
                "Benjamin Franklin Gates", "Ellen Ripley", "Katniss Everdeen"};

            char nome1[30], nome2[30];
            int caixas[6];
            int abertas[6];
            int opcao_pos_jogo;
            int escolha, turno, resultado;
            int pos_botao, pos_cobra;
            int caixas_restantes;
            int i;
            int vitorias1, vitorias2;
            int continuar;

            srand(time(NULL));

            vitorias1 = 0;
            vitorias2 = 0;
            continuar = 1;

            while (continuar == 1)
            {

                printf("\n\n");
                printf("                 Cobra na Caixa!\n");
                printf("\nDois exploradores ficaram presos em uma tumba egipcia e se encontram presos numa sala. No centro da sala, ha cinco caixas: uma delas contem o botao para abrir a porta, enquanto uma outra esconde uma cobra mortal. A cada turno, o local do botao e da cobra muda de caixa conforme os exploradores vao abrindo as caixas de forma alternada.\n\nSO UM PODE SAIR\n");

                printf("\nJOGADOR 1 - ESCOLHA SEU NOME\n");
                for (i = 0; i < 7; i++)
                    printf("  %d. %s\n", i + 1, nomes[i]);
                printf("\nDigite o numero: ");
                do
                {
                    scanf("%d", &escolha);
                    if (escolha < 1 || escolha > 7)
                        printf("Invalido! Escolha de 1 a 7: ");
                } while (escolha < 1 || escolha > 7);
                for (i = 0; nomes[escolha - 1][i] != '\0'; i++)
                    nome1[i] = nomes[escolha - 1][i];
                nome1[i] = '\0';
                printf("Ola, %s!\n", nome1);

                printf("\nJOGADOR 2 - ESCOLHA SEU NOME\n");
                for (i = 0; i < 7; i++)
                    printf("  %d. %s\n", i + 1, nomes[i]);
                printf("\nDigite o numero: ");
                do
                {
                    scanf("%d", &escolha);
                    if (escolha < 1 || escolha > 7)
                        printf("Invalido! Escolha de 1 a 7: ");
                } while (escolha < 1 || escolha > 7);
                for (i = 0; nomes[escolha - 1][i] != '\0'; i++)
                    nome2[i] = nomes[escolha - 1][i];
                nome2[i] = '\0';
                printf("Ola, %s!\n", nome2);

                vitorias1 = 0;
                vitorias2 = 0;
                opcao_pos_jogo = 1;

                while (opcao_pos_jogo == 1)
                {

                    for (i = 1; i <= 5; i++)
                        caixas[i] = 0;

                    pos_botao = (rand() % 5) + 1;
                    do
                    {
                        pos_cobra = (rand() % 5) + 1;
                    } while (pos_cobra == pos_botao);

                    caixas[pos_botao] = 1;
                    caixas[pos_cobra] = 2;

                    for (i = 1; i <= 5; i++)
                        abertas[i] = 0;

                    turno = (rand() % 2) + 1;

                    printf("\n\n");
                    printf("NOVA PARTIDA!\n");

                    if (turno == 1)
                        printf("Sorteio:  %s comeca!\n", nome1);
                    else
                        printf("Sorteio:  %s comeca!\n", nome2);

                    printf("\nPressione ENTER para iniciar...");
                    resultado = 0;
                    caixas_restantes = 5;

                    while (resultado == 0 && caixas_restantes > 0)
                    {

                        printf("\n\n");
                        if (turno == 1)
                            printf("Turno de: %-26s \n", nome1);
                        else
                            printf("Turno de: %-26s \n", nome2);
                        printf("\n  ");
                        for (i = 1; i <= 5; i++)
                            printf("  [%d]  ", i);
                        printf("\n  ");
                        for (i = 1; i <= 5; i++)
                        {
                            if (abertas[i] == 1)
                                printf("  [A]  ");
                            else
                                printf("  [ ]  ");
                        }
                        printf("\n\n  [A]=Aberta  [ ]=Fechada\n\n");

                        printf("Escolha uma caixa (1-5): ");
                        do
                        {
                            scanf("%d", &escolha);
                            if (escolha < 1 || escolha > 5)
                                printf("Invalido! Escolha de 1 a 5: ");
                            else if (abertas[escolha] == 1)
                                printf("Caixa ja aberta! Escolha outra: ");
                        } while (escolha < 1 || escolha > 5 || abertas[escolha] == 1);

                        abertas[escolha] = 1;
                        caixas_restantes--;

                        printf("\n");

                        if (caixas[escolha] == 1)
                        {
                            printf("BOTAO ENCONTRADO! VITORIA!\n");
                            if (turno == 1)
                            {
                                printf("\n%s encontrou o BOTAO na caixa %d!\n", nome1, escolha);
                                printf("A porta se abre... %s VENCEU!\n", nome1);
                                resultado = 1;
                            }
                            else
                            {
                                printf("\n%s encontrou o BOTAO na caixa %d!\n", nome2, escolha);
                                printf("A porta se abre... %s VENCEU!\n", nome2);
                                resultado = 2;
                            }
                        }
                        else if (caixas[escolha] == 2)
                        {
                            printf("UMA COBRA MORTAL!!!\n");
                            if (turno == 1)
                            {
                                printf("\n%s encontrou a COBRA na caixa %d!\n", nome1, escolha);
                                printf("%s foi eliminado(a)! %s VENCEU!\n", nome1, nome2);
                                resultado = 2;
                            }
                            else
                            {
                                printf("\n%s encontrou a COBRA na caixa %d!\n", nome2, escolha);
                                printf("%s foi eliminado(a)! %s VENCEU!\n", nome2, nome1);
                                resultado = 1;
                            }
                        }
                        else
                        {
                            printf("Caixa %d esta VAZIA. Nada acontece.\n", escolha);
                            printf("\nPressione ENTER para continuar...");
                            getchar();
                            getchar();

                            if (turno == 1)
                                turno = 2;
                            else
                                turno = 1;
                        }
                    }

                    if (resultado == 1)
                        vitorias1++;
                    else
                        vitorias2++;

                    printf("\nPLACAR ATUAL:\n");
                    printf("%s: %d vitoria(s)\n", nome1, vitorias1);
                    printf("%s: %d vitoria(s)\n", nome2, vitorias2);

                    printf("\nO QUE DESEJA FAZER?\n");
                    printf("1. Jogar novamente\n");
                    printf("2. Voltar ao menu principal\n");
                    printf("Escolha: ");
                    do
                    {
                        scanf("%d", &opcao_pos_jogo);
                        if (opcao_pos_jogo < 1 || opcao_pos_jogo > 2)
                            printf("Invalido! Digite 1 ou 2: ");
                    } while (opcao_pos_jogo < 1 || opcao_pos_jogo > 2);

                    if (opcao_pos_jogo == 2)
                    {
                        continuar = 0;
                    }
                }
            }

            printf("\nObrigado por jogar! Ate logo!\n");
        }

        else if (escolha_menu == 3)
        {
            int jogar_gousma_novamente = 1;

            while (jogar_gousma_novamente == 1)
            {
                int g1j1_f = 1, g2j1_f = 1, g1j2_f = 1, g2j2_f = 1;
                char escolha_gousmaj1, escolha_gousmaj2;
                int escolha_gousma_atacarj1_contraj2, escolha_gousma_atacadaj2;
                int escolha_gousma_atacarj2_contraj1, escolha_gousma_atacadaj1;
                int qtd_transferir;
                int fim_partida = 0;

                printf("\nNeste jogo de estrategia, dois jogadores controlam criaturas chamadas Gousmas.\n");
                printf("Cada Gousma tem um valor inteiro chamado furia.\n");
                printf("A estrategia do jogo envolve:\n");
                printf("Aumentar a furia do inimigo ate ele ser destruido\n");
                printf("Controlar a propria furia para nao perder suas criaturas.\n");

                while (fim_partida == 0)
                {

                    printf("\nJogador 1 - Gousma 1: %d | Gousma 2: %d\n", g1j1_f, g2j1_f);
                    printf("Jogador 2 - Gousma 1: %d | Gousma 2: %d\n", g1j2_f, g2j2_f);

                    printf("\nVez do Jogador 1: o que voce vai fazer? Atacar(A) ou Dividir(D): ");
                    scanf(" %c", &escolha_gousmaj1);

                    while (escolha_gousmaj1 != 'A' && escolha_gousmaj1 != 'a' &&
                           escolha_gousmaj1 != 'D' && escolha_gousmaj1 != 'd')
                    {
                        printf("Opcao invalida. Digite A para atacar ou D para dividir: ");
                        scanf(" %c", &escolha_gousmaj1);
                    }

                    if (escolha_gousmaj1 == 'A' || escolha_gousmaj1 == 'a')
                    {
                        printf("Voce vai querer usar que Gousma sua para atacar? (1 ou 2): \n");
                        scanf("%d", &escolha_gousma_atacarj1_contraj2);

                        while (escolha_gousma_atacarj1_contraj2 != 1 && escolha_gousma_atacarj1_contraj2 != 2)
                        {
                            printf("Gousma atacante invalida. Digite 1 ou 2: \n");
                            scanf("%d", &escolha_gousma_atacarj1_contraj2);
                        }

                        while ((escolha_gousma_atacarj1_contraj2 == 1 && g1j1_f == 0) ||
                               (escolha_gousma_atacarj1_contraj2 == 2 && g2j1_f == 0))
                        {
                            printf("Essa Gousma esta destruida e nao pode atacar. Escolha outra (1 ou 2): \n");
                            scanf("%d", &escolha_gousma_atacarj1_contraj2);

                            while (escolha_gousma_atacarj1_contraj2 != 1 && escolha_gousma_atacarj1_contraj2 != 2)
                            {
                                printf("Gousma atacante invalida. Digite 1 ou 2: \n");
                                scanf("%d", &escolha_gousma_atacarj1_contraj2);
                            }
                        }

                        printf("Voce vai querer atacar qual Gousma do Jogador 2? (1 ou 2): \n");
                        scanf("%d", &escolha_gousma_atacadaj2);

                        while (escolha_gousma_atacadaj2 != 1 && escolha_gousma_atacadaj2 != 2)
                        {
                            printf("Gousma alvo invalida. Digite 1 ou 2: \n");
                            scanf("%d", &escolha_gousma_atacadaj2);
                        }

                        while ((escolha_gousma_atacadaj2 == 1 && g1j2_f == 0) ||
                               (escolha_gousma_atacadaj2 == 2 && g2j2_f == 0))
                        {
                            printf("Essa Gousma do Jogador 2 esta destruida e nao pode ser atacada. Escolha outra (1 ou 2): \n");
                            scanf("%d", &escolha_gousma_atacadaj2);

                            while (escolha_gousma_atacadaj2 != 1 && escolha_gousma_atacadaj2 != 2)
                            {
                                printf("Gousma alvo invalida. Digite 1 ou 2: \n");
                                scanf("%d", &escolha_gousma_atacadaj2);
                            }
                        }

                        if (escolha_gousma_atacarj1_contraj2 == 1)
                        {
                            if (escolha_gousma_atacadaj2 == 1)
                            {
                                g1j2_f = g1j2_f + g1j1_f;
                            }
                            else if (escolha_gousma_atacadaj2 == 2)
                            {
                                g2j2_f = g2j2_f + g1j1_f;
                            }
                        }
                        else if (escolha_gousma_atacarj1_contraj2 == 2)
                        {
                            if (escolha_gousma_atacadaj2 == 1)
                            {
                                g1j2_f = g1j2_f + g2j1_f;
                            }
                            else if (escolha_gousma_atacadaj2 == 2)
                            {
                                g2j2_f = g2j2_f + g2j1_f;
                            }
                        }
                    }

                    if (escolha_gousmaj1 == 'D' || escolha_gousmaj1 == 'd')
                    {
                        printf("Qual Gousma do Jogador 1 vai dividir a furia? (1 ou 2): \n");
                        scanf("%d", &escolha_gousma_atacarj1_contraj2);

                        while (escolha_gousma_atacarj1_contraj2 != 1 && escolha_gousma_atacarj1_contraj2 != 2)
                        {
                            printf("Gousma invalida. Digite 1 ou 2: \n");
                            scanf("%d", &escolha_gousma_atacarj1_contraj2);
                        }

                        while ((escolha_gousma_atacarj1_contraj2 == 1 && g1j1_f <= 1) ||
                               (escolha_gousma_atacarj1_contraj2 == 2 && g2j1_f <= 1))
                        {
                            printf("Essa Gousma nao pode dividir porque ficaria sem furia ou esta destruida. Escolha outra (1 ou 2): \n");
                            scanf("%d", &escolha_gousma_atacarj1_contraj2);

                            while (escolha_gousma_atacarj1_contraj2 != 1 && escolha_gousma_atacarj1_contraj2 != 2)
                            {
                                printf("Gousma invalida. Digite 1 ou 2: \n");
                                scanf("%d", &escolha_gousma_atacarj1_contraj2);
                            }
                        }

                        if (escolha_gousma_atacarj1_contraj2 == 1)
                        {
                            printf("Quanto de furia deseja transferir da Gousma 1 para a Gousma 2? (1 ate %d): \n", g1j1_f - 1);
                            scanf("%d", &qtd_transferir);

                            while (qtd_transferir < 1 || qtd_transferir >= g1j1_f)
                            {
                                printf("Valor invalido para divisao. Digite novamente: \n");
                                scanf("%d", &qtd_transferir);
                            }

                            g1j1_f = g1j1_f - qtd_transferir;
                            g2j1_f = g2j1_f + qtd_transferir;
                        }
                        else if (escolha_gousma_atacarj1_contraj2 == 2)
                        {
                            printf("Quanto de furia deseja transferir da Gousma 2 para a Gousma 1? (1 ate %d): \n", g2j1_f - 1);
                            scanf("%d", &qtd_transferir);

                            while (qtd_transferir < 1 || qtd_transferir >= g2j1_f)
                            {
                                printf("Valor invalido para divisao. Digite novamente: \n");
                                scanf("%d", &qtd_transferir);
                            }

                            g2j1_f = g2j1_f - qtd_transferir;
                            g1j1_f = g1j1_f + qtd_transferir;
                        }
                    }

                    if (g1j1_f > 5)
                    {
                        g1j1_f = 0;
                        printf("A Gousma 1 do Jogador 1 foi destruida!\n");
                    }
                    if (g2j1_f > 5)
                    {
                        g2j1_f = 0;
                        printf("A Gousma 2 do Jogador 1 foi destruida!\n");
                    }
                    if (g1j2_f > 5)
                    {
                        g1j2_f = 0;
                        printf("A Gousma 1 do Jogador 2 foi destruida!\n");
                    }
                    if (g2j2_f > 5)
                    {
                        g2j2_f = 0;
                        printf("A Gousma 2 do Jogador 2 foi destruida!\n");
                    }

                    if (g1j2_f == 0 && g2j2_f == 0)
                    {
                        printf("\nJogador 1 venceu!\n");
                        fim_partida = 1;
                    }

                    if (fim_partida == 0)
                    {
                        printf("\nJogador 1 -> Gousma 1: %d | Gousma 2: %d\n", g1j1_f, g2j1_f);
                        printf("Jogador 2 -> Gousma 1: %d | Gousma 2: %d\n", g1j2_f, g2j2_f);

                        printf("\nVez do Jogador 2: o que voce vai fazer? Atacar(A) ou Dividir(D): ");
                        scanf(" %c", &escolha_gousmaj2);

                        while (escolha_gousmaj2 != 'A' && escolha_gousmaj2 != 'a' &&
                               escolha_gousmaj2 != 'D' && escolha_gousmaj2 != 'd')
                        {
                            printf("Opcao invalida. Digite A para atacar ou D para dividir: ");
                            scanf(" %c", &escolha_gousmaj2);
                        }

                        if (escolha_gousmaj2 == 'A' || escolha_gousmaj2 == 'a')
                        {
                            printf("Voce vai querer usar que Gousma sua para atacar? (1 ou 2): \n");
                            scanf("%d", &escolha_gousma_atacarj2_contraj1);

                            while (escolha_gousma_atacarj2_contraj1 != 1 && escolha_gousma_atacarj2_contraj1 != 2)
                            {
                                printf("Gousma atacante invalida. Digite 1 ou 2: \n");
                                scanf("%d", &escolha_gousma_atacarj2_contraj1);
                            }

                            while ((escolha_gousma_atacarj2_contraj1 == 1 && g1j2_f == 0) ||
                                   (escolha_gousma_atacarj2_contraj1 == 2 && g2j2_f == 0))
                            {
                                printf("Essa Gousma esta destruida e nao pode atacar. Escolha outra (1 ou 2): \n");
                                scanf("%d", &escolha_gousma_atacarj2_contraj1);

                                while (escolha_gousma_atacarj2_contraj1 != 1 && escolha_gousma_atacarj2_contraj1 != 2)
                                {
                                    printf("Gousma atacante invalida. Digite 1 ou 2: \n");
                                    scanf("%d", &escolha_gousma_atacarj2_contraj1);
                                }
                            }

                            printf("Voce vai querer atacar qual Gousma do Jogador 1? (1 ou 2): \n");
                            scanf("%d", &escolha_gousma_atacadaj1);

                            while (escolha_gousma_atacadaj1 != 1 && escolha_gousma_atacadaj1 != 2)
                            {
                                printf("Gousma alvo invalida. Digite 1 ou 2: \n");
                                scanf("%d", &escolha_gousma_atacadaj1);
                            }

                            while ((escolha_gousma_atacadaj1 == 1 && g1j1_f == 0) ||
                                   (escolha_gousma_atacadaj1 == 2 && g2j1_f == 0))
                            {
                                printf("Essa Gousma do Jogador 1 esta destruida e nao pode ser atacada. Escolha outra (1 ou 2): \n");
                                scanf("%d", &escolha_gousma_atacadaj1);

                                while (escolha_gousma_atacadaj1 != 1 && escolha_gousma_atacadaj1 != 2)
                                {
                                    printf("Gousma alvo invalida. Digite 1 ou 2: \n");
                                    scanf("%d", &escolha_gousma_atacadaj1);
                                }
                            }

                            if (escolha_gousma_atacarj2_contraj1 == 1)
                            {
                                if (escolha_gousma_atacadaj1 == 1)
                                {
                                    g1j1_f = g1j1_f + g1j2_f;
                                }
                                else if (escolha_gousma_atacadaj1 == 2)
                                {
                                    g2j1_f = g2j1_f + g1j2_f;
                                }
                            }
                            else if (escolha_gousma_atacarj2_contraj1 == 2)
                            {
                                if (escolha_gousma_atacadaj1 == 1)
                                {
                                    g1j1_f = g1j1_f + g2j2_f;
                                }
                                else if (escolha_gousma_atacadaj1 == 2)
                                {
                                    g2j1_f = g2j1_f + g2j2_f;
                                }
                            }
                        }

                        if (escolha_gousmaj2 == 'D' || escolha_gousmaj2 == 'd')
                        {
                            printf("Qual Gousma do Jogador 2 vai dividir a furia? (1 ou 2): \n");
                            scanf("%d", &escolha_gousma_atacarj2_contraj1);

                            while (escolha_gousma_atacarj2_contraj1 != 1 && escolha_gousma_atacarj2_contraj1 != 2)
                            {
                                printf("Gousma invalida. Digite 1 ou 2: \n");
                                scanf("%d", &escolha_gousma_atacarj2_contraj1);
                            }

                            while ((escolha_gousma_atacarj2_contraj1 == 1 && g1j2_f <= 1) ||
                                   (escolha_gousma_atacarj2_contraj1 == 2 && g2j2_f <= 1))
                            {
                                printf("Essa Gousma nao pode dividir porque ficaria sem furia ou esta destruida. Escolha outra (1 ou 2): \n");
                                scanf("%d", &escolha_gousma_atacarj2_contraj1);

                                while (escolha_gousma_atacarj2_contraj1 != 1 && escolha_gousma_atacarj2_contraj1 != 2)
                                {
                                    printf("Gousma invalida. Digite 1 ou 2: \n");
                                    scanf("%d", &escolha_gousma_atacarj2_contraj1);
                                }
                            }

                            if (escolha_gousma_atacarj2_contraj1 == 1)
                            {
                                printf("Quanto de furia deseja transferir da Gousma 1 para a Gousma 2? (1 ate %d): \n", g1j2_f - 1);
                                scanf("%d", &qtd_transferir);

                                while (qtd_transferir < 1 || qtd_transferir >= g1j2_f)
                                {
                                    printf("Valor invalido para divisao. Digite novamente: \n");
                                    scanf("%d", &qtd_transferir);
                                }

                                g1j2_f = g1j2_f - qtd_transferir;
                                g2j2_f = g2j2_f + qtd_transferir;
                            }
                            else if (escolha_gousma_atacarj2_contraj1 == 2)
                            {
                                printf("Quanto de furia deseja transferir da Gousma 2 para a Gousma 1? (1 ate %d): \n", g2j2_f - 1);
                                scanf("%d", &qtd_transferir);

                                while (qtd_transferir < 1 || qtd_transferir >= g2j2_f)
                                {
                                    printf("Valor invalido para divisao. Digite novamente: \n");
                                    scanf("%d", &qtd_transferir);
                                }

                                g2j2_f = g2j2_f - qtd_transferir;
                                g1j2_f = g1j2_f + qtd_transferir;
                            }
                        }

                        if (g1j1_f > 5)
                        {
                            g1j1_f = 0;
                            printf("A Gousma 1 do Jogador 1 foi destruida!\n");
                        }
                        if (g2j1_f > 5)
                        {
                            g2j1_f = 0;
                            printf("A Gousma 2 do Jogador 1 foi destruida!\n");
                        }
                        if (g1j2_f > 5)
                        {
                            g1j2_f = 0;
                            printf("A Gousma 1 do Jogador 2 foi destruida!\n");
                        }
                        if (g2j2_f > 5)
                        {
                            g2j2_f = 0;
                            printf("A Gousma 2 do Jogador 2 foi destruida!\n");
                        }

                        if (g1j1_f == 0 && g2j1_f == 0)
                        {
                            printf("\nJogador 2 venceu!\n");
                            fim_partida = 1;
                        }
                    }
                }

                printf("\nDigite 1 para jogar Gousmas War novamente ou 2 para voltar ao menu: ");
                scanf("%d", &jogar_gousma_novamente);

                if (jogar_gousma_novamente != 1)
                {
                    jogar_gousma_novamente = 0;
                }
            }
        }

        else if (escolha_menu == 4)
        {
            printf("\nObrigado por jogar! Ate logo!\n");
        }

        else
        {
            printf("\nOpcao invalida.\n");
        }
    }

    return 0;
}
