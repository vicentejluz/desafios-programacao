# Desafio: Detector do Método HTTP Predominante 💻

**Você está desenvolvendo um programa para contar e identificar o método HTTP mais frequente em uma lista fornecida. O algoritmo deve analisar uma string que contém métodos HTTP separados por vírgulas, contar quantas vezes cada método aparece e retornar o método mais frequente junto com sua descrição. O programa deve identificar o método mais frequente e fornecer uma breve descrição de sua função.**

**Os métodos HTTP reconhecidos são `"GET"`, `"POST"`, `"PUT"` e `"DELETE"`. Cada método tem um propósito específico:**

- **GET**: `O GET solicita a representacao de um recurso.`
- **POST**: `O POST envia dados para processamento.`
- **PUT**: `O PUT atualiza todos os dados de um recurso.`
- **DELETE**: `O DELETE remove um recurso especifico.`

**Na função `findMostFrequentMethod`, complete o `TODO` que conta a ocorrência de cada método HTTP e armazena essa contagem no mapa `methodCounts`. Utilize um loop para iterar pelos métodos no array methods. Para cada método, remova espaços extras usando `trim()` e incremente a contagem no mapa `methodCounts`.**

### Entrada

- Métodos HTTP: Uma string contendo métodos HTTP separados por vírgulas. A string pode conter espaços extras ao redor dos métodos e métodos podem estar em maiúsculas.

### Saída

Retorna uma string no formato "Método: Contagem - Descrição", onde:

- **Método** é o método HTTP mais frequente.
- **Contagem** é o número de vezes que o método aparece na entrada.
- **Descrição** é uma breve explicação do que o método faz.

**Atenção**

Quando um método não é reconhecido, a saída deve listar o método seguido pelo número de ocorrências e pela descrição de erro:

- **Entrada**: `DEL, DEL`

- **Saída**: `DEL: 2 - Metodo nao reconhecido.`

### **Exemplo 1:**

|    **Entrada**     |     **Saída**      |
| ------------------ | ------------------ |
| GET, GET, POST, DELETE, PUT         | GET: 2 - O GET solicita a representacao de um recurso.   |

### **Exemplo 2:**

|    **Entrada**     |     **Saída**      |
| ------------------ | ------------------ |
| GET, PUT, POST, GET, PUT, DELETE, PUT      | PUT: 3 - O PUT atualiza todos os dados de um recurso.   |

### **Exemplo 3:**

|    **Entrada**     |     **Saída**      |
| ------------------ | ------------------ |
| GET, DELETE, DELETE, POST, PUT, GET, DELETE, POST, PUT, DELETE | DELETE: 4 - O DELETE remove um recurso da URL. |

## Contato 📱

<div align="center">
    <a href="https://github.com/vicentejluz" target="blank"><img align="center" src="https://github.com/rahuldkjain/github-profile-readme-generator/blob/master/src/images/icons/Social/github.svg" alt="GitHub-vicentejluz" height="30" width="40" />
    </a>
    <a href="https://www.linkedin.com/in/vicentejluz" target="blank"><img align="center" src="https://raw.githubusercontent.com/rahuldkjain/github-profile-readme-generator/master/src/images/icons/Social/linked-in-alt.svg" alt="Linkedin-vicentejluz" height="30" width="40" />
    </a>  
    <a href="https://web.dio.me/users/vicentejluz" target="_blank"><img align="center" src="https://web.dio.me/favicon/favicon-32x32.png" alt="DIO-Vicente-Luz" height="35" width="37" />
    </a>
    <a href="https://www.beecrowd.com.br/judge/pt/profile/374484" target="blank"><img align="center" src="https://www.beecrowd.com.br/judge/favicon.ico?1635097036" alt="Beecrowd-Vicente-Luz" height="40" width="40" />
    </a>
  <br>
</div>
