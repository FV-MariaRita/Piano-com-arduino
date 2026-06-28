// C++ code
//
#define PIN_R A0
#define PIN_G A1
#define PIN_B A2

void setRGB(uint8_t r, uint8_t g, uint8_t b) {
  analogWrite(PIN_R, r);
  analogWrite(PIN_G, g);
  analogWrite(PIN_B, b);
}

// ── Funções do modo musical ──────────────────────────────────
void nota(int freq, int dur) {
  tone(8, freq, dur);
  delay(dur + 50);
}

// Nova versão de nota com piscar de LED para o modo musical
void notaLed(int freq, int dur) {
  tone(8, freq, dur);
  setRGB(255, 255, 255); // LED acende durante a nota
  delay(dur);
  setRGB(0, 0, 0);       // LED apaga entre as notas
  delay(50);
}

void pausa(int dur) {
  noTone(8);
  delay(dur);
}

void ledOff() { setRGB(0, 0, 0); }

void esperarSoltar(int pino) {
  while (digitalRead(pino) == LOW) {
    delay(10);
  }
  delay(50);
}

// ── Músicas ──────────────────────────────────────────────────
void parabens() {
  notaLed(392, 300); notaLed(392, 300); notaLed(440, 600); notaLed(392, 600); notaLed(523, 600); notaLed(494, 900); pausa(100);
  notaLed(392, 300); notaLed(392, 300); notaLed(440, 600); notaLed(392, 600); notaLed(587, 600); notaLed(523, 900); pausa(100);
  notaLed(392, 300); notaLed(392, 300); notaLed(784, 600); notaLed(659, 600); notaLed(523, 600); notaLed(494, 600); notaLed(440, 900); pausa(100);
  notaLed(698, 300); notaLed(698, 300); notaLed(659, 600); notaLed(523, 600); notaLed(587, 600); notaLed(523, 900);
}

void mario() {
  notaLed(330, 150); notaLed(330, 150); pausa(150); notaLed(330, 150); pausa(150); notaLed(262, 150); notaLed(330, 150); pausa(150);
  notaLed(392, 300); pausa(300); notaLed(196, 300); pausa(300);
  notaLed(262, 300); pausa(150); notaLed(196, 300); pausa(150); notaLed(165, 300); pausa(150);
  notaLed(220, 300); notaLed(247, 150); notaLed(233, 150); notaLed(220, 300);
  notaLed(196, 200); notaLed(330, 200); notaLed(392, 200); notaLed(440, 300);
  notaLed(349, 150); notaLed(392, 150); notaLed(330, 150); notaLed(262, 150); notaLed(294, 150); notaLed(247, 300); pausa(300);
}

void twinkle() {
  notaLed(262, 300); notaLed(262, 300); notaLed(392, 300); notaLed(392, 300); notaLed(440, 300); notaLed(440, 300); notaLed(392, 600); pausa(100);
  notaLed(349, 300); notaLed(349, 300); notaLed(330, 300); notaLed(330, 300); notaLed(294, 300); notaLed(294, 300); notaLed(262, 600); pausa(100);
  notaLed(392, 300); notaLed(392, 300); notaLed(349, 300); notaLed(349, 300); notaLed(330, 300); notaLed(330, 300); notaLed(294, 600); pausa(100);
  notaLed(392, 300); notaLed(392, 300); notaLed(349, 300); notaLed(349, 300); notaLed(330, 300); notaLed(330, 300); notaLed(294, 600); pausa(100);
  notaLed(262, 300); notaLed(262, 300); notaLed(392, 300); notaLed(392, 300); notaLed(440, 300); notaLed(440, 300); notaLed(392, 600); pausa(100);
  notaLed(349, 300); notaLed(349, 300); notaLed(330, 300); notaLed(330, 300); notaLed(294, 300); notaLed(294, 300); notaLed(262, 600);
}

void harryPotter() {
  notaLed(494, 300); notaLed(659, 450); notaLed(587, 150); notaLed(523, 300); notaLed(659, 500); pausa(100);
  notaLed(494, 300); notaLed(784, 500); notaLed(698, 300); notaLed(659, 500); pausa(100);
  notaLed(587, 300); notaLed(740, 450); notaLed(698, 150); notaLed(622, 300); notaLed(554, 500); pausa(100);
  notaLed(698, 300); notaLed(659, 450); notaLed(587, 150); notaLed(523, 300); notaLed(587, 700); pausa(200);
  notaLed(494, 300); notaLed(659, 450); notaLed(587, 150); notaLed(523, 300); notaLed(659, 500); pausa(100);
  notaLed(494, 300); notaLed(988, 500); notaLed(988, 300); notaLed(988, 500); pausa(100);
  notaLed(1047, 700);
}

