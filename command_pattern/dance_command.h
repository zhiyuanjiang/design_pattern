#pragma once

#include "command.h"
#include "hua_receiver.h"

class DanceCommand : public Command {
public:
    DanceCommand(HuaReceiver hua) : _hua_receiver(hua) {}

    void execute() {
        _hua_receiver.dance();
    }

private:
    HuaReceiver _hua_receiver;
};