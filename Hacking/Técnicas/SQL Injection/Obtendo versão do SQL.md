Em um cenário onde se encontra uma possibilidade de obter dados de uma database, existem algumas maneiras de se enumerar a versão do SQL.

| Microsoft, MySQL | `SELECT @@version`        |
| ---------------- | ------------------------- |
| Oracle           | `SELECT * FROM v$version` |
| PostgreSQL       | `SELECT version()`        |
um exemplo utilizando [[UNION Attack]]:

`' UNION SELECT @@version--`

