#define a 3
#define b 4
#define c 5
#define d 6
#define e 7
#define f 8
#define g 9


void setup() {
  for (int sayac = 3;  sayac <= 9 ; sayac++) {
    pinMode(sayac, OUTPUT);


  }


}

void loop() {
  for (int sayac = 0; sayac <= 10; sayac++) {

    if (sayac < 1) {
      yak(0, 1, 1, 0, 0, 0, 0);

    }
    if (sayac < 2) {
      yak(1, 1, 0, 1, 1, 0, 1);

    }
    if (sayac < 3) {
      yak(1, 1, 1, 1, 0, 0, 1);

    }
    if (sayac < 4) {
      yak(0, 1, 1, 0, 0, 1, 1);


    }
    if (sayac < 5) {
      yak(1, 0, 1, 1, 0, 1, 1);

    }
    if (sayac < 6) {
      yak(1, 0, 1, 1, 1, 1, 1);

    }
    if (sayac < 7) {
      yak(1, 1, 1, 0, 0, 0, 0);


    }
    if (sayac < 8) {
      yak(1, 1, 1, 1, 1, 1, 1);


    }
    if (sayac < 9) {
      yak(1, 1, 1, 1, 0, 1, 1);




    }
    

    }


  }








void yak(int A, int B, int C, int D, int E, int F, int G) {
  digitalWrite(a, A);
  digitalWrite(b, B);
  digitalWrite(c, C);
  digitalWrite(d, D);
  digitalWrite(e, E);
  digitalWrite(f, F);
  digitalWrite(g, G);
  delay(250);



}
