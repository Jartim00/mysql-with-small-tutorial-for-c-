#include <mysql.h>
#include <cstdio>
#include <iostream>

using namespace std;
int main()
{
	char link[150];
	MYSQL *conn;
	MYSQL_RES *res;
	MYSQL_ROW row;
	char *server = "localhost";
	char *user = "root";
	char *password = "Timjar00";
	char *database = "LINKDB";
	conn = mysql_init(NULL);
	mysql_real_connect(conn, server, user, password, database, 0, NULL, 0);
	string findLink, query;
	cout << "Enter a word to search for(leave blank for full database overview): ";
	getline(cin, findLink);
	query = "SELECT * FROM links WHERE link LIKE '%"+ findLink +"%'";
	//cout << query;
	mysql_query(conn, query.c_str());//queryText.c_str()
	res = mysql_use_result(conn);
	printf("Your search returned these results: \n");
	while ((row = mysql_fetch_row(res)) != NULL)
	{		
		printf("%s \t\n", row[0]);
	}
	mysql_free_result(res);
	mysql_close(conn);
	
	return 0;
}
