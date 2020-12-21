/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../task/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[48];
    char stringdata0[873];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 10), // "ImageLabel"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 6), // "qimage"
QT_MOC_LITERAL(4, 30, 7), // "QLabel*"
QT_MOC_LITERAL(5, 38, 6), // "qLabel"
QT_MOC_LITERAL(6, 45, 14), // "mouseMoveEvent"
QT_MOC_LITERAL(7, 60, 12), // "QMouseEvent*"
QT_MOC_LITERAL(8, 73, 5), // "event"
QT_MOC_LITERAL(9, 79, 15), // "mousePressEvent"
QT_MOC_LITERAL(10, 95, 17), // "on_toGray_clicked"
QT_MOC_LITERAL(11, 113, 18), // "on_toBlack_clicked"
QT_MOC_LITERAL(12, 132, 16), // "on_toAvg_clicked"
QT_MOC_LITERAL(13, 149, 32), // "on_horizontalSlider_valueChanged"
QT_MOC_LITERAL(14, 182, 5), // "value"
QT_MOC_LITERAL(15, 188, 23), // "on_spinBox_valueChanged"
QT_MOC_LITERAL(16, 212, 4), // "arg1"
QT_MOC_LITERAL(17, 217, 18), // "on_toGamma_clicked"
QT_MOC_LITERAL(18, 236, 34), // "on_horizontalSlider_2_valueCh..."
QT_MOC_LITERAL(19, 271, 34), // "on_horizontalSlider_R_valueCh..."
QT_MOC_LITERAL(20, 306, 34), // "on_horizontalSlider_G_valueCh..."
QT_MOC_LITERAL(21, 341, 34), // "on_horizontalSlider_B_valueCh..."
QT_MOC_LITERAL(22, 376, 15), // "on_save_clicked"
QT_MOC_LITERAL(23, 392, 17), // "on_Border_clicked"
QT_MOC_LITERAL(24, 410, 21), // "on_action_O_triggered"
QT_MOC_LITERAL(25, 432, 21), // "on_action_V_triggered"
QT_MOC_LITERAL(26, 454, 36), // "on_VideohorizontalSlider_slid..."
QT_MOC_LITERAL(27, 491, 8), // "position"
QT_MOC_LITERAL(28, 500, 14), // "updatePosition"
QT_MOC_LITERAL(29, 515, 21), // "on_action_G_triggered"
QT_MOC_LITERAL(30, 537, 21), // "on_action_T_triggered"
QT_MOC_LITERAL(31, 559, 21), // "on_action_L_triggered"
QT_MOC_LITERAL(32, 581, 21), // "on_action_Y_triggered"
QT_MOC_LITERAL(33, 603, 21), // "on_action_B_triggered"
QT_MOC_LITERAL(34, 625, 20), // "on_pause_btn_clicked"
QT_MOC_LITERAL(35, 646, 19), // "on_play_btn_clicked"
QT_MOC_LITERAL(36, 666, 21), // "on_action_E_triggered"
QT_MOC_LITERAL(37, 688, 12), // "ProcessFrame"
QT_MOC_LITERAL(38, 701, 12), // "QVideoFrame&"
QT_MOC_LITERAL(39, 714, 5), // "frame"
QT_MOC_LITERAL(40, 720, 15), // "on_test_clicked"
QT_MOC_LITERAL(41, 736, 19), // "on_twoValue_clicked"
QT_MOC_LITERAL(42, 756, 20), // "on_video_Avg_clicked"
QT_MOC_LITERAL(43, 777, 22), // "on_video_gamma_clicked"
QT_MOC_LITERAL(44, 800, 20), // "on_video_RGB_clicked"
QT_MOC_LITERAL(45, 821, 14), // "startAssistant"
QT_MOC_LITERAL(46, 836, 21), // "on_return_btn_clicked"
QT_MOC_LITERAL(47, 858, 14) // "on_cut_clicked"

    },
    "MainWindow\0ImageLabel\0\0qimage\0QLabel*\0"
    "qLabel\0mouseMoveEvent\0QMouseEvent*\0"
    "event\0mousePressEvent\0on_toGray_clicked\0"
    "on_toBlack_clicked\0on_toAvg_clicked\0"
    "on_horizontalSlider_valueChanged\0value\0"
    "on_spinBox_valueChanged\0arg1\0"
    "on_toGamma_clicked\0"
    "on_horizontalSlider_2_valueChanged\0"
    "on_horizontalSlider_R_valueChanged\0"
    "on_horizontalSlider_G_valueChanged\0"
    "on_horizontalSlider_B_valueChanged\0"
    "on_save_clicked\0on_Border_clicked\0"
    "on_action_O_triggered\0on_action_V_triggered\0"
    "on_VideohorizontalSlider_sliderMoved\0"
    "position\0updatePosition\0on_action_G_triggered\0"
    "on_action_T_triggered\0on_action_L_triggered\0"
    "on_action_Y_triggered\0on_action_B_triggered\0"
    "on_pause_btn_clicked\0on_play_btn_clicked\0"
    "on_action_E_triggered\0ProcessFrame\0"
    "QVideoFrame&\0frame\0on_test_clicked\0"
    "on_twoValue_clicked\0on_video_Avg_clicked\0"
    "on_video_gamma_clicked\0on_video_RGB_clicked\0"
    "startAssistant\0on_return_btn_clicked\0"
    "on_cut_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      36,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,  194,    2, 0x08 /* Private */,
       6,    1,  199,    2, 0x08 /* Private */,
       9,    1,  202,    2, 0x08 /* Private */,
      10,    0,  205,    2, 0x08 /* Private */,
      11,    0,  206,    2, 0x08 /* Private */,
      12,    0,  207,    2, 0x08 /* Private */,
      13,    1,  208,    2, 0x08 /* Private */,
      15,    1,  211,    2, 0x08 /* Private */,
      17,    0,  214,    2, 0x08 /* Private */,
      18,    1,  215,    2, 0x08 /* Private */,
      19,    1,  218,    2, 0x08 /* Private */,
      20,    1,  221,    2, 0x08 /* Private */,
      21,    1,  224,    2, 0x08 /* Private */,
      22,    0,  227,    2, 0x08 /* Private */,
      23,    0,  228,    2, 0x08 /* Private */,
      24,    0,  229,    2, 0x08 /* Private */,
      25,    0,  230,    2, 0x08 /* Private */,
      26,    1,  231,    2, 0x08 /* Private */,
      28,    1,  234,    2, 0x08 /* Private */,
      29,    0,  237,    2, 0x08 /* Private */,
      30,    0,  238,    2, 0x08 /* Private */,
      31,    0,  239,    2, 0x08 /* Private */,
      32,    0,  240,    2, 0x08 /* Private */,
      33,    0,  241,    2, 0x08 /* Private */,
      34,    0,  242,    2, 0x08 /* Private */,
      35,    0,  243,    2, 0x08 /* Private */,
      36,    0,  244,    2, 0x08 /* Private */,
      37,    1,  245,    2, 0x08 /* Private */,
      40,    0,  248,    2, 0x08 /* Private */,
      41,    0,  249,    2, 0x08 /* Private */,
      42,    0,  250,    2, 0x08 /* Private */,
      43,    0,  251,    2, 0x08 /* Private */,
      44,    0,  252,    2, 0x08 /* Private */,
      45,    0,  253,    2, 0x08 /* Private */,
      46,    0,  254,    2, 0x08 /* Private */,
      47,    0,  255,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::QImage, QMetaType::QImage, 0x80000000 | 4,    3,    5,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void, QMetaType::Int,   16,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   27,
    QMetaType::Void, QMetaType::LongLong,   27,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 38,   39,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { QImage _r = _t->ImageLabel((*reinterpret_cast< QImage(*)>(_a[1])),(*reinterpret_cast< QLabel*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QImage*>(_a[0]) = std::move(_r); }  break;
        case 1: _t->mouseMoveEvent((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 2: _t->mousePressEvent((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 3: _t->on_toGray_clicked(); break;
        case 4: _t->on_toBlack_clicked(); break;
        case 5: _t->on_toAvg_clicked(); break;
        case 6: _t->on_horizontalSlider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->on_spinBox_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->on_toGamma_clicked(); break;
        case 9: _t->on_horizontalSlider_2_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->on_horizontalSlider_R_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->on_horizontalSlider_G_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->on_horizontalSlider_B_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->on_save_clicked(); break;
        case 14: _t->on_Border_clicked(); break;
        case 15: _t->on_action_O_triggered(); break;
        case 16: _t->on_action_V_triggered(); break;
        case 17: _t->on_VideohorizontalSlider_sliderMoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 18: _t->updatePosition((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 19: _t->on_action_G_triggered(); break;
        case 20: _t->on_action_T_triggered(); break;
        case 21: _t->on_action_L_triggered(); break;
        case 22: _t->on_action_Y_triggered(); break;
        case 23: _t->on_action_B_triggered(); break;
        case 24: _t->on_pause_btn_clicked(); break;
        case 25: _t->on_play_btn_clicked(); break;
        case 26: _t->on_action_E_triggered(); break;
        case 27: _t->ProcessFrame((*reinterpret_cast< QVideoFrame(*)>(_a[1]))); break;
        case 28: _t->on_test_clicked(); break;
        case 29: _t->on_twoValue_clicked(); break;
        case 30: _t->on_video_Avg_clicked(); break;
        case 31: _t->on_video_gamma_clicked(); break;
        case 32: _t->on_video_RGB_clicked(); break;
        case 33: _t->startAssistant(); break;
        case 34: _t->on_return_btn_clicked(); break;
        case 35: _t->on_cut_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QLabel* >(); break;
            }
            break;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 36)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 36;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 36)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 36;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
