#include "mcu.hpp"
using namespace std;

MCU::MCU(float cpu_speed,int memory,string os,string nama,int volt) {
    this->cpu_speed = cpu_speed;
    this->memory = memory;
    this->os = os;
    this->nama = nama;
    this->volt = volt;

    cout << "[KONSTRUKTOR MCU] : Objek " << nama << " berhasil dibuat." << endl;
}

MCU::~MCU() {
    cout << "[DESTRUKTOR MCU] : Objek base " << nama << " dibersihkan." << endl;
}

void MCU::showSpek() {
    cout << "[BASE MCU] : " << nama << " | CPU: " << cpu_speed
         << " GHz | RAM: " << memory << " MB | OS: " << os
         << " | Volt: " << volt << "V" << endl;
}

void MCU::nambah_volt(int penambahan_voltase) {
    volt += penambahan_voltase;
    cout << "[BASE MCU] : " << nama << " voltase ditambah menjadi " << volt << "V" << endl;
}

void MCU::ganti_os(string new_os) {
    os = new_os;
    cout << "[BASE MCU] : " << nama << " ganti OS ke " << os << endl;
}