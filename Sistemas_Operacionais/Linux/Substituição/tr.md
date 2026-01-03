 O comando tr assim como o [[sed]] faz substituições, mas não de strings, e sim de caracteres.
se dá o intervalo original, o intervalo de repetição, e ele faz a substituição.

![[Pasted image 20250714131123.png]]

observe que só foi feita a alteração no intervalo definido, como "k,l e m" não correspondem ao intervalo, não sofreram alterações.

é importante destacar que o padrão utilizado pelo comando é o da tabela ASCII, ou seja, caso os valores imputados forem diferentes do intervalo fornecido pela tabela, irá resultar em erro.

![[Pasted image 20250714164416.png]]
