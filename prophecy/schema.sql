sqlite3 database.db

CREATE TABLE students (
    id INTEGER,
    student_name TEXT,
    PRIMARY KEY(id)
);

CREATE TABLE houses (
    id INTEGER,
    house_name TEXT,
    head_name TEXT,
    PRIMARY KEY(id)
);

CREATE TABLE assignments (
    student_id INTEGER,
    house_id INTEGER,
    FOREIGN KEY(student_id) REFERENCES students(id),
    FOREIGN KEY(house_id) REFERENCES houses(id),
    PRIMARY KEY(student_id, house_id)
);

.schema

DELETE FROM students;

SELECT * from students;

+----+------------------------+
| id |      student_name      |
+----+------------------------+
| 1  | Adelaide Murton        |
| 2  | Adrian Pucey           |
| 3  | Anthony Goldstein      |
| 4  | Blaise Zabini          |
| 5  | Cedric Diggory         |
| 6  | Cho Chang              |
| 7  | Colin Creevey          |
| 8  | Dean Thomas            |
| 9  | Draco Lucius Malfoy    |
| 10 | Ernest Macmillan       |
| 11 | Ginevra Molly Weasley  |
| 12 | Gregory Goyle          |
| 13 | Hannah Abbott          |
| 14 | Harry James Potter     |
| 15 | Hermione Jean Granger  |
| 16 | Isobel MacDougal       |
| 17 | Justin Finch-Fletchley |
| 18 | Lavender Brown         |
| 19 | Lisa Turpin            |
| 20 | Luna Lovegood          |
| 21 | Mandy Brocklehurst     |
| 22 | Marcus Flint           |
| 23 | Marietta Edgecombe     |
| 24 | Michael Corner         |
| 25 | Millicent Bulstrode    |
| 26 | Neville Longbottom     |
| 27 | Padma Patil            |
| 28 | Pansy Parkinson        |
| 29 | Parvati Patil          |
| 30 | Penelope Clearwater    |
| 31 | Robert Hilliard        |
| 32 | Roger Davies           |
| 33 | Romilda Vane           |
| 34 | Ronald Bilius Weasley  |
| 35 | Seamus Finnigan        |
| 36 | Susan Bones            |
| 37 | Terence Higgs          |
| 38 | Terry Boot             |
| 39 | Tracey Davis           |
| 40 | Vincent Crabbe         |
+----+------------------------+

SELECT * from houses;

+----+------------+--------------------+
| id | house_name |     head_name      |
+----+------------+--------------------+
| 1  | Slytherin  | Severus Snape      |
| 2  | Ravenclaw  | Filius Flitwick    |
| 3  | Hufflepuff | Pomona Sprout      |
| 4  | Gryffindor | Minerva McGonagall |
+----+------------+--------------------+

SELECT * from assignments;

+------------+----------+
| student_id | house_id |
+------------+----------+
| 1          | 1        |
| 2          | 1        |
| 3          | 2        |
| 4          | 1        |
| 5          | 3        |
| 6          | 2        |
| 7          | 4        |
| 8          | 4        |
| 9          | 1        |
| 10         | 3        |
| 11         | 4        |
| 12         | 1        |
| 13         | 3        |
| 14         | 4        |
| 15         | 4        |
| 16         | 2        |
| 17         | 3        |
| 18         | 4        |
| 19         | 2        |
| 20         | 2        |
| 21         | 2        |
| 22         | 1        |
| 23         | 2        |
| 24         | 2        |
| 25         | 1        |
| 26         | 4        |
| 27         | 2        |
| 28         | 1        |
| 29         | 4        |
| 30         | 2        |
| 31         | 2        |
| 32         | 2        |
| 33         | 4        |
| 34         | 4        |
| 35         | 4        |
| 36         | 3        |
| 37         | 1        |
| 38         | 2        |
| 39         | 1        |
| 40         | 1        |
+------------+----------+