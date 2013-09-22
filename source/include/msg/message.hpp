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
// message.hpp - implimentation of the message_t class
//

#pragma once

namespace mirus
{
    namespace system
    {
        enum class message_request_type : uint16_t
        {
            pingback        = 0x0,
            handshake       = 0x1,
            write_io_port   = 0x2
        };

        class message_t
        {
        public:
            uint16_t pid_sender;
            uint16_t pid_dest;
            int priority;
            int type;
            char* message;
        };
    } // !namespace
} // !namespace