
/*
MIT License

Copyright (c) [2017] [SongWish Inc.]

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.

BEGIN_JUCE_MODULE_DECLARATION
  ID:               fplus
  vendor:           SongWish Inc.
  version:          0.0.1
  name:             functional plus library as a JUCE module
  description:      functional library for C++ Juce module
  website:          http://www.songwish.ca
  license:          GPL/Commercial
  dependencies:     juce_core, juce_data_structures
 END_JUCE_MODULE_DECLARATION
*/

#pragma once
#include "fplus/include/fplus/compare.hpp"
#include "fplus/include/fplus/composition.hpp"
#include "fplus/include/fplus/container_common.hpp"
#include "fplus/include/fplus/container_properties.hpp"
#include "fplus/include/fplus/container_traits.hpp"
#include "fplus/include/fplus/curry.hpp"
#include "fplus/include/fplus/extrapolate.hpp"
#include "fplus/include/fplus/filter.hpp"
#include "fplus/include/fplus/fplus.hpp"
#include "fplus/include/fplus/function_traits.hpp"
#include "fplus/include/fplus/fwd.hpp"
#include "fplus/include/fplus/generate.hpp"
#include "fplus/include/fplus/interpolate.hpp"
#include "fplus/include/fplus/maps.hpp"
#include "fplus/include/fplus/maybe.hpp"
#include "fplus/include/fplus/numeric.hpp"
#include "fplus/include/fplus/optimize.hpp"
#include "fplus/include/fplus/pairs.hpp"
#include "fplus/include/fplus/queue.hpp"
#include "fplus/include/fplus/raii.hpp"
#include "fplus/include/fplus/read.hpp"
#include "fplus/include/fplus/replace.hpp"
#include "fplus/include/fplus/result.hpp"
#include "fplus/include/fplus/search.hpp"
#include "fplus/include/fplus/sets.hpp"
#include "fplus/include/fplus/shared_ref.hpp"
#include "fplus/include/fplus/show.hpp"
#include "fplus/include/fplus/side_effects.hpp"
#include "fplus/include/fplus/split.hpp"
#include "fplus/include/fplus/string_tools.hpp"
#include "fplus/include/fplus/transform.hpp"
#include "fplus/include/fplus/variant.hpp"