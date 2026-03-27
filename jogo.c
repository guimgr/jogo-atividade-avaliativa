#include <stdio.h>

int main(){

int escolha_menu;
printf("1: Pergunta e Resposta\n");
printf("2: Cobra na Caixa!\n");
printf("3: Gousmas War\n");
printf("4: Sair\n");
printf("Escolha um minijogo: \n");
scanf("%d", &escolha_menu);


//Pergunta e Resposta
if (escolha_menu == 1)
{
int escolha_p_r_1, escolha_p_r_2, escolha_p_r_3, escolha_p_r_4, escolha_p_r_5;
printf("É um jogo de perguntas com quatro alternativas, onde o usuário escolhe uma resposta e o sistema informa se está certa ou errada, mostrando a correta caso haja erro.\n");

//Pergunta 1
printf("Quanto eh a raiz quadrada de 144?\n");

//Alternativas
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
//Pergunta 2
printf("\e[1;1H\e[2J");
printf("Qual o nome do pai da computacao\n");

//Alternativas
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
//Pergunta 3
printf("Qual franquia de jogos em que o nome do protagonista eh link\n");

//Alternativas
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
//Pergunta 4
printf("Quem jogou todos os jogos (a diferenca de um fan pra um famboy)\n");

//Alternativas
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
//Pergunta 5
printf("Qual o maior elo do jogo eletronico Valorant?\n");

//Alternativas
printf("1- A: Bronze\n");
printf("2- B: Radiante\n");
printf("3- C: Prata\n"); 
printf("4- D: Imortal\n");

printf("Escolha uma alternativa: \n");
scanf("%d", &escolha_p_r_5);

if (escolha_p_r_2 == 2) 
{
printf("A resposta esta certa, parabens :) !!!!\n");
}
else
{
printf("A resposta esta incorreta :(\n");
printf("A resposta correta eh 2- B\n");
}


}



    return 0;
}