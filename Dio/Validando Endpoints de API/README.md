# Desafio: Validando Endpoints de API 💻

**Você está desenvolvendo um programa para validar endpoints de API. O algoritmo deve verificar se o endpoint fornecido segue o formato padrão `/api/{recurso}` e seus sub-recursos. O formato válido é iniciado por `/api/` seguido por um ou mais segmentos separados por barras (`/`), onde cada segmento é uma palavra alfanumérica.**

###### Validação com Expressão Regular

**Para validar o formato do endpoint, você deve usar uma expressão regular. A expressão regular precisa:**

- Garantir que o endpoint comece com `/api/`.
- Seguir com um ou mais segmentos, onde cada segmento é uma palavra alfanumérica.
- Os segmentos devem ser separados por barras (`/`).
- O endpoint deve terminar após o último segmento.

###### Exemplo de Expressão Regular

- Expressão Regular: `^/api/\w+(/\w+)*$`
- `^/api/` - O endpoint deve começar com `/api/`.
- `\w+` - Deve haver pelo menos uma palavra alfanumérica após `/api/`.
- `(/\w+)*` - Pode haver zero ou mais segmentos adicionais, cada um separado por barras (`/`).
- `$` - O endpoint deve terminar após o último segmento.

Saiba mais sobre: [Expressão Regular](https://docs.oracle.com/javase/tutorial/essential/regex/index.html)

### Entrada

- Endpoint: Uma string representando o endpoint da API a ser validado.

### Saída

- `"Endpoint valido."` se o endpoint está no formato correto.
- `"Endpoint invalido."` se o endpoint não está no formato correto.

### **Exemplo 1:**

|    **Entrada**     |     **Saída**      |
| ------------------ | ------------------ |
| /api/users         | Endpoint valido.   |

### **Exemplo 2:**

|    **Entrada**     |     **Saída**      |
| ------------------ | ------------------ |
| /api/products      | Endpoint valido.   |

### **Exemplo 3:**

|    **Entrada**     |     **Saída**      |
| ------------------ | ------------------ |
| /service/users/123 | Endpoint invalido. |

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
