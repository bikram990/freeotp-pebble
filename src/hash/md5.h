/*
 * FreeOTP
 *
 * Authors: Nathaniel McCallum <npmccallum@redhat.com>
 *
 * Copyright (C) 2014  Nathaniel McCallum, Red Hat
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
#include "hash.h"

#define MD5_SIZE_BLOCK 64
#define MD5_SIZE_HASH  16

struct hash_ctx {
  uint64_t len;
  uint32_t h[4];
  uint8_t buf[MD5_SIZE_BLOCK];
};

void
md5_init(hash_ctx *ctx);

void
md5_update(hash_ctx *ctx, const void *buf, size_t len);

void
md5_finish(hash_ctx *ctx, uint8_t *hash);
