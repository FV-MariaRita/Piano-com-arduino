// C++ code
#define PIN_R A0
#define PIN_G A1
#define PIN_B A2

// Função para setar o LED RGB
void setRGB(uint8_t r, uint8_t g, uint8_t b) {
  analogWrite(PIN_R, r);
  analogWrite(PIN_G, g);
  analogWrite(PIN_B, b);
}

// Funções do modo musical
void nota(int freq, int dur) {
  tone(8, freq, dur);
  delay(dur + 50);
}

// LED para o modo musical
void notaLed(int freq, int dur) {
  tone(8, freq, dur);
  setRGB(255, 255, 255); // LED acende durante a nota
  delay(dur);
  setRGB(0, 0, 0);       // LED apaga entre as notas
  delay(50);
}

// Função para garantir um delay decente entre as músicas
void pausa(int dur) {
  noTone(8);
  delay(dur);
}

// Função para garantir que o LED apague
void ledOff() { setRGB(0, 0, 0); }

// Função para garantir que não haja interferência entre os botões
void esperarSoltar(int pino) {
  while (digitalRead(pino) == LOW) {
    delay(10);
  }
  delay(50);
}

// Músicas
//Botão 1 - Parabéns para voce
void parabens() {
  notaLed(392, 300); notaLed(392, 300); notaLed(440, 600); notaLed(392, 600); notaLed(523, 600); notaLed(494, 900); pausa(100);
  notaLed(392, 300); notaLed(392, 300); notaLed(440, 600); notaLed(392, 600); notaLed(587, 600); notaLed(523, 900); pausa(100);
  notaLed(392, 300); notaLed(392, 300); notaLed(784, 600); notaLed(659, 600); notaLed(523, 600); notaLed(494, 600); notaLed(440, 900); pausa(100);
  notaLed(698, 300); notaLed(698, 300); notaLed(659, 600); notaLed(523, 600); notaLed(587, 600); notaLed(523, 900);
}
// Botão 2 - Mario Bros
void mario() {
  notaLed(330, 150); notaLed(330, 150); pausa(150); notaLed(330, 150); pausa(150); notaLed(262, 150); notaLed(330, 150); pausa(150);
  notaLed(392, 300); pausa(300); notaLed(196, 300); pausa(300);
  notaLed(262, 300); pausa(150); notaLed(196, 300); pausa(150); notaLed(165, 300); pausa(150);
  notaLed(220, 300); notaLed(247, 150); notaLed(233, 150); notaLed(220, 300);
  notaLed(196, 200); notaLed(330, 200); notaLed(392, 200); notaLed(440, 300);
  notaLed(349, 150); notaLed(392, 150); notaLed(330, 150); notaLed(262, 150); notaLed(294, 150); notaLed(247, 300); pausa(300);
}
// Botão 3 - Brilha, brilha estrelinha
void twinkle() {
  notaLed(262, 300); notaLed(262, 300); notaLed(392, 300); notaLed(392, 300); notaLed(440, 300); notaLed(440, 300); notaLed(392, 600); pausa(100);
  notaLed(349, 300); notaLed(349, 300); notaLed(330, 300); notaLed(330, 300); notaLed(294, 300); notaLed(294, 300); notaLed(262, 600); pausa(100);
  notaLed(392, 300); notaLed(392, 300); notaLed(349, 300); notaLed(349, 300); notaLed(330, 300); notaLed(330, 300); notaLed(294, 600); pausa(100);
  notaLed(392, 300); notaLed(392, 300); notaLed(349, 300); notaLed(349, 300); notaLed(330, 300); notaLed(330, 300); notaLed(294, 600); pausa(100);
  notaLed(262, 300); notaLed(262, 300); notaLed(392, 300); notaLed(392, 300); notaLed(440, 300); notaLed(440, 300); notaLed(392, 600); pausa(100);
  notaLed(349, 300); notaLed(349, 300); notaLed(330, 300); notaLed(330, 300); notaLed(294, 300); notaLed(294, 300); notaLed(262, 600);
}
// Botão 4 - Trilha sonora do Harry Potter
void harryPotter() {
  notaLed(494, 300); notaLed(659, 450); notaLed(587, 150); notaLed(523, 300); notaLed(659, 500); pausa(100);
  notaLed(494, 300); notaLed(784, 500); notaLed(698, 300); notaLed(659, 500); pausa(100);
  notaLed(587, 300); notaLed(740, 450); notaLed(698, 150); notaLed(622, 300); notaLed(554, 500); pausa(100);
  notaLed(698, 300); notaLed(659, 450); notaLed(587, 150); notaLed(523, 300); notaLed(587, 700); pausa(200);
  notaLed(494, 300); notaLed(659, 450); notaLed(587, 150); notaLed(523, 300); notaLed(659, 500); pausa(100);
  notaLed(494, 300); notaLed(988, 500); notaLed(988, 300); notaLed(988, 500); pausa(100);
  notaLed(1047, 700);
}
// Botão 5 - Jingle Bells
void jingleBells() {
  notaLed(330, 300); notaLed(330, 300); notaLed(330, 600); pausa(100);
  notaLed(330, 300); notaLed(330, 300); notaLed(330, 600); pausa(100);
  notaLed(330, 300); notaLed(392, 300); notaLed(262, 400); notaLed(294, 300); notaLed(330, 900); pausa(150);
  notaLed(349, 300); notaLed(349, 300); notaLed(349, 400); notaLed(349, 300); notaLed(349, 300);
  notaLed(330, 300); notaLed(330, 300); notaLed(330, 200); notaLed(330, 200); pausa(100);
  notaLed(392, 300); notaLed(392, 300); notaLed(349, 300); notaLed(294, 300); notaLed(262, 900); pausa(200);
}
// Botão 6 - Asa Branca
void asaBranca() {
  notaLed(392, 200); notaLed(440, 200); notaLed(494, 400); notaLed(587, 400); notaLed(587, 400); notaLed(494, 400); notaLed(523, 400); notaLed(523, 700); pausa(100);
  notaLed(392, 200); notaLed(440, 200); notaLed(494, 400); notaLed(587, 400); notaLed(587, 400); notaLed(523, 400); notaLed(494, 700); pausa(100);
  notaLed(392, 200); notaLed(392, 200); notaLed(440, 200); notaLed(494, 400); notaLed(587, 400); notaLed(587, 400);
  notaLed(523, 400); notaLed(494, 400); notaLed(440, 400); notaLed(392, 700); pausa(100);
  notaLed(392, 200); notaLed(440, 200); notaLed(494, 400); notaLed(587, 400); notaLed(523, 400);
  notaLed(494, 400); notaLed(440, 400); notaLed(440, 400); notaLed(392, 700);
}
// Botão 7 - Song of storms (música doida do Zelda)
void songOfStorms() {
  notaLed(147, 150); notaLed(175, 150); notaLed(294, 600); pausa(100);
  notaLed(147, 150); notaLed(175, 150); notaLed(294, 600); pausa(100);
  notaLed(440, 300); notaLed(440, 300); notaLed(440, 300); notaLed(392, 300); notaLed(440, 300); notaLed(349, 300); notaLed(330, 300); notaLed(294, 300); pausa(150);
  notaLed(147, 150); notaLed(175, 150); notaLed(294, 600); pausa(100);
  notaLed(147, 150); notaLed(175, 150); notaLed(294, 600); pausa(100);
  notaLed(330, 300); notaLed(294, 300); notaLed(330, 300); notaLed(294, 300); notaLed(262, 300); notaLed(220, 300); notaLed(247, 300); notaLed(262, 600); pausa(150);
  notaLed(294, 200); notaLed(330, 200); notaLed(349, 200);
}
// Botão 8 - Bella Ciao (versão alternativa)
void bellaCiao() {
  notaLed(440, 200); notaLed(440, 300); notaLed(440, 300); notaLed(494, 300); notaLed(440, 300); notaLed(392, 300); notaLed(330, 600); pausa(150);
  notaLed(330, 200); notaLed(392, 300); notaLed(440, 300); notaLed(392, 300); notaLed(330, 600); pausa(150);
  notaLed(330, 200); notaLed(392, 300); notaLed(440, 300); notaLed(392, 300); notaLed(349, 300); notaLed(330, 300); notaLed(294, 600); pausa(150);
  notaLed(294, 200); notaLed(330, 300); notaLed(392, 300); notaLed(440, 300); notaLed(392, 300); notaLed(330, 900); pausa(300);
}

