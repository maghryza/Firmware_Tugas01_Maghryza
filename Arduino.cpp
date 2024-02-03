#define LED_1_PIN 2 //led merah // balok
#define LED_2_PIN 3 //led hijau // kubus
#define LED_3_PIN 4 //led biru // silinder

String command;

//  abstract class
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

// Balok class
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

// Kubus class
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

// Silinder class
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

// deklarasi objek dari tiap kelas
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
      	delay(500);
      	command=""; // nilai string command diganti agak tidak ngeprint hal yang sama terus
    } else if (command == "merah_off"){
        balok.off();
      	delay(500);
      	command=""; // nilai string command diganti agak tidak ngeprint hal yang sama terus
    }

    if (command == "hijau_on"){
        kubus.on();
      	delay(500);
      	command=""; // nilai string command diganti agak tidak ngeprint hal yang sama terus
    } else if (command == "hijau_off") {
        kubus.off();
      	delay(500);
      	command=""; // nilai string command diganti agak tidak ngeprint hal yang sama terus
    }

    if (command == "biru_on") {
        silinder.on();
      	delay(500);
      	command=""; // nilai string command diganti agak tidak ngeprint hal yang sama terus
    } else if (command == "biru_off") {
        silinder.off();
      	delay(500);
      	command=""; // nilai string command diganti agak tidak ngeprint hal yang sama terus
    }
    
}
