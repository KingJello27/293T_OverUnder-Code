/*
This Source Code Form is subject to the terms of the Mozilla Public
License, v. 2.0. If a copy of the MPL was not distributed with this
file, You can obtain one at http://mozilla.org/MPL/2.0/.
*/

#include "main.h"

Autonez::Autonez() {
  Name = "";
  auton_call = nullptr;
}
Autonez::Autonez(std::string name, std::function<void()> callback) {
  Name = name;
  auton_call = callback;
}