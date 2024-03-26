#include <iostream>
#include <string> // Perlu dimasukkan untuk menggunakan tipe data string
using namespace std;

// Mendefinisikan sebuah struct bernama "Person"
struct Person {
    // Atribut dari struct
    string name;
    int age;
};

int main() {
    // Membuat objek dari struct Person
    Person person1;
    // Mengatur atribut objek person1
    person1.name = "John";
    person1.age = 30;
    // Menampilkan informasi person1
    cout << "Name: " << person1.name << ", Age: " << person1.age << endl;
    return 0;
}