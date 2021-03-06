#ifndef ALIASES_H
#define ALIASES_H

#include <QString>
#include <QDateTime>
#include <QVariant>

class MObject;
class Property;
class EnumProperty;

template<typename TypeAttribute> class AttributeProperty;
template<typename TypeAttribute> class AttributeListProperty;
using BoolProperty      = AttributeProperty<bool>;
using IntProperty       = AttributeProperty<int>;
using FloatProperty     = AttributeProperty<float>;
using DoubleProperty    = AttributeProperty<double>;
using StringProperty    = AttributeProperty<QString>;
using DateTimeProperty  = AttributeProperty<QDateTime>;

using IntListProperty    = AttributeListProperty<int>;
using FloatListProperty  = AttributeListProperty<float>;
using DoubleListProperty = AttributeListProperty<double>;
using StringListProperty = AttributeListProperty<QString>;

class uIntProperty;
class uDoubleProperty;
class PerCentProperty;

class LinkProperty;

class LinkToOneProperty;
using Link01Property = LinkToOneProperty;
using Link11Property = LinkToOneProperty;

template <template <typename...> class Container, typename... Args> class GenericLinkToManyProperty;
class MapLinkProperty;

using LinkToManyProperty            = GenericLinkToManyProperty<QSet>;
using Link0NProperty                = LinkToManyProperty;
using Link1NProperty                = LinkToManyProperty;
using SetProperty                   = LinkToManyProperty;
using OrderedLinkToManyProperty     = GenericLinkToManyProperty<QList>;
using OrderedLink0NProperty         = GenericLinkToManyProperty<QList>;
using OrderedLink1NProperty         = GenericLinkToManyProperty<QList>;
using ListProperty                  = GenericLinkToManyProperty<QList>;
using MultiMapLinkPropertyInterface = GenericLinkToManyProperty<QMultiMap, QVariant>;
using Map1NLinkProperty             = MapLinkProperty;
using MultiMapLinkProperty          = MapLinkProperty;

using ElemId          = QString;
using MObjectSet      = QSet<MObject*>;
using MObjectList     = QList<MObject*>;
using MObjectMap      = QMultiMap<QVariant, MObject*>;
using MObjectMultiMap = QMultiMap<QVariant, MObject*>;


#endif // ALIASES_H
