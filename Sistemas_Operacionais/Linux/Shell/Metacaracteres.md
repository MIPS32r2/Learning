em alguns casos quando precisamos representar um valor especial no shell, fazemos a expansão de um parâmetro no script ou inline.

mas nem sempre a mesma forma será interpretada da mesma maneira pelo shell

para exemplificar vamos criar um exemplo utilizando aspas simples

![[Pasted image 20251123171637.png]]

podemos ver que ao invocar o alias *bicho*, a expansão da variável *var* não foi feita.

a explicação para isso é pelo fato de que quando uma atribuição dessa é feita usando aspas simples, o shell entende todos os caracteres como normais, e não algum sendo especial.

Vamos fazer outro exemplo, mas agora utilizando aspas duplas

![[Pasted image 20251123172011.png]]

agora vemos que quando usado aspas duplas, o shell interpreta a expansão da maneira correta, expandindo o valor da variável *var*.
