#pragma once

#include "IStrategy.h"

class random_strategy : public IStrategy
{
public:
    bool run(const std :: vector<std :: vector<bool>> &history, const int &row, const int &column) const override;
};