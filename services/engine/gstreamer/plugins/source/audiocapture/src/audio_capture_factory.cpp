/*
 * Copyright (C) 2021 Huawei Device Co., Ltd.
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

#include "audio_capture_factory.h"
#include <cstdlib>
#include "audio_capture_as_impl.h"

namespace OHOS {
namespace Media {
std::unique_ptr<AudioCapture> AudioCaptureFactory::CreateAudioCapture(AudioStreamType streamType)
{
    return std::make_unique<AudioCaptureAsImpl>();
}
}  // namespace Media
}  // namespace OHOS
