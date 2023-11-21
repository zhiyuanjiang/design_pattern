#include "StuSubscriber.h"
#include "MediaPublisher.h"

void StuSubscriber::subscriber(MediaPublisher* pub) {
    pub->add(this);
}