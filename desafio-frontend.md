# Desafio de Programação Front-End

Boas vindas ao PEA Pescarte e agradecemos seu interesse no projeto! Somos uma organização com foco na mitigação exigida pelo licenciamento ambiental federal, conduzido pelo IBAMA e pela Petrobras.
Nossa principal finalidade é a criação de uma rede social regional integrada por pescadores artesanais e por seus familiares, buscando, por meio de processos educativos, promover, fortalecer e aperfeiçoar a sua organização comunitária e a sua qualificação profissional, bem como o seu envolvimento na construção participativa e na implementação de projetos de geração de trabalho e renda.

## Sobre este documento

Esse desafio é separado em etapas! Quanto mais etapas forem concluídas com êxito, mais notoriedade você receberá! Atente-se para as avaliações abaixo:

### Avaliação
Seu desafio deverá ser disponibilizado por meio de um repositório Git (podendo este ser hosteado da forma que for mais conveniente a você, por exemplo usando uma plataforma como GitHub ou GitLab). 
A única restrição é que o repositório deve ser acessível à equipe do Pescarte. Como o PEA Pescarte é open-source, recomendamos que seu proheto seja público!

#### Critérios
Uma vez que ele seja disponibilizado a nós, a avaliação de seu código será feita de acordo com os seguintes critérios, em ordem aproximada de importância:

##### Ausência de bugs
Seu código deve funcionar corretamente, atendendo a todos os requisitos da especificação representada por este documento.

##### Legibilidade e Formatação
Lembre-se que um trecho de código em geral será lido muito mais vezes do que escrito. Escreva seu código pensando em quem for lê-lo. Busque minimizar
dificuldades de leitura; Use a indentação a seu favor; Siga boas práticas de formatação de código da linguagem `Elixir`.

##### Clareza
Seu código deve deixar a sua intenção clara para o leitor. Tanto quanto seja plausível, deve ser possível entender o que o código faz apenas lendo ele.
Explicações usando comentários deveriam ser redundantes.

##### Desacoplamento
Seu código não deve criar dependências desnecessárias entre módulos.
Ao alterar uma parte do código, não deveria ser necessário alterar partes sem
relação lógica com a parte alterada.

##### Extensibilidade
Embora este desafio seja apenas teórico, busque considerar o código que você
desenvolverá como se ele fosse ser apenas uma parte de uma solução maior. Pense
no esforço necessário para realizar adições ao seu código e busque
minimizá-lo.

##### Manutenibilidade
Escreva seu código como se ele fosse ser mantido por muito tempo após você
criá-lo, por várias pessoas com níveis de experiência variados. Pense no
esforço necessário para alterar seu código e busque minimizá-lo. Se eu quiser mudar apenas um aspecto do código, precisarei mudar quantas partes dele?

##### Adicionais

- Testes unitários e de integração
- Validações e erros bem estruturados


## Desafio 1: Crie uma LiveView que renderiza diferentes tipos de botões

> Dificuldade: fácil

Crie um template `Phoenix` com `Live View` que renderiza uma lista de botões com estilos diferentes! Quando um botão for clicado, um alerta no browser deve ser renderizado!

## Desafio 2: Validações dinâmicas de formulário

> Dificuldade: intermediária

Crie um template `Phoenix` com `Live View` que renderiza um formulário com diversos tipos de campos de entrada (`inputs`). Implemente validações dinâmicas nesse formilário para validar as entradas de uma pessoa usuária enquanto ela digita.

## Desafio 3: Implemente um componente a partir do Design System do projeto

> Dificuldade: intermediária

### Passo 1

Vá para a [páginas de issues](https://github.com/peapescarte/pescarte-plataforma/issues) e escolha uma tarefa de componente a ser implementado! Cada componente possui sua própria peculiariedade e descrição. Lembre-se de respeitar o [Design System](https://www.figma.com/file/PhkO37jz3ofCHwc1pHtPyz/PESCARTE?node-id=0%3A1) do projeto e que o [Figma do projeto](https://www.figma.com/file/PhkO37jz3ofCHwc1pHtPyz/PESCARTE?type=design&node-id=0%3A1&t=ub2EUBgcoRSbDo2I-1) sempre está acessível!

Após escolher qual `issue` será desenvolvida, comente na mesma atestando que a implementação da mesma será iniciada. Dessa forma, a [Zoey](https://github.com/zoedsoupe) irá assinalar a `issue` para seu usuário.

### Passo 2

Com a tarefa escolhida, clone o [repositório do projeto](https://github.com/peapescarte/pescarte-plataforma) e crie uma nova branch a partir da `main`, com o seguinte padrão de nome: `<usuario-github>/<titulo-tarefa>`.

Por exemplo:
- `usuario-github`: zoedsoupe
- `titulo-tarefa`: componente uplaod

Resultando no nome: `zoedsoupe/cria-componente-upload`.

Com isso feito, bom desenvolvimento! Esperamos que se divirta nessa jornada!

### Passo 3

Ao finalizar seu desenvolvido ou caso queria feedback durante o desenolvimento, pasta [criar uma Pull Request](https://docs.github.com/pt/pull-requests/collaborating-with-pull-requests/proposing-changes-to-your-work-with-pull-requests/creating-a-pull-request) no repositório do projeto! Assim que possíve a [Zoey](https://github.com/zoedsoupe) irá revisar e dará um retorno!

Sua PR sendo aprovada, o desafio estará concluído!

## Desafio 4: Implemente uma tela a partir do layout do projeto

> Dificuldade: avançada

### Passo 1

Vá para a [páginas de issues](https://github.com/peapescarte/pescarte-plataforma/issues) e escolha uma tarefa de desenvolvimento de tela a ser implementado! Cada tela possui sua própria peculiariedade e descrição. Lembre-se de respeitar o [Design System](https://www.figma.com/file/PhkO37jz3ofCHwc1pHtPyz/PESCARTE?node-id=0%3A1) do projeto e que o [Figma do projeto](https://www.figma.com/file/PhkO37jz3ofCHwc1pHtPyz/PESCARTE?type=design&node-id=0%3A1&t=ub2EUBgcoRSbDo2I-1) sempre está acessível!

Após escolher qual `issue` será desenvolvida, comente na mesma atestando que a implementação da mesma será iniciada. Dessa forma, a [Zoey](https://github.com/zoedsoupe) irá assinalar a `issue` para seu usuário.

### Passo 2

Com a tarefa escolhida, clone o [repositório do projeto](https://github.com/peapescarte/pescarte-plataforma) e crie uma nova branch a partir da `main`, com o seguinte padrão de nome: `<usuario-github>/<titulo-tarefa>`.

Por exemplo:
- `usuario-github`: zoedsoupe
- `titulo-tarefa`: tela de listagem de relatórios

Resultando no nome: `zoedsoupe/implementa-tela-listagem-relatorios`.

Com isso feito, bom desenvolvimento! Esperamos que se divirta nessa jornada!

### Passo 3

Ao finalizar seu desenvolvido ou caso queria feedback durante o desenolvimento, pasta [criar uma Pull Request](https://docs.github.com/pt/pull-requests/collaborating-with-pull-requests/proposing-changes-to-your-work-with-pull-requests/creating-a-pull-request) no repositório do projeto! Assim que possíve a [Zoey](https://github.com/zoedsoupe) irá revisar e dará um retorno!

Sua PR sendo aprovada, o desafio estará concluído!
