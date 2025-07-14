o comando du (disk use) mostra a totalização de uso do diretório.

um comparativo interessante para entendermos o funcionamento do comando, é compará-lo ao comando ls. 

quando utilizamos o parâmetro "-l" no ls, vemos a quantidade dos itens listados somados, não o total do diretório.

![[Pasted image 20250714173114.png]]

o resultado nos mostra que o tamanho da listagem é 716, mas será que está certo?
vamos utilizar o du e comparar as saídas.

![[Pasted image 20250714182221.png]]
o que acontece é que como nos sistemas unix-like tudo é um arquivo, o que o ls faz é somar os arquivos que estão sendo listados, ou seja, por mais que tenha um diretório na saída, o que de fato está sendo somado não é o conteúdo, mas sim o arquivo diretório.

## Simplificando a saída

o comando du, por padrão tem sua saída recursiva, e isso acaba por dificultar a visualização. para simplificar, vamos utilizar alguns parâmetros que vão mostrar um resultado mais direto.

![[Pasted image 20250714182352.png]]

o parâmetro "-h" ou "--human-readable", retorna a saída de forma mais legível para nós humanos, agora o "--max-depth=1" limita os níveis de subdiretórios listados, como o valor que passamos foi 1, então ele nos retorna um nível de subdiretório listado. 