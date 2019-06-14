/* -*- Mode: C; tab-width: 4; indent-tabs-mode: nil; c-basic-offset: 4 -*- */

/*  Fluent Bit
 *  ==========
 *  Copyright (C) 2019      The Fluent Bit Authors
 *  Copyright (C) 2015-2018 Treasure Data Inc.
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
 */

#ifndef FLB_OUT_NATS_H
#define FLB_OUT_NATS_H

#include <fluent-bit/flb_version.h>

#define NATS_CONNECT_BUF_LEN 512

#define NATS_CONNECT "CONNECT {\"verbose\":false,\"pedantic\":false,\"ssl_required\":false,\"name\":\"fluent-bit\",\"lang\":\"c\",\"version\":\"" FLB_VERSION_STR "\",\"user\":\"%s\",\"pass\":\"%s\"}\r\n"

struct flb_out_nats_config {
    struct flb_output_instance *ins;
    struct flb_upstream *u;
    char connect_string[NATS_CONNECT_BUF_LEN];
    int connect_string_len;
    char *subject;
    int subject_len;
};

#endif
