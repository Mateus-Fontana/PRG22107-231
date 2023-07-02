# PRG22107-231
# Mateus Fontana Tatim
![image](https://github.com/Mateus-Fontana/PRG22107-231/assets/112509837/e9665cf1-877c-4aab-8a12-de5b20ddad8d)




# Monitor de Status de Dispositivos

Este projeto consiste em um programa desenvolvido em C++ com o framework QtCreator que monitora o ping de um dispositivo e exibe o seu status, informando se o dispositivo está online ou offline. O objetivo principal é oferecer uma solução eficiente para verificar a disponibilidade de um dispositivo em uma rede.

## Funcionalidades

- **Monitoramento do Ping:** O programa realiza o envio de pacotes de ping para um dispositivo específico em intervalos regulares, permitindo verificar a disponibilidade contínua do dispositivo.

- **Status do Dispositivo:** Com base nas respostas recebidas dos pacotes de ping, o programa determina se o dispositivo está online ou offline. O status atualizado é exibido de forma clara e intuitiva para o usuário.

- **Interface Amigável:** Utilizando o framework QtCreator, o programa possui uma interface gráfica intuitiva, que apresenta informações relevantes e permite ao usuário acompanhar facilmente o status do dispositivo monitorado.

## Tecnologias Utilizadas

O projeto é desenvolvido em C++ com o auxílio do framework QtCreator, uma ferramenta poderosa para a criação de interfaces gráficas e o desenvolvimento de aplicações multiplataforma. Além disso, o programa faz uso das bibliotecas: QObject, QProcess, QIODevice e QWidget. 

## Fluxo de Funcionamento

1. O programa é executado e a interface gráfica é exibida ao usuário.
2. O usuário insere as informações necessárias, como o endereço IP a ser monitorado.
3. O programa inicia o monitoramento, enviando periodicamente pacotes de ping para o dispositivo.
4. Com base nas respostas recebidas, o programa atualiza o status do dispositivo na interface gráfica.
5. O usuário pode acompanhar em tempo real se o dispositivo está online ou offline, com atualizações automáticas.

## Benefícios e Aplicações

- **Monitoramento eficiente:** O programa permite monitorar de forma contínua o status de dispositivos em uma rede, facilitando a identificação rápida de problemas de conectividade.
- **Facilidade de uso:** Com uma interface intuitiva, o programa torna o monitoramento acessível mesmo para usuários sem conhecimentos avançados em redes.
- **Aplicação versátil:** O monitor de status de dispositivos pode ser utilizado em diferentes contextos, como redes domésticas, ambientes corporativos ou provedores de serviços de Internet.


## Melhorias

Para próximos estudos pode-se implementar o monitoramento de vários dispositivos ao mesmo momento, dessa forma, será possível criar um aplicativo de monitoramento de uma rede interna, se algum dispositivo cair, deve-se gerar um alerta para alguma ação ser tomada.

# Conclusão

O programa desenvolvido em C++ utilizando o framework Qt Creator é uma solução eficiente para monitorar o ping e o status de dispositivos em uma rede. Com uma interface gráfica amigável e funcionalidades relevantes, o projeto contribui para a identificação rápida de problemas de conectividade. Além disso, a aplicação versátil permite seu uso em diversos cenários. Com o desenvolvimento desse projeto, foi possível aprimorar habilidades em programação orientada a objetos em C++.


