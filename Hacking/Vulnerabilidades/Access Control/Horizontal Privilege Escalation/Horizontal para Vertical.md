Quando se valida a escalação horizontal, a primeira coisa a se fazer é tentar elevar o privilégio partindo para a [[Vertical Privilege Escalation]].

No exemplo tirado de um lab do PortSwigger, além do maldito [[Insecure Direct Object Reference (IDOR)#IDOR|IDOR]], temos a senha em texto puro na página.

Fazendo login com as credenciais que nos foi passada, vemos que nossa identificação é feita através do parâmetro *Id* com o valor do nosso nome de usuário.

![[Pasted image 20260301050520.png]]

Na página de alteração de senha, vemos que existem alguns caracteres mascarados no campo de senha.
![[Pasted image 20260301050643.png]]

Ao analisar o código da página, é possível ver a senha **EM TEXTO PURO**

![[Pasted image 20260301050800.png]]

Daí é só alterar o parâmetro *Id* para o valor da conta do admin e tchau e bença

![[Pasted image 20260301050933.png]]
![[Pasted image 20260301050950.png]]