
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

