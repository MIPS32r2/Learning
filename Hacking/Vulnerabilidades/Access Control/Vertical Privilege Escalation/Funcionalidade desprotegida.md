Alguns tipos de vulns são geradas pelo próprio descuido de quem está implementando as regras de autenticação.

se uma funcionalidade que só deveria estar disponível para pessoas autorizadas é validada no front, podemos obter acesso  mesmo não tendo nenhum tipo de permissão.

Usando do exemplo tirado de um lab do PortSwigger, vemos que a validação é completamente vagabunda.

![[Pasted image 20260228030501_1.png]]

Dessa forma, podemos simplesmente pegar o path do painel administrativo e elevar nosso privilégio.

![[Pasted image 20260228030703.png]]