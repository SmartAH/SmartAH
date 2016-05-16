char kode;

void setup() {
  pinMode(12, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(8, OUTPUT);
  Serial.begin(9600);

}

void loop() {

  kode = Serial.read();

  if ( kode == '1')
  {
    digitalWrite(12, HIGH);
  }
  else if (kode == 'z')
  {
    digitalWrite(12, LOW);
  }

  if ( kode == '2')
  {
    digitalWrite(8, HIGH);
  }
  else if (kode == 'y')
  {
    digitalWrite(8, LOW);
  }

  if ( kode == '3')
  {
    digitalWrite(10, HIGH);
  }
  else if (kode == 'x')
  {
    digitalWrite(10, LOW);
  }


}
