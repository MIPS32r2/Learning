Quando uma aplicação fornece acesso direto a objetos baseado no input do usuário sem validar se o mesmo tem permissão, temos a vuln deliciosa que chamamos de IDOR.

Geralmente encontrada em API's modernas, esse tipo de falha permite que atacantes possam manipular valores de referência (ID's sequênciais em URLs ou parâmetros) para acessar dados de outros usuários.

No exemplo tirado de um lab do PortSwigger, vemos um blog aparentemente normal

![[Pasted image 20260301044639.png]]

Ao fazer login com as credenciais que nos foi passada, podemos observar que nossa identificação é via GUID.

![[Pasted image 20260301044746.png]]

entrando em um dos posts e analisando o código da página, encontramos a merda do GUID do administrador

![[Pasted image 20260301044928.png]]

Aí é só alterar o valor do parâmetro Id na URL para o do administrador e correr para o abraço

![[Pasted image 20260301045132.png]]