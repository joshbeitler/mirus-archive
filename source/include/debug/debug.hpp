// Copyright 2013 Mirus Project

// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at

// http://www.apache.org/licenses/LICENSE-2.0

// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

//
// debug.hpp - debugger
//

#pragma once

namespace mirus
{
    namespace debug
    {
        enum class debug_level : int
        {
            debug_log = 0,
            debug_error = 1,
            debug_msg = 2
        };

        class debugger
        {
        public:
            static void write(const char *fmt, ...);
            static void flush();
        };
    } // !namespace
} // !namespace