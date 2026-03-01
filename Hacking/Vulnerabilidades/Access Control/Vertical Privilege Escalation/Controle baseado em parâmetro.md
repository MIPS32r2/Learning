Algumas aplicações determinam o nível de acesso do usuário no login e cometem o erro de deixar essa informação controlável pelo usuário.

algumas possibilidades são:

- um campo escondido
- um cookie
- um parâmetro de consulta

Usando de um exemplo de um lab do PortSwigger, vemos que a conta que nos foi fornecida não tem nenhum tipo de privilégio administrativo.

![[Pasted image 20260228032557.png]]

Quando analisamos a parte de armazenamento do site, podemos observar que o cookie setado no perfil do usuário delimita o nível de permissão de admin.

![[Pasted image 20260228034713.png]]

