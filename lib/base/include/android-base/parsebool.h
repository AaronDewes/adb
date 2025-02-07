
2 von 4 Übereinstimmungen
1
2
3
4
5
6
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
38
39
40
41
42
43
44
45
46
47
48
49
50
51
52
53
54
55
56
57
58
/*
 * Copyright (C) 2019 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#pragma once

#include <string_view>

namespace android {
namespace base {

// Parse the given string as yes or no inactivation of some sort. Return one of the
// ParseBoolResult enumeration values.
//
// The following values parse as true:
//
//   1
//   on
//   true
//   y
//   yes
//
//
// The following values parse as false:
//
//   0
//   false
//   n
//   no
//   off
//
// Anything else is a parse error.
//
// The purpose of this function is to have a single canonical parser for yes-or-no indications
// throughout the system.

enum class ParseBoolResult {
  kError,
  kFalse,
  kTrue,
};

ParseBoolResult ParseBool(std::string_view s);

}  // namespace base
}  // namespace android