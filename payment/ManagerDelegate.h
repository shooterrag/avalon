#ifndef __Avalon__Payment__ManagerDelegate__
#define __Avalon__Payment__ManagerDelegate__

namespace Avalon {
namespace Payment {

class Manager;
class Product;

class ManagerDelegate
{
public:
    virtual void onServiceStarted(Manager* const manager) = 0;

    virtual void onPurchaseSucceed(Manager* const manager, Product* const product) = 0;
    virtual void onPurchaseFail(Manager* const manager) = 0;

    virtual void onTransactionStart(Manager* const manager) {};
    virtual void onTransactionEnd(Manager* const manager) {};

#if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
    virtual void onRestoreSucceed(Manager* const manager) = 0;
    virtual void onRestoreFail(Manager* const manager) = 0;
#endif
};

} // namespace Payment
} // namespace Avalon

#endif /* __Avalon__Payment__ManagerDelegate__ */