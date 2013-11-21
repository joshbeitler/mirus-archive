<img src="http://i.imgur.com/IXyhj7t.png" />

Mirus is a new operating system designed on principles created by Plan 9 from Bell Labs.  Mirus is not a fork or clone of Plan 9, but rather an entirely different operating system that extends the functionality of Plan 9.

Mirus is designed primarily for higher-performance machines, such as workstations and gaming rigs, and to be used by those of higher technical knowledge. We also are trying to implement cluster-based computing and advanced load bearing capabilities.

A key motivation in the creation of Mirus was to bring many of the powerful concepts created in Plan 9 to a more general audience, and to build upon what was started there.

Mirus was designed to be elegant and powerful, allowing for tasks that may seem menial on other systems to become easy and fluid.

### Core Features
* Fairly POSIX complient
* Dynamic, node based filesystem
* Forward thinking design
* Resilient driver framework
* Fast and lean microkernel

### Testing
We do not have bleeding-edge ISO images available currently.  In order to test drive Mirus, you will need to build it from the source - which is a relatively painless task.  You will want to clone and build the git tree from the `master` branch.  Full build instructions are found in the `BUILDING.md` file.

You can run the following commands to configure and build the system:

```
git clone https://github.com/joshbeitler/mirus.git --recursive
cd mirus
rake
```

A build of Mirus with no additional configuration or specified tasks will generate a bootable `mirus.iso` in the `build` directory.  You can burn this to any bootable medium you see fit, or run it in a virtual machine via `rake qemu`. 

### Dependencies
To build Mirus, you will need to meet the following dependencies.  It is expected that binutils and other standard UNIX utilities are installed, but a few odities are required:

* `clang` >= 3.3
* `grub2`
* `yasm`
* `xorriso` >= 1.2.9
* `rake`
* `colorize`

### Contributing
If you'd like to contribute, we would love you to go ahead.  Grab yourself a copy of the source, and get up close and personal with it.  It doesn't bite - trust us!  Make your changes on a separate fork and send a pull request our way.  See the `CONTRIBUTING.md` file for more details.
Make sure to join the [mailing list](https://groups.google.com/forum/#!forum/mirus-dev) to participate in discussions, get help, or ask questions.

### Issue Tracker
If you run into issues (which we almost guarantee you will), please post them on the [issue tracker](https://github.com/joshbeitler/mirus/issues).  Please tag and describe your issue in detail, and if any error codes are provided please include them.

### Getting Help
We are active on Twitter at [@mirusproject](http://twitter.com/mirusproject), as well as the IRC channel `#mirus` on `irc.freenode.net`.  The [wiki](https://github.com/joshbeitler/mirus/wiki) is an excellent place to look if you need a quick reference of Mirus.

### License
```
Copyright 2013 Mirus Project

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
```
