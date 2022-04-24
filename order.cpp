#include "order.h"

std::string Order::sendNew(price_t price, quantity_t qty, time_tk timestamp)
{
    auto _lastAckTime = timestamp;
    auto _orderId = _kite->placeOrder("co", "NSE", "BHEL", "BUY", 1, "MIS", "LIMIT", 42, "DAY", 39);
    return _orderId;
}