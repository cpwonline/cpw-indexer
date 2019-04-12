#include "searchEngine.h"

searchEngine::searchEngine(bool d, bool f, bool v, char* CD) :
    currentDir(CD)
{
    options.directory = d;
    options.file = f;
    options.verbose = v;
    contCol = 0;
    contRow = 0;
    currentRows = 0;
}

searchEngine::~searchEngine()
{
}

void searchEngine::main()
{

}
