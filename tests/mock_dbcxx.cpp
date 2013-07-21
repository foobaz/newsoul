/*
 This is a part of newsoul @ http://github.com/KenjiTakahashi/newsoul
 Karol "Kenji Takahashi" Woźniak © 2013

 This program is free software: you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation, either version 3 of the License, or
 (at your option) any later version.

 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.

 You should have received a copy of the GNU General Public License
 along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "mock_dbcxx.h"

Dbt::Dbt() { }
Dbt::Dbt(void *data, unsigned int size) { }
Dbt::~Dbt() { }

int Dbc::get(Dbt *key, Dbt *dat, unsigned int flags) { return 0; }
int Dbc::del(unsigned int flags) { return 0; }
int Dbc::close() { return 0; }

Db::Db(DbEnv *env, unsigned int flags) { }
Db::~Db() { }
int Db::set_flags(unsigned int flags) { return 0; }
int Db::open(DbTxn *txn, const char *name, const char *dbn, DBTYPE type, unsigned int flags, int mode) { return 0; }
int Db::close(unsigned int flags) { return 0; }
int Db::put(DbTxn *txn, Dbt *key, Dbt *dat, unsigned int flags) { return 0; }
int Db::del(DbTxn *txn, Dbt *key, unsigned int flags) { return 0; }
int Db::cursor(DbTxn *txn, Dbc **cursorp, unsigned int flags) { return 0; }
int Db::exists(DbTxn *txn, Dbt *key, unsigned int flags) { return 0; }
int Db::stat(DbTxn *txn, void *sp, unsigned int flags) { return 0; }
