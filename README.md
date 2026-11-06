

https://github.com/user-attachments/assets/0d511267-acd2-4bcf-8ba5-0ac60776c442

<div align="center">
  <img src="https://raw.githubusercontent.com/PokeAPI/sprites/master/sprites/pokemon/versions/generation-v/black-white/animated/6.gif" alt="Charizard" width="80">
  <img src="https://raw.githubusercontent.com/PokeAPI/sprites/master/sprites/items/master-ball.png" alt="Pokeball" width="40" style="margin: 0 30px;">
  <img src="https://raw.githubusercontent.com/PokeAPI/sprites/master/sprites/pokemon/versions/generation-v/black-white/animated/9.gif" alt="Blastoise" width="80">

  <h1>Simulador de Batalhas Pokémon ⚔️</h1>
  
  <p>
    <strong>Trabalho Prático 2 (TP2) • INF 112 • UFV</strong><br>
    <em>Disciplina de Programação Orientada a Objetos</em>
  </p>

  <p>
    <img src="https://img.shields.io/badge/Linguagem-C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white" alt="C++">
    <img src="https://img.shields.io/badge/Institui%C3%A7%C3%A3o-UFV-red?style=for-the-badge" alt="UFV">
    <img src="https://img.shields.io/badge/Projeto-Individual-blue?style=for-the-badge" alt="Individual">
  </p>
</div>

<br>

> **Desenvolvido por:** Paulo Vitor Martins Silva  
> **Professor:** Julio Reis  
> **Estilo:** Pokémon FireRed / LeafGreen (GBA)

<br>
<div align="center">
  <img src="https://raw.githubusercontent.com/PokeAPI/sprites/master/sprites/items/miracle-seed.png" width="30"><img src="https://raw.githubusercontent.com/PokeAPI/sprites/master/sprites/items/miracle-seed.png" width="30"><img src="https://raw.githubusercontent.com/PokeAPI/sprites/master/sprites/items/miracle-seed.png" width="30"><img src="https://raw.githubusercontent.com/PokeAPI/sprites/master/sprites/items/miracle-seed.png" width="30"><img src="https://raw.githubusercontent.com/PokeAPI/sprites/master/sprites/items/miracle-seed.png" width="30"><img src="https://raw.githubusercontent.com/PokeAPI/sprites/master/sprites/items/miracle-seed.png" width="30"><img src="https://raw.githubusercontent.com/PokeAPI/sprites/master/sprites/items/miracle-seed.png" width="30"><img src="https://raw.githubusercontent.com/PokeAPI/sprites/master/sprites/items/miracle-seed.png" width="30"><img src="https://raw.githubusercontent.com/PokeAPI/sprites/master/sprites/items/miracle-seed.png" width="30"><img src="https://raw.githubusercontent.com/PokeAPI/sprites/master/sprites/items/miracle-seed.png" width="30"><img src="https://raw.githubusercontent.com/PokeAPI/sprites/master/sprites/items/miracle-seed.png" width="30"><img src="https://raw.githubusercontent.com/PokeAPI/sprites/master/sprites/items/miracle-seed.png" width="30">
</div>
<br>

## 📖 Sobre o Projeto

Este projeto é um simulador de batalhas Pokémon focado na aplicação prática de **Programação Orientada a Objetos (POO)** e **Tipos Abstratos de Dados (TADs)**. 

A interface gráfica do simulador foi fornecida previamente pelo professor Julio Reis. O núcleo do trabalho consistiu em projetar, implementar e integrar o *backend* do jogo (a lógica de negócios). Isso exigiu a construção de um ecossistema de classes robusto para gerenciar Pokémons, seus atributos, bibliotecas de tipos, cálculos de dano e a mecânica de golpes, fazendo com que a interface gráfica se comunicasse perfeitamente com os objetos instanciados. Também tomei a liberdade de alterar a interface fornecida pelo professor, adicionei um script que baixa os assets dos pokemons na ordem e sequencia que os implementei no arquivo de texto, o código original contava com 11 pokemons, o meu atual contém 90 pokemons, todos os tipos: Planta, Água, Fogo e Elétrico da primeira geração tão amada!

<br>
<div align="center">
  <img src="https://i.makeagif.com/media/9-03-2015/Os-47w.gif" alt="Tela de Início Pokémon FireRed" width="400" style="border-radius: 8px;">
</div>
<br>

