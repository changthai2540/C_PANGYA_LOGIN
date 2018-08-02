#include "db.h"

db* sdb = nullptr;

db::db() : pool_("ODBC", "DRIVER={SQL Server};Server=YOUR_ADDR;Database=PANGYA;User ID=sa;Password=YOUR_PWD", 1, 32) {
	Poco::Data::ODBC::Connector::registerConnector();
}

db::~db() {
	pool_.shutdown();
}

Poco::Data::Session db::get_session() {
	Poco::Data::Session sess = pool_.get();
	sess.setFeature("forceEmptyString", true);
	return sess;
}