# Final Fantasy Text RPG Game

Um RPG em modo texto desenvolvido em C++, inspirado na série *Final Fantasy*. O jogador cria um personagem, explora uma floresta, enfrenta inimigos em batalhas por turnos e pode descansar em uma estalagem para recuperar suas forças.

## 📖 Sobre o projeto

Este é um jogo de console simples que utiliza conceitos de **Programação Orientada a Objetos** (herança e polimorfismo), onde inimigos como `Goblin` e `Orc` herdam de uma classe base `Personagem`, permitindo que o mesmo sistema de batalha seja reutilizado tanto para o jogador quanto para os inimigos.

## 🎮 Funcionalidades

- **Criação de personagem**: o jogador informa seu nome no início da aventura.
- **Menu principal** com as opções:
  1. Ver status do personagem
  2. Explorar a floresta
  3. Descansar na estalagem
  4. Sair do jogo
- **Sistema de batalha por turnos**: o jogador pode atacar ou fugir a cada rodada.
- **Inimigos**: ao explorar a floresta, o jogador enfrenta um `Goblin` e, se vencer, um `Orc` mais forte em seguida.
- **Sistema de status**: exibição de atributos do personagem e dos inimigos durante o combate.
- **Descanso**: permite recuperar vida (ou outros atributos) na estalagem.

## 🗂️ Estrutura do projeto

```
.
├── main.cpp          # Ponto de entrada do jogo, menu e lógica de batalha
├── personagem.hpp     # Classe base Personagem (atributos e ações comuns)
├── goblin.hpp          # Classe Goblin (herda de Personagem)
├── orc.hpp             # Classe Orc (herda de Personagem)
└── README.md
```

## 🧙 Classe `Personagem`

A classe base `Personagem` define os atributos e comportamentos comuns a jogador e inimigos:

```cpp
Personagem(string nome, int hp, int mp,
    int ataque, int defesa,
    int nivel, int xp, int ouro)
```

| Atributo | Descrição |
|---|---|
| `nome` | Nome do personagem |
| `hp` | Pontos de vida |
| `mp` | Pontos de mana |
| `ataque` | Poder de ataque |
| `defesa` | Poder de defesa |
| `nivel` | Nível do personagem |
| `xp` | Experiência acumulada |
| `ouro` | Quantidade de ouro |

E disponibiliza os seguintes métodos:

| Método | Descrição |
|---|---|
| `CalcularDano(const Personagem&) const` | Calcula o dano causado a um inimigo (`ataque - defesa`, com valor mínimo de 1) |
| `ReceberDano(int)` | Reduz o `hp` do personagem em função do dano recebido (nunca abaixo de 0) |
| `EstadoVivo() const` | Retorna `true` se `hp > 0` |
| `MostrarStatus() const` | Exibe nome, HP, MP, ataque, defesa, nível, XP e ouro |
| `Descansar()` | Restaura HP para 100 e MP para 8, simulando uma estadia na hospedaria |
| `Atacar(Personagem&)` | Calcula e aplica dano a um inimigo, exibindo mensagens de ataque e derrota |

## 👹 Inimigos

As classes `Goblin` e `Orc` herdam de `Personagem` e apenas definem atributos iniciais diferentes através do construtor:

| Atributo | Goblin | Orc |
|---|---|---|
| HP | 10 | 100 |
| MP | 0 | 20 |
| Ataque | 20 | 30 |
| Defesa | 5 | 40 |
| Nível | 1 | 2 |
| XP | 6 | 10 |
| Ouro | 4 | 45 |

O `Orc` é significativamente mais forte que o `Goblin`, funcionando como o segundo desafio ao explorar a floresta.

## ⚔️ Como funciona a batalha

1. O jogador escolhe entre **Atacar** ou **Fugir**.
2. Se atacar, o inimigo revida (caso ainda esteja vivo).
3. A batalha se repete até que um dos dois morra ou o jogador fuja.
4. Se o jogador vencer o Goblin na floresta, um Orc aparece em seguida como desafio extra.

## 🛠️ Compilação e execução

Compile os arquivos usando o `g++` (ou outro compilador C++ de sua preferência):

```bash
g++ -o rpg_game main.cpp -std=c++17
```

Execute o jogo:

```bash
./rpg_game
```

## ✅ Requisitos

- Compilador compatível com C++11 ou superior (recomendado C++17)
- Terminal/console para interação via texto

## 🚀 Possíveis melhorias futuras

- Salvar/carregar progresso do jogador
- Adicionar mais inimigos e biomas além da floresta
- Sistema de inventário e itens
- Loja na estalagem para comprar equipamentos
- Validação de entrada mais robusta (evitar travamentos com `cin`)

## 📄 Licença

Este projeto é de uso livre para fins de estudo e aprendizado.