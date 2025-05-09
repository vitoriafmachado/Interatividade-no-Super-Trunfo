# 🌍 Super Trunfo: Países - Nível Intermediário

<details>
<summary><strong>Sobre o projeto</strong></summary>

Este projeto em linguagem C simula um jogo Super Trunfo comparando cartas de países. Aqui você escolhe qual atributo comparar entre dois países, e o código diz quem venceu com base em regras específicas.

</details>



## Créditos

Desafio proposto pelo **professor Sergio Cardoso**,  
mestre em Ciência da Computação e professor na faculdade **Estácio**.  
Agradecemos ao professor pela excelente orientação e pelos desafios práticos que estimulam a aprendizagem aplicada!



## Como Funciona

1. Duas cartas (países) são pré-cadastradas com atributos:
   - Nome
   - População
   - Área
   - PIB
   - Pontos turísticos
   - Densidade demográfica

2. O jogador escolhe um atributo no menu interativo.

3. O programa compara os valores desse atributo nas duas cartas.

4. O resultado (quem venceu ou se empatou) é exibido no terminal.

---

## Lógica de Jogo

<details>
<summary><strong>Atributos disponíveis</strong></summary>

- População (int): vence quem tiver mais habitantes.
- Área (float): vence quem tiver maior território.
- PIB (float): vence quem tiver maior Produto Interno Bruto.
- Pontos turísticos (int): vence quem tiver mais pontos turísticos.
- Densidade demográfica (float): vence quem tiver MENOR densidade.

</details>

<details>
<summary><strong>Regras de Comparação</strong></summary>

- Para todos os atributos, vence quem tiver o maior valor.
- EXCEÇÃO: para densidade demográfica, vence o menor valor.
- Em caso de valores iguais, o resultado é "Empate!".

</details>

<details>
<summary><strong>Estruturas utilizadas</strong></summary>

- `struct`: para representar a carta de país.
- `switch`: para o menu interativo.
- `if-else`: para comparar os atributos.
- `default`: no switch, trata opções inválidas.

</details>

---

## Exemplo de Cartas

| País   | População | Área (km²) | PIB (tri) | Pontos Turísticos | Densidade |
|--------|-----------|------------|-----------|--------------------|------------|
| Brasil | 213M      | 8.5M       | 1.44      | 10                 | 25         |
| Japão  | 126M      | 377K       | 5.08      | 20                 | 333.5      |

---

## Execução

1. Compile o código:

```bash
gcc super_trunfo_interativo.c -o super_trunfo


