
#include "ArduinoTest2_arduino.h"
#include "dsm2_tx.h"

using namespace std;

void millis_test() {
  unsigned long start = millis();
  cout << "millis() test start: " << start << endl;
  while( millis() - start < 10000 ) {
    cout << millis() << endl;
    sleep(1);
  }
  unsigned long end = millis();
  cout << " Sonuç - Süre: " << end - start << "ms" << endl;
}

void delay_test() {
  unsigned long start = millis();
  cout << "delay() test start: " << start << endl;
  while( millis() - start < 10000 ) {
    cout << millis() << endl;
    delay(250);
  }
  unsigned long end = millis();
  cout << "Sonuç - Süre: " << end - start << "ms" << endl;
}

void Run_Test();
int main(int argc, char **argv){
  initialize_mock_arduino();
  Run_Test();
}

void Run_Test() {
  DSM2_tx tx(6);
  tx.bind();
  for( int i = 0; i < 6; i++) {
    tx.set_channel(i, 0);
  }
  tx.send_frame();
}
