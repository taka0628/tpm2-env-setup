#include "cmd_call.hpp"

using namespace std;

constexpr bool DEBUG = true;

CmdCall::CmdCall() {}

CmdCall::~CmdCall() {}

bool CmdCall::MakeEnvSetup()
{
    FILE *fp;
    stringstream cmd_terminal;
    cmd_terminal << "gnome-terminal --tab --active -x bash -c ' cd ../scripts; ";
    if (DEBUG)
    {
        cmd_terminal << " make test; ";
    }else{
        cmd_terminal << " make install; ";
    }
    cmd_terminal << " bash'";
    if ((fp = popen(cmd_terminal.str().c_str(), "r")) == NULL)
    {
        ERROR("can't open the console");
        return false;
    }
    pclose(fp);

    return true;
}

bool CmdCall::GetRandom(const int byte)
{
    assert(byte > 0);
    FILE *fp;
    stringstream cmd_terminal;
    cmd_terminal << "gnome-terminal --tab --active -x bash -c ' cd ../scripts; ";
    cmd_terminal << " ./GetRandom.sh";
    cmd_terminal << " bash'";
    if ((fp = popen(cmd_terminal.str().c_str(), "r")) == NULL)
    {
        ERROR("can't open the console");
        return false;
    }
    pclose(fp);

    return true;
}
