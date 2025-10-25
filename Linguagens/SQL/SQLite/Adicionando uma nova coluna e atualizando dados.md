
vamos começar alterando a tabela utilizando a declaração ALTER TABLE

	ALTER TABLE users ADD TABLE email TEXT;

no comando acima alteramos a tabela *users* adicionando uma tabela chamada *email* e setando o tipo como *TEXT*.

agora vamos atualizar os dados dentro da tabela, adicionando dados a coluna.

	UPDATE users SET email = 'alice@example.com WHERE id = 1';

a cláusula *WHERE* é usada em alguns cenários:

- Filtrar dados
- Modificar dados
- receber dados com critérios específicos