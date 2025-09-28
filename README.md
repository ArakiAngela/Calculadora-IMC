# 🧮 Calculadora de IMC em C

Projeto desenvolvido em **linguagem C** como parte de um **trabalho da faculdade**.
O programa calcula o **Índice de Massa Corporal (IMC)**, mostra a **classificação de acordo com a OMS** e garante validações para entradas incorretas.

---

## 🚀 Funcionalidades

* Menu interativo com opção de calcular ou sair.
* Validação da altura (não aceita pontos ou vírgulas).
* Conversão de altura de centímetros para metros.
* Cálculo automático do IMC.
* Classificação em:

  * Abaixo do peso
  * Peso normal
  * Sobrepeso
  * Obesidade Grau I
  * Obesidade Grau II
  * Obesidade Grau III (Mórbida)

---

## 📂 Estrutura

* `main.c` → código principal do programa.

---

## ⚙️ Como executar

1. Clone o repositório:

   ```bash
   git clone https://github.com/SEU-USUARIO/Calculadora-IMC.git
   ```
2. Entre na pasta:

   ```bash
   cd Calculadora-IMC
   ```
3. Compile o código:

   ```bash
   gcc main.c -o imc
   ```
4. Execute:

   ```bash
   ./imc
   ```

---

## 📸 Exemplo de uso

```
=============== MENU IMC ===================
1 - Calcular IMC
2 - Sair
Informe a opção desejada: 1

Informe o seu peso:
70
Informe sua altura (sem ponto):
175

============RESULTADO DO CALCULO ============
Seu IMC e: 22.86
Classificacao: Peso Normal
============================================
```

---

## 🎓 Observação

Este projeto foi desenvolvido como **atividade acadêmica**, para praticar programação em C e conceitos de lógica de programação.
