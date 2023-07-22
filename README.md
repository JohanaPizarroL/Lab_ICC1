# Lab_ICC1


# Lista 2 - Calendário (Adicionais)
### Dicas de implementação
Para imprimir o cabeçalho do calendário você pode usar algo igual ou que produza o mesmo resultado que

![image](https://github.com/JohanaPizarroL/Lab_ICC1/assets/102596180/0c3e56f2-b194-482d-9ed9-86a0930ee973)

Para imprimir cada número use

![image](https://github.com/JohanaPizarroL/Lab_ICC1/assets/102596180/7cb2f237-2260-47de-87a4-b3099e542852)

Aqui **dia** é uma variável que contém o dia do mês que está sendo impresso.

Nota: Não se preocupe em usar exatamente o código que está exemplificado acima. O importante é que seja imprimido a mesma coisa. Nomes de variáveis e máscaras de formatação podem mudar. Dito isso, também pode só copiar e colar do exemplo.

### Desafio adicional
**Nota:** Desafios adicionais são apenas aos interessados em ir um pouco além do exercício pedido. Eles não devem ser entregues em lugar algum e também não valem pontos adicionais, é realmente algo "faça se te interessar". Dito isso, espero que possam se divertir com eles!

Implemente um programa que receba uma data qualquer depois de cristo e imprima na tela o calendário daquela data. Não se esqueça de levar em conta anos bissextos! Entretanto, não é necessário considerar as mudanças históricas dos calendários.

A aplicação original **cal** é capaz de destacar o dia selecionado. Tente implementar isso também utilizando **ANSI escape** codes. Com eles, podemos imprimir **"\033[0;30m"** para deixar a letra preta. Em seguida imprimimos **"\033[47m"** para tornar o fundo branco. Depois disso imprimimos o número do dia selecionado. Por fim imprimimos **"\033[0m"** para voltarmos ao modo normal das letras e fundo. Aí dá pra apertar um pouco mais as coisas e o resultado é algo como


![image](https://github.com/JohanaPizarroL/Lab_ICC1/assets/102596180/11372813-ed67-4b4e-a5bb-aaa04aaf4514)

Além disso, tente usar a **time.h** para calcular o dia atual e assim não precisar ler da entrada padrão o dia a ser mostrado. Depois disso, teremos uma aplicação praticamente com as mesmas capacidades de um importante utilitário do Linux!