<div align="center">
  <img src="https://raw.githubusercontent.com/PokeAPI/sprites/master/sprites/items/miracle-seed.png" width="30"><img src="https://raw.githubusercontent.com/PokeAPI/sprites/master/sprites/items/miracle-seed.png" width="30"><img src="https://raw.githubusercontent.com/PokeAPI/sprites/master/sprites/items/miracle-seed.png" width="30"><img src="https://raw.githubusercontent.com/PokeAPI/sprites/master/sprites/items/miracle-seed.png" width="30"><img src="https://raw.githubusercontent.com/PokeAPI/sprites/master/sprites/items/miracle-seed.png" width="30"><img src="https://raw.githubusercontent.com/PokeAPI/sprites/master/sprites/items/miracle-seed.png" width="30"><img src="https://raw.githubusercontent.com/PokeAPI/sprites/master/sprites/items/miracle-seed.png" width="30"><img src="https://raw.githubusercontent.com/PokeAPI/sprites/master/sprites/items/miracle-seed.png" width="30"><img src="https://raw.githubusercontent.com/PokeAPI/sprites/master/sprites/items/miracle-seed.png" width="30"><img src="https://raw.githubusercontent.com/PokeAPI/sprites/master/sprites/items/miracle-seed.png" width="30"><img src="https://raw.githubusercontent.com/PokeAPI/sprites/master/sprites/items/miracle-seed.png" width="30"><img src="https://raw.githubusercontent.com/PokeAPI/sprites/master/sprites/items/miracle-seed.png" width="30">
</div>
<br>

## 🧬 Conceitos Aplicados

O simulador foi arquitetado utilizando os pilares da Orientação a Objetos. Abaixo estão as mecânicas implementadas no código:

<table>
  <tr>
    <td align="center">
      <img src="https://raw.githubusercontent.com/PokeAPI/sprites/master/sprites/items/exp-share.png" width="40"><br>
      <b>Herança</b>
    </td>
    <td>Reutilização de código através de classes base (ex: <code>PokemonBase</code>, <code>Golpe</code>) estendidas para tipos específicos, permitindo especialização sem duplicação de lógica.</td>
  </tr>
  <tr>
    <td align="center">
      <img src="https://raw.githubusercontent.com/PokeAPI/sprites/master/sprites/items/choice-specs.png" width="40"><br>
      <b>Polimorfismo</b>
    </td>
    <td>Uso de métodos virtuais e sobrescrita para que diferentes tipos de ataques ou Pokémons respondam de maneira única à mesma chamada de função (ex: cálculo de dano modificado por tipo).</td>
  </tr>
  <tr>
    <td align="center">
      <img src="https://github.com/PokeAPI/sprites/blob/master/sprites/items/gen3/town-map.png?raw=true" width="40"><br>
      <b>Interfaces</b>
    </td>
    <td>Contratos bem definidos estabelecendo como a interface gráfica do professor deve acessar os dados das bibliotecas e dos objetos no backend.</td>
  </tr>
  <tr>
    <td align="center">
      <img src="https://github.com/PokeAPI/sprites/blob/master/sprites/items/discount-coupon.png?raw=true"><br>
      <b>TADs</b>
    </td>
    <td>Encapsulamento pesado. Atributos como HP, Status, Tipos e Golpes são protegidos, acessados e modificados apenas através de métodos seguros.</td>
  </tr>
</table>

<br>
<div align="center">
  <img src="https://raw.githubusercontent.com/PokeAPI/sprites/master/sprites/items/miracle-seed.png" width="30"><img src="https://raw.githubusercontent.com/PokeAPI/sprites/master/sprites/items/miracle-seed.png" width="30"><img src="https://raw.githubusercontent.com/PokeAPI/sprites/master/sprites/items/miracle-seed.png" width="30"><img src="https://raw.githubusercontent.com/PokeAPI/sprites/master/sprites/items/miracle-seed.png" width="30"><img src="https://raw.githubusercontent.com/PokeAPI/sprites/master/sprites/items/miracle-seed.png" width="30"><img src="https://raw.githubusercontent.com/PokeAPI/sprites/master/sprites/items/miracle-seed.png" width="30"><img src="https://raw.githubusercontent.com/PokeAPI/sprites/master/sprites/items/miracle-seed.png" width="30"><img src="https://raw.githubusercontent.com/PokeAPI/sprites/master/sprites/items/miracle-seed.png" width="30"><img src="https://raw.githubusercontent.com/PokeAPI/sprites/master/sprites/items/miracle-seed.png" width="30"><img src="https://raw.githubusercontent.com/PokeAPI/sprites/master/sprites/items/miracle-seed.png" width="30"><img src="https://raw.githubusercontent.com/PokeAPI/sprites/master/sprites/items/miracle-seed.png" width="30"><img src="https://raw.githubusercontent.com/PokeAPI/sprites/master/sprites/items/miracle-seed.png" width="30">
