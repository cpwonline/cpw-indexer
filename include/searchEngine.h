#include <vector>

#ifndef SEARCHENGINE_H
#define SEARCHENGINE_H


class searchEngine
{
    public:
        searchEngine(bool d, bool f, bool v);
        virtual ~searchEngine();

    protected:

    private:
        struct
        {
            bool directory, file, verbose;
        }
        options;

        char* currentDir;
        int contCol, contRow, currentRows;
        std::vector<int> point;
};

#endif // SEARCHENGINE_H
