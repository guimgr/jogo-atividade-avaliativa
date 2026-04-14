# jogo-atividade-avaliativa
# Projeto 01 - Sistema de Jogos

## Integrantes
- Guilherme Magno
- Gabriel Castro

## Sobre o projeto
Este projeto foi desenvolvido na disciplina de algoritmos com o objetivo de criar um Jogo em C, executado no console, contendo três minijogos acessíveis por um menu principal. A proposta busca aplicar, na prática, conceitos de programação, lógica e resolução de problemas. 

## Objetivos
O projeto tem como foco o desenvolvimento das seguintes competências:

- Resolução de problemas
- Raciocínio lógico e algorítmico
- Trabalho em equipe
- Aplicação prática dos conceitos fundamentais de algoritmos

Além do código-fonte, o projeto também exige um repositório no GitHub com README explicativo e uma apresentação para defesa do sistema desenvolvido.

## Tecnologias utilizadas
- Linguagem C
- Interface via console
- Lógica de programação
- Estruturas condicionais e de repetição
- Manipulação de variáveis e entrada de dados
- Inteligência Artificial para Direcionamento de Ideias e Organização
- 
## Funcionamento geral
Ao iniciar o programa, o usuário visualiza um menu principal com quatro opções:

1. Pergunta e Resposta  
2. Cobra na Caixa!  
3. Gousmas War  
4. Sair  

O sistema permanece em execução até que o usuário escolha a opção de saída. Sempre que um minijogo termina, o jogador pode decidir entre jogar novamente ou voltar ao menu principal. 

## Minijogos

### 1. Pergunta e Resposta
Esse minijogo apresenta perguntas com quatro alternativas, e o jogador deve escolher a resposta correta.

#### Regras
- O jogo possui 5 perguntas fixas
- Cada pergunta possui 4 alternativas
- O sistema informa se a resposta está **correta** ou **incorreta**
- Em caso de erro, o programa mostra a alternativa correta
- Ao final, o jogador pode jogar novamente ou voltar ao menu principal

Esse jogo trabalha principalmente com entrada de dados e condicionais. 

### 2. Cobra na Caixa!
Neste minijogo, dois exploradores estão presos em uma tumba com cinco caixas. Uma caixa contém o botão que abre a porta, e outra contém uma cobra mortal.

#### Regras
- Cada jogador escolhe um nome a partir de uma lista com 7 nomes predefinidos
- O sistema sorteia qual jogador começa
- O botão e a cobra são posicionados aleatoriamente em caixas diferentes
- Cada jogador escolhe uma caixa por turno
- Se encontrar o botão, vence
- Se encontrar a cobra, perde
- Se a caixa estiver vazia, o turno passa para o outro jogador
- Não é permitido abrir uma caixa já escolhida

Ao final da partida, o jogador pode jogar novamente ou voltar ao menu principal. 

### 3. Gousmas War
Gousmas War é um jogo de estratégia em que dois jogadores controlam criaturas chamadas **Gousmas**, cada uma com um valor inteiro chamado **fúria**.

#### Estado inicial
- Cada jogador começa com 2 Gousmas
- Todas começam com fúria = 1
- O jogo acontece em turnos

#### Regras principais
- Quando uma Gousma ataca outra, a Gousma alvo recebe toda a fúria da atacante
- Se uma Gousma ficar com fúria maior que 5, ela é destruída
- Gousmas destruídas não podem atacar nem ser escolhidas como alvo
- O jogador pode usar a ação Dividir para redistribuir fúria entre suas Gousmas
- A divisão deve transferir pelo menos 1 ponto de fúria
- A Gousma doadora não pode ficar zerada
- Uma Gousma destruída pode voltar ao jogo se receber fúria pela ação Dividir
- O jogador perde quando ficar sem Gousmas ativas

Ao final, o sistema oferece a opção de reiniciar a partida ou retornar ao menu principal. 

## Requisitos do projeto
Este projeto segue os requisitos definidos na atividade:

- Desenvolvimento em linguagem C
- Interface via console
- Menu principal com três minijogos
- Opção de reinício ou retorno ao menu ao fim de cada jogo
- Repositório no GitHub com código e README
- Apresentação e defesa do código desenvolvido

Também é necessário validar as entradas do usuário, aceitando apenas valores válidos e impedindo escolhas impossíveis, como selecionar caixas já abertas ou opções fora do intervalo permitido.

## Indexação de trechos com apoio de IA

Durante o desenvolvimento deste projeto, foram utilizadas conversas com ChatGPT como apoio para:
- organização da lógica dos minijogos;
- correção de erros de sintaxe e de estrutura;
- ajuste de validações de entrada;
- refinamento das regras do jogo conforme o enunciado;
- melhoria de trechos específicos do código em C.

### Conversas utilizadas

1. ChatGPT - desenvolvimento e depuração do minijogo Gousmas War
   - Uso principal: estrutura inicial do jogo, lógica de ataque, divisão de fúria, identificação de erros com chaves, validação de entradas e organização do fluxo do turno.
   - Observação: esta conversa foi usada como apoio técnico direto na implementação do Gousmas War.

2. ChatGPT - "Jogo cobra na caixa"
   - Uso principal: apoio na lógica do minijogo Cobra na Caixa.
   - Link:
     https://chatgpt.com/share/69dd9add-5ec4-83e9-9d65-5672eb42682f

3. ChatGPT - "Armazenar escolhas jogo C"
   - Uso principal: apoio na lógica para registrar escolhas do jogador e organizar dados/entradas no jogo em C.
   - Link:
     https://chatgpt.com/share/69dd9df0-b208-83e9-9199-24f80aff91e1

### Partes do projeto impactadas pelo uso de IA

- Menu principal:
  - apoio na organização da estrutura geral do programa e navegação entre minijogos.

- Minijogo Cobra na Caixa:
  - apoio na lógica das escolhas, controle das caixas e fluxo da rodada.

- Minijogo Gousmas War:
  - apoio na implementação da lógica de ataque;
  - apoio na lógica de dividir fúria;
  - apoio na correção de erros de sintaxe e chaves;
  - apoio na validação de escolhas do jogador;
  - apoio na organização do loop principal do jogo.

### Observação de autoria

As conversas com IA foram utilizadas como apoio ao desenvolvimento, depuração e organização da lógica do código. A implementação final, adaptação às regras do projeto e integração entre os minijogos foram realizadas pelos autores do trabalho
