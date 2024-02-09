# Desafio de Programação Back-End

Boas vindas ao PEA Pescarte e agradecemos seu interesse no projeto! Somos uma organização com foco na mitigação exigida pelo licenciamento ambiental federal, conduzido pelo IBAMA e pela Petrobras.
Nossa principal finalidade é a criação de uma rede social regional integrada por pescadores artesanais e por seus familiares, buscando, por meio de processos educativos, promover, fortalecer e aperfeiçoar a sua organização comunitária e a sua qualificação profissional, bem como o seu envolvimento na construção participativa e na implementação de projetos de geração de trabalho e renda.

## Descrição do Desafio

### Para Todos os Níveis

**Objetivo**: Implementar funcionalidades no backend do Projeto PESCARTE usando Elixir, o framework web Phoenix, e Absinthe para GraphQL.

### Tarefas por Nível de Experiência

#### Iniciante
- **Tarefa**: Criar um CRUD (Create, Read, Update, Delete) básico para gerenciamento de perfis de usuários.
- **Critérios de Avaliação**: Clareza do código, uso correto dos recursos do Phoenix, e implementação funcional das operações CRUD.

#### Intermediário
- **Tarefa**: Desenvolver uma API GraphQL com Absinthe para listar projetos de geração de trabalho e renda, permitindo filtragem por município.
- **Critérios de Avaliação**: Design da API, eficiência das queries, uso de boas práticas no GraphQL, e documentação da API.

#### Avançado
- **Tarefa**: Implementar um sistema de subscrição em tempo real com GraphQL para notificações de novas postagens em projetos específicos, utilizando Phoenix Channels e Absinthe subscriptions.
- **Critérios de Avaliação**: Funcionalidade em tempo real, robustez do sistema de subscrição, uso eficaz dos Phoenix Channels, e segurança da implementação.

### Cenário Fictício

O Projeto PESCARTE deseja lançar uma nova funcionalidade chamada "Rede de Apoio", onde pescadores podem postar pedidos de ajuda (equipamentos, técnicas de pesca, legislação etc.) e receber suporte da comunidade. Sua missão é desenvolver o backend dessa funcionalidade, considerando os diferentes níveis de experiência.

### Desafios Específicos

- **Iniciante**: Criar modelos e endpoints para postagens e respostas na "Rede de Apoio".
- **Intermediário**: Desenvolver filtros na API GraphQL para buscar postagens por categoria, localização, e popularidade.
- **Avançado**: Implementar um sistema de recomendação que notifica usuários sobre novas postagens que correspondem aos seus interesses, usando subscriptions do Absinthe.

Para atender à solicitação de detalhamento da API e dos schemas dos modelos sem utilizar código Elixir, vamos estruturar a especificação focando em descrições claras das entidades e dos endpoints da API para o cenário da "Rede de Apoio" no Projeto PESCARTE.

## Especificação dos Schemas dos Modelos

### Perfil de Usuário
- **ID**: Identificador único do usuário.
- **Nome**: Nome completo do usuário.
- **Email**: Endereço de email do usuário.
- **Localização**: Localização geográfica do usuário, como município ou região.
- **Função**: Papel do usuário no sistema (pescador, familiar, etc.).

### Postagens
- **ID**: Identificador único da postagem.
- **Título**: Título da postagem.
- **Conteúdo**: Corpo da postagem, detalhando o pedido de ajuda ou informação.
- **Categoria**: Categoria da postagem (equipamentos, técnicas de pesca, legislação, etc.).
- **UsuárioID**: Identificador do usuário que fez a postagem.
- **DataHora**: Data e hora da postagem.

### Respostas
- **ID**: Identificador único da resposta.
- **Conteúdo**: Corpo da resposta.
- **PostagemID**: Identificador da postagem à qual a resposta pertence.
- **UsuárioID**: Identificador do usuário que fez a resposta.
- **DataHora**: Data e hora da resposta.

## Especificação da API GraphQL

### Endpoints

#### Listar Postagens
- **Objetivo**: Recuperar uma lista de postagens, com suporte a filtragem por categoria e localização.
- **Query Parameters**: `categoria`, `localização`.
- **Retorno**: Lista de postagens que correspondem aos critérios de filtragem.

#### Criar Postagem
- **Objetivo**: Permitir que um usuário crie uma nova postagem na "Rede de Apoio".
- **Body Parameters**: `título`, `conteúdo`, `categoria`, `usuárioID`.
- **Retorno**: Detalhes da postagem criada.

#### Responder a uma Postagem
- **Objetivo**: Permitir que usuários respondam a postagens existentes.
- **Body Parameters**: `conteúdo`, `postagemID`, `usuárioID`.
- **Retorno**: Detalhes da resposta criada.

### Subscrições

#### Notificações de Novas Postagens
- **Objetivo**: Notificar usuários em tempo real sobre novas postagens que correspondem aos seus interesses.
- **Parameters**: `categorias de interesse`.
- **Retorno**: Detalhes das novas postagens conforme são criadas.

## Pontos de Critério de Avaliação Gerais

- **Qualidade do Código**: Legibilidade, uso de padrões e boas práticas de desenvolvimento em Elixir/Phoenix.
- **Funcionalidade**: Completa implementação dos requisitos, tratamento de erros, e performance.
- **Testes**: Cobertura de testes unitários e de integração, usando ExUnit.
- **Documentação**: Documentação clara do código, da API, e instruções de uso.
- **Implementação dos Endpoints**: Correção funcional, aderência aos parâmetros e aos retornos esperados.
- **Design da API**: Clareza, facilidade de uso e conformidade com boas práticas de GraphQL.
- **Qualidade dos Schemas**: Estruturação lógica e completa dos dados.
- **Segurança e Autenticação**: Implementação de medidas de segurança para proteção de dados sensíveis e autenticação de usuários.
