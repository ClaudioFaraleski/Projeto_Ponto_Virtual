// inclusao da biblioteca 'LiquidCrystal'
#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 6, 5, 4, 3);

// lcd 16 colunas x 2 linhas
void setup() {
	lcd.begin(16, 2);
}

void loop() {
  lcd.clear();
  lcd.setCursor(0,0); // coluna x linha
  lcd.print("Ponto Inteligente"); // mensagem que aparecerá na linha 1

  lcd.setCursor(2,1);
  lcd.print(""); // mensagem que aparecerá na linha 2
  delay(3000); // tempo em que a mensagem ficará 'fixa'
  
  // move o texto do lcd para a esquerda
  for(int posicao = 0; posicao < 16; posicao++) {
    lcd.scrollDisplayLeft();
    delay(500);
  }
  
  // move o texto do lcd para a direita
  for(int posicao = 0; posicao < 16; posicao++) {
    lcd.scrollDisplayRight();
    delay(500);
  }
  lcd.clear();
  lcd.setCursor(0,0); // coluna x linha
  lcd.print("Jandira x ITapevi"); // mensagem que aparecerá na linha 1
  lcd.setCursor(2,1);
  lcd.print("Ponto Belamar"); // mensagem que aparecerá na linha 2
  lcd.print("Horario de Chegada 10 minitos"); // mensagem que aparecerá na linha 2
  delay(5000); // tempo em que a mensagem ficará 'fixa'
  
  // move o texto do lcd para a esquerda
  for(int posicao = 0; posicao < 16; posicao++) {
    lcd.scrollDisplayLeft();
    delay(500);
  }
  
  // move o texto do lcd para a direita
  for(int posicao = 0; posicao < 16; posicao++) {
    lcd.scrollDisplayRight();
    delay(100);
  }
  delay(2000);
  lcd.clear();
  lcd.setCursor(0,0); // coluna x linha
  lcd.print(""); // mensagem que aparecerá na linha 1
  lcd.setCursor(2,1);
  lcd.print(""); // mensagem que aparecerá na linha 2
  lcd.print("");
  delay(5000); // tempo em que a mensagem ficará 'fixa'
  
  // move o texto do lcd para a esquerda
  for(int posicao = 0; posicao < 16; posicao++) {
    lcd.scrollDisplayLeft();
    delay(500);
  }
  
  // move o texto do lcd para a direita
  for(int posicao = 0; posicao < 16; posicao++) {
    lcd.scrollDisplayRight();
    delay(500);
  }
}