#ifndef AUTH_H
#define AUTH_H

#include "Database.h"

struct Auth {
	bool Registration(Database& db, string name, string pass);
	bool Authorization(const Database& db, string name, string pass) const;
};

#endif
