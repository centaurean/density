/*
 * Centaurean Density
 *
 * Copyright (c) 2013, Guillaume Voirin
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 *     1. Redistributions of source code must retain the above copyright notice, this
 *        list of conditions and the following disclaimer.
 *
 *     2. Redistributions in binary form must reproduce the above copyright notice,
 *        this list of conditions and the following disclaimer in the documentation
 *        and/or other materials provided with the distribution.
 *
 *     3. Neither the name of the copyright holder nor the names of its
 *        contributors may be used to endorse or promote products derived from
 *        this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 * 24/06/15 0:31
 *
 * -----------------
 * Cheetah algorithm
 * -----------------
 *
 * Author(s)
 * Guillaume Voirin (https://github.com/gpnuma)
 * Piotr Tarsa (https://github.com/tarsa)
 *
 * Description
 * Very fast two level dictionary hash algorithm derived from Chameleon, with predictions lookup
 */

#ifndef DENSITY_CHEETAH_DECODE_BULK_H
#define DENSITY_CHEETAH_DECODE_BULK_H

#include "kernel_cheetah_dictionary.h"

void density_cheetah_decode_bulk_process_predicted(uint8_t **, uint_fast16_t*, density_cheetah_dictionary *const);

void density_cheetah_decode_bulk_process_compressed_a(uint8_t **, uint_fast16_t*, density_cheetah_dictionary *const, const uint16_t);

void density_cheetah_decode_bulk_process_compressed_b(uint8_t **, uint_fast16_t*, density_cheetah_dictionary *const, const uint16_t);

void density_cheetah_decode_bulk_process_uncompressed(uint8_t **, uint_fast16_t*, density_cheetah_dictionary *const, const uint32_t);

void density_cheetah_decode_bulk_kernel_16(const uint8_t **, uint8_t **, uint_fast16_t*, const uint8_t, density_cheetah_dictionary *const);

void density_cheetah_decode_bulk_16(const uint8_t **, uint8_t **, uint_fast16_t*, const uint_fast64_t, const uint_fast8_t, density_cheetah_dictionary *const);

void density_cheetah_decode_bulk_128(const uint8_t **, uint8_t **, uint_fast16_t*, const uint_fast64_t, density_cheetah_dictionary *const);

void density_cheetah_decode_bulk_read_signature(const uint8_t **, density_cheetah_signature *);

const bool density_cheetah_decode_bulk_unrestricted(const uint8_t **, const uint_fast64_t, uint8_t **);

#endif
