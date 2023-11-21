#include "MediaPublisher.h"

 MediaPublisher::~MediaPublisher() {
    _sub_list.clear();
 }

void MediaPublisher::add(StuSubscriber* sub) {
    _sub_list.emplace_back(sub);
}

void MediaPublisher::remove(StuSubscriber* sub) {
    _sub_list.remove(sub);
}

void MediaPublisher::notify(const std::string& news) {
    std::cout << "MediaPublisher notify: " << news << std::endl;
    for(auto& sub : _sub_list) {
        sub->update(news);
    }
}