
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
RETURNS INTEGER
AS $$
BEGIN
	SELECT TRIM((SELECT COALESCE(_product, 'NuLL'))) INTO _product;
	SELECT TRIM((SELECT COALESCE(_language, 'NuLL'))) INTO _language;
	SELECT TRIM((SELECT COALESCE(_app_name, 'NuLL'))) INTO _app_name;
	SELECT TRIM((SELECT COALESCE(_app_code_name, 'NuLL'))) INTO _app_code_name;
	SELECT TRIM((SELECT COALESCE(_platform, 'NuLL'))) INTO _platform;
	SELECT TRIM((SELECT COALESCE(_app_version, 'NuLL'))) INTO _app_version;
	SELECT TRIM((SELECT COALESCE(_page, 'NuLL'))) INTO _page;
	SELECT TRIM((SELECT COALESCE(_user_agent, 'NuLL'))) INTO _user_agent;

	RETURN 0;
END;
$$ LANGUAGE PLPGSQL;

