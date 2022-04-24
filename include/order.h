#pragma once

#include "kitepp.hpp"
#include <iostream>

typedef int32_t price_t;
typedef int32_t quantity_t;
typedef int64_t time_tk;

namespace kc = kiteconnect;

class Order
{
    kc::kite *_kite;

public:
    Order(kc::kite *kite) : _kite(kite) {}
    std::string sendNew(price_t price, quantity_t qty, time_tk timestamp);
};
