#line 1 "/home/user/wip-LightningPiggy/sources/lightning-piggy/LightningPiggy-Lilygo-266/libraries/ArduinoJson/src/ArduinoJson/Namespace.hpp"
// ArduinoJson - https://arduinojson.org
// Copyright © 2014-2022, Benoit BLANCHON
// MIT License

#pragma once

#include <ArduinoJson/Configuration.hpp>
#include <ArduinoJson/Polyfills/preprocessor.hpp>
#include <ArduinoJson/version.hpp>

#ifndef ARDUINOJSON_NAMESPACE

#  define ARDUINOJSON_NAMESPACE                                               \
    ARDUINOJSON_CONCAT4(                                                      \
        ARDUINOJSON_CONCAT4(ArduinoJson, ARDUINOJSON_VERSION_MAJOR,           \
                            ARDUINOJSON_VERSION_MINOR,                        \
                            ARDUINOJSON_VERSION_REVISION),                    \
        _,                                                                    \
        ARDUINOJSON_HEX_DIGIT(                                                \
            ARDUINOJSON_ENABLE_PROGMEM, ARDUINOJSON_USE_LONG_LONG,            \
            ARDUINOJSON_USE_DOUBLE, ARDUINOJSON_ENABLE_STRING_DEDUPLICATION), \
        ARDUINOJSON_HEX_DIGIT(                                                \
            ARDUINOJSON_ENABLE_NAN, ARDUINOJSON_ENABLE_INFINITY,              \
            ARDUINOJSON_ENABLE_COMMENTS, ARDUINOJSON_DECODE_UNICODE))

#endif
