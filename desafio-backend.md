# Desafio de Programação Back-End

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

## Desafio 1: Adicione uma dependência em um projeto Phoenix

> Dificuldade: fácil

Adicione uma dependência nova a um projeto `Phoenix` criado com `mix phx.new <options>`. Escolha uma biblioteca popular no ecossistema `Elixir`, a instale e a integre no projeto, realizando as configurações necessárias. Descreva como foi o processo de instalação dessa nova dependência e crie exemplos de uso dela no projeto, demonstrando sua funcionalidade básica.

## Desafio 2: Execução de tarefa assíncrona

> Dificuldade: fácil

Crie uma tarefa que tenha um tempo de processamento longo, de forma assíncrona. Implemente uma `Task` que calcula a soma de uma lista de números enorme. A tarefa deve ser executada em segund plano e prover resultado uma vez que for completa.

## Desafio 3: Crie uma tabela nova no banco

> Dificuldade: fácil

Crie uma nova migration em um projeto `Phoenix` que adiciona uma nova tabela num banco de dados. A tabela deve possuir colunas para guardar informações de pessoas usuárias como `nome`, `nome social`, `email` e `idade`.

## Desafio 4: Seed de dados

> Dificuldade: fácil

Implemente um script que popula o banco de dados com valores iniciais.

## Desafio 5: Modifique uma tabela existente

> Dificuldade: intermediária

Modifique a estrutura de uma tabela do banco de daos num projeto `Phoenix`, usando migrations para adicionar uma nova coluna. A coluna deve guardar um valor booleano indicando se uma pessoa usuária confirmou ou não seu email. Atualiza o schema para refletir as mudanças!

## Desafio 6: API scraping com GenServer

> Dificuldade: intermediária

Implemente um [GenServer]() em `Elixir` que busca dados de uma API pública da sua escolha. O `GenServer` deve ser responsável por realizar as requisições HTTP para os endpoints da API escolhida e caso seja válido, lidar com o rate limit (limite de chamadas) de cada API. A FreeCodeCamp possui uma lista de APIs públicas que podem ser usadas: https://www.freecodecamp.org/news/public-apis-for-developers/
