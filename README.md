# 🔄 Super Conversor em C

Este projeto é um **conversor de unidades em C** que permite transformar valores entre diferentes medidas: temperatura, distância, moeda e área.  

## 📋 Funcionalidades

O programa possui as seguintes opções:

1. Celsius → Fahrenheit  
2. Fahrenheit → Celsius  
3. Km → Milhas  
4. Milhas → Km  
5. Dólar → Euro  
6. Euro → Dólar  
7. m² → ft²  
8. ft² → m²  

## 🖥️ Exemplo de utilização

Ao executar o programa, será exibido um menu:

1 - Celsius -> Fahrenheit
2 - Fahrenheit -> Celsius
3 - Km -> Milhas
4 - Milhas -> Km
5 - Dólar -> Euro
6 - Euro -> Dólar
7 - m² -> ft²
8 - ft² -> m²


Depois, basta escolher a opção (de 1 a 8) e digitar o valor a ser convertido.  

Exemplo (opção 1):  
Digite a temperatura em Celsius: 25
Resultado: 77.00 °F


---

## ⚙️ Fórmulas utilizadas

- **Temperatura**
  - Celsius → Fahrenheit: `(C × 9/5) + 32`
  - Fahrenheit → Celsius: `(F − 32) × 5/9`

- **Distância**
  - Km → Milhas: `km × 0.621371`
  - Milhas → Km: `milhas / 0.621371`

- **Moeda** *(com taxa fixa usada no código)*
  - Dólar → Euro: `USD × 0.84`
  - Euro → Dólar: `EUR × 1.19`

- **Área**
  - m² → ft²: `m² × 10.7639104`
  - ft² → m²: `ft² × 0.09290304`

---

## 🚀 Como compilar e executar

No terminal, utilize:

```bash
gcc conversor.c -o conversor
./conversor
📌 Observações
As taxas de câmbio foram definidas fixas apenas para fins de exemplo.

Para resultados reais em moeda, seria necessário ligar a um serviço de atualização de câmbio (API).

✨ Autor
Projeto desenvolvido por Lotte como exercício de aprendizagem da linguagem C.
