o comando df por padrão mostra todos os sistemas de arquivos, e o quanto ocupam na memória, incluindo os virtuais.

 ![[Pasted image 20250714184017.png]]

podemos observar que existem alguns arquivos, mas e quando não se sabe do que estamos lidando? simples, adicionando o parâmetro "T" podemos ver também o tipo de sistema de arquivo.

![[Pasted image 20250714184301.png]]

a saída nos mostra que existem muitos arquivos temporários, para retirá-los da exibição, podemos utilizar o parâmetro "-x".

![[Pasted image 20250714184510.png]]

 caso tivéssemos alguma coisa via rede e quiséssemos apenas os arquivos locais, também poderíamos ter utilizado o parâmetro "-l".

## Verificando porcentagem de uso

um parâmetro interessante para utilizarmos também, é o "-i" 