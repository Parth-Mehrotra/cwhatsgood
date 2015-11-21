
CREATE OR REPLACE FUNCTION log_pgview(
	_product 			VARCHAR(8),
	_language 			VARCHAR(8),
	_app_name 			VARCHAR(16),
	_app_code_name 		VARCHAR(16),
	_platform 			VARCHAR(32),
	_app_version 		VARCHAR(128),
	_page 				VARCHAR(128),
	_user_agent 		VARCHAR(255)
)
RETURNS INTEGER AS
$$
BEGIN
	SELECT INTO _product TRIM((SELECT COALESCE(_product, 'NuLL')));
	SELECT INTO _language TRIM((SELECT COALESCE(_language, 'NuLL')));
	SELECT INTO _app_name TRIM((SELECT COALESCE(_app_name, 'NuLL')));
	SELECT INTO _app_code_name TRIM((SELECT COALESCE(_app_code_name, 'NuLL')));
	SELECT INTO _platform TRIM((SELECT COALESCE(_platform, 'NuLL')));
	SELECT INTO _app_version TRIM((SELECT COALESCE(_app_version, 'NuLL')));
	SELECT INTO _page TRIM((SELECT COALESCE(_page, 'NuLL')));
	SELECT INTO _user_agent TRIM((SELECT COALESCE(_user_agent, 'NuLL')));

	INSERT INTO
		page_views(product,  language,  app_name,  app_code_name,  platform,  app_version,  page,  user_agent)
		VALUES   (_product, _language, _app_name, _app_code_name, _platform, _app_version, _page, _user_agent)
	;

	RETURN 0;
END;
$$
LANGUAGE PLPGSQL;

