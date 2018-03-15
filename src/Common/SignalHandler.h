/*
 * Copyright (c) 2017-2018, The Nirvana Developers.
 * Portions Copyright (c) 2012-2017, The CryptoNote Developers, The Bytecoin Developers.
 *
 * This file is part of Nirvana.
 *
 * This file is subject to the terms and conditions defined in the
 * file 'LICENSE', which is part of this source code package.
 */

#pragma once

#include <functional>

namespace Tools {

  class SignalHandler
  {
  public:
    static bool install(std::function<void(void)> t);
  };
}
