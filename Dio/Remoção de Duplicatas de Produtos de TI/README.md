# Desafio: Remoção de Duplicatas de Produtos de TI 💻

**Você está trabalhando em um sistema de gerenciamento de inventário para uma empresa de tecnologia e precisa de uma função que recebe uma lista de produtos de TI e remove quaisquer duplicados. A lista pode conter produtos com o mesmo nome, e você precisa garantir que cada produto apareça apenas uma vez na lista final.  Escreva uma função que receba uma lista de produtos e retorne uma nova lista com os produtos únicos, mantendo a ordem de sua primeira ocorrência.**

#### Objetivo do Desafio

*Você deve completar o método `main` para chamar a função `removerDuplicados` e armazenar o resultado. Em seguida, deve imprimir a lista de produtos únicos. A função deve ser capaz de lidar com produtos que diferem apenas em letras maiúsculas e minúsculas, ou seja, "USB Drive" e "usb drive" devem ser considerados duplicados.*

### Entrada

- A função receberá uma lista de strings `produtos` onde cada string representa o nome de um produto de TI. A lista pode conter produtos duplicados.

### Saída

- A função deve retornar uma lista de strings onde cada string representa o nome de um produto de TI, sem duplicatas e na mesma ordem em que apareceram pela primeira vez na lista de entrada.

### **Exemplo 1:**

|    **Entrada**     |    **Saída**     |
| ------------------ | ---------------- |
| 6                  | Produtos unicos: |
| USB Drive          | USB Drive        |
| usb drive          | External HDD     |
| External HDD       | Pen Drive        |
| External HDD       |                  |
| USB DRIVE          |                  |
| Pen Drive          |                  |

### **Exemplo 2:**

|    **Entrada**     |    **Saída**     |
| ------------------ | ---------------- |
| 6                  | Produtos unicos: |
| Printer            | Printer          |
| Scanner            | Scanner          |
| Speaker            | Speaker          |
| Scanner            |                  |
| Speaker            |                  |
| Printer            |                  |

### **Exemplo 3:**

|    **Entrada**     |    **Saída**     |
| ------------------ | ---------------- |
| 8                  | Produtos unicos: |
| Router             | Router           |
| Switch             | Switch           |
| Router             | Modem            |
| Modem              | Printer          |
| Switch             | Laptop           |
| Printer            |                  |
| Laptop             |                  |
| Router             |                  |

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
