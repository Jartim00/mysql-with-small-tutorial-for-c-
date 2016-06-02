# mysql-with-small-tutorial-for-c-

#Getting started with MySQL on linux:
1: run "sudo apt-get install mysql-client"              this will install the mysql-client <br>
2: run "sudo apt-get install mysql-server"              this will install the mysql-server <br>
3: run "sudo apt-get install libmysqlclient-dev"        this will install the mysql-dev kit <br>

#Getting into mysql inside your terminal:
1: type "mysql -u root -p" <br>
2: a prompt will ask for the password you made during the installation of mysql, enter it. <br>
3: you should now be inside mysql, congrats ;) <br>

#Setting up your own database:
1: run the command "CREATE DATABASE my_db_name;"        Don't forget to close with a ";". <br>
2: run the command "use my_db_name;"                    Don't forget to close with a ";". <br>
to check all available databases use "show databases;"  Don't forget to close with a ";". <br>

#Showing your tables:
run the command "show tables;" to show all tables inside your created database. <br>

#There should not be any tables yet, so to add tables to your database:
to create a table run the command "create table TABLE_NAME (field_name data_type(length);" <br>
for instance: "create table data (dataname char(255);" creates a table named "data" with a field called "dataname" which can contain a maximum of 255 chars. <br>

#now comes the fun bit: queries and stuff.
to show everything a table holds use a query like: "SELECT * FROM TABLE_NAME;", this is just an example, more about mysql can be found online, which is just one google search away. <br>

#to insert something inside a table is pretty easy as well:
"INSERT INTO TABLE_NAME VALUES("stuff");". <br>
In this case stuff is a char of 5 characters long, it all depends on the datatype inside your database. <br>

This was just a simple how to to get used to mysql a bit. From here on comes the real deal: inserting things inside your database using a connecter like c++. <br>
________________________________________________________________________________________________________________________________
#The real deal
