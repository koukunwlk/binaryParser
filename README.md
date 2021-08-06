# Conversor Texto para binário.
Esse programa foi escrito usando a liguagem C, usando algumas das regras da 42 são paulo.
![BinaryParser.gif](https://github.com/koukunwlk/projectsAssets/blob/main/binaryParser.gif)

## Regras utilizadas da 42sp.
- Utilizar apenas *while* como laço de repetição.
- Utilizar no maximo *4* variaveis por função.
- Não utilizar nenhum header alem do <unistd.h>
- Não utilizar bibliotecas.

## Pre-requisitos.
Compilador de C (Ex: gcc)

## Como usar.
Você pode chamar o arquivo passando como primeiro parametro **0** ou **1** logo em seguida o que deseja converter.
* **0**: Ira fazer a conversão de binário para texto, passando o codigo binario com 8 digitos. cada **parametro** subsequente representa uma **letra**.
Logo se eu desejo escrever a string *Hello* em binário, devo executar o programa da seguinte forma.
```bash
#Para compilar o programa, Devo chamar compilador e passar o nome de todos os arquivos na pasta, no caso usei o *
#que funciona como um curinga em bash. A saida padrão do compilador vai ser o arquivo "a.out".
#Caso eu necessite mudar o arquivo de saida, posso passar a flag -o em seguida o nome do arquivo para alterar o arquivo de saida
$ cc *.c -o teste

#Logo em seguid eu chamo o arquivo passando como primeiro parametro 0 em seguida coloco os binarios com 8 digitos separado por espaço.
$ teste 0 01001000 01100101 01101100 01101100 01101111

#Então o programa me retorna o resultado da conversão dos binarios.
$ Hello
```

* **1**: Ira fazer a conversão de um texto para binário, você deve passar o texto todo dentre aspas duplas como no exemplo a seguir.

```bash
# Chamaremos o arquivo compilado novamente, porem mudando seu primeiro parametro para 1. 
$ teste 1 "Hello"

#O programa ira retornar o resultado da conversão do texto para binario
$ 01001000 01100101 01101100 01101100 01101111
```

# Autor

Moacir Amaro.

https://www.linkedin.com/in/moaciramaro/
