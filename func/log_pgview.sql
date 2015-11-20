
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
	RAISE NOTICE 'log_pgview';
	RETURN 0;
END;
$$ LANGUAGE PLPGSQL;

