#include "Profile.h"

void Profile::init(User owner) {
    this->_owner = owner;
}

void Profile::clear() {
    this->_page.clear();
    this->_friends.clear();
}

User Profile::getOwner() const {
    return this->_owner;
}

void Profile::setStatus(std::string new_status) {
    this->_page.setStatus(new_status);
}

void Profile::addPostToProfilePage(std::string post) {
    this->_page.addLineToPosts(post);
}

void Profile::addFriend(User friend_to_add) {
    this->_friends.add(friend_to_add);
}

std::string Profile::getPage() const {
    return "Status: " + this->_page.getStatus() + "\n*******************\n*******************\n" + this->_page.getPosts();
}

std::string Profile::getFriends() const {
    UserNode* current = this->_friends.get_first();
    std::string friends;
    while (current) {
        friends += current->get_data().getUserName();
        current = current->get_next();
        if (current) friends += ",";
    }
    return friends;
}

std::string Profile::getFriendsWithSameNameLength() const {
    UserNode* current = this->_friends.get_first();
    std::string friends;
    size_t ownerLength = this->_owner.getUserName().length();
    while (current) {
        if (current->get_data().getUserName().length() == ownerLength) {
            friends += current->get_data().getUserName();
            current = current->get_next();
            if (current) friends += ",";
        }
        else {
            current = current->get_next();
        }
    }
    return friends;
}
