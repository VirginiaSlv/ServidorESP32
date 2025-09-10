# Projeto: Servidor Web com ESP32

## 📋 Descrição

Este projeto foi desenvolvido como parte das atividades práticas da disciplina, com o objetivo de aplicar os conhecimentos adquiridos sobre redes e microcontroladores, especificamente com o uso do ESP32.

O projeto consiste em configurar um **servidor web simples na ESP32** que, ao acessar o endpoint, exibe uma página HTML contendo os nomes e RAs dos integrantes da dupla. Cada nome é exibido com uma cor diferente.

## 🧠 Objetivos

- Compreender o funcionamento de um servidor web embarcado.
- Aprender a manipular requisições HTTP utilizando o ESP32.
- Praticar a construção de páginas HTML dinâmicas integradas com microcontroladores.

## 🛠️ Tecnologias Utilizadas

- ESP32 DevKit
- Arduino IDE 
- Biblioteca WiFi para ESP32
- HTML básico

## ⚙️ Funcionamento

1. Ao iniciar, o ESP32 conecta-se a uma rede Wi-Fi configurada no código.
2. Um servidor HTTP é iniciado.
3. Quando um navegador acessa o IP do ESP32 com o endpoint, o servidor retorna uma página HTML com os dados da dupla.


