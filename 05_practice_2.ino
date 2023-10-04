#define PIN_LED 7
void setup() {
  pinMode(PIN_LED, OUTPUT); // LED 핀을 출력 모드로 설정
}

void loop() {
  digitalWrite(PIN_LED, HIGH); // LED를 켭니다
  delay(1000); // 1초 동안 대기

  for (int i = 0; i < 5; i++) {
    digitalWrite(PIN_LED, LOW); // LED를 끕니다
    delay(200); // 0.2초 동안 대기
    digitalWrite(PIN_LED, HIGH); // LED를 다시 켭니다
    delay(200); // 0.2초 동안 대기
  }

  digitalWrite(PIN_LED, LOW); // LED를 끕니다

  while (1) {} //infinite loop
}
