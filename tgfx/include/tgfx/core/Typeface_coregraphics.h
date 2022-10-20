/////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Tencent is pleased to support the open source community by making libpag available.
//
//  Copyright (C) 2021 THL A29 Limited, a Tencent company. All rights reserved.
//
//  Licensed under the Apache License, Version 2.0 (the "License"); you may not use this file
//  except in compliance with the License. You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
//  unless required by applicable law or agreed to in writing, software distributed under the
//  license is distributed on an "as is" basis, without warranties or conditions of any kind,
//  either express or implied. see the license for the specific language governing permissions
//  and limitations under the license.
//
/////////////////////////////////////////////////////////////////////////////////////////////////

#pragma once

#include <CoreText/CoreText.h>
#include "tgfx/core/Typeface.h"

namespace tgfx {
/**
 * Creates a typeface for the specified CTFontRef.
 */
extern std::shared_ptr<Typeface> MakeTypefaceFromCTFont(const void* ctFont);

/**
 * Returns the platform-specific CTFontRef handle for a given Typeface. Note that the returned
 * CTFontRef gets released when the source Typeface is destroyed.
 */
extern const void* TypefaceGetCTFontRef(const Typeface* face);
}  // namespace tgfx
