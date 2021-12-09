#include "cmd_call.hpp"

using namespace std;

int main()
{
    CmdCall cmd;
    cmd.MakeEnvSetup();
    cout << "make env end" << endl;
    cmd.GetRandom(4);
    cout << "get random end" << endl;

    return 0;
}