#include <cassert>
#include <iostream>
#include <memory>
#include <sstream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <vector>

#define ERROR(comment) \
    printf("[ERROR]\n\t__%s__/__%s: %d\n\t%s\n", __FILE__, __func__, __LINE__, comment)

class CmdCall {
private:
    CmdCall(const CmdCall&);

public:
    CmdCall();
    ~CmdCall();
    bool MakeEnvSetup();
    bool GetRandom(const int);
};