#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <string>
#include <cassert>
#include <sstream>


#define ERROR(comment) \
    printf("[ERROR]\n\t__%s__/__%s: %d\n\t%s\n", __FILE__, __func__, __LINE__, comment)

class CmdCall
{
private:
    CmdCall(const CmdCall &);
    const std::string cmd_env_setup_ = "make install";
    const std::string cmd_get_random_ = "GetRandom.sh";

public:
    CmdCall();
    ~CmdCall();
    bool MakeEnvSetup();
    bool GetRandom(const int);
};