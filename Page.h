#pragma once
#include <string>

class Page {
public:
    void init();
    void clear();
    void setStatus(const std::string& status);
    std::string getStatus() const;
    void addLineToPosts(const std::string& post);
    std::string getPosts() const;

private:
    std::string _status;
    std::string _posts;
};
