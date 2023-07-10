#line 1 "/home/user/wip-LightningPiggy/sources/lightning-piggy/LightningPiggy-Lilygo-266/libraries/RadioLib/src/modules/SX126x/SX1261.cpp"
#include "SX1261.h"
#if !defined(RADIOLIB_EXCLUDE_SX126X)

SX1261::SX1261(Module* mod): SX1262(mod) {

}

int16_t SX1261::setOutputPower(int8_t power) {
  RADIOLIB_CHECK_RANGE(power, -17, 14, RADIOLIB_ERR_INVALID_OUTPUT_POWER);

  // get current OCP configuration
  uint8_t ocp = 0;
  int16_t state = readRegister(RADIOLIB_SX126X_REG_OCP_CONFIGURATION, &ocp, 1);
  RADIOLIB_ASSERT(state);

  // set PA config
  state = SX126x::setPaConfig(0x04, RADIOLIB_SX126X_PA_CONFIG_SX1261, 0x00);
  RADIOLIB_ASSERT(state);

  // set output power
  /// \todo power ramp time configuration
  state = SX126x::setTxParams(power);
  RADIOLIB_ASSERT(state);

  // restore OCP configuration
  return(writeRegister(RADIOLIB_SX126X_REG_OCP_CONFIGURATION, &ocp, 1));
}

#endif