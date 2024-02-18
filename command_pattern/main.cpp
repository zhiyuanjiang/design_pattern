#include <iostream>
#include "piano_command.h"
#include "sing_command.h"
#include "dance_command.h"
#include "robot_invoke.h"

int main() {

    MiReceiver mi;
    PianoCommand ca(mi);
    SingCommand cb(mi);
    HuaReceiver hua;
    DanceCommand cc(hua);

    RobotInvoke robot;
    robot.add_command(&ca);
    robot.add_command(&cb);
    robot.add_command(&cc);

    robot.execute();

    return 0;
}