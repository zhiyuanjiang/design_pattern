#pragma once

#include "command.h"
#include "mi_receiver.h"

class PianoCommand : public Command {
public:
    PianoCommand(MiReceiver mi) : _mi_receiver(mi) {}

    void execute() {
        _mi_receiver.play_piano();
    }

private:
    MiReceiver _mi_receiver;
};