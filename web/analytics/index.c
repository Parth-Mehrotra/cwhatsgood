
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include <libpq-fe.h>

#include <cwhatsgood.h>
#include <pgview.h>

int main() {
	char *lenstr = getenv("CONTENT_LENGTH");
	if (lenstr <= 0) {
		return EXIT_FAILURE;
	}
	long len = strtol(lenstr, NULL, 10) + 1;
	char postdata[len];
	memset(postdata, 0, len);
	fread(postdata, len, 1, stdin);

	pgview_t pgv;
	pgview_init(&pgv);

	char *saveptr = postdata;
	char keybuff[len];
	char valbuff[len];

	while (read_next_pair(&saveptr, len, keybuff, valbuff)) {
		pgview_put(&pgv, keybuff, valbuff);
	}

	PGconn *conn = pgsql_connect();
	if (!conn || PQstatus(conn) == CONNECTION_BAD) {
		fprintf(stderr, "Connection to database failed: %s\n", PQerrorMessage(conn));
		return EXIT_FAILURE;
	}
	log_pgview(conn, &pgv);
	PQfinish(conn);

	return EXIT_SUCCESS;
}

