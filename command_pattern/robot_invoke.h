#pragma once

#include <vector>
#include "command.h"

class RobotInvoke {
public:
    void add_command(Command* cmd) {
        _cmd.emplace_back(cmd);
    }

    void clear_command() {
        _cmd.clear();
    }

    void execute() {
        for(auto& cmd : _cmd){
            cmd->execute();
        }
    }

private:
    std::vector<Command*> _cmd;
};