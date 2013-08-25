# Copyright 2013 Joshua Beitler

# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at

# http://www.apache.org/licenses/LICENSE-2.0

# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

# dependencies
require 'colorize'
require './build/lib/deps'

# check for required programs
if meets_deps? == false
    puts "Does not meet dependencies, cannot continue.".red
    exit
end

# require all our tasks
require './build/lib/env'
require './build/lib/tasks/all'
require './build/lib/tasks/iso'
require './build/lib/tasks/asm'
require './build/lib/tasks/clean'
require './build/lib/tasks/kernel'
require './build/lib/tasks/qemu'
require './build/lib/tasks/configure'
require './build/lib/tasks/link'

# default task is to generate an iso image
task :default => ['make_iso']