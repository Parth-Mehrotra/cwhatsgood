
CREATE TABLE page_views(
	view_id 				BIGSERIAL			PRIMARY KEY,
	time_logged 			TIMESTAMP			NOT NULL DEFAULT CURRENT_TIMESTAMP,
	product 				VARCHAR(8)			NOT NULL DEFAULT '',
	language 				VARCHAR(8)			NOT NULL DEFAULT '',
	app_name 				VARCHAR(16)			NOT NULL DEFAULT '',
	app_code_name 			VARCHAR(16)			NOT NULL DEFAULT '',
	platform 				VARCHAR(16) 		NOT NULL DEFAULT '',
	app_version 			VARCHAR(128)		NOT NULL DEFAULT '',
	page 					VARCHAR(128)		NOT NULL DEFAULT '',
	user_agent 				VARCHAR(255)		NOT NULL DEFAULT ''
);

