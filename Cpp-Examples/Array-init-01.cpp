/* fichero: Array-Init-01.C
 * compilar: g++ -o Array-Init-01 Array-Init-01.C
 * ejecutar: ./Array-Init-01
 */
#include <iostream>

using namespace std;

int main() {

  int a1[] = { 1, 2, 3, 4, 5 };
  float a2[] = { 1.1f, 2.2f, 3.3f, 4.4f };

  // Imprimir todos los valores del arreglo a1
  for (int i = 0; i < sizeof(a1) / sizeof(int); i++) {
    cout << "a1[" << i << "]=" << a1[i] << endl;
  }

  for (int i = 0; i < sizeof(a2) / sizeof(float); i++) {
    cout << "a2[" << i << "]=" << a2[i] << endl;
  }

  return 0;
}