void jingleBells() {
  notaLed(330, 300); notaLed(330, 300); notaLed(330, 600); pausa(100);
  notaLed(330, 300); notaLed(330, 300); notaLed(330, 600); pausa(100);
  notaLed(330, 300); notaLed(392, 300); notaLed(262, 400); notaLed(294, 300); notaLed(330, 900); pausa(150);
  notaLed(349, 300); notaLed(349, 300); notaLed(349, 400); notaLed(349, 300); notaLed(349, 300);
  notaLed(330, 300); notaLed(330, 300); notaLed(330, 200); notaLed(330, 200); pausa(100);
  notaLed(392, 300); notaLed(392, 300); notaLed(349, 300); notaLed(294, 300); notaLed(262, 900); pausa(200);
}

void asaBranca() {
  notaLed(392, 200); notaLed(440, 200); notaLed(494, 400); notaLed(587, 400); notaLed(587, 400); notaLed(494, 400); notaLed(523, 400); notaLed(523, 700); pausa(100);
  notaLed(392, 200); notaLed(440, 200); notaLed(494, 400); notaLed(587, 400); notaLed(587, 400); notaLed(523, 400); notaLed(494, 700); pausa(100);
  notaLed(392, 200); notaLed(392, 200); notaLed(440, 200); notaLed(494, 400); notaLed(587, 400); notaLed(587, 400);
  notaLed(523, 400); notaLed(494, 400); notaLed(440, 400); notaLed(392, 700); pausa(100);
  notaLed(392, 200); notaLed(440, 200); notaLed(494, 400); notaLed(587, 400); notaLed(523, 400);
  notaLed(494, 400); notaLed(440, 400); notaLed(440, 400); notaLed(392, 700);
}

void songOfStorms() {
  notaLed(147, 150); notaLed(175, 150); notaLed(294, 600); pausa(100);
  notaLed(147, 150); notaLed(175, 150); notaLed(294, 600); pausa(100);
  notaLed(440, 300); notaLed(440, 300); notaLed(440, 300); notaLed(392, 300); notaLed(440, 300); notaLed(349, 300); notaLed(330, 300); notaLed(294, 300); pausa(150);
  notaLed(147, 150); notaLed(175, 150); notaLed(294, 600); pausa(100);
  notaLed(147, 150); notaLed(175, 150); notaLed(294, 600); pausa(100);
  notaLed(330, 300); notaLed(294, 300); notaLed(330, 300); notaLed(294, 300); notaLed(262, 300); notaLed(220, 300); notaLed(247, 300); notaLed(262, 600); pausa(150);
  notaLed(294, 200); notaLed(330, 200); notaLed(349, 200);
}

void bellaCiao() {
  notaLed(440, 200); notaLed(440, 300); notaLed(440, 300); notaLed(494, 300); notaLed(440, 300); notaLed(392, 300); notaLed(330, 600); pausa(150);
  notaLed(330, 200); notaLed(392, 300); notaLed(440, 300); notaLed(392, 300); notaLed(330, 600); pausa(150);
  notaLed(330, 200); notaLed(392, 300); notaLed(440, 300); notaLed(392, 300); notaLed(349, 300); notaLed(330, 300); notaLed(294, 600); pausa(150);
  notaLed(294, 200); notaLed(330, 300); notaLed(392, 300); notaLed(440, 300); notaLed(392, 300); notaLed(330, 900); pausa(300);
}

// ════════════════════════════════════════════════════════════
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

  // Modo piano: botão 9 solto (sem alterações)
  if (digitalRead(0) == 1) {
    tone(8, 262, 100); // play tone 48 (C4 = 262 Hz)
    setRGB(255, 0, 0); // Vermelho
    delay(50); // Wait for 50 millisecond(s)
  }
  if (digitalRead(1) == 1) {
    tone(8, 294, 100); // play tone 50 (D4 = 294 Hz)
    setRGB(255, 128, 0); // Laranja
    delay(50); // Wait for 50 millisecond(s)
  }
  if (digitalRead(2) == 1) {
    tone(8, 330, 100); // play tone 52 (E4 = 330 Hz)
    setRGB(255, 255, 0); // Amarelo
    delay(50); // Wait for 50 millisecond(s)
  }
  if (digitalRead(3) == 1) {
    tone(8, 349, 100); // play tone 53 (F4 = 349 Hz)
    setRGB(0, 255, 0); // Verde
    delay(50); // Wait for 50 millisecond(s)
  }
  if (digitalRead(4) == 1) {
    tone(8, 392, 100); // play tone 55 (G4 = 392 Hz)
    setRGB(0, 255, 255); // Ciano
    delay(50); // Wait for 50 millisecond(s)
  }
  if (digitalRead(5) == 1) {
    tone(8, 440, 100); // play tone 57 (A4 = 440 Hz)
    setRGB(0, 0, 255); // Azul
    delay(50); // Wait for 50 millisecond(s)
  }
  if (digitalRead(6) == 1) {
    tone(8, 494, 100); // play tone 59 (B4 = 494 Hz)
    setRGB(128, 0, 255); // Roxo
    delay(50); // Wait for 50 millisecond(s)
  }
  if (digitalRead(7) == 1) {
    tone(8, 523, 100); // play tone 60 (C5 = 523 Hz)
    setRGB(255, 0, 255); // Magenta
    delay(50); // Wait for 50 millisecond(s)
  }
  setRGB(0, 0, 0);
}
