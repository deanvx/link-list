#include <iostream>
using namespace std;

class Node {
public:
   char value;
   Node *next;
};

int main() {
   // 1.
   Node *A = new Node;
   A->value = 'A';
   A->next = NULL;
   cout << A->value << endl;

   // 2.
   Node *B = new Node;
   B->value = 'B';
   B->next = NULL;
   A->next = B;
   cout << B->value << endl;

   // 3.
   Node *D = new Node;
   D->value = 'D';
   D->next = NULL;
   B->next = D;
   cout << D->value << endl;

   // 4.
   cout << A->value << "->" << B->value << "->" << D->value << endl;

   // 5.
   Node *tampil = A;
   while (tampil != NULL) {
      cout << tampil->value << " ";
      tampil = tampil->next;
   }
   cout << endl;
   
   // 6.
   Node *Cetak = A;
   while (Cetak->next != NULL) {
      Cetak = Cetak->next;
   }
   cout << Cetak->value;
   cout << endl;

   // 7.
   Node *E = new Node;
   E->value = 'E';
   E->next = NULL;
   D->next = E;
   cout << E->value << endl;

   // 8.
   cout << A->value << "->" << B->value << "->" << D->value << "->" << E->value << endl;

   // 9.
   Node *C = new Node;
   C->value = 'C';
   C->next = NULL;
   cout << C->value << endl;

   // 10.
   Node *P = A;
   while (P->value != 'B') {
      P = P->next;
   }
   cout << P->value << endl;

   // 11. Node C disisipkan di antara B dan D.
   C->next = D;
   P->next = C;

   // 12.
   P = A;
   while (P != NULL) {
      cout << P->value;
      if (P->next != NULL) cout << "->"; 
      P = P->next;
   }
   cout << endl;

   // 13.
   Node *X = new Node;
   X->value = 'X';
   X->next = A;
   cout << X->value << endl;

   // 14.
   P = X;
   while (P != NULL) {
      cout << P->value;
      if (P->next != NULL) cout << "->";
      P = P->next;
   }
   cout << endl;
   cout << endl;
   
   
   cout << "===== Tahap Kedua =====" << endl;

   // 1.
   Node *S = A;
   while (S->value != 'B') {
      S = S->next;
   }
   cout << S->value << endl;

   Node *T = new Node();
   T = S->next;
   cout << T->value << endl;

   // 2.
   P = A;
   while (P->value != 'B') {
      P = P->next;
   }

   // 3.
   P->next = C->next;

   // 4.
   P = X;
   while (P != NULL) {
      cout << P->value;
      if (P->next != NULL) cout << "->";
      P = P->next;
   }
   cout << endl;

   // 5.
   P = A;
   while (P->next->value != 'E') {
      P = P->next;
   }
   P->next = NULL;

	// 6.
   P = X;
   while (P != NULL) {
      cout << P->value;
      if (P->next != NULL) cout << "->";
      P = P->next;
   }
   cout << endl;

   // 7.
   Node *newAwal = X->next;

   // 8.
   P = newAwal;
   while (P != NULL) {
      cout << P->value;
      if (P->next != NULL) cout << "->";
      P = P->next;
   }
   cout << endl;
   
   return 0;
}
