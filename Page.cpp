#include "Page.h"

void Page::init() {
    _status = "";
    _posts = "";
}

void Page::clear() {
    _posts = ""; // Clear the posts but leave the status unchanged
}

void Page::setStatus(const std::string& status) {
    _status = status;
}

std::string Page::getStatus() const {
    return _status;
}

void Page::addLineToPosts(const std::string& post) {
    if (!_posts.empty()) {
        _posts += "\n";
    }
    _posts += post;
}

std::string Page::getPosts() const {
    return _posts;
}
