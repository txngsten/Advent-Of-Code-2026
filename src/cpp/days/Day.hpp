#ifndef AOC_2026_DAY_H
#define AOC_2026_DAY_H

class Day {
public:
    virtual ~Day() = default;

    virtual void handleInput() = 0;
    virtual void solvePartOne() = 0;
    virtual void solvePartTwo() = 0;
};

#endif //AOC_2026_DAY_H
