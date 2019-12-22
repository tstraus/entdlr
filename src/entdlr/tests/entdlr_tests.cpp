#include "lest.hpp"

const lest::test spec[] =
{
    CASE("EntdlrTests.Hello")
    {
        EXPECT(true);
    }
};

int main(int argc, char** argv)
{
    return lest::run(spec, argc, argv);
}