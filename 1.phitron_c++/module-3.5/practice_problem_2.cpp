#include <iostream>

using namespace std;

class Cricketer {
   public:
    int jersey_no;
    char country[100];
};

int main() {
    Cricketer* dhoni = new Cricketer;
    strcpy(dhoni->country, "India");
    dhoni->jersey_no = 6;

    Cricketer* kohli = new Cricketer;
    strcpy(kohli->country, dhoni->country);
    kohli->jersey_no = dhoni->jersey_no;

    delete dhoni;

    cout << kohli->jersey_no << kohli->country;

    return 0;
}