// Setando os inputs
void setup()
{
  pinMode(9, INPUT);
  pinMode(0, INPUT);
  pinMode(8, OUTPUT);
  pinMode(1, INPUT);
  pinMode(2, INPUT);
  pinMode(3, INPUT);
  pinMode(4, INPUT);
  pinMode(5, INPUT);
  pinMode(6, INPUT);
  pinMode(7, INPUT);
  pinMode(PIN_R, OUTPUT);
  pinMode(PIN_G, OUTPUT);
  pinMode(PIN_B, OUTPUT);
  setRGB(0, 0, 0);
}

// Loop 
void loop()
{
  // Modo musical: botão 9 pressionado
  if (digitalRead(9) == HIGH) {
    setRGB(255, 255, 255); // Branco = modo musical ativo

    if (digitalRead(0) == HIGH) { ledOff(); parabens();    ledOff(); }
    if (digitalRead(1) == HIGH) { ledOff(); mario();       ledOff(); }
    if (digitalRead(2) == HIGH) { ledOff(); twinkle();     ledOff(); }
    if (digitalRead(3) == HIGH) { ledOff(); harryPotter(); ledOff(); }
    if (digitalRead(4) == HIGH) { ledOff(); jingleBells(); ledOff(); }
    if (digitalRead(5) == HIGH) { ledOff(); asaBranca();   ledOff(); }
    if (digitalRead(6) == HIGH) { ledOff(); songOfStorms();ledOff(); }
    if (digitalRead(7) == HIGH) { ledOff(); bellaCiao();   ledOff(); }

    return; // não executa o modo piano
  }

  // Modo piano: botão 9 solto 
  if (digitalRead(0) == 1) {
    tone(8, 262, 100); 
    setRGB(255, 0, 0); // Vermelho
    delay(50); 
  }
  if (digitalRead(1) == 1) {
    tone(8, 294, 100); 
    setRGB(255, 128, 0); // Laranja
    delay(50); 
  }
  if (digitalRead(2) == 1) {
    tone(8, 330, 100); 
    setRGB(255, 255, 0); // Amarelo
    delay(50); 
  }
  if (digitalRead(3) == 1) {
    tone(8, 349, 100); 
    setRGB(0, 255, 0); // Verde
    delay(50);
  }
  if (digitalRead(4) == 1) {
    tone(8, 392, 100); 
    setRGB(0, 255, 255); // Ciano
    delay(50); 
  }
  if (digitalRead(5) == 1) {
    tone(8, 440, 100); 
    setRGB(0, 0, 255); // Azul
    delay(50); 
  }
  if (digitalRead(6) == 1) {
    tone(8, 494, 100); 
    setRGB(128, 0, 255); // Roxo
    delay(50); 
  }
  if (digitalRead(7) == 1) {
    tone(8, 523, 100);
    setRGB(255, 0, 255); // Magenta
    delay(50);
  }
  setRGB(0, 0, 0);
}
