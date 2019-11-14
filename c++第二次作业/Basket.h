// Copyright [2019] <Copyright fanghao>
#include <iostream>
#include <memory>
#include <set>
#include "Quote.h"

using namespace std;

class Basket
{
public:
    void add_item(const shared_ptr<Quote> &sales)
    {
        items.insert(sales);
    }
    double total_receipt (std::ostream&) const;     // 打印每本书的总价和购物篮中所有书的总价
private:
    static bool compare(const std::shared_ptr<Quote> &lhs, const std::shared_ptr<Quote> &rhs)
    {
        return lhs->isbn() < rhs->isbn();
    }
    // multiset保存多个报价，按照compare成员排序
    std::multiset<std::shared_ptr<Quote>, decltype(compare)*> items{compare};
};
