/*
 * Copyright 2010, The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "slang_utils.h"

#include <string>

#include "llvm/Support/Path.h"

namespace slang {

bool SlangUtils::CreateDirectoryWithParents(llvm::StringRef Dir,
                                            std::string* Error) {
  return !llvm::sys::Path(Dir).createDirectoryOnDisk(/* create_parents = */true,
                                                     Error);
}

}  // namespace slang
