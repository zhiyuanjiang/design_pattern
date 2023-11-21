#include <iostream>

#include "MediaPublisher.h"
#include "WangSubscriber.h"
#include "ZhangSubscriber.h"

int main() {
    MediaPublisher pub;
    StuSubscriber* wang = new WangSubscriber();
    StuSubscriber* zhang = new ZhangSubscriber();
    wang->subscriber(&pub);
    zhang->subscriber(&pub);
    
    pub.notify("明天放假");

    return 0;
}