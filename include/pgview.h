/*
 * Copyright (c) 2015, CWhatsGood
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice, this
 *    list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 *
 * 3. Neither the name of CWhatsGood nor the names of its
 *    contributors may be used to endorse or promote products derived from
 *    this software without specific prior written permission.
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
 */

#pragma once

#define PRODUCT_LEN 	8
#define LANGUAGE_LEN 	8
#define APPNAME_LEN 	16
#define APPCODEN_LEN 	16
#define PLATFORM_LEN 	32
#define APPVERS_LEN 	128
#define PAGE_LEN 		128
#define USERAGENT_LEN 	255

typedef struct {
	char product 		[PRODUCT_LEN];
	char language 		[LANGUAGE_LEN];
	char app_name 		[APPNAME_LEN];
	char app_code_name 	[APPCODEN_LEN];
	char platform 		[PLATFORM_LEN];
	char app_version 	[APPVERS_LEN];
	char page 			[PAGE_LEN];
	char user_agent 	[USERAGENT_LEN];
} pgview_t;

int pgview_init(pgview_t *pgv);

int pgview_put(pgview_t *pgv, const char *key, const char *value);

