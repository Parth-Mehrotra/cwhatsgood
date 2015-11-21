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

#include <string.h>

#include <pgview.h>

int pgview_init(pgview_t *pgv) {
	memset(pgv, 0, sizeof(pgview_t));
	return 1;
}

int pgview_put(pgview_t *pgv, const char *key, const char *val) {
	if (!key || !val) {
		return 0;
	}

	if (strcmp(key, "product") == 0) {
		strncpy(pgv->product, val, PRODUCT_LEN - 1);
	} else if (strcmp(key, "language") == 0) {
		strncpy(pgv->language, val, LANGUAGE_LEN - 1);
	} else if (strcmp(key, "appName") == 0) {
		strncpy(pgv->app_name, val, APPNAME_LEN - 1);
	} else if (strcmp(key, "appCodeName") == 0) {
		strncpy(pgv->app_code_name, val, APPCODEN_LEN - 1);
	} else if (strcmp(key, "platform") == 0) {
		strncpy(pgv->platform, val, PLATFORM_LEN - 1);
	} else if (strcmp(key, "appVersion") == 0) {
		strncpy(pgv->app_version, val, APPVERS_LEN - 1);
	} else if (strcmp(key, "page") == 0) {
		strncpy(pgv->page, val, PAGE_LEN - 1);
	} else if (strcmp(key, "userAgent") == 0) {
		strncpy(pgv->user_agent, val, USERAGENT_LEN - 1);
	} else {
		return 0;
	}
	return 1;
}

