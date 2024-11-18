#include "Device.h"

void Device::init(unsigned int id, DeviceType type, std::string os) {
    this->_id = id;
    this->_type = type;
    this->_os = os;
    this->_isActive = true; // Devices start active
}

unsigned int Device::getID() const {
    return this->_id;
}

DeviceType Device::getType() const {
    return this->_type;
}

std::string Device::getOS() const {
    return this->_os;
}

bool Device::isActive() const {
    return this->_isActive;
}

void Device::activate() {
    this->_isActive = true;
}

void Device::deactivate() {
    this->_isActive = false;
}
