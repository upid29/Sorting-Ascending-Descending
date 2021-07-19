#include <iostream>

using namespace std;

void input_huruf(char huruf[], int panjang){
    for(int i=0; i<panjang; i++){
        cout << "Masukkan karakter " << i+1 << ": ";
        cin >> huruf[i];
    }
    cout << endl;
}

void cetak_huruf(char huruf[],int panjang){
    for(int i=0; i<panjang; i++){
        cout << huruf[i]<<"\t";
    }
    cout << endl;
}


void SortingDesc(char huruf[], int panjang)
{
  int i,j;
  char temp;

  for (i=0; i<panjang; i++)
  {
      j=i;
      for (j=panjang; j > i; j--)
      {
          if (huruf[j] > huruf[j-1])
          {
              temp = huruf[j];
              huruf[j] = huruf[j-1];
              huruf[j-1] = temp;
          }
      }
  }
}

void SortingAscen (char huruf[], int panjang)
{
  int i,j;
  char temp;

  for (i=0; i<panjang; i++)
  {
      for (j=panjang-1; j>i; j--)
      {
          if (huruf[j] < huruf[j-1])
          {
              temp = huruf[j];
              huruf[j] = huruf[j-1];
              huruf[j-1] = temp;
          }
      }
  }

}

int main()
{
    int panjang = 0;
    cout << "input: ";
    cin >> panjang;

    char huruf[panjang];

    input_huruf(huruf,panjang);

    cout << "karakter sebelum di-sorting: "<< endl;
    cetak_huruf(huruf,panjang);

    cout << "urutan karakter yang sudah di-ascending: "<<endl;
    SortingAscen(huruf, panjang);
    cetak_huruf(huruf,panjang);

    cout << "urutan karakter yang sudah di-descending: "<<endl;
    SortingDesc(huruf, panjang);
    cetak_huruf(huruf,panjang);

    cout << endl;

    return 0;
}