</div>
<br>

## 🖼️ Galeria

### 🎬 Vídeo de Demonstração
<!-- Substitua o link da imagem e do href pelo seu vídeo ou GIF de gameplay -->
<div align="center">
  <a href="#">
    <img src="https://github.com/PauloVitorMartins/Pokemon-POO-INF-112-UFV/blob/main/data/videos/recording_2026-11-06_18.12.51.mp4" alt="Vídeo Gameplay" style="border-radius: 8px;">
  </a>
</div>

<br>

### 📸 Imagens do Jogo
<!-- Você pode adicionar quantas imagens quiser lado a lado ou em sequência substituindo os links abaixo -->
<div align="center">
  <img src="https://via.placeholder.com/400x250/222222/ffffff?text=Screenshot+1" alt="Print 1" width="400" style="margin: 5px; border-radius: 5px;">
  <img src="https://via.placeholder.com/400x250/222222/ffffff?text=Screenshot+2" alt="Print 2" width="400" style="margin: 5px; border-radius: 5px;">
  <img src="https://via.placeholder.com/400x250/222222/ffffff?text=Screenshot+3" alt="Print 3" width="400" style="margin: 5px; border-radius: 5px;">
  <img src="https://via.placeholder.com/400x250/222222/ffffff?text=Screenshot+4" alt="Print 4" width="400" style="margin: 5px; border-radius: 5px;">
</div>

<br>
<div align="center">
  <img src="https://raw.githubusercontent.com/PokeAPI/sprites/master/sprites/items/miracle-seed.png" width="30"><img src="https://raw.githubusercontent.com/PokeAPI/sprites/master/sprites/items/miracle-seed.png" width="30"><img src="https://raw.githubusercontent.com/PokeAPI/sprites/master/sprites/items/miracle-seed.png" width="30"><img src="https://raw.githubusercontent.com/PokeAPI/sprites/master/sprites/items/miracle-seed.png" width="30"><img src="https://raw.githubusercontent.com/PokeAPI/sprites/master/sprites/items/miracle-seed.png" width="30"><img src="https://raw.githubusercontent.com/PokeAPI/sprites/master/sprites/items/miracle-seed.png" width="30"><img src="https://raw.githubusercontent.com/PokeAPI/sprites/master/sprites/items/miracle-seed.png" width="30"><img src="https://raw.githubusercontent.com/PokeAPI/sprites/master/sprites/items/miracle-seed.png" width="30"><img src="https://raw.githubusercontent.com/PokeAPI/sprites/master/sprites/items/miracle-seed.png" width="30"><img src="https://raw.githubusercontent.com/PokeAPI/sprites/master/sprites/items/miracle-seed.png" width="30"><img src="https://raw.githubusercontent.com/PokeAPI/sprites/master/sprites/items/miracle-seed.png" width="30"><img src="https://raw.githubusercontent.com/PokeAPI/sprites/master/sprites/items/miracle-seed.png" width="30">
</div>
<br>

## 🛠️ Pré-requisitos e Dependências

Para garantir que o jogo compila corretamente (especialmente a interface gráfica construída em **Raylib**), certifique-se de ter as ferramentas básicas de compilação C++ instaladas no seu sistema.

**Para utilizadores Linux (Ubuntu/Debian/Mint):**
Se for a primeira vez a rodar o projeto ou der algum erro de dependência gráfica, execute o comando abaixo no terminal para instalar o compilador e as bibliotecas essenciais:

```bash
sudo apt update
sudo apt install build-essential git make g++ libasound2-dev libx11-dev libxrandr-dev libxi-dev libgl1-mesa-dev libglu1-mesa-dev libxcursor-dev libxinerama-dev libwayland-dev libxkbcommon-dev

```

## 🚀 Como Clonar, Compilar e Rodar

O projeto utiliza `Make` para automatizar o processo de compilação, garantindo que todas as dependências e classes sejam linkadas corretamente junto à interface gráfica.

Abra o seu terminal e execute exatamente o bloco abaixo:

```bash
git clone https://github.com/PauloVitorMartins/Pokemon-POO---INF-112-UFV.git
 cd ./Pokemon-POO---INF-112-UFV/
make run
