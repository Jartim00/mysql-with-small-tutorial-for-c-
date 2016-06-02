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
	char *password = "Your MySQL password";
	char *database = "Your DATABASE";
	conn = mysql_init(NULL);
	mysql_real_connect(conn, server, user, password, database, 0, NULL, 0);
	string newLink, query;
	cout << "Enter a link to add to the database: ";
	getline(cin, newLink);
	query = "INSERT INTO links VALUES('" + newLink + "')";
	cout << query;
	mysql_query(conn, query.c_str());//queryText.c_str()
	res = mysql_use_result(conn);
	//printf("link\t\n");
	while ((row = mysql_fetch_row(res)) != NULL)
	{
				
		printf("%s \t\n", row[0]);
	}
	cout << "Success!";
	mysql_free_result(res);
	mysql_close(conn);
	
	return 0;
}
