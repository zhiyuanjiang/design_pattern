#pragma once

#include "command.h"
#include "mi_receiver.h"

class SingCommand : public Command {
public:
    SingCommand(MiReceiver mi) : _mi_receiver(mi) {}

    void execute() {
        _mi_receiver.sing_song();
    }

private:
    MiReceiver _mi_receiver;
};