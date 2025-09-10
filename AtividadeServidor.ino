#include <WiFi.h>
#include <WebServer.h>


const char* ssid = "D-Link_DIR-615";

const String nomeAluno1 = "Elisa";
const String raAluno1 = "23126";
const String corAluno1 = "purple"; 

const String nomeAluno2 = "Virginia";
const String raAluno2 = "22153";
const String corAluno2 = "blue"; 

WebServer server(80);

void handleNomes() {
  String htmlContent = "<!DOCTYPE html>";
  htmlContent += "<html>";
  htmlContent += "<head>";
  htmlContent += "<title>Nomes e RAs</title>";
  htmlContent += "<meta charset='UTF-8'>";
  htmlContent += "<style>";
  htmlContent += "body { font-family: Arial, sans-serif; text-align: center; margin-top: 50px; }";
  htmlContent += "h1 { color: #333; }";
  htmlContent += ".aluno { margin: 20px; }";
  htmlContent += ".nome { font-size: 24px; font-weight: bold; }";
  htmlContent += ".ra { font-size: 18px; color: #666; }";
  htmlContent += "</style>";
  htmlContent += "</head>";
  htmlContent += "<body>";
  htmlContent += "<h1>Informações da Dupla</h1>";
  
  // Informações do Aluno 1
  htmlContent += "<div class='aluno'>";
  htmlContent += "<p class='nome' style='color: " + corAluno1 + ";'>" + nomeAluno1 + "</p>";
  htmlContent += "<p class='ra'>RA: " + raAluno1 + "</p>";
  htmlContent += "</div>";
  
  // Informações do Aluno 2
  htmlContent += "<div class='aluno'>";
  htmlContent += "<p class='nome' style='color: " + corAluno2 + ";'>" + nomeAluno2 + "</p>";
  htmlContent += "<p class='ra'>RA: " + raAluno2 + "</p>";
  htmlContent += "</div>";
  
  htmlContent += "</body>";
  htmlContent += "</html>";

  server.send(200, "text/html", htmlContent);
}

void setup() {
  Serial.begin(115200);

  Serial.print("Conectando-se a ");
  Serial.println(ssid);
  WiFi.begin(ssid);
  while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
    Serial.print(".");
  }

  Serial.println("");
  Serial.println("WiFi conectado!");
  Serial.print("Endereço IP: ");
  Serial.println(WiFi.localIP());

  server.on("/nomes", handleNomes);
  
  server.begin();
  Serial.println("Servidor HTTP iniciado");
}

void loop() {
  server.handleClient();
}