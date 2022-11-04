-- 1. Write a SQL statement to create a new database name "Company"
CREATE DATABASE Company;

-- 2. Write a SQL statement to create to set the default working database to “Company”
USE Company;

-- 3. Write SQL statements to define tables of “Company” databases with constraints
-- and columns illustrated by figures below. You should determine appropriate
-- datatype for each column.

CREATE TABLE EMPLOYEE ( 
    Fname VARCHAR(20),
    Minit CHAR(1),
    Lname VARCHAR(20),
    Ssn CHAR(9),
    Bdate DATE,
    Address VARCHAR(80),
    Sex CHAR(1),
    Salary DECIMAL(10, 2),
    Super_ssn CHAR(9),
    Dno INT
);

CREATE TABLE DEPT_LOCATIONS (
    Dnumber INT,
    Dlocation VARCHAR(20)
);

CREATE TABLE DEPARTMENT (
    Dname VARCHAR(20),
    Dnumber INT,
    Mgr_ssn CHAR(9),
    Mgr_start_date DATE
);

CREATE TABLE PROJECT (
    Pname VARCHAR(20),
    Pnumber INT,
    Plocation VARCHAR(20),
    Dnum INT
);

CREATE TABLE WORKS_ON (
    Essn CHAR(9),
    Pno INT,
    Hours INT
);

CREATE TABLE DEPENDENT (
    Essn CHAR(9),
    Dependent_name VARCHAR(20),
    Sex CHAR(1),
    Bdate DATE,
    Relationship VARCHAR(20)
);

-- 4. Add column Partner_ssn to the table EMPLOYEE. This column indicates the
-- SSN of spouse of each employee. For those who are now single, the value should
-- be NULL.

ALTER TABLE EMPLOYEE
ADD Partner_ssn CHAR(9) DEFAULT NULL;

-- 5. Write SQL statements to insert sample rows to these tables.

INSERT INTO EMPLOYEE
VALUES (
    "Dorthy",
    "L",
    "Morais",
    "012345678",
    "1977-08-25",
    "4399 Hall Valley Drive",
    "F",
    "10000.00",
    "012345678",
    "7",
    "012345727"
);

INSERT INTO DEPARTMENT
VALUES (
    "Sleep",
    "7",
    "012345678",
    "2022-11-04"
);

INSERT INTO DEPT_LOCATIONS
VALUES (
    "7",
    "Floor"
);

INSERT INTO PROJECT
VALUES (
    "Bed",
    "1",
    "Floor",
    "7"
);

INSERT INTO WORKS_ON
VALUES (
    "012345678",
    "1",
    "18"
);

INSERT INTO DEPENDENT
VALUES (
    "012345678",
    "Joel M Bowler",
    "M",
    "1958-07-05",
    "Brother"
);

-- 6. Write SQL statements to delete the tables you created.
DROP TABLE EMPLOYEE;
DROP TABLE DEPARTMENT;
DROP TABLE DEPT_LOCATIONS;
DROP TABLE PROJECT;
DROP TABLE WORKS_ON;
DROP TABLE DEPENDENT;
