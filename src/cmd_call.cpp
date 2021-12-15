#include "cmd_call.hpp"

using namespace std;

constexpr bool DEBUG = false;

CmdCall::CmdCall() { }

CmdCall::~CmdCall() { }

bool CmdCall::MakeEnvSetup()
{
    // FILE *fp;
    stringstream cmd_terminal;
    cmd_terminal << "gnome-terminal --tab --active -x bash -c ' cd ../scripts; ";
    if (DEBUG) {
        cmd_terminal << " make test; ";
    } else {
        cmd_terminal << " make install; ";
    }
    cmd_terminal << " bash'";
    unique_ptr<FILE> fp(popen(cmd_terminal.str().c_str(), "r"));
    if (fp == NULL) {
        ERROR("can't open the console");
        return false;
    }
    fp.release();

    return true;
}

bool CmdCall::GetRandom(const int byte)
{
    assert(byte > 0);
    stringstream cmd_terminal;
    cmd_terminal << "gnome-terminal --active -x bash -c ' cd ../scripts; ";
    cmd_terminal << " ./GetRandom.sh ";
    cmd_terminal << byte;
    cmd_terminal << "; '";
    unique_ptr<FILE> fp(popen(cmd_terminal.str().c_str(), "r"));
    if (fp == NULL) {
        ERROR("can't open the console");
        return false;
    }
    fp.release();

    return true;
}
