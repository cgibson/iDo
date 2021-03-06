#pragma once

#include "showtime/effect.h"
#include "showtime/types.h"

namespace showtime {

class TestEffect final : public Effect {
public:
  ColorChannels process(double t_seconds, void* data) override;
};

} // namespace showtime
