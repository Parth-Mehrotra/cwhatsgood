
CREATE OR REPLACE FUNCTION log_pgview(

)
RETURNS INTEGER
AS $$
BEGIN
	RAISE NOTICE 'log_pgview';
	RETURN 0;
END;
$$ LANGUAGE PLPGSQL;

