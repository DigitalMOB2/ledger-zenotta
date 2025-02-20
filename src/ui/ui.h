
/*******************************************************************************
*   Burstcoin Wallet App for Nano Ledger S. Updated By Waves community.
*   Copyright (c) 2017-2018 Jake B.
* 
*   Based on Sample code provided and (c) 2016 Ledger
*
*  Licensed under the Apache License, Version 2.0 (the "License");
*  you may not use this file except in compliance with the License.
*  You may obtain a copy of the License at
*
*      http://www.apache.org/licenses/LICENSE-2.0
*
*  Unless required by applicable law or agreed to in writing, software
*  distributed under the License is distributed on an "AS IS" BASIS,
*  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
*  See the License for the specific language governing permissions and
*  limitations under the License.
********************************************************************************/

#ifndef __UI_H__
#define __UI_H__

#include "os.h"
#include "cx.h"
#include "ux.h"
#include <stdbool.h>
#include "../main.h"
#include "../crypto/ledger_crypto.h"
#include "os_io_seproxyhal.h"

enum UI_STATE { UI_IDLE, UI_VERIFY };
extern enum UI_STATE ui_state;

#endif