/****************************************************************************
** Meta object code from reading C++ file 'userdashboard.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../userdashboard.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'userdashboard.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 69
#error "This file was generated using the moc from 6.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {
struct qt_meta_tag_ZN13UserDashboardE_t {};
} // unnamed namespace

template <> constexpr inline auto UserDashboard::qt_create_metaobjectdata<qt_meta_tag_ZN13UserDashboardE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "UserDashboard",
        "errorOccurred",
        "",
        "error",
        "totalInventoryItemsChanged",
        "lowStockItemsChanged",
        "totalInventoryValueChanged",
        "totalSalesChanged",
        "totalRevenueChanged",
        "totalCostChanged",
        "grossProfitChanged",
        "profitMarginChanged",
        "recentActivitiesChanged",
        "lowStockItemsListChanged",
        "monthlyProfitDataChanged",
        "expiringItemsChanged",
        "itemNearExpiry",
        "itemId",
        "itemName",
        "expiryDate",
        "refresh",
        "totalInventoryItems",
        "lowStockItems",
        "totalInventoryValue",
        "totalSales",
        "totalRevenue",
        "totalCost",
        "grossProfit",
        "profitMargin",
        "recentActivities",
        "QVariantList",
        "lowStockItemsList",
        "monthlyProfitData",
        "expiringItems"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'errorOccurred'
        QtMocHelpers::SignalData<void(const QString &)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 3 },
        }}),
        // Signal 'totalInventoryItemsChanged'
        QtMocHelpers::SignalData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'lowStockItemsChanged'
        QtMocHelpers::SignalData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'totalInventoryValueChanged'
        QtMocHelpers::SignalData<void()>(6, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'totalSalesChanged'
        QtMocHelpers::SignalData<void()>(7, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'totalRevenueChanged'
        QtMocHelpers::SignalData<void()>(8, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'totalCostChanged'
        QtMocHelpers::SignalData<void()>(9, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'grossProfitChanged'
        QtMocHelpers::SignalData<void()>(10, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'profitMarginChanged'
        QtMocHelpers::SignalData<void()>(11, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'recentActivitiesChanged'
        QtMocHelpers::SignalData<void()>(12, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'lowStockItemsListChanged'
        QtMocHelpers::SignalData<void()>(13, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'monthlyProfitDataChanged'
        QtMocHelpers::SignalData<void()>(14, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'expiringItemsChanged'
        QtMocHelpers::SignalData<void()>(15, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'itemNearExpiry'
        QtMocHelpers::SignalData<void(int, const QString &, const QDate &)>(16, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 17 }, { QMetaType::QString, 18 }, { QMetaType::QDate, 19 },
        }}),
        // Method 'refresh'
        QtMocHelpers::MethodData<void()>(20, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'totalInventoryItems'
        QtMocHelpers::PropertyData<int>(21, QMetaType::Int, QMC::DefaultPropertyFlags, 1),
        // property 'lowStockItems'
        QtMocHelpers::PropertyData<int>(22, QMetaType::Int, QMC::DefaultPropertyFlags, 2),
        // property 'totalInventoryValue'
        QtMocHelpers::PropertyData<double>(23, QMetaType::Double, QMC::DefaultPropertyFlags, 3),
        // property 'totalSales'
        QtMocHelpers::PropertyData<int>(24, QMetaType::Int, QMC::DefaultPropertyFlags, 4),
        // property 'totalRevenue'
        QtMocHelpers::PropertyData<double>(25, QMetaType::Double, QMC::DefaultPropertyFlags, 5),
        // property 'totalCost'
        QtMocHelpers::PropertyData<double>(26, QMetaType::Double, QMC::DefaultPropertyFlags, 6),
        // property 'grossProfit'
        QtMocHelpers::PropertyData<double>(27, QMetaType::Double, QMC::DefaultPropertyFlags, 7),
        // property 'profitMargin'
        QtMocHelpers::PropertyData<double>(28, QMetaType::Double, QMC::DefaultPropertyFlags, 8),
        // property 'recentActivities'
        QtMocHelpers::PropertyData<QVariantList>(29, 0x80000000 | 30, QMC::DefaultPropertyFlags | QMC::EnumOrFlag, 9),
        // property 'lowStockItemsList'
        QtMocHelpers::PropertyData<QVariantList>(31, 0x80000000 | 30, QMC::DefaultPropertyFlags | QMC::EnumOrFlag, 10),
        // property 'monthlyProfitData'
        QtMocHelpers::PropertyData<QVariantList>(32, 0x80000000 | 30, QMC::DefaultPropertyFlags | QMC::EnumOrFlag, 11),
        // property 'expiringItems'
        QtMocHelpers::PropertyData<int>(33, QMetaType::Int, QMC::DefaultPropertyFlags, 12),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<UserDashboard, qt_meta_tag_ZN13UserDashboardE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject UserDashboard::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13UserDashboardE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13UserDashboardE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN13UserDashboardE_t>.metaTypes,
    nullptr
} };

void UserDashboard::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<UserDashboard *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->errorOccurred((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->totalInventoryItemsChanged(); break;
        case 2: _t->lowStockItemsChanged(); break;
        case 3: _t->totalInventoryValueChanged(); break;
        case 4: _t->totalSalesChanged(); break;
        case 5: _t->totalRevenueChanged(); break;
        case 6: _t->totalCostChanged(); break;
        case 7: _t->grossProfitChanged(); break;
        case 8: _t->profitMarginChanged(); break;
        case 9: _t->recentActivitiesChanged(); break;
        case 10: _t->lowStockItemsListChanged(); break;
        case 11: _t->monthlyProfitDataChanged(); break;
        case 12: _t->expiringItemsChanged(); break;
        case 13: _t->itemNearExpiry((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QDate>>(_a[3]))); break;
        case 14: _t->refresh(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (UserDashboard::*)(const QString & )>(_a, &UserDashboard::errorOccurred, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (UserDashboard::*)()>(_a, &UserDashboard::totalInventoryItemsChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (UserDashboard::*)()>(_a, &UserDashboard::lowStockItemsChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (UserDashboard::*)()>(_a, &UserDashboard::totalInventoryValueChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (UserDashboard::*)()>(_a, &UserDashboard::totalSalesChanged, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (UserDashboard::*)()>(_a, &UserDashboard::totalRevenueChanged, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (UserDashboard::*)()>(_a, &UserDashboard::totalCostChanged, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (UserDashboard::*)()>(_a, &UserDashboard::grossProfitChanged, 7))
            return;
        if (QtMocHelpers::indexOfMethod<void (UserDashboard::*)()>(_a, &UserDashboard::profitMarginChanged, 8))
            return;
        if (QtMocHelpers::indexOfMethod<void (UserDashboard::*)()>(_a, &UserDashboard::recentActivitiesChanged, 9))
            return;
        if (QtMocHelpers::indexOfMethod<void (UserDashboard::*)()>(_a, &UserDashboard::lowStockItemsListChanged, 10))
            return;
        if (QtMocHelpers::indexOfMethod<void (UserDashboard::*)()>(_a, &UserDashboard::monthlyProfitDataChanged, 11))
            return;
        if (QtMocHelpers::indexOfMethod<void (UserDashboard::*)()>(_a, &UserDashboard::expiringItemsChanged, 12))
            return;
        if (QtMocHelpers::indexOfMethod<void (UserDashboard::*)(int , const QString & , const QDate & )>(_a, &UserDashboard::itemNearExpiry, 13))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<int*>(_v) = _t->totalInventoryItems(); break;
        case 1: *reinterpret_cast<int*>(_v) = _t->lowStockItems(); break;
        case 2: *reinterpret_cast<double*>(_v) = _t->totalInventoryValue(); break;
        case 3: *reinterpret_cast<int*>(_v) = _t->totalSales(); break;
        case 4: *reinterpret_cast<double*>(_v) = _t->totalRevenue(); break;
        case 5: *reinterpret_cast<double*>(_v) = _t->totalCost(); break;
        case 6: *reinterpret_cast<double*>(_v) = _t->grossProfit(); break;
        case 7: *reinterpret_cast<double*>(_v) = _t->profitMargin(); break;
        case 8: *reinterpret_cast<QVariantList*>(_v) = _t->recentActivities(); break;
        case 9: *reinterpret_cast<QVariantList*>(_v) = _t->lowStockItemsList(); break;
        case 10: *reinterpret_cast<QVariantList*>(_v) = _t->monthlyProfitData(); break;
        case 11: *reinterpret_cast<int*>(_v) = _t->expiringItems(); break;
        default: break;
        }
    }
}

const QMetaObject *UserDashboard::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UserDashboard::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13UserDashboardE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int UserDashboard::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 15;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void UserDashboard::errorOccurred(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void UserDashboard::totalInventoryItemsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void UserDashboard::lowStockItemsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void UserDashboard::totalInventoryValueChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void UserDashboard::totalSalesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void UserDashboard::totalRevenueChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void UserDashboard::totalCostChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void UserDashboard::grossProfitChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void UserDashboard::profitMarginChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void UserDashboard::recentActivitiesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void UserDashboard::lowStockItemsListChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void UserDashboard::monthlyProfitDataChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}

// SIGNAL 12
void UserDashboard::expiringItemsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}

// SIGNAL 13
void UserDashboard::itemNearExpiry(int _t1, const QString & _t2, const QDate & _t3)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 13, nullptr, _t1, _t2, _t3);
}
QT_WARNING_POP
