#line 1 "/home/user/wip-LightningPiggy/sources/lightning-piggy/LightningPiggy-Lilygo-266/libraries/ArduinoJson/src/ArduinoJson/Numbers/Float.hpp"
// ArduinoJson - https://arduinojson.org
// Copyright © 2014-2022, Benoit BLANCHON
// MIT License

#pragma once

#include <ArduinoJson/Configuration.hpp>
#include <ArduinoJson/Namespace.hpp>

namespace ARDUINOJSON_NAMESPACE {

#if ARDUINOJSON_USE_DOUBLE
typedef double Float;
#else
typedef float Float;
#endif
}  // namespace ARDUINOJSON_NAMESPACE
