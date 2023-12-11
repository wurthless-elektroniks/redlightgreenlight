int RED_LIGHT = 0;
int YELLOW_LIGHT = 1;
int GREEN_LIGHT = 2;
int ARBITRARY = 99;


void setLeds(int led) {
  // important to turn all off to prevent power spike
  digitalWrite(RED_LIGHT,    led == RED_LIGHT);
  digitalWrite(YELLOW_LIGHT, led == YELLOW_LIGHT);
  digitalWrite(GREEN_LIGHT,  led == GREEN_LIGHT);

  // ok, actually set the leds.
  digitalWrite(RED_LIGHT,    led == RED_LIGHT);
  digitalWrite(YELLOW_LIGHT, led == YELLOW_LIGHT);
  digitalWrite(GREEN_LIGHT,  led == GREEN_LIGHT);
}

void setup() {
  pinMode(RED_LIGHT, OUTPUT);
  pinMode(YELLOW_LIGHT, OUTPUT);
  pinMode(GREEN_LIGHT, OUTPUT);
  setLeds(4);
}

void loop() {
  for (int i = 0; i < 20; i++) {
    setLeds(GREEN_LIGHT);
    delay(15);
    setLeds(ARBITRARY);
    delay(15);
  }
  
  for (int i = 0; i < 30; i++) {
    setLeds(GREEN_LIGHT);
    delay(250);
  }

  for (int i = 0; i < 5; i++) {
    setLeds(YELLOW_LIGHT);
    delay(250);
  }
  
  for (int i = 0; i < 30; i++) {
    setLeds(RED_LIGHT);
    delay(250);
  }
}
