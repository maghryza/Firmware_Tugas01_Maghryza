#define LED_1_PIN 2 //led merah // balok
#define LED_2_PIN 3 //led hijau // kubus
#define LED_3_PIN 4 //led biru // silinder

String command;

class BangunRuang{
    protected:
        int pin;

    public:
        BangunRuang(int inputPin){
        }

        virtual void start(){
            pinMode(pin, OUTPUT);
        }

};

class Balok:public BangunRuang {
  public:
    Balok(int inputPin) {
      pin = inputPin;
      start();
    }

    void on() {
      digitalWrite(pin, HIGH);
      Serial.println("LED Merah ON -> Tipe bangun ruang: Balok")
    }

    void off() {
      digitalWrite(pin, LOW);
      Serial.println("LED Merah OFF -> Tipe bangun ruang: Balok")
    }
};

class Kubus:public BangunRuang {
  public:
    Kubus(int inputPin) {
      pin = inputPin;
      start();
    }

    void on() {
      digitalWrite(pin, HIGH);
      Serial.println("LED Hijau ON -> Tipe bangun ruang: Kubus")
    }

    void off() {
      digitalWrite(pin, LOW);
      Serial.println("LED Hijau OFF -> Tipe bangun ruang: Kubus")
    }
};

class Silinder:public BangunRuang {
  public:
    Silinder(int inputPin) {
      pin = inputPin;
      start();
    }

    void on() {
      digitalWrite(pin, HIGH);
      Serial.println("LED Biru ON -> Tipe bangun ruang: Silinder")
    }

    void off() {
      digitalWrite(pin, LOW);
      Serial.println("LED Biru OFF -> Tipe bangun ruang: Silinder")
    }
};


Balok balok(LED_1_PIN);
Kubus kubus(LED_2_PIN);
Silinder silinder(LED_3_PIN);

void setup() {
    Serial.begin(9600);
}

void loop() {
    if(Serial.available()){
        command = Serial.readString();
    }
    if (command=="merah_on"){
        balok.on();
    } else if (command == "merah_off"){
        balok.off();
    }

    if (command == "hijau_on"){
        kubus.on();
    } else if (command == "hijau_off") {
        kubus.off();
    }

    if (command == "biru_on") {
        silinder.on();
    } else if (command == "biru_off") {
        silinder.off();
    }
    
}