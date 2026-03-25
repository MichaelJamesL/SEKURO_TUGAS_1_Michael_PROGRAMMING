
#include "mcu_walker.hpp"

mcu_walker::mcu_walker(float cpu_speed, int memory, string os, string nama, int volt, int motor_speed, int rotation)
	: MCU(cpu_speed, memory, os, nama, volt), motor_speed(motor_speed), rotation(rotation) {
	cout << "[KONSTRUKTOR WALKER] : Sistem gerak " << this->nama << " telah diinisialisasi." << endl;
}

void mcu_walker::rotate(int rotation) {
	this->rotation = rotation;
	cout << "[WALKER] : " << nama << " berputar ke arah " << this->rotation << " derajat." << endl;
}

void mcu_walker::increase_speed(int speed) {
	motor_speed += speed;
	cout << "[WALKER] : Kecepatan motor " << nama << " naik menjadi " << motor_speed << " RPM." << endl;
}

void mcu_walker::showSpek() {
	cout << "[SPEK MCU_WALKER] : " << nama << endl;
	cout << "- CPU      : " << cpu_speed << " GHz" << endl;
	cout << "- RAM      : " << memory << " MB" << endl;
	cout << "- OS       : " << os << endl;
	cout << "- Volt     : " << volt << " V" << endl;
	cout << "- Speed    : " << motor_speed << " RPM" << endl;
	cout << "- Rotation : " << rotation << " Deg" << endl;
}

void mcu_walker::nambah_volt(int penambahan_voltase) {
	volt += penambahan_voltase;
	cout << "[WALKER UPDATE] : Voltase " << nama << " kini " << volt << " V" << endl;
}

void mcu_walker::ganti_os(string new_os) {
	os = new_os;
	cout << "[WALKER UPDATE] : " << nama << " migrasi OS ke " << os << endl;
}

mcu_walker::~mcu_walker() {
	cout << "[DESTRUKTOR WALKER] : Komponen walker " << nama << " telah dimatikan." << endl;
}