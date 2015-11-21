
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

