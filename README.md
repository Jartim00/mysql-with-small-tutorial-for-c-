# mysql-with-small-tutorial-for-c-

#Getting started with MySQL on linux:
1: run "sudo apt-get install mysql-client"              this will install the mysql-client
2: run "sudo apt-get install mysql-server"              this will install the mysql-server
3: run "sudo apt-get install libmysqlclient-dev"        this will install the mysql-dev kit

#Getting into mysql inside your terminal:
1: type "mysql -u root -p"
2: a prompt will ask for the password you made during the installation of mysql, enter it.
3: you should now be inside mysql, congrats ;)

#Setting up your own database:
1: run the command "CREATE DATABASE my_db_name;"        Don't forget to close with a ";".
2: run the command "use my_db_name;"                    Don't forget to close with a ";".
to check all available databases use "show databases;"  Don't forget to close with a ";".

#Showing your tables:
run the command "show tables;" to show all tables inside your created database.
There should not be any tables yet, so to add tables to your database:
to create a table run the command "create table TABLE_NAME (field_name data_type(length);"
for instance: "create table data (dataname char(255);" creates a table named "data" with a field called "dataname" which can contain a maximum of 255 chars.

#now comes the fun bit: queries and stuff.
to show everything a table holds use a query like: "SELECT * FROM TABLE_NAME;", this is just an example, more about mysql can be found online, which is just one google away.
to insert something inside a table is pretty easy as well:
"INSERT INTO TABLE_NAME VALUES("stuff");". in this case stuff is a char of 5 characters long, it all depends on the datatype inside your database.

This was just a simple how to to get used to mysql a bit. From here on comes the real deal: inserting 
________________________________________________________________________________________________________________________________

