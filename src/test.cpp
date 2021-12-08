#include "cmd_call.hpp"

int main()
{
    CmdCall cmd;
    cmd.MakeEnvSetup();
    cmd.GetRandom(4);

    return 0;
}