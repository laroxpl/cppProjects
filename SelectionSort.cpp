#include <iostream>

using namespace std;
class selectionSort
{
    public:
        void printArr(int a[], int size);
        void sort(int a[], int size);
};

void selectionSort::printArr(int a[], int size)
{
    cout << "Moja tablica: " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

void selectionSort::sort(int a[], int size)
{
    int minIndex, temp;
    for (int i = 0; i < size - 1; i++)
    {
        minIndex = i;
        for (int j = i + 1; j < size; j++)
        {
            if (a[j] < a[minIndex])
                minIndex = j;
        }
        temp = a[minIndex];
        a[minIndex] = a[i];
        a[i] = temp;
    }
}

int main()
{
    int size;
    cout << "Podaj ile elementow ma miec tablica: ";
    cin >> size;

    int* tablica = new int[size];

    cout << "Podaj elementy tablicy: " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> tablica[i];
    }

    selectionSort selSort;
    cout << "Tablica przed sortowaniem:" << endl;
    selSort.printArr(tablica, size);

    // Sort the array
    selSort.sort(tablica, size);

    cout << "Tablica po sortowaniu (Selection Sort):" << endl;
    selSort.printArr(tablica, size);

    delete[] tablica;
    return 0;
}
