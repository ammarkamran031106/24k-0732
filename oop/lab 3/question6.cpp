#include <iostream>
using namespace std;

class MobilePhone {
    
private:
    string brand;
    int version;
    int displayResolution;
    int memory;
    int storageCapacity;
    int internalStorage;

public:
    MobilePhone(string brandName, int versionNum, int displayRes, int ramSize, int romSize, int storageSize) {
        this->set_brand(brandName);
        this->set_version(versionNum);
        this->set_displayResolution(displayRes);
        this->set_memory(ramSize);
        this->set_storageCapacity(romSize);
        this->set_internalStorage(storageSize);
    }

    void set_brand(string brandName) {
        this->brand = brandName;
    }

    void set_version(int versionNum) {
        this->version = versionNum;
    }

    void set_displayResolution(int displayRes) {
        this->displayResolution = displayRes;
    }

    void set_memory(int ramSize) {
        this->memory = ramSize;
    }

    void set_storageCapacity(int romSize) {
        this->storageCapacity = romSize;
    }

    void set_internalStorage(int storageSize) {
        this->internalStorage = storageSize;
    }

    string get_brand() {
        return brand;
    }

    int get_version() {
        return version;
    }

    int get_displayResolution() {
        return displayResolution;
    }

    int get_memory() {
        return memory;
    }

    int get_storageCapacity() {
        return storageCapacity;
    }

    int get_internalStorage() {
        return internalStorage;
    }

    void make_call() {
        cout << "Call Made!" << endl;
    }

    void send_message() {
        cout << "Message Sent!" << endl;
    }

    void connect_wifi() {
        cout << "Connecting to Wi-Fi!" << endl;
    }

    void browse_internet() {
        cout << "Browsing internet!" << endl;
    }
};

int main() {
    MobilePhone phone1("Samsung", 1, 1080, 6, 128, 256);
    MobilePhone phone2("Apple", 1, 1170, 8, 256, 512);
    
    cout << phone1.get_brand() << endl;
    cout << phone1.get_version() << endl;
    cout << phone1.get_memory() << endl;
    cout << phone1.get_displayResolution() << endl;
    
    phone1.send_message();
}
