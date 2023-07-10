#line 1 "/home/user/wip-LightningPiggy/sources/lightning-piggy/LightningPiggy-Lilygo-266/libraries/ArduinoJson/extras/tests/MixedConfiguration/decode_unicode_0.cpp"
#define ARDUINOJSON_DECODE_UNICODE 0
#include <ArduinoJson.h>

#include <catch.hpp>

TEST_CASE("ARDUINOJSON_DECODE_UNICODE == 0") {
  DynamicJsonDocument doc(2048);
  DeserializationError err = deserializeJson(doc, "\"\\uD834\\uDD1E\"");

  REQUIRE(err == DeserializationError::Ok);
  REQUIRE(doc.as<std::string>() == "\\uD834\\uDD1E");
}