# super-trunfo

*** Como usar o programa ***

1 - Ao iniciar o programa, você será solicitado a inserir os dados da primeira carta:

- Primeira letra do estado

- Código da carta (ex: S01, R02)

- Nome da cidade
    ## Dica
    Para cidades com nomes compostos, use:
    "SãoPaulo" (junto)

- População

- Área em km²

- PIB

- Número de pontos turísticos

2 -  Em seguida, repita o processo para a segunda carta

 ### Comparação Avançada

O sistema mostrará um menu dinâmico para seleção do primeiro atributo (1-7)

Escolha um atributo digitando o número correspondente

Em seguida, escolha um segundo atributo diferente (o menu não mostrará o primeiro escolhido, caso ainda sim escolha o mesmo, o programa usara a população como padrão para comparação!)


*** Atributos disponíveis para comparação ***

1. População: Compara o número de habitantes (maior valor vence)

2. Área: Compara a extensão territorial em km² (maior valor vence)

3. PIB: Compara o Produto Interno Bruto (maior valor vence)

4. Pontos Turísticos: Compara quantidade de atrações turísticas (maior valor vence)

5. Densidade Populacional: Compara hab/km² (menor valor vence)

6. PIB per capita: Compara a riqueza por habitante (maior valor vence)

7. Super Poder: Soma de todos os atributos (maior valor vence)


   ### NOVAS FUNCIONALIDADES 

Comparação com Dois Atributos:

Agora você pode selecionar 2 características diferentes para comparar

O sistema mostra quem venceu em cada atributo

Sistema de Pontuação:

Cada vitória em um atributo vale 1 ponto

O vencedor final é decidido pela soma dos pontos

### Menus Inteligentes:

O segundo menu não mostra o atributo já selecionado

Se tentar escolher o mesmo atributo duas vezes, o programa corrige automaticamente

Relatório Detalhado:

Mostra todos os cálculos intermediários

Apresenta uma comparação clara entre as carta

--- Dados da Primeira Carta ---
Estado: S
Código: S01
Cidade: SãoPaulo
População: 12.300.000
Área: 1.521 km²
PIB: R$ 500 bilhões
Pontos Turísticos: 50

--- Dados da Segunda Carta ---
Estado: R
Código: R01
Cidade: RioDeJaneiro
População: 6.748.000
Área: 1.200 km²
PIB: R$ 300 bilhões
Pontos Turísticos: 45

*** COMPARAÇÃO ***

Atributo 1: POPULAÇÃO
SãoPaulo: 12.300.000 vs RioDeJaneiro: 6.748.000 → SãoPaulo vence!

Atributo 2: PONTOS TURÍSTICOS
SãoPaulo: 50 vs RioDeJaneiro: 45 → SãoPaulo vence!

SOMA DOS ATRIBUTOS:
SãoPaulo: 12.300.050
RioDeJaneiro: 6.748.045

RESULTADO FINAL:
SãoPaulo VENCE com 12.300.050 pontos!
